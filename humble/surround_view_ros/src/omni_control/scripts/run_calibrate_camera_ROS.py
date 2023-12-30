#!/usr/bin/python3

"""
~~~~~~~~~~~~~~~~~~~~~~~~~~
Fisheye Camera calibration
~~~~~~~~~~~~~~~~~~~~~~~~~~
"""
import argparse
import os
import numpy as np
import cv2
import surround_view.utils as utils
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

F_camera_image = np.zeros((480, 640, 3), np.uint8)
bridge = CvBridge()

# we will save the camera param file to this directory
TARGET_DIR = os.path.join(os.getcwd(), "yaml")

# default param file
DEFAULT_PARAM_FILE = os.path.join(TARGET_DIR, "camera_params.yaml")

class CameraSubscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        self.subscription = self.create_subscription(
            Image,
            '/front/image_raw',
            self.camera_callback,
            10)
        
        self.subscription
        
        self.square_size = 2.5      # length of one side of a small square
        self.pattern_size = (7, 7)  # number of crossing points

        self.reference_img = 40 # number of pictures used for a calibration

        self.pattern_points = np.zeros( (np.prod(self.pattern_size), 3), np.float32 )
        self.pattern_points[:,:2] = np.indices(self.pattern_size).T.reshape(-1, 2)
        self.pattern_points *= self.square_size
        self.objpoints = []
        self.imgpoints = []

        N_OK = len(self.objpoints)
        self.K = np.zeros((3, 3))
        self.D = np.zeros((4, 1))
        self.rvecs = [np.zeros((1, 1, 3), dtype=np.float64) for _ in range(self.reference_img)]
        self.tvecs = [np.zeros((1, 1, 3), dtype=np.float64) for _ in range(self.reference_img)]
        self.calibration_flags = (cv2.fisheye.CALIB_RECOMPUTE_EXTRINSIC + cv2.fisheye.CALIB_FIX_SKEW)

        self.calculate_parameters = True
        self.save_results = True

    def camera_callback(self, data):
        img = bridge.imgmsg_to_cv2(data, "bgr8")
        height = img.shape[0]
        width = img.shape[1]

        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        # find checkboard corners
        if(len(self.objpoints) < self.reference_img):
            print("searching for a corners...")
            self.ret, corner = cv2.findChessboardCorners(gray, self.pattern_size)
            # if corners are found
            if self.ret == True:
                print(f"detected coner!")
                print(str(len(self.objpoints)+1) + "/" + str(self.reference_img))
                term = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_COUNT, 30, 0.1)
                cv2.cornerSubPix(gray, corner, (5,5), (-1,-1), term)
                self.imgpoints.append(corner.reshape(-1, 2))
                self.objpoints.append(self.pattern_points)
        elif(self.calculate_parameters):
            self.calculate_parameters = False
            print("calculating camera parameter...")
            imgpoints_np = np.asarray(self.imgpoints)
            objpoints_np = np.asarray(self.objpoints)
            imgpoints_exp = np.expand_dims(imgpoints_np, -2)
            objpoints_exp = np.expand_dims(objpoints_np, -2)
            self.ret, self.mtx, self.dist, self.rvecs, self.tvecs = cv2.fisheye.calibrate(
                                objpoints_exp, 
                                imgpoints_exp, 
                                gray.shape[::-1],                                
                                self.K,
                                self.D,
                                self.rvecs,
                                self.tvecs,
                                self.calibration_flags
                                )   
        elif(self.calculate_parameters == False and self.save_results):
            self.save_results = False
            print("RMS = ", self.ret)
            print("mtx = \n", self.mtx)
            print("dist = ", self.dist.ravel())

            fs = cv2.FileStorage("camera_params.yaml", cv2.FILE_STORAGE_WRITE)
            fs.write("resolution", np.int32([width, height]))
            fs.write("camera_matrix", self.K)
            fs.write("dist_coeffs", self.D)
            fs.release()
            print("successfully saved camera data")
        else:
            pass

        cv2.imshow("corners", img)
        cv2.waitKey(4)

if __name__ == '__main__':
    rclpy.init(args=None)
    parser = argparse.ArgumentParser()

    camera_subscriber = CameraSubscriber()
    rclpy.spin(camera_subscriber)
    camera_subscriber.destroy_node()
    rclpy.shutdown()
