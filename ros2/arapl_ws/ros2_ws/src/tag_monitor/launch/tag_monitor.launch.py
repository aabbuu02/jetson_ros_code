from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get package directory
    pkg_tag_monitor = get_package_share_directory('tag_monitor')
    
    # Path to config file
    config_file = PathJoinSubstitution([
        FindPackageShare('tag_monitor'),
        'config',
        'tag_monitor.yaml'
    ])
    
    # Declare launch arguments
    output_arg = DeclareLaunchArgument(
        'output',
        default_value='screen',
        description='Output destination (screen or log)'
    )
    
    # Create node
    tag_monitor_node = Node(
        package='tag_monitor',
        executable='tag_monitor_node',
        name='tag_monitor',
        output=LaunchConfiguration('output'),
        parameters=[config_file],
        emulate_tty=True
    )
    
    return LaunchDescription([
        output_arg,
        tag_monitor_node
    ])
