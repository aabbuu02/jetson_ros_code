from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    output_to_arg = DeclareLaunchArgument(
        'output_to',
        default_value='screen',
        description='Output destination (screen or log)'
    )
    
    use_rviz_arg = DeclareLaunchArgument(
        'use_rviz',
        default_value='false',
        description='Open RViz GUI'
    )
    
    use_map_server_arg = DeclareLaunchArgument(
        'use_map_server',
        default_value='true',
        description='Use a map server'
    )
    
    map_file_arg = DeclareLaunchArgument(
        'map_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('graph_creator'),
            'maps',
            'willow_garage.yaml'
        ]),
        description='The map file to use with the map server'
    )
    
    # Graph creator launch
    graph_creator_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('graph_creator'),
                'launch',
                'graph_creator_launch.py'
            ])
        ]),
        launch_arguments={
            'output_to': LaunchConfiguration('output_to'),
            'use_rviz': LaunchConfiguration('use_rviz'),
            'use_map_server': LaunchConfiguration('use_map_server'),
            'map_file': LaunchConfiguration('map_file')
        }.items()
    )
    
    # You can add additional planner nodes here if needed
    # For example, move_base, nav2, etc.
    
    return LaunchDescription([
        output_to_arg,
        use_rviz_arg,
        use_map_server_arg,
        map_file_arg,
        graph_creator_launch,
    ])
