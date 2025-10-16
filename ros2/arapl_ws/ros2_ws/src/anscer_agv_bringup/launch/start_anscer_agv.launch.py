#!/usr/bin/env python3
"""
Launch file for ANSCER AGV system in ROS2
Brings up all necessary nodes and subsystems for AGV operation
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    GroupAction,
    ExecuteProcess,
    TimerAction,
    LogInfo
)
from launch.conditions import IfCondition, UnlessCondition, LaunchConfigurationEquals, LaunchConfigurationNotEquals
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import (
    LaunchConfiguration,
    PathJoinSubstitution,
    TextSubstitution,
    PythonExpression
)
from launch_ros.actions import Node, SetParameter
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    """Generate launch description for ANSCER AGV bringup"""
    
    # Declare launch arguments
    graph_file_arg = DeclareLaunchArgument(
        'graph_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('graph_server'),
            'graphs',
            'default.graphml'
        ]),
        description='Path to the graph file for navigation'
    )
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time'
    )
    
    # Launch configuration variables
    graph_file = LaunchConfiguration('graph_file')
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    # Get package share directories (with error handling)
    try:
        lower_level_controller_dir = get_package_share_directory('lower_level_controller')
        lower_level_controller_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(lower_level_controller_dir, 'launch', 'lower_level_controller.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find lower_level_controller package: {e}")
        lower_level_controller_launch = LogInfo(msg="Skipping lower_level_controller launch")
    
    try:
        reader_modules_dir = get_package_share_directory('reader_modules')
        pgv_reader_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(reader_modules_dir, 'launch', 'pgv_reader.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find reader_modules package: {e}")
        pgv_reader_launch = LogInfo(msg="Skipping pgv_reader launch")
    
    try:
        twist_mux_dir = get_package_share_directory('twist_mux')
        twist_mux_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(twist_mux_dir, 'launch', 'twist_mux.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find twist_mux package: {e}")
        twist_mux_launch = LogInfo(msg="Skipping twist_mux launch")
    
    try:
        anscer_description_dir = get_package_share_directory('anscer_description')
        anscer_description_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(anscer_description_dir, 'launch', 'anscer_description.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find anscer_description package: {e}")
        anscer_description_launch = LogInfo(msg="Skipping anscer_description launch")
    
    try:
        graph_server_dir = get_package_share_directory('graph_server')
        graph_server_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(graph_server_dir, 'launch', 'graph_server.launch.py')
            ]),
            launch_arguments={
                'graph_file': graph_file,
                'use_sim_time': use_sim_time
            }.items()
        )
    except Exception as e:
        print(f"Warning: Could not find graph_server package: {e}")
        graph_server_launch = LogInfo(msg="Skipping graph_server launch")
    
    # Global path planner node
    global_planner_node = Node(
        package='global_path_graph_planner',
        executable='path_graph_planner_node',
        name='global_planner',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        respawn=True,
        respawn_delay=2.0
    )
    
    # Robot pose publisher node
    robot_pose_publisher_node = Node(
        package='robot_pose_publisher',
        executable='robot_pose_publisher',
        name='robot_pose_publisher',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        respawn=True,
        respawn_delay=2.0
    )
    
    # Mission scheduler server node
    mission_server_node = Node(
        package='qr_mission_scheduler',
        executable='qr_mission_scheduler_server',
        name='mission_server',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        respawn=True,
        respawn_delay=2.0
    )
    
    # QR navigation node
    qr_navigation_node = Node(
        package='qr_navigation',
        executable='qr_navigation_node',
        name='qr_navigation_node',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        respawn=True,
        respawn_delay=2.0
    )
    
    try:
        qr_mission_scheduler_dir = get_package_share_directory('qr_mission_scheduler')
        qr_mission_scheduler_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(qr_mission_scheduler_dir, 'launch', 'qr_mission_scheduler.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find qr_mission_scheduler package: {e}")
        qr_mission_scheduler_launch = LogInfo(msg="Skipping qr_mission_scheduler launch")
    
    # WMS data launch file (CORRECTED - using IncludeLaunchDescription instead of Node)
    try:
        wms_data_dir = get_package_share_directory('wms_data')
        wms_data_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(wms_data_dir, 'launch', 'wms_data.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find wms_data package: {e}")
        wms_data_launch = LogInfo(msg="Skipping wms_data launch")
    
    try:
        tag_monitor_dir = get_package_share_directory('tag_monitor')
        tag_monitor_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(tag_monitor_dir, 'launch', 'tag_monitor.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find tag_monitor package: {e}")
        tag_monitor_launch = LogInfo(msg="Skipping tag_monitor launch")
    
    try:
        power_control_dir = get_package_share_directory('power_control')
        power_control_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(power_control_dir, 'launch', 'power_control.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find power_control package: {e}")
        power_control_launch = LogInfo(msg="Skipping power_control launch")
    
    # Emergency handler launch (commented out in original)
    try:
        emergency_handler_dir = get_package_share_directory('emergency_handler')
        emergency_handler_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(emergency_handler_dir, 'launch', 'emergency_handler.launch.py')
            ]),
            launch_arguments={'use_sim_time': use_sim_time}.items()
        )
    except Exception as e:
        print(f"Warning: Could not find emergency_handler package: {e}")
        emergency_handler_launch = LogInfo(msg="Skipping emergency_handler launch")
    
    # Create and return launch description
    return LaunchDescription([
        # Arguments
        graph_file_arg,
        use_sim_time_arg,
        
        # Included launch files
        lower_level_controller_launch,
        pgv_reader_launch,
        twist_mux_launch,
        anscer_description_launch,
        graph_server_launch,
        qr_mission_scheduler_launch,
        wms_data_launch,  # CORRECTED - now launches as IncludeLaunchDescription
        tag_monitor_launch,
        power_control_launch,
        
        # Individual nodes
        global_planner_node,
        robot_pose_publisher_node,
        mission_server_node,
        qr_navigation_node,
        
        # Uncomment to enable emergency handler
        emergency_handler_launch,
    ])


