#!/usr/bin/python3

import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
import numpy as np
from cv_bridge import CvBridge

camera_image = np.zeros((480, 640, 3), np.uint8)
bridge = CvBridge()

class CameraSubscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/left/image_raw',
            self.camera_callback,
            10)
        self.subscription 

    def camera_callback(self, data):
        global camera_image
        camera_image = bridge.imgmsg_to_cv2(data, "bgr8")
        cv2.imshow("IMAGE", camera_image)
        cv2.waitKey(4)

if __name__ == '__main__':
    rclpy.init(args=None)
    camera_subscriber = CameraSubscriber()
    rclpy.spin(camera_subscriber)
    camera_subscriber.destroy_node()
    rclpy.shutdown()

