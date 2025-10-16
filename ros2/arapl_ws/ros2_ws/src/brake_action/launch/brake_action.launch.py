#!/usr/bin/env python3
"""
ROS2 Launch file for brake_action package
Author: Jishnu (jishnu@anscer.com)
Date: 2025-10-11
"""

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    """Generate launch description for brake action nodes."""
    
    # Declare launch arguments
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('brake_action'),
            'config',
            'brake_action_params.yaml'
        ]),
        description='Full path to parameter file'
    )

    log_level_arg = DeclareLaunchArgument(
        'log_level',
        default_value='info',
        description='Logging level (debug, info, warn, error)'
    )

    # Brake action node
    brake_action_node = Node(
        package='brake_action',
        executable='brake_action_node',
        name='brake_activator',
        output='screen',
        parameters=[LaunchConfiguration('config_file')],
        arguments=['--ros-args', '--log-level', LaunchConfiguration('log_level')],
        emulate_tty=True,
        respawn=True,
        respawn_delay=2.0
    )

    return LaunchDescription([
        config_file_arg,
        log_level_arg,
        brake_action_node
    ])
