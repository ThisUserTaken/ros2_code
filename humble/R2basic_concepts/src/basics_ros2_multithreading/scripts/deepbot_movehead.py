#! /usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


class DeepBotMoveHead(object):
    def __init__(self, node):
        self._in_node = node
        # Create an Action Client for the FollowJointTrajectory action
        self.action_client = ActionClient(self._in_node, FollowJointTrajectory, '/deepmind_bot_head_controller/follow_joint_trajectory')

        # Wait for the action server to be available
        if not self.action_client.wait_for_server(timeout_sec=5.0):
            self._in_node.get_logger().error('Action server not available. Exiting...')
            return

    def move(self,yaw_angle, pitch_angle, time_movement : int = 2):

        # Create a FollowJointTrajectory goal
        self.goal_msg = FollowJointTrajectory.Goal()
        self.goal_msg.trajectory = JointTrajectory()
        self.goal_msg.trajectory.joint_names = ['deepmind_robot1_head_base_joint', 'deepmind_robot1_head_joint']  # Replace with your joint names

        # Create a trajectory point
        self.point = JointTrajectoryPoint()
        self.point.positions = [yaw_angle, pitch_angle]  # Replace with your desired joint positions
        self.point.time_from_start.sec = time_movement  # Time to reach the desired position in seconds

        # Add the trajectory point to the goal
        self.goal_msg.trajectory.points.append(self.point)

        # Send the goal to the action server
        future = self.action_client.send_goal_async(self.goal_msg)

        rclpy.spin_until_future_complete(self._in_node, future)

        if future.result() is not None:
            self._in_node.get_logger().info('Goal successfully completed.')
        else:
            self._in_node.get_logger().error('Goal failed to complete')

    
def main(args=None):
    rclpy.init(args=args)

    # Create a ROS 2 node
    node = rclpy.create_node('trajectory_sender_node')

    move_head_obj = DeepBotMoveHead(node)
    move_head_obj.move(-1.0,0.5, 1)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

