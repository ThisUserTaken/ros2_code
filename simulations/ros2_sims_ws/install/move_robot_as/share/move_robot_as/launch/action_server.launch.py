from launch import LaunchDescription
import launch_ros.actions


def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            package='move_robot_as', executable='move_robot_as', output='screen'),
    ])