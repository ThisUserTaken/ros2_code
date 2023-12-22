import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from t3_action_msg.action import Move


class MyActionClient(Node):

    def __init__(self):
        super().__init__('my_action_client')
        self._action_client = ActionClient(self, Move, 'turtlebot3_as')

    def send_goal(self, seconds):
        goal_msg = Move.Goal()
        goal_msg.secs = seconds

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.status))
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            'Received feedback: {0}'.format(feedback.feedback))


def main(args=None):
    rclpy.init(args=args)

    action_client = MyActionClient()

    action_client.send_goal(5)

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()