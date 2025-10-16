"""
Launch file for PLC communicator - ROS2 version
Author: Jishnu (jishnu@anscer.com)
Date: 2025-10-11
"""

from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get package directory
    pkg_dir = get_package_share_directory('lift_action')
    
    # Config file paths
    higher_level_config = os.path.join(pkg_dir, 'config', 'HigherLevelInterface.yaml')
    modbus_config = os.path.join(pkg_dir, 'config', 'ModbusCommunicator.yaml')
    
    # Modbus communicator node
    modbus_communicator_node = Node(
        package='lift_action',
        executable='modbus_communicator',
        name='modbus_communicator',
        output='screen',
        parameters=[higher_level_config, modbus_config],
        emulate_tty=True
    )
    
    return LaunchDescription([
        modbus_communicator_node
    ])
