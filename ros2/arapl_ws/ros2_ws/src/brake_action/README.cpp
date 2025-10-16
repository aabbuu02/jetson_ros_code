README.md

# brake_action

[![ROS2](https://img.shields.io/badge/ROS2-Humble%20|%20Iron%20|%20Jazzy-blue)](https://docs.ros.org/en/humble/)
[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![C++17](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)

A ROS2 package for PLC brake control via Modbus TCP/IP communication. This package provides a robust interface for controlling industrial brake systems through Modbus protocol, enabling seamless integration between ROS2 applications and PLC hardware[web:36].

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [System Requirements](#system-requirements)
- [Installation](#installation)
- [Package Structure](#package-structure)
- [Configuration](#configuration)
- [Usage](#usage)
- [API Documentation](#api-documentation)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)
- [Authors](#authors)

## Overview

The `brake_action` package implements a higher-level interface for brake control systems that communicate with PLCs using the Modbus TCP/IP protocol[web:36]. It consists of two main components:

- **ModbusCommunicator**: Low-level Modbus TCP client for direct register read/write operations
- **HigherLevelInterface**: ROS2 node that subscribes to brake commands and translates them to Modbus operations[file:1][file:7]

This package was migrated from ROS1 to ROS2 with significant improvements including modern C++17 features, better error handling, and proper resource management[web:30][web:37].

## Features

- ✅ **Modbus TCP/IP Communication**: Industry-standard protocol for PLC communication
- ✅ **ROS2 Native**: Built with rclcpp, supporting ROS2 Humble and later distributions
- ✅ **Parameter-Driven Configuration**: All settings configurable via YAML files
- ✅ **Automatic Reconnection**: Respawn capability for robust operation
- ✅ **Type-Safe**: Modern C++17 with RAII and smart pointers
- ✅ **Quality of Service**: Configurable QoS settings for reliable communication
- ✅ **Comprehensive Logging**: Detailed RCLCPP logging for debugging[web:30]

## System Requirements

### Dependencies

- **ROS2 Distribution**: Humble, Iron, or Jazzy
- **Operating System**: Ubuntu 22.04+ (or compatible Linux distribution)
- **C++ Compiler**: GCC 9+ or Clang 10+ with C++17 support
- **CMake**: Version 3.8 or higher
- **libmodbus**: Version 3.1.4 or higher

### ROS2 Packages

- `rclcpp`
- `std_msgs`

## Installation

### 1. Install System Dependencies

Install libmodbus library
sudo apt-get update
sudo apt-get install libmodbus-dev

Verify installation
pkg-config --modversion libmodbus



### 2. Create ROS2 Workspace (if not exists)

mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src



### 3. Clone the Package

cd ~/ros2_ws/src
git clone <repository_url> brake_action



### 4. Install ROS2 Dependencies

cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y



### 5. Build the Package

cd ~/ros2_ws
colcon build --packages-select brake_action --cmake-args -DCMAKE_BUILD_TYPE=Release



### 6. Source the Workspace

source ~/ros2_ws/install/setup.bash



## Package Structure

brake_action/
├── CMakeLists.txt # Build configuration
├── package.xml # Package metadata
├── README.md # This file
├── LICENSE # Apache 2.0 license
├── include/
│ └── brake_action/
│ ├── ModbusCommunicator.h # Modbus client header
│ └── HigherLevelInterface.h # High-level interface header
├── src/
│ ├── ModbusCommunicator.cpp # Modbus implementation
│ └── HigherLevelInterface.cpp # High-level interface implementation
├── launch/
│ └── brake_action.launch.py # ROS2 Python launch file
└── config/
└── brake_action_params.yaml # Configuration parameters



## Configuration

### Parameter File: `config/brake_action_params.yaml`

/**:
ros__parameters:
# HigherLevelInterface parameters
update_rate: 10.0 # Update rate in Hz
subscriber_topic: "/brake_command" # Topic to receive brake commands
register_number: 0 # Modbus register number to write

modbus_communicator:
ros__parameters:
# ModbusCommunicator parameters
ip: "192.168.1.100" # PLC IP address
port: 502 # Modbus TCP port (default: 502)



### Configuration Parameters

#### HigherLevelInterface Parameters

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `update_rate` | double | 10.0 | Update rate in Hz for the node[file:3] |
| `subscriber_topic` | string | "/brake_command" | Topic name for brake command messages[file:3] |
| `register_number` | int | 0 | Modbus holding register number to write brake commands[file:3] |

#### ModbusCommunicator Parameters

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `ip` | string | "192.168.1.100" | IP address of the PLC/Modbus server[file:9] |
| `port` | int | 502 | TCP port for Modbus communication (standard is 502)[file:9][web:36] |

## Usage

### Launch the Node

#### Using Launch File (Recommended)

ros2 launch brake_action brake_action.launch.py



#### With Custom Configuration

ros2 launch brake_action brake_action.launch.py config_file:=/path/to/custom_config.yaml



#### With Debug Logging

ros2 launch brake_action brake_action.launch.py log_level:=debug



#### Direct Node Execution

ros2 run brake_action brake_action_node --ros-args --params-file config/brake_action_params.yaml

### Send Brake Commands

The node subscribes to `std_msgs/Bool` messages on the configured topic (default: `/brake_command`)[file:2][file:3].

Activate brake
ros2 topic pub /brake_command std_msgs/msg/Bool "{data: true}" --once

Deactivate brake
ros2 topic pub /brake_command std_msgs/msg/Bool "{data: false}" --once



### Monitor Node Status

Check node status
ros2 node info /brake_activator

View logs
ros2 topic echo /rosout | grep brake_activator

Monitor brake commands
ros2 topic echo /brake_command



## API Documentation

### ModbusCommunicator Class

The `ModbusCommunicator` class provides low-level Modbus TCP communication[file:8].

#### Public Methods

// Constructor - establishes connection to Modbus server
explicit ModbusCommunicator(const std::string& node_name = "modbus_communicator");

// Write data to a Modbus holding register
bool writeDataToRegister(int register_number, uint16_t data);

// Check connection status
bool isConnected() const;



#### Usage Example

#include "brake_action/ModbusCommunicator.h"

auto modbus = std::make_shared<brake_action::ModbusCommunicator>();
if (modbus->writeDataToRegister(0, 1)) {
RCLCPP_INFO(rclcpp::get_logger("example"), "Write successful");
}



### HigherLevelInterface Class

The `HigherLevelInterface` class provides ROS2 integration for brake control[file:2].

#### Public Methods

// Constructor - initializes node and Modbus connection
explicit HigherLevelInterface();



#### Subscribed Topics

| Topic | Type | Description |
|-------|------|-------------|
| `/brake_command` | `std_msgs/msg/Bool` | Brake activation command (true=activate, false=deactivate)[file:3] |

#### Published Topics

None (write-only to Modbus registers)[file:1].

## Troubleshooting

### Common Issues

#### 1. Connection Failed to Modbus Server

**Symptom**: Error message: "Modbus connection failed"

**Solutions**:
- Verify PLC IP address in configuration file[file:9]
- Check network connectivity: `ping <PLC_IP_ADDRESS>`
- Ensure PLC Modbus server is running on port 502[web:36]
- Check firewall settings on both systems
- Verify correct subnet and gateway configuration

#### 2. libmodbus Not Found

**Symptom**: Build error: "libmodbus library not found"

**Solution**:
sudo apt-get install libmodbus-dev
pkg-config --cflags --libs libmodbus



#### 3. Parameter Loading Failed

**Symptom**: Error message: "Failed to load parameters"

**Solutions**:
- Verify YAML file syntax and indentation[web:30]
- Check parameter names match configuration file
- Ensure config file path is correct in launch file

#### 4. Register Write Failed

**Symptom**: Error message: "Failed to write data to register"

**Solutions**:
- Verify register number is valid for your PLC[file:3]
- Check Modbus server has write permissions for that register
- Ensure connection is still active
- Check PLC register address mapping

### Debug Mode

Enable debug logging for detailed output:

ros2 launch brake_action brake_action.launch.py log_level:=debug



### Check Node Health

List active nodes
ros2 node list

Check node info
ros2 node info /brake_activator

Monitor parameter values
ros2 param list /brake_activator
ros2 param get /brake_activator ip



## Testing

### Unit Tests

cd ~/ros2_ws
colcon test --packages-select brake_action
colcon test-result --verbose



### Integration Testing

Test with a Modbus simulator:

Install Modbus simulator (diagslave)
sudo apt-get install diagslave

Run Modbus TCP server simulator
diagslave -m tcp -p 502

In another terminal, launch the node
ros2 launch brake_action brake_action.launch.py



## Performance Considerations

- Default update rate is 10 Hz, adjustable via `update_rate` parameter[file:3]
- Modbus TCP typically supports 1-100 Hz communication rates[web:36]
- Network latency affects response times (typically 5-50ms on local network)
- Consider QoS settings for critical applications[web:30]

## Migration from ROS1

This package has been migrated from ROS1 to ROS2 with the following improvements:

- Modern C++17 features (smart pointers, RAII patterns)[web:30]
- ROS2 parameter system with validation[web:37]
- Exception-based error handling (no more `exit(0)`)
- Proper resource cleanup with destructors
- Python launch files with arguments[web:37]
- Namespace organization
- Improved logging and diagnostics[web:30]

For ROS1 users, key changes include:
- `ros::NodeHandle` → `rclcpp::Node`
- `ros::Subscriber` → `rclcpp::Subscription`
- `ROS_INFO` → `RCLCPP_INFO`
- `.launch` XML → `.launch.py` Python files[web:37]

## Contributing

Contributions are welcome! Please follow these guidelines:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Follow ROS2 C++ style guide[web:30]
4. Add tests for new functionality
5. Commit changes (`git commit -m 'Add amazing feature'`)
6. Push to branch (`git push origin feature/amazing-feature`)
7. Open a Pull Request

## License

This project is licensed under the Apache 2.0 License - see the [LICENSE](LICENSE) file for details[web:30][web:37].

Copyright 2025 Anscer Robotics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at


http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.



## Authors

- **Jishnu** - *Initial work and ROS2 migration* - jishnu@anscer.com[file:1][file:7]

## Acknowledgments

- Built with [libmodbus](https://libmodbus.org/) library
- Follows [ROS2 best practices](https://docs.ros.org/en/rolling/The-ROS2-Project/Contributing/Developer-Guide.html)[web:30]
- Modbus TCP/IP protocol specification[web:36]

## Support

For issues, questions, or contributions:
- Open an issue on GitHub
- Contact: jishnu@anscer.com[file:1]
- ROS Discourse: [ROS Discourse](https://discourse.ros.org/)

## Version History

- **v2.0.0** (2025-10-11)
  - Complete ROS2 migration from ROS1[file:1]
  - Modern C++17 implementation[web:30]
  - Improved error handling and resource management
  - Python launch file support[web:37]
  - Enhanced documentation

- **v0.1** (2022-07-23)
  - Initial ROS1 implementation[file:1][file:7]
  - Basic Modbus TCP communication
  - Brake control functionality