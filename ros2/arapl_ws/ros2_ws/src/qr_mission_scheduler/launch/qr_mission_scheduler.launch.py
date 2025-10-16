from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get package directory
    pkg_share = FindPackageShare('qr_mission_scheduler')
    
    # Declare launch arguments
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time if true'
    )
    
    rack_data_path = PathJoinSubstitution([pkg_share, 'config', 'rack_data.txt'])
    conveyor_data_path = PathJoinSubstitution([pkg_share, 'config', 'conveyor_data.txt'])
    graph_map_file = PathJoinSubstitution([pkg_share, 'config', 'default.graphml'])
    
    # Mission Scheduler Server Node
    mission_server_node = Node(
        package='qr_mission_scheduler',
        executable='qr_mission_scheduler_server',
        name='mission_server',
        output='screen',
        parameters=[
            {
                'use_sim_time': LaunchConfiguration('use_sim_time'),
                'minimum_battery_threshold': 48.0,
                'max_charge': 98
            }
        ],
        remappings=[
            ('/odom', '/odom'),
            ('/battery_data', '/battery_data'),
        ]
    )
    
    # Mission Client Node
    mission_client_node = Node(
        package='qr_mission_scheduler',
        executable='qr_mission_scheduler_client',
        name='mission_client',
        output='screen',
        parameters=[
            {
                'use_sim_time': LaunchConfiguration('use_sim_time'),
                'rack_data_path': rack_data_path,
                'conveyor_data_path': conveyor_data_path,
                'starting_vertex': 19,
                'picked_count': 0,
                'max_bins': 9,
                'charge_destination': 7,
                'minimum_battery_threshold': 47.0,
                'max_charge': 98
            }
        ],
        remappings=[
            ('/wms_pick_tasks', '/wms_pick_tasks'),
            ('/wms_drop_tasks', '/wms_drop_tasks'),
            ('/battery_data', '/battery_data'),
        ]
    )
    
    # Global Path Graph Planner Node (if needed separately)
    # Uncomment if the planner runs as a separate node
    # path_planner_node = Node(
    #     package='global_path_graph_planner',
    #     executable='graph_planner_node',
    #     name='graph_planner',
    #     output='screen',
    #     parameters=[
    #         {
    #             'graph_map_file': graph_map_file,
    #             'planning_timeout': 10.0,
    #             'path_resolution': 0.1,
    #             'allow_reverse': True,
    #             'use_sim_time': LaunchConfiguration('use_sim_time')
    #         }
    #     ]
    #)
    
    return LaunchDescription([
        use_sim_time_arg,
        mission_server_node,
        mission_client_node,
        # path_planner_node,  # Uncomment if needed
    ])

