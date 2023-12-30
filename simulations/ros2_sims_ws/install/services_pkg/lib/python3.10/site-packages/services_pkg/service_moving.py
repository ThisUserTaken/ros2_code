
from std_srvs.srv import Empty
from geometry_msgs.msg import Twist
import rclpy
from rclpy.node import Node


class Service(Node):

    def __init__(self):
        super().__init__('moving_service')
        self.srv = self.create_service(Empty, 'moving', self.Empty_callback)
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        

    def Empty_callback(self, request, response):
        msg = Twist()
        msg.linear.x = 0.3
        # define the angular z-axis velocity of /cmd_vel topic paramater to 0.5
        msg.angular.z = 0.3
        # Publish the message to the topic
        self.publisher_.publish(msg)

        print("RUN ROBOT RUN!")
        

        return response


def main(args=None):
    rclpy.init(args=args)

    moving_service = Service()

    rclpy.spin(moving_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()