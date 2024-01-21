import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    world_file_name = 'omni_nav_world2.model'
    world = os.path.join(get_package_share_directory('gazebo_simulation'),'worlds', world_file_name)
    launch_file_dir = os.path.join(get_package_share_directory('gazebo_simulation'), 'launch')
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')
    pkg_omni_control = get_package_share_directory('omni_control')
    pkg_cartographer = get_package_share_directory('omni_cartographer')


    return LaunchDescription([

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
            ),
            launch_arguments={'world': world}.items(),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
            ),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([launch_file_dir, '/robot_state_publisher.launch.py']),
            launch_arguments={'use_sim_time': use_sim_time}.items(),
        ),

        ExecuteProcess(
            cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'forward_velocity_controller'], output='screen'
        ),

        ExecuteProcess(
            cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'joint_state_broadcaster'], output='screen'
        ),

        Node(
        package = "joy",
        executable = "joy_node"
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_omni_control , 'launch', 'omni_control.launch.py')
            ),
        ),

        Node(
            package='rf2o_laser_odometry',
            executable='rf2o_laser_odometry_node',
            name='rf2o_laser_odometry',
            output='screen',
            parameters=[{
                'laser_scan_topic' : '/scan',
                'odom_topic' : '/odom',
                'publish_tf' : True,
                'base_frame_id' : 'base_footprint',
                'odom_frame_id' : 'odom',
                'init_pose_from_topic' : '',
                'freq' : 20.0}],
            ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_cartographer, 'launch', 'cartographer.launch.py')
            ),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_cartographer, 'launch', 'occupancy_grid.launch.py')
            ),
        ),
    ])
