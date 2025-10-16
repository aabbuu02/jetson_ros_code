from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    """Generate launch description for graph visual control node."""
    
    # Declare launch arguments
    output_arg = DeclareLaunchArgument(
        'output',
        default_value='screen',
        description='Output destination (screen or log)'
    )
    
    pose_spacing_arg = DeclareLaunchArgument(
        'pose_spacing',
        default_value='0.1',
        description='Spacing between poses on edges'
    )
    
    resolution_arg = DeclareLaunchArgument(
        'resolution',
        default_value='1.0',
        description='Resolution for curve calculations'
    )
    
    graph_control_arg = DeclareLaunchArgument(
        'graph_control',
        default_value='',
        description='Graph control plugin to load'
    )
    
    # Node configuration
    graph_visual_control_node = Node(
        package='graph_visual_control',
        executable='graph_viz_ctrl',
        name='graph_visual_control',
        output=LaunchConfiguration('output'),
        parameters=[{
            'pose_spacing': LaunchConfiguration('pose_spacing'),
            'resolution': LaunchConfiguration('resolution'),
            'graph_control': LaunchConfiguration('graph_control'),
        }],
        remappings=[
            # Add any topic remappings here if needed
            # ('graph', '/custom/graph'),
        ]
    )
    
    return LaunchDescription([
        output_arg,
        pose_spacing_arg,
        resolution_arg,
        graph_control_arg,
        graph_visual_control_node,
    ])
