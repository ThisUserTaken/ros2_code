from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Use simulation (Gazebo) clock if true'
        ),
        Node(
            package='yolo_recognition',
            executable='yolov8_ros2_pt.py',
            output='screen',
            # Add or remove parameters as needed
            # For example, if 'image_topic', 'cmd_vel_topic', and 'enable_3d_tracker' are parameters,
            # include them here with default values or omit them to use defaults
            parameters=[
                {'image_topic': '/camera/image_raw'},
                {'cmd_vel_topic': '/cmd_vel_tracker'},
                {'enable_3d_tracker': True},
            ],
            # Add the 'params_file' parameter
            # You can modify the path as needed
            # This assumes that 'params_file' is a parameter accepted by the yolov8_ros2_pt.py node
            remappings=[
                ('params_file', 'src/articubot_one-main/config/ball_tracker_params_sim.yaml'),
            ],
        ),
    ])
