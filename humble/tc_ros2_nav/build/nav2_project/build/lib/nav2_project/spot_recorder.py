import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
import yaml

class Subscriber(Node):

    def __init__(self):
        super().__init__('clicked_point_sub_node')
        self.subscriber_ = self.create_subscription(PoseWithCovarianceStamped, 'initialpose', self.callback, 1)
        self.subscriber_  # prevent unused variable warning

    def callback(self, msg):
        self.get_logger().info('Recieved Data:\n X : %f \n Y : %f \n Z : %f' % (msg.pose.pose.position.x, msg.pose.pose.position.y, msg.pose.pose.position.z))
        self.get_logger().info('Recieved Data:\n X : %f \n Y : %f \n Z : %f %f' % (msg.pose.pose.orientation.x, msg.pose.pose.orientation.y, msg.pose.pose.orientation.z, msg.pose.pose.orientation.w))
      
        
        f = open("spot-list.yaml", "a+")
        f.write("\n    spot_:")
        f.write("\n       x : ")
        f.write(str(msg.pose.pose.position.x))
        f.write("\n       y : ")
        f.write(str(msg.pose.pose.position.y))
        f.write("\n       z : ")
        f.write(str(msg.pose.pose.position.z))
        f.write("\n       ox : ")
        f.write(str(msg.pose.pose.orientation.x))
        f.write("\n       oy : ")
        f.write(str(msg.pose.pose.orientation.y))
        f.write("\n       oz : ")
        f.write(str(msg.pose.pose.orientation.z))
        f.write("\n       ow : ")
        f.write(str(msg.pose.pose.orientation.w))
        f.close()

def main(args=None):

    rclpy.init(args=args)
    subscriber = Subscriber()
    rclpy.spin(subscriber) 
    subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()