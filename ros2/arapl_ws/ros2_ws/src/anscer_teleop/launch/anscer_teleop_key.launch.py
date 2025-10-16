from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
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
    
    # Create the teleop node
    teleop_node = Node(
        package='anscer_teleop',
        executable='anscer_teleop_key',
        name='anscer_teleop_keyboard',
        output='screen',
        prefix='xterm -e',  # Run in separate terminal for keyboard input
        parameters=[{
            'model': LaunchConfiguration('model')
        }]
    )
    
    # Create launch description
    ld = LaunchDescription()
    
    # Add launch arguments
    ld.add_action(model_arg)
    
    # Add nodes
    ld.add_action(teleop_node)
    
    return ld
