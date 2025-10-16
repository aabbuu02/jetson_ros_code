#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    port_arg = DeclareLaunchArgument(
        'port',
        default_value='9090',
        description='WebSocket server port'
    )
    
    address_arg = DeclareLaunchArgument(
        'address',
        default_value='',
        description='Bind address (empty = all interfaces)'
    )
    
    ssl_arg = DeclareLaunchArgument(
        'ssl',
        default_value='false',
        description='Enable SSL/TLS'
    )
    
    rosbridge_node = Node(
        package='rosbridge_server',
        executable='rosbridge_websocket',
        name='rosbridge_websocket',
        parameters=[{
            'port': LaunchConfiguration('port'),
            'address': LaunchConfiguration('address'),
            'ssl': LaunchConfiguration('ssl'),
        }],
        output='screen',
        emulate_tty=True
    )
    
    return LaunchDescription([
        port_arg,
        address_arg,
        ssl_arg,
        rosbridge_node,
    ])
