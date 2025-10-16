from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get package directory
    pkg_dir = get_package_share_directory('reader_modules')
    
    # Path to config file
    config_file = os.path.join(pkg_dir, 'config', 'shelf_reader.yaml')
    
    return LaunchDescription([
        Node(
            package='reader_modules',
            executable='shelf_reader',
            name='shelf_reader',
            output='screen',
            parameters=[config_file],
            emulate_tty=True
        )
    ])
