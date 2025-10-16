#!/usr/bin/env python3

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition, UnlessCondition
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    pkg_share = get_package_share_directory('wms_data')
    config_file = os.path.join(pkg_share, 'config', 'wms_config.yaml')
    
    # Launch arguments
    use_soap_arg = DeclareLaunchArgument(
        'use_soap',
        default_value='false',
        description='Use SOAP/XML based communication'
    )
    
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=config_file,
        description='Path to configuration YAML file'
    )
    
    # WMS Database Node (REST API)
    wms_database_node = Node(
        package='wms_data',
        executable='wms_database_node',
        name='wms_database_node',
        output='screen',
        parameters=[LaunchConfiguration('config_file')],
        condition=UnlessCondition(LaunchConfiguration('use_soap'))
    )
    
    # WMS Database Server Node (SOAP/XML)
    wms_database_server_node = Node(
        package='wms_data',
        executable='wms_database_server_node',
        name='wms_database_server_node',
        output='screen',
        parameters=[LaunchConfiguration('config_file')],
        condition=IfCondition(LaunchConfiguration('use_soap'))
    )
    
    # WMS Logger Node
    wms_logger_node = Node(
        package='wms_data',
        executable='wms_logger_node',
        name='wms_logger_node',
        output='screen',
        parameters=[LaunchConfiguration('config_file')]
    )
    
    return LaunchDescription([
        use_soap_arg,
        config_file_arg,
        wms_database_node,
        wms_database_server_node,
        wms_logger_node
    ])
