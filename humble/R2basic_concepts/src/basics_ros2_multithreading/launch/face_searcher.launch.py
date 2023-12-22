import launch
import launch_ros.actions
from tracetools_launch.action import Trace


def generate_launch_description():
    
    # Trace
    trace = Trace(
        session_name='face_searcher'
    )
    # Nodes
    face_searcher_node = launch_ros.actions.Node(
        package='basics_ros2_multithreading',
        executable='face_searcher.py',
        arguments=[],
        output='screen',
    )

    return launch.LaunchDescription([
        trace,
        face_searcher_node
    ])