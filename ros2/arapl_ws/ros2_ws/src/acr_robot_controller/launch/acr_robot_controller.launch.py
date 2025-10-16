from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import LogInfo
from ament_index_python.packages import get_package_share_directory
import os
import yaml

def generate_launch_description():
    # Get the package directory
    pkg_dir = get_package_share_directory('acr_robot_controller')
    
    # Path to config file
    config_file = os.path.join(pkg_dir, 'config', 'acr_robot_controller.yaml')
    
    # Load and display parameters like ROS1
    def load_and_display_params(config_file, prefix=""):
        try:
            with open(config_file, 'r') as file:
                params = yaml.safe_load(file)
                if params:
                    for key, value in params.items():
                        if isinstance(value, dict):
                            for subkey, subvalue in value.items():
                                LogInfo(msg=f" * {prefix}{key}/{subkey}: {subvalue}")
                        else:
                            LogInfo(msg=f" * {prefix}{key}: {value}")
        except Exception as e:
            LogInfo(msg=f"Could not load parameters from {config_file}: {e}")
    
    # Display parameters
    LogInfo(msg="PARAMETERS")
    load_and_display_params(config_file, "/acr_robot_controller/")
    LogInfo(msg="")
    LogInfo(msg="NODES")
    LogInfo(msg="  /")
    LogInfo(msg="    acr_robot_controller (acr_robot_controller/acr_robot_controller)")
    LogInfo(msg="")
    
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
