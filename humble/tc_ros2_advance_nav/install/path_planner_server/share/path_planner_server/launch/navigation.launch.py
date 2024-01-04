import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    controller_yaml = os.path.join(get_package_share_directory(
        'path_planner_server'), 'config', 'controller.yaml')
    default_bt_xml_path = os.path.join(get_package_share_directory(
        'path_planner_server'), 'config', 'behavior.xml')
    planner_yaml = os.path.join(get_package_share_directory(
        'path_planner_server'), 'config', 'planner_server.yaml')
    recovery_yaml = os.path.join(get_package_share_directory(
        'path_planner_server'), 'config', 'recovery.yaml')
    bt_navigator_yaml = os.path.join(get_package_share_directory(
        'path_planner_server'), 'config', 'bt_navigator.yaml')
    nav2_yaml = os.path.join(get_package_share_directory(
        'localization_server'), 'config', 'amcl_config.yaml')
    map_file = os.path.join(get_package_share_directory(
        'map_server'), 'maps', 'map.yaml')
    rviz_config_file_path = os.path.join(get_package_share_directory(
        'path_planner_server'), 'rviz_config', 'pathplanning.rviz')

    return LaunchDescription([
        Node(
            package='nav2_map_server',
            executable='map_server',
            name='map_server',
            output='screen',
            parameters=[{'use_sim_time': True},
                        {'yaml_filename': map_file}]
        ),

        Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            output='screen',
            parameters=[nav2_yaml]
        ),
        Node(
            package='nav2_controller',
            executable='controller_server',
            name='controller_server',
            output='screen',
            parameters=[controller_yaml]),

        Node(
            package='nav2_planner',
            executable='planner_server',
            name='planner_server',
            output='screen',
            parameters=[planner_yaml]),

        Node(
            package='nav2_recoveries',
            executable='recoveries_server',
            name='recoveries_server',
            output='screen',
            parameters=[recovery_yaml]),

        Node(
            package='nav2_bt_navigator',
            executable='bt_navigator',
            name='bt_navigator',
            output='screen',
            parameters=[bt_navigator_yaml, {'default_bt_xml_filename': default_bt_xml_path}]),

        Node(
            package='rviz2',
            executable='rviz2',
            output='screen',
            name='rviz2_node',
            parameters=[{'use_sim_time': True}],
            arguments=['-d', rviz_config_file_path]),

        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager',
            output='screen',
            parameters=[{'autostart': True},
                        {'node_names': ['map_server',
                                        'amcl',
                                        'controller_server',
                                        'planner_server',
                                        'recoveries_server',
                                        'bt_navigator']}])
    ])
