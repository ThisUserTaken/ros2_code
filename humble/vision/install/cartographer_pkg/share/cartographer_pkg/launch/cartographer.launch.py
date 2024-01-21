import os
from glob import glob
from launch.actions import IncludeLaunchDescription
from launch import LaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node

def generate_launch_description():

    cartographer_config_dir = os.path.join(get_package_share_directory('cartographer_pkg'), 'config')
    #print(cartographer_config_dir)
    configuration_basename = 'cartographer.lua'
    joystick_pkg_dir = get_package_share_directory('joystick_pkg')
    pkg_dir = get_package_share_directory('cartographer_pkg')
    
    rviz_config_file = os.path.join(pkg_dir, 'config', 'cartographer_slam_setup.rviz')
    #print(rviz_config_fileneo_track1.world neo_track2.world neo_workshop.world)


    return LaunchDescription([
        #IncludeLaunchDescription(
        #    PythonLaunchDescriptionSource([os.path.join(joystick_pkg_dir, 'launch'), '/joystick.launch.py'])
        #),
        
        Node(
            package='cartographer_ros', 
            executable='cartographer_node', 
            name='cartographer_node',
            output='screen',
            parameters=[{'use_sim_time': True}],
            arguments=['-configuration_directory', cartographer_config_dir,
                       '-configuration_basename', configuration_basename]),

        Node(
            package='cartographer_ros',
            executable='cartographer_occupancy_grid_node',
            output='screen',
            name='occupancy_grid_node',
            parameters=[{'use_sim_time': True}],
            arguments=['-resolution', '0.05', '-publish_period_sec', '1.0']
        ),
        
        Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
        output='screen'
        )

    ]) 