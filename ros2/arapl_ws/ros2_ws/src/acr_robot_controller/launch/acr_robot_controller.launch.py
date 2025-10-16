from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get the package directory
    pkg_dir = get_package_share_directory('acr_robot_controller')
    
    # Path to config file
    config_file = os.path.join(pkg_dir, 'config', 'acr_robot_controller.yaml')
    
    # Create the node
    acr_robot_controller_node = Node(
        package='acr_robot_controller',
        executable='acr_robot_controller',
        name='acr_robot_controller',
        output='screen',
        parameters=[config_file],
        respawn=False
    )
    
    return LaunchDescription([
        acr_robot_controller_node
    ])
