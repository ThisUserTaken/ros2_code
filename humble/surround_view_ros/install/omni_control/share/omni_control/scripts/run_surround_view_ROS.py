#!/usr/bin/python3

import os
import numpy as np
from PIL import Image
from surround_view import FisheyeCameraModel, BirdView
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import threading
from cv_bridge import CvBridge

axes = np.array([0,0,0], float)
F_camera_image = np.zeros((480, 640, 3), np.uint8)
R_camera_image = np.zeros((480, 640, 3), np.uint8)
L_camera_image = np.zeros((480, 640, 3), np.uint8)
B_camera_image = np.zeros((480, 640, 3), np.uint8)
bridge = CvBridge()

class R_CameraSubscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/right/image_raw',
            self.camera_callback,
            10)
        self.subscription 

    def camera_callback(self, data):
        global R_camera_image
        R_camera_image = bridge.imgmsg_to_cv2(data, "bgr8")
        print(f"R shape : {R_camera_image.shape}, {R_camera_image.dtype}")

class L_CameraSubscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/left/image_raw',
            self.camera_callback,
            10)
        self.subscription 

    def camera_callback(self, data):
        global L_camera_image
        L_camera_image = bridge.imgmsg_to_cv2(data, "bgr8")
        print(f"L shape : {L_camera_image.shape}, {L_camera_image.dtype}")

class F_CameraSubscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/front/image_raw',
            self.camera_callback,
            10)
        self.subscription

    def camera_callback(self, data):
        global F_camera_image
        F_camera_image = bridge.imgmsg_to_cv2(data, "bgr8")
        print(f"F shape : {F_camera_image.shape}, {F_camera_image.dtype}")

class B_CameraSubscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/back/image_raw',
            self.camera_callback,
            10)
        self.subscription

    def camera_callback(self, data):
        global B_camera_image
        B_camera_image = bridge.imgmsg_to_cv2(data, "bgr8")
        print(f"B shape : {B_camera_image.shape}, {B_camera_image.dtype}")

class Manager(Node):

    def __init__(self):
        super().__init__('commander')
        self.img_pub = self.create_publisher(Image, '/birdview_result', 10)
        camera_names = ["front", "back", "left", "right"]
        yamls = [os.path.join(os.getcwd(), "surround_view_ros/install/omni_control/lib/omni_control/", "yaml", name + ".yaml") for name in camera_names]
        print(f"yamls : {yamls}")
        self.camera_models = [FisheyeCameraModel(camera_file, camera_name) for camera_file, camera_name in zip (yamls, camera_names)]
        self.birdview = BirdView()
        self.projected = []
        self.image_recieved = np.array([False, False, False, False], bool)
        timer_period = 0.025
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        global F_camera_image, R_camera_image, L_camera_image, B_camera_image
        print(f"img : {self.image_recieved}")
        print(f"projected len : {len(self.projected)}")
        #for front image
        if(self.image_recieved[0] == False and self.image_recieved[1] == False and
             self.image_recieved[2] == False and self.image_recieved[3] == False): # # self.image_recieved[0] == False
            print("recievd front image")
            self.image_recieved[0] = True
            img_f = self.camera_models[0].undistort(F_camera_image)
            img_f = self.camera_models[0].project(img_f)
            img_f = self.camera_models[0].flip(img_f)
            self.projected.append(img_f)

        #for back image
        elif(self.image_recieved[0] == True and self.image_recieved[1] == False and
             self.image_recieved[2] == False and self.image_recieved[3] == False): # self.image_recieved[1] == False
            print("recievd back image")
            self.image_recieved[1] = True
            img_b = self.camera_models[1].undistort(B_camera_image)
            img_b = self.camera_models[1].project(img_b)
            img_b = self.camera_models[1].flip(img_b)
            self.projected.append(img_b)

        #for left image
        elif(self.image_recieved[0] == True and self.image_recieved[1] == True and
             self.image_recieved[2] == False and self.image_recieved[3] == False):  # self.image_recieved[2] == False
            print("recievd left image")
            self.image_recieved[2] = True
            img_l = self.camera_models[2].undistort(L_camera_image)
            img_l = self.camera_models[2].project(img_l)
            img_l = self.camera_models[2].flip(img_l)
            self.projected.append(img_l)

        #for right image
        elif(self.image_recieved[0] == True and self.image_recieved[1] == True and
             self.image_recieved[2] == True and self.image_recieved[3] == False):  # self.image_recieved[3] == False
            print("recievd right image")
            self.image_recieved[3] = True
            img_r = self.camera_models[3].undistort(R_camera_image)
            img_r = self.camera_models[3].project(img_r)
            img_r = self.camera_models[3].flip(img_r)
            self.projected.append(img_r)
        
        elif(self.image_recieved.all() == True):
            print(f"creating birdview!")
            weights = os.path.join(os.getcwd(), "surround_view_ros/install/omni_control/lib/omni_control/", "weights.png")
            masks = os.path.join(os.getcwd(), "surround_view_ros/install/omni_control/lib/omni_control/", "masks.png")
            self.birdview.load_weights_and_masks(weights, masks)
            self.birdview.update_frames(self.projected)
            self.birdview.make_luminance_balance().stitch_all_parts()
            self.birdview.make_white_balance()
            self.birdview.copy_car_image()
            img_msg = bridge.cv2_to_imgmsg(self.birdview.image)  
            self.img_pub.publish(img_msg)
            self.projected.clear()
            self.image_recieved[0] = False
            self.image_recieved[1] = False
            self.image_recieved[2] = False
            self.image_recieved[3] = False
        else:
            print("image_recieved is empty.")

if __name__ == '__main__':
    rclpy.init(args=None)
    
    manager = Manager()
    R_camera_subscriber = R_CameraSubscriber()
    L_camera_subscriber = L_CameraSubscriber()
    F_camera_subscriber = F_CameraSubscriber()
    B_camera_subscriber = B_CameraSubscriber()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(manager)
    executor.add_node(R_camera_subscriber)
    executor.add_node(L_camera_subscriber)
    executor.add_node(F_camera_subscriber)
    executor.add_node(B_camera_subscriber)

    executor_thread = threading.Thread(target=executor.spin, daemon=True)
    executor_thread.start()
    rate = manager.create_rate(2)
    try:
        while rclpy.ok():
            rate.sleep()
    except KeyboardInterrupt:
        pass
    
    rclpy.shutdown()
    executor_thread.join()
