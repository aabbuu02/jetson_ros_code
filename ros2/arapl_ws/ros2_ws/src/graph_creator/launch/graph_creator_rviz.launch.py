from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    rviz_required_arg = DeclareLaunchArgument(
        'rviz_required',
        default_value='false',
        description='Whether RViz is required to start'
    )
    
    output_to_arg = DeclareLaunchArgument(
        'output_to',
        default_value='screen',
        description='Output destination (screen or log)'
    )
    
    rviz_config_arg = DeclareLaunchArgument(
        'rviz_config',
        default_value=PathJoinSubstitution([
            FindPackageShare('graph_creator'),
            'rviz',
            'graph_creator.rviz'
        ]),
        description='Full path to the RViz config file to use'
    )
    
    # RViz node
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', LaunchConfiguration('rviz_config')],
        output=LaunchConfiguration('output_to'),
        required=LaunchConfiguration('rviz_required')
    )
    
    return LaunchDescription([
        rviz_required_arg,
        output_to_arg,
        rviz_config_arg,
        rviz_node,
    ])
