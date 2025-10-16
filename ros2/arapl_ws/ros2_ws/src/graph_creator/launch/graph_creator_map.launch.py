from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    map_yaml_file_arg = DeclareLaunchArgument(
        'map_yaml_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('graph_creator'),
            'maps',
            'willow_garage.yaml'
        ]),
        description='Full path to map yaml file to load'
    )
    
    # Map server node (ROS2 uses nav2_map_server)
    map_server_node = Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[{
            'yaml_filename': LaunchConfiguration('map_yaml_file'),
            'use_sim_time': False
        }]
    )
    
    # Lifecycle manager to activate map server
    lifecycle_manager_node = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_map_server',
        output='screen',
        parameters=[{
            'autostart': True,
            'node_names': ['map_server']
        }]
    )
    
    return LaunchDescription([
        map_yaml_file_arg,
        map_server_node,
        lifecycle_manager_node,
    ])
