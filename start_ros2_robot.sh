#!/bin/bash

# ROS2 Robot Startup Script
# This script starts only the ROS2 robot system

set -e

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Function to check if a process is running
is_running() {
    pgrep -f "$1" > /dev/null
}

# Function to kill processes
cleanup() {
    print_status "Cleaning up processes..."
    
    if is_running "ros2 launch"; then
        pkill -f "ros2 launch" || true
    fi
    
    if is_running "wms_server.py"; then
        pkill -f "wms_server.py" || true
    fi
    
    print_success "Cleanup completed"
}

# Trap to ensure cleanup on script exit
trap cleanup EXIT INT TERM

print_status "Starting ROS2 Robot System"

# Check if we're in the right directory
if [ ! -d "/workspace/ros2" ]; then
    print_error "Please run this script from the workspace root directory"
    exit 1
fi

# Start WMS server
print_status "Starting WMS Mock Server..."
cd /workspace/ros2/arapl_ws/ros2_ws/src
python3 wms_server.py &
WMS_PID=$!
sleep 3

if is_running "wms_server.py"; then
    print_success "WMS Server started (PID: $WMS_PID)"
else
    print_error "Failed to start WMS Server"
    exit 1
fi

# Start ROS2 system
print_status "Starting ROS2 system..."

# Source ROS2 environment
source /opt/ros/humble/setup.bash
source /workspace/ros2/arapl_ws/ros2_ws/install/setup.bash

# Start ROS2 robot launch
print_status "Launching ROS2 robot system..."
ros2 launch start_robot_bringup start_robot.launch.py

print_success "ROS2 robot system completed!"
