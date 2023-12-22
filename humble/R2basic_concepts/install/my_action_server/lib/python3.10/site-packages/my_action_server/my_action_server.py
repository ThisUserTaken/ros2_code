import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from t3_action_msg.action import Move

from geometry_msgs.msg import Twist
import time
class MyActionServer(Node):

    def __init__(self):
        super().__init__('my_action_server')
        self._action_server = ActionServer(self, Move, 'turtlebot3_as_2',self.execute_callback) 
        self.cmd = Twist()
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
    
    
    
    def execute_callback(self, goal_handle):
        
        self.get_logger().info('Executing goal...')

        feedback_msg = Move.Feedback()
        feedback_msg.feedback = "Moving to the left left left..."

        for i in range(1, goal_handle.request.secs):
            
            self.get_logger().info('Feedback: {0} '.format(feedback_msg.feedback))

            goal_handle.publish_feedback(feedback_msg)
            self.cmd.linear.x = 0.3
            self.cmd.angular.z =0.3
            
            self.publisher_.publish(self.cmd)
            time.sleep(1)

        goal_handle.succeed()

        self.cmd.linear.x = 0.0
        self.cmd.angular.z = 0.0
            
        self.publisher_.publish(self.cmd)
        result = Move.Result()
        result.status = "Finished action server. Robot moved during 5 seconds"
        self.get_logger().info('Result: {0}'.format(result.status))
        return result

def main(args=None):
    rclpy.init(args=args)

    my_action_server = MyActionServer()

    rclpy.spin(my_action_server)


if __name__ == '__main__':
    main()