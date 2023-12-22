from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='exercise31_pkg',
            executable='exercise31',
            output='screen'),
    ])