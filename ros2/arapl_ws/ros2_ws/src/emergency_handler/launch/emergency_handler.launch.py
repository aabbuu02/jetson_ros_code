#!/usr/bin/env python3

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    """
    Launch file for emergency_handler node
    """
    
    # Declare launch arguments
    log_level_arg = DeclareLaunchArgument(
        'log_level',
        default_value='info',
        description='Logging level (debug, info, warn, error, fatal)'
    )
    
    # Emergency handler node
    emergency_handler_node = Node(
        package='emergency_handler',
        executable='emergency_handler',
        name='emergency_handler',
        output='screen',
        emulate_tty=True,
        parameters=[],
        arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')]
    )
    
    return LaunchDescription([
        log_level_arg,
        emergency_handler_node
    ])
