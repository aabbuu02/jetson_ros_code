#!/usr/bin/env python3
"""
Launch file for Robot Health Service
Provides robot health status and mission readiness control
"""

from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get package directory
    pkg_dir = get_package_share_directory('lower_level_controller')
    
    # Robot Health Service Node
    robot_health_service = Node(
        package='lower_level_controller',
        executable='robot_health_service',
        name='robot_health_service',
        output='screen',
        emulate_tty=True
    )
    
    return LaunchDescription([
        robot_health_service
    ])