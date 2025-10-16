#!/usr/bin/env python3
"""
ROS2 Launch file to start the robot with all required components.
"""

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    """Generate the launch description for starting the robot."""
    
    # Include anscer_agv bringup launch file
    anscer_agv_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('anscer_agv_bringup'),
                'launch',
                'start_anscer_agv.launch.py'
            ])
        ])
    )
    
    # Include rosbridge websocket launch file
    rosbridge_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('rosbridge_server'),
                'launch',
                'rosbridge_websocket.launch.py'
            ])
        ])
    )
    
    return LaunchDescription([
        anscer_agv_launch,
        rosbridge_launch,
    ])
