import launch
import launch_ros.actions
from tracetools_launch.action import Trace


def generate_launch_description():
    
    # Trace
    trace = Trace(
        session_name='callback_function'
    )
    # Nodes
    callback_function_node = launch_ros.actions.Node(
        package='basics_ros2_multithreading',
        executable='callback_function.py',
        arguments=[],
        output='screen',
    )

    return launch.LaunchDescription([
        trace,
        callback_function_node
    ])