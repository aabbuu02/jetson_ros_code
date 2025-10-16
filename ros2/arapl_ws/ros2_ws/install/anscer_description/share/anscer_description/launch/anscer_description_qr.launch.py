#!/usr/bin/env python3

"""
Launch file for Anscer AMR with QR code configuration.
Starts robot_state_publisher and joint_state_publisher nodes.
Optionally supports Gazebo simulation (commented sections for future use).
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, Command, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.conditions import IfCondition
from launch_ros.actions import Node


def generate_launch_description():
    # Get package directories
    pkg_share = get_package_share_directory('anscer_description')
    
    # Path to URDF file
    urdf_file = os.path.join(pkg_share, 'urdf', 'anscer_amr_qr.urdf')
    
    # Read URDF content
    with open(urdf_file, 'r') as infp:
        robot_desc = infp.read()
    
    # Declare launch arguments
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation (Gazebo) clock if true'
    )
    
    paused_arg = DeclareLaunchArgument(
        'paused',
        default_value='false',
        description='Start Gazebo paused'
    )
    
    gui_arg = DeclareLaunchArgument(
        'gui',
        default_value='true',
        description='Start Gazebo GUI'
    )
    
    recording_arg = DeclareLaunchArgument(
        'recording',
        default_value='false',
        description='Enable Gazebo state recording'
    )
    
    debug_arg = DeclareLaunchArgument(
        'debug',
        default_value='false',
        description='Enable debug mode'
    )
    
    spawn_x_arg = DeclareLaunchArgument(
        'spawn_x',
        default_value='-1.68',
        description='X coordinate for robot spawn position'
    )
    
    spawn_y_arg = DeclareLaunchArgument(
        'spawn_y',
        default_value='-1.1',
        description='Y coordinate for robot spawn position'
    )
    
    spawn_z_arg = DeclareLaunchArgument(
        'spawn_z',
        default_value='0.4',
        description='Z coordinate for robot spawn position'
    )
    
    # Robot State Publisher node
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_desc,
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # Joint State Publisher node
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_desc,  # <-- THIS IS THE REQUIRED FIX
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )

    
    # Optional: Include Gazebo launch file (uncomment to enable)
    # gazebo_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([
    #         PathJoinSubstitution([
    #             get_package_share_directory('gazebo_ros'),
    #             'launch',
    #             'gazebo.launch.py'
    #         ])
    #     ]),
    #     launch_arguments={
    #         'pause': LaunchConfiguration('paused'),
    #         'gui': LaunchConfiguration('gui'),
    #         'recording': LaunchConfiguration('recording'),
    #         'debug': LaunchConfiguration('debug')
    #     }.items()
    # )
    
    # Optional: Spawn robot in Gazebo (uncomment to enable)
    # spawn_entity_node = Node(
    #     package='gazebo_ros',
    #     executable='spawn_entity.py',
    #     name='spawn_urdf',
    #     output='screen',
    #     arguments=[
    #         '-entity', 'anscer',
    #         '-topic', 'robot_description',
    #         '-x', LaunchConfiguration('spawn_x'),
    #         '-y', LaunchConfiguration('spawn_y'),
    #         '-z', LaunchConfiguration('spawn_z')
    #     ],
    #     parameters=[{
    #         'use_sim_time': LaunchConfiguration('use_sim_time')
    #     }]
    # )
    
    # Optional: Include depth image to laserscan conversion (uncomment to enable)
    # depthimage_to_laserscan_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([
    #         PathJoinSubstitution([
    #             get_package_share_directory('depthimage_to_laserscan'),
    #             'launch',
    #             'depthimage_to_laserscan.launch.py'
    #         ])
    #     ])
    # )
    
    # Optional: Include laser filters (uncomment to enable)
    # laser_filters_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([
    #         PathJoinSubstitution([
    #             get_package_share_directory('laser_filters'),
    #             'launch',
    #             'laser_filters.launch.py'
    #         ])
    #     ])
    # )
    
    return LaunchDescription([
        # Arguments
        use_sim_time_arg,
        paused_arg,
        gui_arg,
        recording_arg,
        debug_arg,
        spawn_x_arg,
        spawn_y_arg,
        spawn_z_arg,
        
        # Nodes
        robot_state_publisher_node,
        joint_state_publisher_node,
        
        # Uncomment to enable Gazebo and spawning
        # gazebo_launch,
        # spawn_entity_node,
        
        # Uncomment to enable additional processing
        # depthimage_to_laserscan_launch,
        # laser_filters_launch,
    ])

