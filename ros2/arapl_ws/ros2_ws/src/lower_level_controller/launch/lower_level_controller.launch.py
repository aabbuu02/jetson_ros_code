from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os
import yaml


def generate_launch_description():
    pkg_share = get_package_share_directory('lower_level_controller')
    
    # Config files
    lower_level_config = os.path.join(pkg_share, 'config', 'lower_level_controller.yaml')
    modbus_config = os.path.join(pkg_share, 'config', 'modbus_configuration.yaml')
    roboteq_config = os.path.join(pkg_share, 'config', 'roboteq_configuration.yaml')
    odrive_config = os.path.join(pkg_share, 'config', 'odrive_configuration.yaml')
    rainbow_config = os.path.join(pkg_share, 'config', 'rainbow_configuration.yaml')
    
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
    
    # Display parameters for each config file
    LogInfo(msg="SUMMARY")
    LogInfo(msg="========")
    LogInfo(msg="")
    LogInfo(msg="PARAMETERS")
    load_and_display_params(lower_level_config, "/lower_level_controller/")
    load_and_display_params(modbus_config, "/lower_level_controller/")
    load_and_display_params(roboteq_config, "/lower_level_controller/")
    load_and_display_params(odrive_config, "/lower_level_controller/")
    load_and_display_params(rainbow_config, "/lower_level_controller/")
    LogInfo(msg="")
    LogInfo(msg="NODES")
    LogInfo(msg="  /")
    LogInfo(msg="    lower_level_controller (lower_level_controller/lower_level_controller_node)")
    LogInfo(msg="    odom_to_map (tf2_ros/static_transform_publisher)")
    LogInfo(msg="")


    # Static TF publisher (odom to map)
    static_tf_node = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='odom_to_map',
        arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom_frame']
    )


    # Lower level controller node
    lower_level_controller_node = Node(
        package='lower_level_controller',
        executable='lower_level_controller_node',
        name='lower_level_controller',
        output='screen',
        parameters=[
            lower_level_config,
            modbus_config,
            roboteq_config,
            odrive_config,
            rainbow_config
        ]
    )


    # Include ACR robot controller launch file
    acr_robot_pkg = get_package_share_directory('acr_robot_controller')
    acr_robot_launch = os.path.join(acr_robot_pkg, 'launch', 'acr_robot_controller.launch.py')


    acr_robot_controller_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(acr_robot_launch)
    )

    # All actions in this list are executed in parallel by default.
    # The ROS 2 launch system starts all nodes asynchronously.
    # The reason acr_controller is not running is not due to launch order,
    # but because it likely has a runtime dependency on the lower_level_controller
    # which is failing to connect to its hardware (Modbus error).
    return LaunchDescription([
        static_tf_node,
        lower_level_controller_node,
        acr_robot_controller_launch
    ])
