#!/usr/bin/python3

import rclpy
from rclpy.node import Node
import math
from std_msgs.msg import Float64MultiArray
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy
import threading
import numpy as np

axes = np.array([0,0,0], float)

class Commander(Node):

    def __init__(self):
        super().__init__('commander')
        self.wheel_vel = np.array([0,0,0,0], float)
        self.publisher_ = self.create_publisher(Float64MultiArray, '/forward_velocity_controller/commands', 10)

        timer_period = 0.005
        self.L = 0.125 # distance from the robot center to wheel
        self.Rw = 0.03 # Radius ot the wheel

        self.vel_msg = Twist()
        self.threshold = 0.08
        self.linear_vel = 1
        self.omega = 3

        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        global axes

        vel_x = axes[0]*self.linear_vel
        vel_y = axes[1]*self.linear_vel
        vel_w = axes[2]*self.omega

        self.wheel_vel[0] = (vel_x*math.sin(math.pi/4            ) + vel_y*math.cos(math.pi/4            ) + self.L*vel_w)/self.Rw
        self.wheel_vel[1] = (vel_x*math.sin(math.pi/4 + math.pi/2) + vel_y*math.cos(math.pi/4 + math.pi/2) + self.L*vel_w)/self.Rw
        self.wheel_vel[2] = (vel_x*math.sin(math.pi/4 - math.pi)   + vel_y*math.cos(math.pi/4 - math.pi)   + self.L*vel_w)/self.Rw
        self.wheel_vel[3] = (vel_x*math.sin(math.pi/4 - math.pi/2) + vel_y*math.cos(math.pi/4 - math.pi/2) + self.L*vel_w)/self.Rw

        array_forPublish = Float64MultiArray(data=self.wheel_vel)    
        #rclpy.logging._root_logger.info(f"wheel vel : {self.wheel_vel}")
        self.publisher_.publish(array_forPublish)

class Joy_subscriber(Node):

    def __init__(self):
        super().__init__('joy_subscriber')
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, data):
        global axes

        axes[0] = -data.axes[0]
        axes[1] = -data.axes[1]
        axes[2] = -data.axes[3]      

if __name__ == '__main__':
    rclpy.init(args=None)
    
    commander = Commander()
    joy_subscriber = Joy_subscriber()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(commander)
    executor.add_node(joy_subscriber)

    executor_thread = threading.Thread(target=executor.spin, daemon=True)
    executor_thread.start()
    rate = commander.create_rate(2)
    try:
        while rclpy.ok():
            rate.sleep()
    except KeyboardInterrupt:
        pass
    
    rclpy.shutdown()
    executor_thread.join()

