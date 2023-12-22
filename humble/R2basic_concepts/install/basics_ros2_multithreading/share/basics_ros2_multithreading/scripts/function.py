#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node

class RobotStatus(Node):
    def __init__(self):
        super().__init__('robot_status')
        self.time_robot_on = 0.0
        self.timer_period = 0.1
        self.sleep_timer_counter = 0.0
        self.robot_status = ["Robot Booting Up...",
                             "Robot Ready...",
                             "Robot ShuttingDown..."]
        self.main_task_period = 1.0
        self.sleep_time_main_task = 0.0
    
        self.create_timer(self.timer_period, self.timer_counter)
        self.create_timer(self.main_task_period, self.main_task)
        
    def robot_message(self, text, robot_name="Robot-1"):
        self.get_logger().info(robot_name+": "+text)

    def timer_counter(self):
        self.time_robot_on += self.timer_period
        self.get_logger().info("Updated Time Robot On="+str(self.time_robot_on))
        time.sleep(self.sleep_timer_counter)
        self.get_logger().info("Updated Time Robot On="+str(self.time_robot_on))

    def main_task(self):

        if len(self.robot_status)>=1:
            status = self.robot_status.pop(0)
            self.robot_message(text=status)
        else:
            status = "ShuttingDown"

        

        if "ShuttingDown" in status:
            self.get_logger().info('Shutting down node...')
            self.destroy_node()
            rclpy.shutdown()
        else:
            self.get_logger().info('Continue....')
            time.sleep(self.sleep_time_main_task)

def main(args=None):
    rclpy.init(args=args)
    robot_status_node = RobotStatus()
    rclpy.spin(robot_status_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()