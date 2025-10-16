#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Get package share directory
    pkg_share = get_package_share_directory('twist_mux')
    
    # Default config file path
    default_config_file = os.path.join(pkg_share, 'config', 'twist_mux.yaml')
    
    # Declare launch arguments
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=default_config_file,
        description='Path to twist_mux configuration file'
    )
    
    cmd_vel_out_arg = DeclareLaunchArgument(
        'cmd_vel_out',
        default_value='cmd_vel',
        description='Output twist topic name'
    )
    
    # Create twist_mux node
    twist_mux_node = Node(
        package='twist_mux',
        executable='twist_mux_node',
        name='twist_mux',
        output='screen',
        parameters=[LaunchConfiguration('config_file')],
        remappings=[
            ('cmd_vel_out', LaunchConfiguration('cmd_vel_out'))
        ],
        arguments=['--ros-args', '--log-level', 'info']
    )
    
    return LaunchDescription([
        config_file_arg,
        cmd_vel_out_arg,
        twist_mux_node
    ])

