import launch
import launch_ros.actions
from tracetools_launch.action import Trace


def generate_launch_description():
    
    # Trace
    trace = Trace(
        session_name='yello_tshirt_detector'
    )
    # Nodes
    face_searcher_multithreading_node = launch_ros.actions.Node(
        package='basics_ros2_multithreading',
        executable='yello_tshirt_detector.py',
        arguments=[],
        output='screen',
    )

    return launch.LaunchDescription([
        trace,
        face_searcher_multithreading_node
    ])