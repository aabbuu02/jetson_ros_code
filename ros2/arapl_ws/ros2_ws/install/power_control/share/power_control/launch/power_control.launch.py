#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    """
    Generate launch description for power_control node
    """
    
    # Declare launch arguments
    system_name_arg = DeclareLaunchArgument(
        'system_name',
        default_value='device',
        description='Power control system name'
    )
    
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('power_control'),
            'config',
            'power_control.yaml'
        ]),
        description='Full path to configuration file for power control'
    )
    
    output_arg = DeclareLaunchArgument(
        'output',
        default_value='screen',
        description='Output destination (screen or log)'
    )
    
    def launch_setup(context, *args, **kwargs):
	    """Setup function to access launch configuration values"""
	    system_name = LaunchConfiguration('system_name').perform(context)
	    config_file = LaunchConfiguration('config_file').perform(context)
	    output = LaunchConfiguration('output').perform(context)
	    
	    # Create power control node with fixed name to match YAML config
	    power_control_node = Node(
		package='power_control',
		executable='power_control_node',
		name='power_control_device',  # Fixed name instead of f"power_control_{system_name}"
		output=output,
		parameters=[config_file],
		emulate_tty=True,
		respawn=False,
		# Add parameter overrides to ensure system_name is set correctly
		arguments=['--ros-args', '-p', f'system_name:={system_name}']
	    )
	    
	    return [power_control_node]

    
    return LaunchDescription([
        system_name_arg,
        config_file_arg,
        output_arg,
        OpaqueFunction(function=launch_setup)
    ])
