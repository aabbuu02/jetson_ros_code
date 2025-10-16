# start_robot

ROS2 package to launch the complete robot system.

## Overview
This package provides launch files to start all necessary components for the robot including:
- ANSCER AGV bringup
- ROSBridge WebSocket server

## Dependencies
- anscer_agv_bringup
- rosbridge_server

## Usage

### Build the package
cd ~/ros2_ws
colcon build --packages-select start_robot
source install/setup.bash

text

### Launch the robot
ros2 launch start_robot start_robot_launch.py

text

## License
TODO: Add license information
Directory Structure
The final package structure should look like:

text
start_robot/
├── CMakeLists.txt
├── package.xml
├── README.md
└── launch/
    └── start_robot_launch.py
