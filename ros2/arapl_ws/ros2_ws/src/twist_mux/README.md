# twist_mux

[![ROS2](https://img.shields.io/badge/ROS2-Humble%20|%20Iron%20|%20Jazzy-blue)](https://docs.ros.org)
[![License](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc-sa/4.0/)
[![C++17](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)

## Overview

**twist_mux** is a ROS2 package that provides a robust priority-based multiplexer for `geometry_msgs/msg/Twist` velocity commands[web:15]. When multiple sources need to control a robot (navigation, teleoperation, emergency stops, etc.), this package arbitrates between them using configurable priorities and timeout mechanisms[web:16].

### Key Features

- **Priority-based multiplexing**: Higher priority sources override lower priority ones
- **Timeout management**: Automatically switches to fallback sources when messages timeout
- **Lock mechanism**: Emergency stops and safety locks can inhibit velocity commands based on priority
- **Diagnostics integration**: Built-in diagnostic monitoring via `diagnostic_updater`
- **Visualization support**: Optional twist marker visualization
- **Modern C++17 implementation**: Uses smart pointers, RCLCPP2 APIs, and best practices

## Table of Contents

- [Installation](#installation)
- [Architecture](#architecture)
- [Usage](#usage)
- [Configuration](#configuration)
- [Topics](#topics)
- [Parameters](#parameters)
- [Launch Files](#launch-files)
- [Examples](#examples)
- [Diagnostics](#diagnostics)
- [Development](#development)
- [License](#license)

## Installation

### From Source

Navigate to your ROS2 workspace
cd ~/ros2_ws/src

Clone the repository
git clone https://github.com/your-org/twist_mux.git

Install dependencies
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y

Build the package
colcon build --packages-select twist_mux

Source the workspace
source install/setup.bash

text

### Dependencies

- ROS2 (Humble/Iron/Jazzy or later)
- rclcpp
- std_msgs
- geometry_msgs
- visualization_msgs
- diagnostic_updater

## Architecture

The twist_mux system operates with three main components[web:16][web:19]:

┌─────────────────────────────────────────────────────────┐
│ Twist Multiplexer │
│ │
│ ┌─────────────────┐ Priority & Timeout ┌────────┐│
│ │ Velocity Inputs │───────────────────────────▶│ Mux ││
│ │ - Navigation │ │ Logic ││
│ │ - Joystick │ Lock Signals │ ││
│ │ - Keyboard │◀───────────────────────────│ ││
│ │ - Autonomy │ └────┬───┘│
│ └─────────────────┘ │ │
│ │ │
│ ┌─────────────────┐ │ │
│ │ Lock Inputs │ │ │
│ │ - E-Stop │ │ │
│ │ - Safety Lock │ │ │
│ └─────────────────┘ │ │
│ ▼ │
│ ┌──────────────┐│
│ │ cmd_vel_out ││
│ └──────────────┘│
└─────────────────────────────────────────────────────────┘

text

### How It Works

1. **Velocity Topic Handlers**: Subscribe to multiple twist input topics
2. **Lock Topic Handlers**: Subscribe to boolean lock signals
3. **Priority Resolution**: 
   - Locks with higher priority mask velocity inputs below their priority
   - Among unmasked velocity inputs, the highest priority source is selected
   - If a source times out, the next available source takes over
4. **Output Publishing**: Selected twist commands are published to `cmd_vel_out`

## Usage

### Basic Launch

Launch twist_mux with default configuration
ros2 launch twist_mux twist_mux.launch.py

Launch with custom config file
ros2 launch twist_mux twist_mux.launch.py config_file:=/path/to/config.yaml

Launch with custom output topic
ros2 launch twist_mux twist_mux.launch.py cmd_vel_out:=/mobile_base/cmd_vel

text

### Running the Node Directly

Run the twist_mux node
ros2 run twist_mux twist_mux_node --ros-args --params-file /path/to/config.yaml

Run with remapping
ros2 run twist_mux twist_mux_node --ros-args
--params-file config/twist_mux.yaml
-r cmd_vel_out:=/cmd_vel

text

### Twist Marker Visualization

Launch twist marker for visualization in RViz
ros2 run twist_mux twist_marker_node --ros-args -r twist:=/cmd_vel_out

text

## Configuration

Configuration is done via YAML parameter files[web:16]. The package expects a structured configuration defining velocity topics and lock topics.

### Example Configuration File

/**:
ros__parameters:
# Velocity input topics
topics:
- name: "navigation"
topic: "navigation/cmd_vel"
timeout: 0.5 # seconds (0.0 = no timeout)
priority: 1 # 0-255 (higher = more priority)

text
  - name: "dock"
    topic: "docking/cmd_vel"
    timeout: 0.5
    priority: 10
  
  - name: "line_follower"
    topic: "line_follower/cmd_vel"
    timeout: 0.5
    priority: 20
  
  - name: "joy"
    topic: "joy/cmd_vel"
    timeout: 0.5
    priority: 50          # Joystick has high priority

# Lock topics (emergency stops, safety)
locks:
  - name: "e_stop"
    topic: "e_stop"
    timeout: 0.0          # No timeout for safety
    priority: 255         # Maximum priority
text

### Configuration Parameters

#### Velocity Topics

Each velocity topic requires:

| Parameter | Type | Description |
|-----------|------|-------------|
| `name` | string | Human-readable identifier for diagnostics |
| `topic` | string | ROS topic name (type: `geometry_msgs/msg/Twist`) |
| `timeout` | double | Message timeout in seconds (0.0 = never timeout) |
| `priority` | int | Priority level (0-255, higher = more priority) |

#### Lock Topics

Each lock topic requires:

| Parameter | Type | Description |
|-----------|------|-------------|
| `name` | string | Human-readable identifier for diagnostics |
| `topic` | string | ROS topic name (type: `std_msgs/msg/Bool`) |
| `timeout` | double | Message timeout in seconds (0.0 = never timeout) |
| `priority` | int | Lock priority level (0-255) |

**Lock Behavior**: When a lock topic publishes `true` or times out, it masks all velocity topics with priority less than the lock's priority[web:16].

## Topics

### Subscribed Topics

The twist_mux node subscribes to topics defined in the configuration file:

- **Velocity inputs** (N topics): `geometry_msgs/msg/Twist`
  - Multiple velocity command sources
  
- **Lock inputs** (M topics): `std_msgs/msg/Bool`
  - Safety locks and emergency stops

### Published Topics

| Topic | Type | Description |
|-------|------|-------------|
| `/cmd_vel_out` | `geometry_msgs/msg/Twist` | Multiplexed velocity output (remappable) |

### Diagnostic Topics

| Topic | Type | Description |
|-------|------|-------------|
| `/diagnostics` | `diagnostic_msgs/msg/DiagnosticArray` | System diagnostics information |

## Parameters

Runtime parameters can be accessed via ROS2 parameter server:

List all parameters
ros2 param list /twist_mux

Get parameter value
ros2 param get /twist_mux topics

Set parameter (requires node restart for topic configuration)
ros2 param set /twist_mux <param_name> <value>

text

## Launch Files

### twist_mux.launch.py

Primary launch file for the twist_mux node.

**Arguments**:
- `config_file`: Path to configuration YAML (default: `config/twist_mux.yaml`)
- `cmd_vel_out`: Output topic name (default: `cmd_vel`)

**Example**:
ros2 launch twist_mux twist_mux.launch.py
config_file:=$(ros2 pkg prefix twist_mux)/share/twist_mux/config/custom_config.yaml
cmd_vel_out:=/mobile_base/commands/velocity

text

## Examples

### Typical Robot Setup

A common robot configuration might include[web:16][web:23]:

1. **Priority 1**: Autonomous navigation (`move_base`/`nav2`)
2. **Priority 10**: Docking controller
3. **Priority 50**: Teleoperation (joystick/keyboard)
4. **Priority 255**: Emergency stop lock

This setup allows:
- Teleoperation to override autonomous navigation
- Docking to take precedence during docking operations
- Emergency stop to halt all movement

### Integration with Nav2

/**:
ros__parameters:
topics:
- name: "navigation"
topic: "/cmd_vel" # Nav2 output
timeout: 0.5
priority: 10

text
  - name: "teleop"
    topic: "/teleop/cmd_vel"    # Teleoperation input
    timeout: 0.5
    priority: 100

locks:
  - name: "emergency_stop"
    topic: "/emergency_stop"
    timeout: 0.0
    priority: 255
text

Launch alongside Nav2:
Terminal 1: Launch Nav2
ros2 launch nav2_bringup navigation_launch.py

Terminal 2: Launch twist_mux
ros2 launch twist_mux twist_mux.launch.py

Terminal 3: Launch teleoperation
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r cmd_vel:=/teleop/cmd_vel

text

### Testing Priority Behavior

Terminal 1: Run twist_mux
ros2 run twist_mux twist_mux_node --ros-args --params-file config/twist_mux.yaml

Terminal 2: Publish low priority velocity
ros2 topic pub /navigation/cmd_vel geometry_msgs/msg/Twist
"{linear: {x: 0.5, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

Terminal 3: Publish high priority velocity (overrides Terminal 2)
ros2 topic pub /joy/cmd_vel geometry_msgs/msg/Twist
"{linear: {x: 0.2, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.5}}"

Terminal 4: Monitor output
ros2 topic echo /cmd_vel_out

text

## Diagnostics

The twist_mux node publishes comprehensive diagnostic information via the `/diagnostics` topic.

### Viewing Diagnostics

View raw diagnostics
ros2 topic echo /diagnostics

Use rqt_runtime_monitor for GUI
ros2 run rqt_runtime_monitor rqt_runtime_monitor

text

### Diagnostic Information

The diagnostics include:
- **Status**: OK, WARN, or ERROR
- **Loop timing**: Main loop execution time
- **Data age**: Age of most recent velocity command
- **Topic status**: Status of each velocity and lock input
  - Active/masked state
  - Topic name and timeout
  - Priority level
- **Current priority**: Currently selected input priority

### Diagnostic Thresholds

| Condition | Threshold | Level |
|-----------|-----------|-------|
| Loop time | > 0.2s | ERROR |
| Data age | > 3.0s | ERROR |
| Normal operation | - | OK |

## Development

### Package Structure

twist_mux/
├── CMakeLists.txt
├── package.xml
├── README.md
├── include/
│ └── twist_mux/
│ ├── topic_handle.hpp
│ ├── twist_mux.hpp
│ ├── twist_mux_diagnostics.hpp
│ ├── twist_mux_diagnostics_status.hpp
│ └── utils.hpp
├── src/
│ ├── twist_mux.cpp
│ ├── twist_mux_node.cpp
│ ├── twist_mux_diagnostics.cpp
│ └── twist_marker.cpp
├── launch/
│ └── twist_mux.launch.py
└── config/
└── twist_mux.yaml

text

### Building from Source

Build with debug symbols
colcon build --packages-select twist_mux --cmake-args -DCMAKE_BUILD_TYPE=Debug

Run tests
colcon test --packages-select twist_mux
colcon test-result --verbose

Clean build
rm -rf build install log
colcon build --packages-select twist_mux

text

### Code Style

This package follows:
- **C++17** standard
- **ROS2 style guide** for naming conventions
- **Modern C++ best practices** (smart pointers, RAII, const correctness)

### Contributing

Contributions are welcome! Please:
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## Troubleshooting

### Common Issues

**Issue**: No velocity output from twist_mux

**Solutions**:
- Check topic names match configuration: `ros2 topic list`
- Verify messages are being published: `ros2 topic echo /navigation/cmd_vel`
- Check diagnostics: `ros2 topic echo /diagnostics`
- Ensure no locks are active

**Issue**: Wrong velocity source is active

**Solutions**:
- Verify priority configuration in YAML file
- Check for timeout issues (increase timeout values)
- Review lock topic states
- Monitor diagnostics for current priority

**Issue**: Robot stops unexpectedly

**Solutions**:
- Check timeout values (may be too short)
- Verify lock topics are publishing correctly
- Review diagnostic status for ERROR conditions
- Increase message publication rate from controllers

## Performance Considerations

- **Update Rate**: The node processes callbacks as they arrive (event-driven)
- **Diagnostics Rate**: Published at 1Hz by default
- **Latency**: Minimal (microsecond range) with proper QoS settings
- **CPU Usage**: Very low (~0.1-0.5% on typical systems)

## Migrating from ROS1

Key changes from ROS1 version:
- Parameter format updated to ROS2 YAML structure
- Launch files converted to Python-based launch system
- Replaced `ros::NodeHandle` with `rclcpp::Node`
- Replaced `boost::shared_ptr` with `std::shared_ptr`
- Updated diagnostic_updater API calls
- Removed XML-RPC helpers (use ROS2 parameters directly)

## Related Packages

- **nav2**: For autonomous navigation integration
- **teleop_twist_keyboard**: Keyboard teleoperation
- **joy**: Joystick input
- **twist_mux_msgs**: Additional message types (if needed)
- **cmd_vel_mux**: Alternative multiplexer (Kobuki-based)

## References

- [ROS2 twist_mux documentation](https://docs.ros.org/en/ros2_packages/jazzy/api/twist_mux/)
- [ROS Wiki (ROS1 version)](http://wiki.ros.org/twist_mux)
- [GitHub Repository](https://github.com/ros-teleop/twist_mux)

## License

This package is licensed under the **Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License** (CC BY-NC-SA 4.0).

See [LICENSE](https://creativecommons.org/licenses/by-nc-sa/4.0/) for more details.

## Authors and Maintainers

**Original Authors**:
- Enrique Fernández <efernandez@clearpathrobotics.com>
- Siegfried-A. Gevatter Pujals <siegfried.gevatter@pal-robotics.com>

**ROS2 Conversion**:
- [Your Name] <your.email@example.com>

## Acknowledgments

- PAL Robotics for the original ROS1 implementation
- ROS2 community for ongoing support and feedback

---