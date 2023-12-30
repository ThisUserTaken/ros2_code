import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    amcl_file = os.path.join(get_package_share_directory('amcl'), 'config', 'amcl_config.yaml')

    return LaunchDescription([
        Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            output='screen',
            parameters=[{'use_sim_time': True}, 
                        {'yaml_filename':amcl_file} 
                       ]),
          
        ])
