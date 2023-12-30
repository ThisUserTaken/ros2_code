import os
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
def generate_launch_description():
    
    config = os.path.join(get_package_share_directory('nav2_project'),'config','spot-list.yaml')
    
    return LaunchDescription([ 
    
    Node(
        package = 'nav2_project',
        name = 'move_to_spot',
        node_executable = 'go_to_pose',
        parameters = [{'spot_name':"table"},
                      {'use_sim_time':False},
                        config],
        output = 'screen',
    )
    ])