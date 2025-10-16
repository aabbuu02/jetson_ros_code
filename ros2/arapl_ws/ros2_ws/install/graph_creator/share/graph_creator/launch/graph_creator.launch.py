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
        description='Open RViz GUI when starting graph creator'
    )
    
    use_map_server_arg = DeclareLaunchArgument(
        'use_map_server',
        default_value='false',
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
    
    # Graph creator node
    graph_creator_node = Node(
        package='graph_creator',
        executable='graph_creator',
        name='graph_creator',
        output=LaunchConfiguration('output_to'),
        parameters=[{
            'graph_name': 'default_graph',
            'graph_frame_id': 'map',
            'robot_base_frame_id': 'base_link',
            'auto_publish_graph': True,
            'publish_graph_rate': 1.0,
        }]
    )
    
    # RViz launch
    rviz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('graph_creator'),
                'launch',
                'graph_creator_rviz_launch.py'
            ])
        ]),
        launch_arguments={
            'rviz_required': 'false',
            'output_to': 'log'
        }.items(),
        condition=IfCondition(LaunchConfiguration('use_rviz'))
    )
    
    # Map server launch
    map_server_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('graph_creator'),
                'launch',
                'graph_creator_map_launch.py'
            ])
        ]),
        launch_arguments={
            'map_yaml_file': LaunchConfiguration('map_file')
        }.items(),
        condition=IfCondition(LaunchConfiguration('use_map_server'))
    )
    
    return LaunchDescription([
        output_to_arg,
        use_rviz_arg,
        use_map_server_arg,
        map_file_arg,
        graph_creator_node,
        rviz_launch,
        map_server_launch,
    ])
