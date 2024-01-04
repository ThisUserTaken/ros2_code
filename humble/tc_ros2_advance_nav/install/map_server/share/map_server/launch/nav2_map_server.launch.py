import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    map_file = os.path.join(get_package_share_directory('map_server'), 'maps', 'neobotix_area.yaml')
    cartographer_rviz_config_file_path = os.path.join(get_package_share_directory('cartographer_slam'), 'rviz_config', 'mapping.rviz')


    return LaunchDescription([
        Node(
            package='nav2_map_server',
            executable='map_server',
            name='map_server',
            output='screen',
            parameters=[{'use_sim_time': True}, 
                        {'yaml_filename':map_file} 
                       ]),

        Node(
            package='rviz2',
            executable='rviz2',
            output='screen',
            name='rviz2_node',
            parameters=[{'use_sim_time': True}],
            arguments=['-d', cartographer_rviz_config_file_path]),

        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_mapper',
            output='screen',
            parameters=[{'use_sim_time': True},
                        {'autostart': True},
                        {'node_names': ['map_server']}])            
        ])