#!/usr/bin/env python3

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg_share = get_package_share_directory('qr_navigation')
    
    # Declare launch arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    
    config_file = os.path.join(pkg_share, 'config', 'qr_navigation_params.yaml')
    path_publisher_file = os.path.join(pkg_share, 'scripts', 'path_publisher.py')

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        
        Node(
            package='qr_navigation',
            executable='qr_navigation_node',
            name='qr_navigation_node',
            output='screen',
            parameters=[config_file, {'use_sim_time': use_sim_time}],
            remappings=[
                ('/cmd_vel', '/navigation/cmd_vel'),
            ]
        ),
        
        Node(
            package='qr_navigation',
            executable='battery_node',
            name='battery_node',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time}]
        ),
        
        Node(
            package='qr_navigation',
            executable='path_publisher.py',
            name='path_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time}]
        ),
    ])
