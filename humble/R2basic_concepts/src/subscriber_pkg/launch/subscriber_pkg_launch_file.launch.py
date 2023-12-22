from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='subscriber_pkg',
            executable='simple_subscriber',
            output='screen'),
    ])