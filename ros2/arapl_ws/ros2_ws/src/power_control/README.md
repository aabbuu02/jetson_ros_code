# power_control

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![ROS2](https://img.shields.io/badge/ROS2-Humble%20|%20Iron%20|%20Jazzy-blue)](https://docs.ros.org)

A ROS2 package for managing system power control operations in a master-slave architecture. This package provides robust power management functionality including system poweroff and reboot capabilities with distributed control across multiple systems.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Architecture](#architecture)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Configuration](#configuration)
- [Usage](#usage)
- [Services](#services)
- [Parameters](#parameters)
- [Examples](#examples)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)

## Overview

The `power_control` package enables coordinated power management across multiple robotic systems or computing devices in a ROS2 network[attached_file:1]. It supports master-slave configurations where a master system can control the power state of multiple slave systems, making it ideal for distributed robotics applications, multi-computer setups, or autonomous system deployments[attached_file:1].

### Key Capabilities

- **Master-Slave Architecture**: Coordinate power operations across multiple systems
- **Service-Based Control**: Trigger poweroff and reboot operations via ROS2 services
- **Dynamic Reconfiguration**: Adjust power control settings at runtime without restart
- **Safety Features**: Enable/disable controls for testing and development
- **Passwordless Operation**: Automated sudo configuration for seamless power management

## Features

- ✅ **System Poweroff**: Gracefully shutdown local or remote systems
- ✅ **System Reboot**: Restart local or remote systems on demand
- ✅ **Master Control**: Manage multiple slave systems from a single master
- ✅ **Runtime Parameters**: Enable/disable power control without recompilation
- ✅ **Thread-Safe**: Atomic operations for concurrent service requests
- ✅ **Timeout Handling**: Robust service client implementation with configurable timeouts
- ✅ **Logging**: Comprehensive RCLCPP logging for debugging and monitoring

## Architecture

┌───────────────────────────────┐
│     Master System (NX)        │
│ ┌───────────────────────────┐ │
│ │ power_control_node        │ │
│ │ - Poweroff Service Server │ │
│ │ - Reboot Service Server   │ │
│ │ - Slave Management        │ │
│ └───────────────────────────┘ │
└──────────────┬────────────────┘
               │
    ┌──────────┴──────────┐
    │                     │
    ▼                     ▼
    ┌─────────┐ ┌─────────┐
    │ Slave 1 │ │ Slave 2 │
    │ Node    │ │  Node   │
    └─────────┘ └─────────┘



## Prerequisites

### System Requirements

- **OS**: Ubuntu 20.04+ or compatible Linux distribution
- **ROS2**: Humble Hawksbill, Iron Irwini, or Jazzy Jalisco
- **Compiler**: GCC 9.0+ with C++17 support
- **Build System**: colcon

### Dependencies

All dependencies are automatically handled by rosdep:

- `rclcpp` - ROS2 C++ client library
- `std_srvs` - Standard service definitions
- `std_msgs` - Standard message definitions
- `sensor_msgs` - Sensor message definitions
- `rcl_interfaces` - ROS client library interfaces

## Installation

### From Source

1. **Create a workspace** (if you don't have one):
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src

2. **Clone the repository**:
git clone <repository_url> power_control


3. **Install dependencies**:
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y


4. **Build the package**:
colcon build --packages-select power_control


5. **Source the workspace**:
source ~/ros2_ws/install/setup.bash



### Setup Permissions

To enable passwordless power control operations, run the permission setup script:

For current user
ros2 run power_control setup_pwr_ctrl_permission.sh

For specific user
ros2 run power_control setup_pwr_ctrl_permission.sh <username>


This configures `/etc/sudoers` to allow the specified user to execute poweroff, reboot, and shutdown commands without password prompts[attached_file:1].

## Configuration

### Configuration File

The package uses a YAML configuration file located at `config/power_control.yaml`. Customize this file for your system:

power_control_node:
ros__parameters:
# System identification
system_name: "nx" # Unique name for this system
is_system_master: true # true = master, false = slave

# Power control settings
enable_system_power_control: true        # Enable local power control
enable_slave_power_control: false        # Enable slave system control (master only)

# Slave configuration (master only)
slave_system_names: []                   # e.g., ["slave1", "slave2", "slave3"]


### Master System Configuration

For a master system controlling two slaves:

power_control_node:
ros__parameters:
system_name: "master_nx"
is_system_master: true
enable_system_power_control: true
enable_slave_power_control: true
slave_system_names: ["jetson_slave1", "jetson_slave2"]

### Slave System Configuration

For a slave system:

power_control_node:
ros__parameters:
system_name: "jetson_slave1"
is_system_master: false
enable_system_power_control: true
enable_slave_power_control: false
slave_system_names: []



## Usage

### Basic Launch

Launch with default configuration:

ros2 launch power_control power_control.launch.py



### Custom Configuration

Launch with custom parameters:

ros2 launch power_control power_control.launch.py
system_name:=my_robot
config_file:=/path/to/custom_config.yaml



### Launch Arguments

| Argument | Default | Description |
|----------|---------|-------------|
| `system_name` | `device` | Unique identifier for this system |
| `config_file` | `config/power_control.yaml` | Path to configuration file |
| `output` | `screen` | Output destination (screen or log) |

## Services

The package provides the following ROS2 services based on system configuration:

### Master System Services

- **Poweroff Service**: `/power_control/master/<system_name>/poweroff`
  - Type: `std_srvs/srv/Trigger`
  - Description: Initiates poweroff sequence for master and optionally slaves

- **Reboot Service**: `/power_control/master/<system_name>/reboot`
  - Type: `std_srvs/srv/Trigger`
  - Description: Initiates reboot sequence for master and optionally slaves

### Slave System Services

- **Poweroff Service**: `/power_control/slave/<system_name>/poweroff`
  - Type: `std_srvs/srv/Trigger`
  - Description: Powers off the slave system

- **Reboot Service**: `/power_control/slave/<system_name>/reboot`
  - Type: `std_srvs/srv/Trigger`
  - Description: Reboots the slave system

## Parameters

All parameters can be modified at runtime using the ROS2 parameter system[web:30][web:36].

### Available Parameters

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `system_name` | string | `"master_system"` | Unique identifier for this system |
| `is_system_master` | bool | `false` | Designates system as master or slave |
| `enable_system_power_control` | bool | `true` | Enable/disable local power operations |
| `enable_slave_power_control` | bool | `false` | Enable/disable slave control (master only) |
| `slave_system_names` | string[] | `[]` | List of slave system names to control |

### Runtime Parameter Modification

View current parameters:

ros2 param list /power_control_nx



Get specific parameter value:

ros2 param get /power_control_nx enable_system_power_control



Set parameter value:

ros2 param set /power_control_nx enable_system_power_control false



## Examples

### Example 1: Poweroff Master System Only

Launch master node
ros2 launch power_control power_control.launch.py system_name:=master

In another terminal, call poweroff service
ros2 service call /power_control/master/master/poweroff std_srvs/srv/Trigger



### Example 2: Poweroff Master and All Slaves

With `enable_slave_power_control: true` in configuration:

Call master poweroff (will cascade to slaves)
ros2 service call /power_control/master/master/poweroff std_srvs/srv/Trigger



The system will:
1. Send poweroff commands to all configured slaves
2. Wait 3 seconds for slaves to begin shutdown
3. Power off the master system

### Example 3: Reboot Specific Slave

Call slave reboot directly
ros2 service call /power_control/slave/jetson_slave1/reboot std_srvs/srv/Trigger



### Example 4: Testing Without Actual Poweroff

Disable power control for safe testing:

Disable system power control
ros2 param set /power_control_master enable_system_power_control false

Service calls will be acknowledged but won't execute system commands
ros2 service call /power_control/master/master/poweroff std_srvs/srv/Trigger



### Example 5: Multi-Robot Setup

Launch files for distributed setup:

**Master system (192.168.1.100)**:
ros2 launch power_control power_control.launch.py
system_name:=main_computer
config_file:=/path/to/master_config.yaml



**Slave 1 (192.168.1.101)**:
ros2 launch power_control power_control.launch.py
system_name:=robot_base
config_file:=/path/to/slave1_config.yaml



**Slave 2 (192.168.1.102)**:
ros2 launch power_control power_control.launch.py
system_name:=sensor_array
config_file:=/path/to/slave2_config.yaml



## Troubleshooting

### Common Issues

#### Permission Denied on Poweroff/Reboot

**Problem**: Service calls fail with permission errors

**Solution**: Run the permission setup script:
ros2 run power_control setup_pwr_ctrl_permission.sh



Verify `/etc/sudoers` contains the required entry for your user[attached_file:1].

#### Service Not Available

**Problem**: Service clients can't find slave services

**Solution**: 
- Verify slave nodes are running: `ros2 node list`
- Check network connectivity between systems
- Ensure ROS_DOMAIN_ID matches across all systems
- Wait for service discovery: services have a 5-second timeout

#### Parameters Not Loading

**Problem**: Node uses default values instead of config file

**Solution**:
- Verify config file path is correct
- Check YAML syntax is valid
- Ensure parameter names match exactly (case-sensitive)
- Use `ros2 param list` to verify loaded parameters

#### Master Not Controlling Slaves

**Problem**: Master poweroff doesn't affect slaves

**Solution**:
- Verify `enable_slave_power_control` is set to `true`
- Check `slave_system_names` list contains correct slave names
- Ensure slave service topics match expected pattern
- Review logs for connection errors: `ros2 node info /power_control_master`

## Testing

### Build and Run Tests

Build with tests
colcon build --packages-select power_control

Run tests
colcon test --packages-select power_control

View test results
colcon test-result --verbose



### Manual Testing

Test service availability:

List available services
ros2 service list | grep power_control

Check service type
ros2 service type /power_control/master/nx/poweroff

Test service call (safe mode)
ros2 param set /power_control_nx enable_system_power_control false
ros2 service call /power_control/master/nx/poweroff std_srvs/srv/Trigger



## Directory Structure

power_control/
├── CMakeLists.txt # Build configuration
├── package.xml # Package metadata and dependencies
├── README.md # This file
├── LICENSE # Apache 2.0 license
├── config/
│ └── power_control.yaml # Default configuration
├── include/
│ └── power_control.hpp # Header file
├── src/
│ └── power_control.cpp # Main implementation
├── launch/
│ └── power_control.launch.py # Launch file
└── scripts/
└── setup_pwr_ctrl_permission.sh # Permission setup script



## Contributing

Contributions are welcome! Please follow these guidelines:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Follow ROS2 C++ style guidelines[web:34]
4. Write meaningful commit messages
5. Add tests for new features
6. Update documentation as needed
7. Submit a pull request

### Code Style

- Follow [ROS2 C++ Style Guide](https://docs.ros.org/en/rolling/The-ROS2-Project/Contributing/Code-Style-Language-Versions.html)
- Use C++17 features appropriately
- Include comprehensive comments and documentation
- Use RCLCPP logging macros for output

## License

This package is licensed under the Apache License 2.0. See the [LICENSE](LICENSE) file for details[attached_file:1].

Copyright 2025 [Your Name/Organization]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at


http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.



## Support

For issues, questions, or contributions:

- **Issue Tracker**: [GitHub Issues](https://github.com/your-repo/power_control/issues)
- **Discussions**: [GitHub Discussions](https://github.com/your-repo/power_control/discussions)
- **Documentation**: [ROS2 Documentation](https://docs.ros.org)

## Acknowledgments

- Built for ROS2 using modern C++17 standards[web:30]
- Follows ROS2 package documentation best practices[web:30][web:36][web:41]
- Inspired by distributed robotics power management requirements

## Version History

### 2.0.0 (2025-10-11)
- Complete ROS2 migration from ROS1
- Modern C++17 implementation
- Native ROS2 parameter system
- Python launch file support
- Improved thread safety with atomic operations
- Enhanced error handling and logging
- Async service client implementation

---

**Maintainer**: Your Name <your_email@example.com>

**Status**: Active Development

**ROS2 Distribution**: Humble | Iron | Jazzy