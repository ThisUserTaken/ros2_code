#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class RobotStatus(Node):
    def __init__(self):
        super().__init__('robot_status')
        self.time_robot_on = 0.0
        self.timer_period = 0.1  # Timer period in seconds
        self.robot_status = ["Robot Booting Up...",
                             "Robot Ready...",
                             "Robot ShuttingDown..."]
        self.main_task_period = 1.0  # Main task period in seconds
        self.shutdown_flag = False  # Flag to indicate shutdown
        
        self.create_timer(self.timer_period, self.timer_counter)
        self.create_timer(self.main_task_period, self.main_task)
        
    def robot_message(self, text, robot_name="Robot-1"):
        self.get_logger().info(f"{robot_name}: {text}")

    def timer_counter(self):
        self.time_robot_on += self.timer_period
        self.get_logger().info(f"Updated Time Robot On={self.time_robot_on:.1f}")

    def main_task(self):
        if self.shutdown_flag:
            return  # Skip the main task if shutting down

        import time
        time.sleep(10)

        status = self.robot_status.pop(0)
        self.robot_message(text=status)

        if "ShuttingDown" in status:
            self.get_logger().info('Shutting down node...')
            self.shutdown_flag = True  # Set the shutdown flag
        else:
            self.get_logger().info('Continue....')

def main(args=None):
    rclpy.init(args=args)
    robot_status_node = RobotStatus()

    # Use spin_once inside a loop instead of spin
    while rclpy.ok():
        rclpy.spin_once(robot_status_node)  # Handle callbacks
        if robot_status_node.shutdown_flag:
            robot_status_node.destroy_node()  # Destroy the node
            rclpy.shutdown()  # Shutdown ROS2 client library
            break  # Break out of the loop to end the script

    robot_status_node.get_logger().info('Node has been shut down.')

if __name__ == '__main__':
    main()