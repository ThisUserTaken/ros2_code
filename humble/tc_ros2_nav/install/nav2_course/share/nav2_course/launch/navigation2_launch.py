import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
import launch_ros.actions

from launch_ros.actions import Node


def generate_launch_description():
    # Get the launch directory
    nav2_yaml = os.path.join(get_package_share_directory('nav2_course'), 'config', 'nav2_params.yaml')
    rviz_config_dir = os.path.join(get_package_share_directory('nav2_course'), 'config', 'nav2_default_view.rviz')
    map_file = os.path.join(get_package_share_directory('nav2_course'), 'config', 'turtlebot3_wolrd.yaml')
    default_bt_xml_path = os.path.join(get_package_share_directory('nav2_course'), 'config', 'navigate_w_replanning_and_recovery.xml')
    
    return LaunchDescription([     
        Node(
            package='nav2_controller',
            node_executable='controller_server',
            output='screen',
            parameters=[nav2_yaml]),

        Node(
            package='nav2_planner',
            node_executable='planner_server',
            node_name='planner_server',
            output='screen',
            parameters=[nav2_yaml]),
            
        Node(
            package='nav2_recoveries',
            node_executable='recoveries_server',
            node_name='recoveries_server',
            output='screen'),

        Node(
            package='nav2_bt_navigator',
            node_executable='bt_navigator',
            node_name='bt_navigator',
            output='screen',
            parameters=[nav2_yaml, {'default_bt_xml_filename': default_bt_xml_path}]),

        Node(
            package='nav2_lifecycle_manager',
            node_executable='lifecycle_manager',
            node_name='lifecycle_manager_navigation',
            output='screen',
            parameters=[{'autostart': True},
                        {'node_names': ['controller_server',
                                        'planner_server',
                                        'recoveries_server',
                                        'bt_navigator']}])
    ])
