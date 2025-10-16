## graph_creator_rviz_plugin ##
A comprehensive RViz2 plugin for creating, editing, and visualizing graph structures in ROS2. This plugin provides an intuitive graphical interface for building topological maps, navigation graphs, and other graph-based representations within the RViz2 environment.​

## Overview ##
The graph_creator_rviz_plugin package provides interactive tools and panels for RViz2 to create and manipulate graph structures consisting of vertices (nodes) and edges (connections). It's particularly useful for robot navigation, task planning, and topological mapping applications.​

## Key Features ##
Interactive Graph Creation: Create vertices and edges directly in RViz2 using intuitive tools

Real-time Editing: Modify vertex positions, types, and properties on-the-fly

Custom Properties: Add key-value properties to vertices and edges

Multiple Edge Types: Support for straight line and cubic Bezier curve edges

Bidirectional Edges: Configure edge directionality (forward, reverse, bidirectional)

Graph Persistence: Load and save graphs in multiple formats

Visual Feedback: Live visualization of graph elements with interactive selection

ROS2 Integration: Full integration with ROS2 ecosystem and topic/service architecture

Table of Contents
Installation

Dependencies

Building

Usage

Components

Topics and Services

Configuration

Examples

Troubleshooting

Migration from ROS1

Contributing

License

Installation
Prerequisites
ROS2 Distribution: Humble, Iron, or Rolling

Operating System: Ubuntu 20.04 (Focal) or Ubuntu 22.04 (Jammy)

Qt5: Version 5.12 or higher

Dependencies
This package requires the following ROS2 packages:

bash
sudo apt update
sudo apt install ros-${ROS_DISTRO}-rviz2 \
                 ros-${ROS_DISTRO}-rviz-common \
                 ros-${ROS_DISTRO}-rviz-default-plugins \
                 ros-${ROS_DISTRO}-rviz-rendering \
                 ros-${ROS_DISTRO}-rviz-ogre-vendor \
                 ros-${ROS_DISTRO}-geometry-msgs \
                 ros-${ROS_DISTRO}-nav-msgs \
                 ros-${ROS_DISTRO}-std-msgs \
                 ros-${ROS_DISTRO}-tf2 \
                 ros-${ROS_DISTRO}-tf2-geometry-msgs \
                 qtbase5-dev \
                 libqt5-core \
                 libqt5-gui \
                 libqt5-widgets
Additionally, you need the following custom packages (ensure these are in your workspace):

graph_creator

graph_creator_msgs

graph_msgs

Building
Clone the Repository
bash
# Navigate to your ROS2 workspace
cd ~/ros2_ws/src

# Clone the repository
git clone <repository-url> graph_creator_rviz_plugin

# Install dependencies using rosdep
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y
Build the Package
bash
# Build the package
cd ~/ros2_ws
colcon build --packages-select graph_creator_rviz_plugin

# Source the workspace
source install/setup.bash
Verify Installation
bash
# Check if the plugin is recognized
ros2 pkg list | grep graph_creator_rviz_plugin

# Verify plugin library
ls install/graph_creator_rviz_plugin/lib/libgraph_creator_rviz_plugin.so
Usage
Launching RViz2 with the Plugin
bash
# Source your workspace
source ~/ros2_ws/install/setup.bash

# Launch RViz2
rviz2
Adding the Plugin to RViz2
1. Add the Graph Creator Panel
In RViz2, go to Panels → Add New Panel

Select graph_creator_rviz_plugin → GraphCreatorPanel

The panel will appear in the RViz2 interface (usually docked on the left or right side)

2. Add Interactive Tools
In the toolbar, click the "+" button to add a new tool

Select graph_creator_rviz_plugin → CreateVertexTool (or press 'v' shortcut)

Similarly, add graph_creator_rviz_plugin → SelectGraphElementsTool

Creating Vertices
Select the Create Vertex Tool from the toolbar or press v

Click on the ground plane in RViz2 to place a vertex

Drag to set the orientation, then release

The vertex will appear as a marker in the visualization

Edit properties in the Graph Creator Panel

Creating Edges
Click "Create Edges" button in the Graph Creator Panel

Select two vertices in sequence to create an edge between them

Configure edge type (Straight Line or Cubic Bezier) using the dropdown

Set edge direction (Forward, Reverse, or Bidirectional)

Editing Graph Elements
Select a vertex or edge using the Select Graph Elements Tool

Properties will appear in the panel's table view

Edit values directly:

Name: Text field

Type: Dropdown selection

Position: Double spin box for X/Y coordinates

Properties: Click "Edit" to open key-value property dialog

Loading and Saving Graphs
Save Graph
Enter graph details in the panel:

Graph Name: Your graph identifier

Format: Select from dropdown (YAML, JSON, etc.)

Package Name: ROS2 package for storage

Graph Folder: Subdirectory within package

Click "Save Graph"

Confirm the operation

Load Graph
Enter the graph details (same as save)

Select operation target: Graph Creator or Graph Server

Click "Load Graph"

Confirm the operation

Components
Graph Creator Panel
The main control interface for graph manipulation.​

Features:

Mode selection (Create Vertices / Create Edges)

Edge type configuration

Edge direction settings

Lock vertices/edges to prevent accidental modification

Graph element property editor

File operations (Load/Save)

UI Controls:

Create Vertices Button: Switch to vertex creation mode

Create Edges Button: Switch to edge creation mode

Edge Creation Type: Choose between straight lines or bezier curves

Edge Direction Type: Set directionality of edges

Lock Checkboxes: Prevent modifications to vertices or edges

Property Table: View and edit selected element properties

Graph Operations: Load, save, and refresh graph state

Create Vertex Tool
Interactive tool for placing vertices in the 3D environment.​

Usage:

Shortcut Key: v

Mouse Interaction: Click and drag to set position and orientation

Configuration Options:

Topic: ROS2 topic for publishing new vertex poses

Single Click: Auto-deactivate after one vertex creation

Topics:

Publishes: geometry_msgs/msg/PoseStamped on configurable topic (default: add_vertex_pose)

Select Graph Elements Tool
Tool for selecting and interacting with graph elements.​

Usage:

Click individual elements to select

Click and drag to select multiple elements

Selected elements' IDs are published for processing

Configuration Options:

Topic: Where selected element IDs are published

Single Selection: Auto-deactivate after one selection

Topics:

Publishes: graph_creator_msgs/msg/SelectedGraphElements on configurable topic

Topics and Services
Published Topics
Topic	Message Type	Description
graph_creator/updates/vertex	graph_msgs/msg/Vertex	Updated vertex information
graph_creator/updates/edge	graph_msgs/msg/Edge	Updated edge information
add_vertex_pose	geometry_msgs/msg/PoseStamped	New vertex pose from tool
graph_creator/selected_graph_elements	graph_creator_msgs/msg/SelectedGraphElements	Selected element IDs
Subscribed Topics
Topic	Message Type	Description
graph_creator/current/vertex	graph_msgs/msg/Vertex	Currently selected vertex
graph_creator/current/edge	graph_msgs/msg/Edge	Currently selected edge
graph_creator/current_state	graph_creator_msgs/msg/GraphCreatorState	Overall graph creator state
Service Clients
Service	Service Type	Description
graph_creator/set_mode	graph_creator_msgs/srv/SetMode	Switch between vertex/edge creation
graph_creator/set_edge_creation_type	graph_creator_msgs/srv/SetEdgeCreationType	Set edge geometry type
graph_creator/set_edge_direction_type	graph_creator_msgs/srv/SetEdgeDirectionType	Set edge directionality
graph_creator/set_vertices_locked	graph_creator_msgs/srv/SetVerticesLocked	Lock/unlock vertices
graph_creator/set_edges_locked	graph_creator_msgs/srv/SetEdgesLocked	Lock/unlock edges
graph_creator/get_state	graph_creator_msgs/srv/GetState	Retrieve current state
graph_creator/load_graph	graph_creator_msgs/srv/LoadGraph	Load graph from file
graph_creator/save_graph	graph_creator_msgs/srv/SaveGraph	Save graph to file
load_graph	graph_creator_msgs/srv/LoadGraph	Load graph (server mode)
Configuration
RViz2 Configuration
The plugin saves its configuration within RViz2 config files (.rviz). Saved parameters include:

Graph name

Graph format

Package name

Graph folder path

Panel layout and position

Example .rviz config snippet:

text
Panels:
  - Class: graph_creator_rviz_plugin/GraphCreatorPanel
    Name: GraphCreatorPanel
    graph_name: "my_navigation_graph"
    graph_format: "yaml"
    package_name: "my_robot_navigation"
    graph_folder: "maps/graphs"
Vertex Types
Supported vertex types (configurable):

Normal (0): Standard waypoint

Park (1): Parking location

Charge (2): Charging station

Control (3): Control point

Report (4): Reporting location

Edge Types
Straight Line (0): Direct line connection

Cubic Bezier (1): Smooth curved path with control points

Edge Directions
Forward (0): One-way in forward direction

Reverse (1): One-way in reverse direction

Bidirectional (2): Two-way traversal

Examples
Example 1: Creating a Simple Navigation Graph
bash
# Terminal 1: Launch the graph creator node
ros2 run graph_creator graph_creator_node

# Terminal 2: Launch RViz2
rviz2
In RViz2:

Add the Graph Creator Panel

Add the Create Vertex Tool

Set fixed frame to map

Click to create 4-5 vertices in a path pattern

Switch to "Create Edges" mode

Click vertices in sequence to connect them

Save the graph with name "navigation_path"

Example 2: Loading an Existing Graph
python
# In the Graph Creator Panel:
# - Graph Name: warehouse_layout
# - Format: yaml
# - Package Name: warehouse_navigation
# - Graph Folder: graphs
# Click "Load Graph"
Example 3: Programmatically Publishing Vertices
python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped

class VertexPublisher(Node):
    def __init__(self):
        super().__init__('vertex_publisher')
        self.pub = self.create_publisher(PoseStamped, 'add_vertex_pose', 10)
        
    def publish_vertex(self, x, y, theta):
        msg = PoseStamped()
        msg.header.frame_id = 'map'
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.pose.position.x = x
        msg.pose.position.y = y
        msg.pose.position.z = 0.0
        # Set orientation from theta
        # ... (quaternion conversion)
        self.pub.publish(msg)

def main():
    rclpy.init()
    node = VertexPublisher()
    node.publish_vertex(1.0, 2.0, 0.0)
    rclpy.spin(node)

if __name__ == '__main__':
    main()
Troubleshooting
Plugin Not Appearing in RViz2
Problem: The plugin doesn't show up in the Panels or Tools menu.

Solutions:

Verify the build was successful:

bash
ls install/graph_creator_rviz_plugin/lib/libgraph_creator_rviz_plugin.so
Check if the plugin is registered:

bash
ros2 pkg prefix graph_creator_rviz_plugin
Ensure you've sourced the workspace:

bash
source ~/ros2_ws/install/setup.bash
Check for plugin XML:

bash
cat install/graph_creator_rviz_plugin/share/graph_creator_rviz_plugin/plugin_description.xml
Service Call Failures
Problem: "Service not available" warnings.

Solutions:

Verify the graph creator node is running:

bash
ros2 node list | grep graph_creator
Check available services:

bash
ros2 service list | grep graph_creator
Ensure service types match:

bash
ros2 service type /graph_creator/set_mode
Build Errors with Qt
Problem: MOC or Qt-related compilation errors.

Solutions:

Ensure Qt5 is properly installed:

bash
apt list --installed | grep qt5
Clear build artifacts:

bash
rm -rf build/ install/ log/
colcon build --packages-select graph_creator_rviz_plugin
Add to CMakeLists.txt if needed:

text
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
Vertices Not Appearing
Problem: Created vertices don't display in RViz2.

Solutions:

Check the fixed frame is set correctly (map or appropriate frame)

Verify marker topics are being published:

bash
ros2 topic echo /graph_creator/visualization_markers
Ensure the visualization display is added and enabled in RViz2

Migration from ROS1
This package has been migrated from ROS1 to ROS2. Key changes include:​

API Changes
ROS1	ROS2
ros::NodeHandle	rclcpp::Node::SharedPtr
ros::Publisher	rclcpp::Publisher<T>::SharedPtr
ros::Subscriber	rclcpp::Subscription<T>::SharedPtr
ros::ServiceClient	rclcpp::Client<T>::SharedPtr
ROS_INFO	RCLCPP_INFO
rviz::Panel	rviz_common::Panel
rviz::Tool	rviz_common::Tool
Build System
ROS1: catkin with package.xml format 2

ROS2: ament_cmake with package.xml format 3

Message Namespaces
ROS1: graph_msgs::Vertex

ROS2: graph_msgs::msg::Vertex

Service Calls
ROS1 used synchronous client.call(), ROS2 uses asynchronous async_send_request() with futures.

Architecture
Class Diagram
text
rviz_common::Panel
    └── GraphCreatorPanel
            ├── ComboBoxItemDelegate
            ├── DoubleSpinBoxDelegate
            └── PropertiesDialogItemDelegate

rviz_default_plugins::tools::PoseTool
    └── CreateVertexTool

rviz_default_plugins::tools::SelectionTool
    └── SelectGraphElementsTool
Directory Structure
text
graph_creator_rviz_plugin/
├── CMakeLists.txt
├── package.xml
├── plugin_description.xml
├── README.md
├── include/
│   └── graph_creator_rviz_plugin/
│       ├── graph_creator_panel.hpp
│       ├── graph_creator_panel_ui.hpp
│       ├── properties_ui.hpp
│       ├── combo_box_delegate.hpp
│       ├── double_spin_box_delegate.hpp
│       ├── properties_dialog_delegate.hpp
│       └── tools/
│           ├── create_vertex_tool.hpp
│           └── select_graph_elements_tool.hpp
└── src/
    ├── graph_creator_panel.cpp
    ├── combo_box_delegate.cpp
    ├── double_spin_box_delegate.cpp
    ├── properties_dialog_delegate.cpp
    └── tools/
        ├── create_vertex_tool.cpp
        └── select_graph_elements_tool.cpp
Contributing
Contributions are welcome! Please follow these guidelines:

Fork the repository

Create a feature branch (git checkout -b feature/amazing-feature)

Commit your changes (git commit -m 'Add amazing feature')

Push to the branch (git push origin feature/amazing-feature)

Open a Pull Request

Code Style
Follow ROS2 C++ Style Guide

Use ament_cpplint and ament_uncrustify for linting

Document all public APIs with Doxygen comments

Testing
bash
# Run tests
colcon test --packages-select graph_creator_rviz_plugin

# View test results
colcon test-result --verbose
License
This package is licensed under the BSD License. See LICENSE file for details.

Maintainers
Your Name - email@example.com

Acknowledgments
ROS2 and RViz2 development teams

Original ROS1 graph_creator contributors

Qt framework developers

Related Packages
graph_creator: Core graph creation logic

graph_creator_msgs: Message and service definitions

graph_msgs: Standard graph message types

References
ROS2 Documentation

RViz2 User Guide

Building Custom RViz Panels

Qt5 Documentation

Changelog
Version 2.0.0 (Current)
Complete migration to ROS2

Updated API to ROS2 standards

Improved async service call handling

Enhanced error handling and logging

Updated build system to ament_cmake

Version 1.0.0 (ROS1 Legacy)
Initial ROS1 implementation

Basic graph creation functionality

