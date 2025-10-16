# Emergency Handler

[![ROS 2 Version](https://img.shields.io/badge/ROS_2-Humble_|_Iron_|_Jazzy-blue)](https://docs.ros.org)
[![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

## Overview

The **emergency_handler** package is a ROS 2 node that aggregates emergency stop (e-stop) signals from multiple sources to ensure safe robot operation. It monitors obstacle detection from LIDAR, physical e-stop buttons, web application commands, tag detection failures, and velocity commands to intelligently manage emergency stop states.

**Key Features:**
- Multi-source e-stop signal aggregation
- Intelligent collision avoidance based on LIDAR data
- Manual override capability via joystick/keyboard control
- Real-time emergency state monitoring at 20Hz
- Separate e-stop channels for different sources (LIDAR, buttons, tag detection)

**Author/Maintainer:** Your Name (your_email@example.com)

---

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Nodes](#nodes)
- [Topics](#topics)
- [Launch Files](#launch-files)
- [Configuration](#configuration)
- [Architecture](#architecture)
- [Building and Testing](#building-and-testing)
- [Contributing](#contributing)
- [License](#license)

---

## Installation

### Prerequisites

- ROS 2 Humble/Iron/Jazzy or later
- C++17 compiler
- `anscer_msgs` package (custom messages)

### Building from Source

1. **Create a workspace** (if you don't have one):
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src

text

2. **Clone the repository**:
git clone https://github.com/your_username/emergency_handler.git

text

3. **Install dependencies**:
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y

text

4. **Build the package**:
colcon build --packages-select emergency_handler

text

5. **Source the workspace**:
source ~/ros2_ws/install/setup.bash

text

---

## Usage

### Running the Node

**Using the launch file (recommended):**
ros2 launch emergency_handler emergency_handler.launch.py

text

**Running directly:**
ros2 run emergency_handler emergency_handler

text

**With custom log level:**
ros2 launch emergency_handler emergency_handler.launch.py log_level:=debug

text

### Quick Start Example

Terminal 1: Start the emergency handler
ros2 launch emergency_handler emergency_handler.launch.py

Terminal 2: Monitor e-stop state
ros2 topic echo /e_stop

Terminal 3: Trigger manual e-stop
ros2 topic pub /e_stop/button std_msgs/msg/Bool "{data: true}"

text

---

## Nodes

### emergency_handler

The main node that processes multiple e-stop signals and publishes aggregated emergency stop states.

#### Subscribed Topics

| Topic | Type | Description |
|-------|------|-------------|
| `/obstacle_detection` | `anscer_msgs/msg/SafetyFields` | LIDAR-based obstacle detection (front/rear) |
| `/e_stop/button` | `std_msgs/msg/Bool` | Physical emergency stop button state |
| `/e_stop/webApp` | `std_msgs/msg/Bool` | Web application emergency stop command |
| `cmd_vel` | `geometry_msgs/msg/Twist` | Autonomous velocity commands |
| `joy/cmd_vel` | `geometry_msgs/msg/Twist` | Manual joystick/keyboard velocity commands |
| `e_stop/tag_detection` | `std_msgs/msg/Bool` | Tag detection failure e-stop |

#### Published Topics

| Topic | Type | Description |
|-------|------|-------------|
| `e_stop` | `std_msgs/msg/Bool` | Aggregated e-stop state (any source active) |
| `e_stop/lidar` | `std_msgs/msg/Bool` | LIDAR-based collision avoidance e-stop |
| `e_stop/buttons` | `std_msgs/msg/Bool` | Manual button/web app e-stop state |

#### Parameters

Currently, the node does not use configurable parameters but operates at a fixed 20Hz publishing rate.

---

## Launch Files

### emergency_handler.launch.py

The main launch file for starting the emergency handler node.

**Arguments:**
- `log_level` (default: `info`): Logging verbosity (`debug`, `info`, `warn`, `error`, `fatal`)

**Example:**
ros2 launch emergency_handler emergency_handler.launch.py log_level:=debug

text

---

## Configuration

### Message Dependencies

This package requires the `anscer_msgs` package with the following message definition:

**anscer_msgs/msg/SafetyFields.msg:**
Safety[] safety

text

**anscer_msgs/msg/Safety.msg:**
bool is_front
bool is_rear

text

Ensure this package is available in your workspace before building.

---

## Architecture

### Logic Flow

┌─────────────────────────────────────────────────────────────┐
│ Emergency Handler Node │
├─────────────────────────────────────────────────────────────┤
│ │
│ Inputs: Outputs: │
│ ├─ /obstacle_detection ────→ ├─ /e_stop │
│ ├─ /e_stop/button ────→ ├─ /e_stop/lidar │
│ ├─ /e_stop/webApp ────→ └─ /e_stop/buttons │
│ ├─ cmd_vel ────→ │
│ ├─ joy/cmd_vel ────→ Logic: │
│ └─ e_stop/tag_detection ────→ - LIDAR collision check │
│ - Manual override support │
│ - Multi-source aggregation │
│ - 20Hz publishing rate │
└─────────────────────────────────────────────────────────────┘

text

### E-Stop Priority Logic

1. **Physical/Web Button**: Highest priority - always triggers e-stop
2. **LIDAR Collision**: Prevents movement toward detected obstacles
3. **Tag Detection Failure**: Prevents autonomous operation
4. **Manual Override**: Joystick commands can override LIDAR e-stop

### Key Behaviors

- **Forward collision prevention**: E-stop activates when LIDAR detects front obstacle AND robot commanded forward
- **Backward collision prevention**: E-stop activates when LIDAR detects rear obstacle AND robot commanded backward
- **Manual override**: Joystick input (opposite direction) can override LIDAR e-stop for controlled retreat
- **Tag detection reset**: Manual control clears tag detection e-stop

---

## Building and Testing

### Build the Package

cd ~/ros2_ws
colcon build --packages-select emergency_handler --symlink-install

text

### Run Tests

colcon test --packages-select emergency_handler
colcon test-result --verbose

text

### Check Code Style

C++ linting
ament_cpplint src/
ament_cppcheck src/

Python linting
ament_flake8 launch/

text

---

## Development

### Project Structure

emergency_handler/
├── CMakeLists.txt
├── package.xml
├── README.md
├── LICENSE
├── include/
│ └── emergency_handler.h
├── src/
│ └── emergency_handler.cpp
└── launch/
└── emergency_handler.launch.py

text

### Adding New E-Stop Sources

1. Add subscriber in `emergency_handler.h`
2. Implement callback in `emergency_handler.cpp`
3. Update logic in `publishMessages()` method
4. Update this README documentation

### Debugging Tips

**Enable debug logging:**
ros2 run emergency_handler emergency_handler --ros-args --log-level debug

text

**Monitor all e-stop topics:**
ros2 topic echo /e_stop &
ros2 topic echo /e_stop/lidar &
ros2 topic echo /e_stop/buttons

text

**Visualize topic graph:**
rqt_graph

text

---

## Troubleshooting

### Common Issues

**Issue**: Node fails to build with "anscer_msgs not found"
- **Solution**: Ensure `anscer_msgs` package is built first:
colcon build --packages-select anscer_msgs
source install/setup.bash
colcon build --packages-select emergency_handler

text

**Issue**: E-stop not triggering
- **Solution**: Verify topics are being published:
ros2 topic list
ros2 topic hz /obstacle_detection

text

**Issue**: High CPU usage
- **Solution**: This is normal at 20Hz publishing rate. Adjust timer in source if needed.

---

## API Documentation

### EmergencyHandler Class

**Constructor:**
EmergencyHandler()

text
Initializes all subscribers, publishers, and starts the 20Hz timer.

**Public Methods:**
void publishMessages()

text
Main processing loop that evaluates all e-stop conditions and publishes states.

**Private Callback Methods:**
- `void detectionCallback(const anscer_msgs::msg::SafetyFields::SharedPtr msg)`
- `void eStopButtonCallback(const std_msgs::msg::Bool::SharedPtr msg)`
- `void eStopWebAppCallback(const std_msgs::msg::Bool::SharedPtr msg)`
- `void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)`
- `void keyCmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)`
- `void tagDetFailCallback(const std_msgs::msg::Bool::SharedPtr msg)`

---

## Contributing

Contributions are welcome! Please follow these guidelines:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-feature`)
3. Follow ROS 2 C++ style guide
4. Add tests for new functionality
5. Update documentation
6. Submit a pull request

### Code Style

This project follows the [ROS 2 C++ Style Guide](https://docs.ros.org/en/rolling/The-ROS2-Project/Contributing/Code-Style-Language-Versions.html).

---

## License

This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE) file for details.

Copyright 2025 Your Organization

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

text
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

text

---

## Changelog

### Version 2.0.0 (ROS 2)
- Complete migration from ROS 1 to ROS 2
- Modern C++17 implementation
- Python launch file support
- Enhanced logging with throttling
- QoS policy support
- Timer-based publishing architecture

### Version 1.0.0 (ROS 1)
- Initial ROS 1 implementation
- Basic e-stop aggregation

---

## References

- [ROS 2 Documentation](https://docs.ros.org)
- [rclcpp API Documentation](https://docs.ros2.org/latest/api/rclcpp/)
- [ROS 2 Migration Guide](https://docs.ros.org/en/rolling/How-To-Guides/Migrating-from-ROS1.html)

---

## Support

For issues, questions, or contributions:
- **Issue Tracker**: https://github.com/your_username/emergency_handler/issues
- **Email**: your_email@example.com
- **ROS Discourse**: https://discourse.ros.org

---