from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='publisher_pkg',
            executable='simple_publisher',
            output='screen'),
    ])