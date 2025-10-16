#!/usr/bin/env python3

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg_share = get_package_share_directory('qr_navigation')
    
    map_file = os.path.join(pkg_share, 'config', 'map.yaml')
    
    return LaunchDescription([
        DeclareLaunchArgument(
            'map_file',
            default_value=map_file,
            description='Full path to map yaml file'),
        
        Node(
            package='qr_navigation',
            executable='map_to_qr.py',
            name='map_to_qr_tf_broadcaster',
            output='screen',
            parameters=[LaunchConfiguration('map_file')]
        ),
    ])
