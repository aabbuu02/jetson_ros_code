from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare launch arguments
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('navigation_speed_control'),
            'config',
            'navigation_speed_control.yaml'
        ]),
        description='Path to configuration file'
    )
    
    # Navigation speed control node
    navigation_speed_control_node = Node(
        package='navigation_speed_control',
        executable='navigation_speed_control_node',
        name='navigation_speed_control',
        output='screen',
        parameters=[LaunchConfiguration('config_file')],
        respawn=False,
        emulate_tty=True
    )
    
    return LaunchDescription([
        config_file_arg,
        navigation_speed_control_node
    ])
