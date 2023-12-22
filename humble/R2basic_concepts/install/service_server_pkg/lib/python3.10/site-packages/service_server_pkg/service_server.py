# import the SetBool module from std_servs Service interface
from std_srvs.srv import SetBool
# import the Twist module from geometry_msgs messages interface
from geometry_msgs.msg import Twist
# import the ROS2 Python client libraries
import rclpy
from rclpy.node import Node


class Service(Node):

    def __init__(self):
        # Here you have the class constructor

        # call the class constructor to initialize the node as service_moving
        super().__init__('service_moving_right')
        # create the Service Server object
        # defines the type, name, and callback function
        self.srv = self.create_service(SetBool, 'moving_right', self.SetBool_callback)
       
        # create the Publisher object
        # in this case, the Publisher will publish on /cmd_vel topic with a queue size of 10 messages.
        # use the Twist module
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        # create a Twist message
        self.cmd = Twist()    
        

    def SetBool_callback(self, request, response):
        # The callback function receives the self-class parameter, 
        # received along with two parameters called request and response
        # - receive the data by request
        # - return a result as a response        
            
        # Publish the message to the topic
        # As you see, the name of the request parameter is data, so do it
        if request.data == True:
            
            # define the linear x-axis velocity of /cmd_vel topic parameter to 0.3
            self.cmd.linear.x = 0.3
            # define the angular z-axis velocity of /cmd_vel topic parameter to 0.3
            self.cmd.angular.z =-0.3
            
            self.publisher_.publish(self.cmd)
            # You need a response
            response.success = True
            # You need another response, but this time, SetBool lets you put a String
            response.message = 'MOVING TO THE RIGHT RIGHT RIGHT!'

        if request.data == False:

            self.cmd.linear.x = 0.0
            # define the angular z-axis velocity of /cmd_vel topic parameter to 0.3
            self.cmd.angular.z =0.0
            
            self.publisher_.publish(self.cmd)
            response.success = False

            response.message = 'It is time to stop!'       
                
        # return the response parameters
        return response


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    moving_right_service = Service()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(moving_right_service)
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()