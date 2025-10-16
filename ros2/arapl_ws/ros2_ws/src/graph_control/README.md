# graph_control

A ROS2 package providing a plugin-based framework for graph navigation control. This package implements a flexible plugin system using `pluginlib` that allows dynamic loading of custom graph control implementations for robot navigation[web:26][web:16].

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Package Structure](#package-structure)
- [Usage](#usage)
- [Creating Custom Plugins](#creating-custom-plugins)
- [API Documentation](#api-documentation)
- [Building and Testing](#building-and-testing)
- [Examples](#examples)
- [License](#license)

## Overview

The `graph_control` package provides a standardized interface for implementing graph-based navigation control systems in ROS2. It uses the `pluginlib` framework to enable runtime loading of different navigation strategies without requiring code recompilation[web:10][web:16].

The package is designed for robotics applications where navigation decisions are made based on graph structures, such as topological maps, waypoint networks, or semantic navigation graphs[web:26].

## Features

- **Plugin-based architecture**: Dynamically load custom graph control implementations
- **ROS2 native**: Built for ROS2 using modern C++17 standards
- **Type-safe**: Strongly-typed interfaces with comprehensive error handling
- **Flexible**: Support for multiple graph control strategies through plugins
- **Well-documented**: Extensive API documentation and usage examples
- **Testing framework**: Integrated with ament testing tools

## Requirements

- **ROS2 Distribution**: Foxy, Galactic, Humble, Iron, or later
- **Build System**: ament_cmake
- **C++ Standard**: C++17 or higher
- **Dependencies**:
  - rclcpp
  - pluginlib
  - geometry_msgs
  - nav_msgs
  - graph_msgs
  - action_msgs
  - nav2_msgs
  - tf2
  - tf2_ros
  - tf2_geometry_msgs

## Installation

### From Source

1. **Create a ROS2 workspace** (if you don't have one):
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src

text

2. **Clone the repository**:
git clone <repository-url> graph_control

text

3. **Install dependencies**:
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y

text

4. **Build the package**:
colcon build --packages-select graph_control

text

5. **Source the workspace**:
source ~/ros2_ws/install/setup.bash

text

## Package Structure

graph_control/
├── CMakeLists.txt # Build configuration
├── package.xml # Package metadata and dependencies
├── README.md # This file
├── include/
│ └── graph_control/
│ ├── base_graph_control.hpp # Base class interface
│ └── graph_control_plugin_loader.hpp # Plugin loader utility
└── src/
└── graph_control_plugin_loader.cpp # Plugin loader implementation

text

## Usage

### Basic Usage in a Node

#include <rclcpp/rclcpp.hpp>
#include "graph_control/graph_control_plugin_loader.hpp"

int main(int argc, char** argv)
{
rclcpp::init(argc, argv);
auto node = std::make_sharedrclcpp::Node("graph_control_node");

// Create plugin loader
GraphControlPluginLoader plugin_loader(node);

// Load a specific plugin
std::string plugin_name = "my_package::MyGraphControl";
if (plugin_loader.loadGraphControlPlugin(plugin_name)) {

text
// Get plugin instance
auto graph_control = plugin_loader.getGraphControlInstance();

// Use the plugin
geometry_msgs::msg::Pose target_pose;
target_pose.position.x = 5.0;
target_pose.position.y = 3.0;

graph_control->sendGoal("vertex_1", 1, target_pose);

// Check goal status
if (graph_control->isGoalActive()) {
  RCLCPP_INFO(node->get_logger(), "Goal is active");
}
}

rclcpp::spin(node);
rclcpp::shutdown();
return 0;
}

text

### Loading Plugin from Parameters

// Declare parameter
node->declare_parameter("graph_control_plugin", "my_package::MyGraphControl");

// Get parameter value
std::string plugin_name = node->get_parameter("graph_control_plugin").as_string();

// Load plugin
GraphControlPluginLoader loader(node);
if (!loader.loadGraphControlPlugin(plugin_name)) {
RCLCPP_ERROR(node->get_logger(), "Failed to load plugin: %s", plugin_name.c_str());
return 1;
}

text

## Creating Custom Plugins

### Step 1: Create Plugin Package

cd ~/ros2_ws/src
ros2 pkg create --build-type ament_cmake --license Apache-2.0
--dependencies rclcpp graph_control geometry_msgs my_graph_control_plugin

text

### Step 2: Implement Plugin Class

Create `include/my_graph_control_plugin/my_graph_control.hpp`:

#pragma once

#include "graph_control/base_graph_control.hpp"
#include <rclcpp/rclcpp.hpp>

namespace my_graph_control_plugin
{

class MyGraphControl : public graph_control::BaseGraphControl
{
public:
MyGraphControl() = default;
virtual ~MyGraphControl() = default;

void initialize(const rclcpp::Node::SharedPtr& node) override;

void sendGoal(
const std::string& vertex_name,
uint32_t vertex_id,
const geometry_msgs::msg::Pose& vertex_pose) override;

void cancelGoal() override;

bool isGoalActive() const override;

private:
rclcpp::Node::SharedPtr node_;
bool goal_active_;
};

} // namespace my_graph_control_plugin

text

### Step 3: Implement Plugin Methods

Create `src/my_graph_control.cpp`:

#include "my_graph_control_plugin/my_graph_control.hpp"
#include <pluginlib/class_list_macros.hpp>

namespace my_graph_control_plugin
{

void MyGraphControl::initialize(const rclcpp::Node::SharedPtr& node)
{
node_ = node;
goal_active_ = false;
RCLCPP_INFO(node_->get_logger(), "MyGraphControl initialized");
}

void MyGraphControl::sendGoal(
const std::string& vertex_name,
uint32_t vertex_id,
const geometry_msgs::msg::Pose& vertex_pose)
{
RCLCPP_INFO(node_->get_logger(),
"Sending goal to vertex: %s (ID: %u)", vertex_name.c_str(), vertex_id);

// Your implementation here
goal_active_ = true;
}

void MyGraphControl::cancelGoal()
{
RCLCPP_INFO(node_->get_logger(), "Cancelling current goal");
goal_active_ = false;
}

bool MyGraphControl::isGoalActive() const
{
return goal_active_;
}

} // namespace my_graph_control_plugin

// Register the plugin
PLUGINLIB_EXPORT_CLASS(
my_graph_control_plugin::MyGraphControl,
graph_control::BaseGraphControl)

text

### Step 4: Create Plugin Description File

Create `plugins.xml`:

<library path="my_graph_control_plugin"> <class type="my_graph_control_plugin::MyGraphControl" base_class_type="graph_control::BaseGraphControl"> <description> Custom graph control implementation for navigation. </description> </class> </library> ```
Step 5: Update CMakeLists.txt
text
find_package(graph_control REQUIRED)

add_library(my_graph_control_plugin SHARED
  src/my_graph_control.cpp
)

ament_target_dependencies(my_graph_control_plugin
  rclcpp
  graph_control
  geometry_msgs
)

pluginlib_export_plugin_description_file(graph_control plugins.xml)

install(TARGETS my_graph_control_plugin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
Step 6: Update package.xml
text
<depend>graph_control</depend>

<export>
  <graph_control plugin="${prefix}/plugins.xml"/>
</export>
API Documentation
BaseGraphControl
Base class that all graph control plugins must inherit from[web:16].

Methods
void initialize(const rclcpp::Node::SharedPtr& node): Initialize the plugin with a ROS2 node

void sendGoal(const std::string& vertex_name, uint32_t vertex_id, const geometry_msgs::msg::Pose& vertex_pose): Send a navigation goal to a graph vertex

void cancelGoal(): Cancel the current navigation goal

bool isGoalActive() const: Check if a goal is currently being processed

GraphControlPluginLoader
Utility class for loading and managing graph control plugins[web:10].

Methods
GraphControlPluginLoader(const rclcpp::Node::SharedPtr& node): Constructor requiring a ROS2 node

bool loadGraphControlPlugin(const std::string& plugin_name): Load a plugin by its fully qualified class name

bool isGraphControlPluginLoaded() const: Check if a plugin is currently loaded

std::shared_ptr<graph_control::BaseGraphControl> getGraphControlInstance(): Get the loaded plugin instance

Building and Testing
Build the Package
text
cd ~/ros2_ws
colcon build --packages-select graph_control
Build with Tests
text
colcon build --packages-select graph_control --cmake-args -DBUILD_TESTING=ON
Run Tests
text
colcon test --packages-select graph_control
colcon test-result --verbose
Run Linters
text
cd ~/ros2_ws
colcon test --packages-select graph_control \
  --event-handlers console_direct+ \
  --pytest-args -k "test_copyright test_cppcheck test_cpplint"
Examples
List Available Plugins
text
ros2 pkg plugins --package graph_control graph_control::BaseGraphControl
Using in Launch Files
text
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_navigation_package',
            executable='navigation_node',
            name='navigation_node',
            parameters=[{
                'graph_control_plugin': 'my_graph_control_plugin::MyGraphControl'
            }]
        )
    ])
Troubleshooting
Plugin Not Found
If you get "Cannot load plugin" errors:

Verify the plugin is properly exported in package.xml

Check that plugins.xml exists and is correctly formatted

Ensure the plugin library is built and installed

Source your workspace: source ~/ros2_ws/install/setup.bash

Verify plugin registration: ros2 pkg plugins --package your_plugin_package graph_control::BaseGraphControl

Build Errors
Ensure all dependencies are installed: rosdep install --from-paths src --ignore-src -r -y

Check C++ standard is set to C++17 or higher in CMakeLists.txt

Verify graph_control package is built before plugin packages

Contributing
Contributions are welcome! Please follow these guidelines:

Fork the repository

Create a feature branch

Follow ROS2 C++ style guidelines

Add tests for new functionality

Ensure all tests pass

Submit a pull request

License
This package is licensed under the Apache License 2.0. See the LICENSE file for details[web:26].

Maintainers
Your Name - your.email@example.com