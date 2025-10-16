#!/usr/bin/env python3
"""
ROS2 Launch file for graph_server node.
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, GroupAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def generate_launch_description():
    """Generate launch description for graph_server."""
    
    # Get package directories
    graph_server_dir = get_package_share_directory('graph_server')
    
    # --- ADDED: Path to the parameter file ---
    config_file = os.path.join(
        graph_server_dir, 
        'config', 
        'graph_server_params.yaml'
    )
    # -----------------------------------------
    
    # Declare launch arguments
    graph_file_arg = DeclareLaunchArgument(
        'graph_file',
        default_value=os.path.join(graph_server_dir, 'graphs', 'arapl_v6.graphml'),
        description='The graph file to load at startup'
    )
    
    use_visual_control_arg = DeclareLaunchArgument(
        'use_visual_control',
        default_value='true',
        description='Whether to use the graph visual control'
    )
    
    log_level_arg = DeclareLaunchArgument(
        'log_level',
        default_value='info',
        description='Logging level (debug, info, warn, error)'
    )
    
    # Graph server node
    graph_server_node = Node(
        package='graph_server',
        executable='graph_server',
        name='graph_server',
        output='screen',
        # --- REMOVED: arguments=[LaunchConfiguration('graph_file')], ---
        # --- MODIFIED: Load parameter file and override 'graph_file' parameter ---
        parameters=[
            config_file,  # Load parameters from the YAML file first
            {
                'use_sim_time': False,
                'graph_file': LaunchConfiguration('graph_file') # Override/set the graph_file parameter
            }
        ],
        # --------------------------------------------------------------------------
        ros_arguments=['--log-level', LaunchConfiguration('log_level')]
    )
    
    # Conditionally include graph visual control launch file
    graph_visual_control_launch = GroupAction(
        condition=IfCondition(LaunchConfiguration('use_visual_control')),
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource([
                    PathJoinSubstitution([
                        get_package_share_directory('graph_visual_control'),
                        'launch',
                        'graph_visual_control.launch.py'
                    ])
                ]),
                launch_arguments={
                    'log_level': LaunchConfiguration('log_level')
                }.items()
            )
        ]
    )
    
    return LaunchDescription([
        graph_file_arg,
        use_visual_control_arg,
        log_level_arg,
        graph_server_node,
        graph_visual_control_launch,
    ])

