from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration, EnvironmentVariable
from launch_ros.actions import Node


def generate_launch_description():
    """Generate launch description for ANSCER teleop keyboard node."""
    
    # Declare launch arguments
    model_arg = DeclareLaunchArgument(
        'model',
        default_value=EnvironmentVariable('TURTLEBOT3_MODEL', default_value='burger'),
        description='Robot model type [burger, waffle, waffle_pi]'
    )
    
    # Create the teleop node using ExecuteProcess for better terminal control
    teleop_cmd = ExecuteProcess(
        cmd=[
            'ros2', 'run', 'anscer_teleop', 'anscer_teleop_key',
            '--ros-args',
            '-p', ['model:=', LaunchConfiguration('model')]
        ],
        output='screen',
        shell=True
    )
    
    # Create launch description
    ld = LaunchDescription()
    
    # Add launch arguments
    ld.add_action(model_arg)
    
    # Add nodes
    ld.add_action(teleop_cmd)
    
    return ld
