from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([
        Node(
            package='nav2_map_server',
            node_executable='map_saver',
            node_name='map_saver_node',
            output='screen')
        ])
