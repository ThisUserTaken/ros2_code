
from std_srvs.srv import Empty
from geometry_msgs.msg import Twist
import rclpy
from rclpy.node import Node


class Service(Node):

    def __init__(self):
        super().__init__('service')
        self.srv = self.create_service(Empty, 'stop', self.Empty_callback)
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        

    def Empty_callback(self, request, response):
        msg = Twist()
        msg.linear.x = 0.0
        # define the angular z-axis velocity of /cmd_vel topic paramater to 0.5
        msg.angular.z = 0.0
        # Publish the message to the topic
        self.publisher_.publish(msg)

        print(" Stop there robot! ")
        

        return response


def main(args=None):
    rclpy.init(args=args)

    service = Service()

    rclpy.spin(service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()