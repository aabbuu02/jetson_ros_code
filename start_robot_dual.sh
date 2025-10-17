#!/bin/bash

# Dual ROS1/ROS2 Robot Startup Script
# This script allows running both ROS1 and ROS2 systems simultaneously

set -e

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to print colored output
print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
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
    
    # Kill ROS2 processes
    if is_running "ros2 launch"; then
        pkill -f "ros2 launch" || true
    fi
    
    # Kill ROS1 processes
    if is_running "roslaunch"; then
        pkill -f "roslaunch" || true
    fi
    
    # Kill WMS server
    if is_running "wms_server.py"; then
        pkill -f "wms_server.py" || true
    fi
    
    # Kill roscore if running
    if is_running "roscore"; then
        pkill -f "roscore" || true
    fi
    
    print_success "Cleanup completed"
}

# Trap to ensure cleanup on script exit
trap cleanup EXIT INT TERM

# Parse command line arguments
MODE="dual"
ROS1_ONLY=false
ROS2_ONLY=false
START_WMS=true

while [[ $# -gt 0 ]]; do
    case $1 in
        --ros1-only)
            ROS1_ONLY=true
            MODE="ros1"
            shift
            ;;
        --ros2-only)
            ROS2_ONLY=true
            MODE="ros2"
            shift
            ;;
        --no-wms)
            START_WMS=false
            shift
            ;;
        --help)
            echo "Usage: $0 [OPTIONS]"
            echo "Options:"
            echo "  --ros1-only    Run only ROS1 system"
            echo "  --ros2-only    Run only ROS2 system"
            echo "  --no-wms       Don't start WMS server"
            echo "  --help         Show this help message"
            exit 0
            ;;
        *)
            print_error "Unknown option: $1"
            exit 1
            ;;
    esac
done

print_status "Starting Robot System in $MODE mode"

# Check if we're in the right directory
if [ ! -d "/workspace/ros1" ] || [ ! -d "/workspace/ros2" ]; then
    print_error "Please run this script from the workspace root directory"
    exit 1
fi

# Start WMS server if requested
if [ "$START_WMS" = true ]; then
    print_status "Starting WMS Mock Server..."
    cd /workspace/ros2/arapl_ws/ros2_ws/src
    python3 wms_server.py &
    WMS_PID=$!
    sleep 2
    
    if is_running "wms_server.py"; then
        print_success "WMS Server started (PID: $WMS_PID)"
    else
        print_error "Failed to start WMS Server"
        exit 1
    fi
fi

# Function to start ROS1 system
start_ros1() {
    print_status "Starting ROS1 system..."
    
    # Source ROS1 environment
    source /opt/ros/noetic/setup.bash
    source /workspace/ros1/arapl_ws/devel/setup.bash
    
    # Start roscore in background
    roscore &
    ROSCORE_PID=$!
    sleep 3
    
    if is_running "roscore"; then
        print_success "ROS1 roscore started (PID: $ROSCORE_PID)"
    else
        print_error "Failed to start ROS1 roscore"
        return 1
    fi
    
    # Start ROS1 robot launch
    print_status "Launching ROS1 robot system..."
    roslaunch start_robot start_robot.launch &
    ROS1_LAUNCH_PID=$!
    
    # Wait a bit for ROS1 to initialize
    sleep 10
    
    if is_running "roslaunch.*start_robot"; then
        print_success "ROS1 robot system started (PID: $ROS1_LAUNCH_PID)"
    else
        print_error "Failed to start ROS1 robot system"
        return 1
    fi
}

# Function to start ROS2 system
start_ros2() {
    print_status "Starting ROS2 system..."
    
    # Source ROS2 environment
    source /opt/ros/humble/setup.bash
    source /workspace/ros2/arapl_ws/ros2_ws/install/setup.bash
    
    # Start ROS2 robot launch
    print_status "Launching ROS2 robot system..."
    ros2 launch start_robot_bringup start_robot.launch.py &
    ROS2_LAUNCH_PID=$!
    
    # Wait a bit for ROS2 to initialize
    sleep 10
    
    if is_running "ros2 launch.*start_robot"; then
        print_success "ROS2 robot system started (PID: $ROS2_LAUNCH_PID)"
    else
        print_error "Failed to start ROS2 robot system"
        return 1
    fi
}

# Start systems based on mode
case $MODE in
    "ros1")
        start_ros1
        ;;
    "ros2")
        start_ros2
        ;;
    "dual")
        start_ros1
        start_ros2
        ;;
esac

print_success "Robot system startup completed!"
print_status "Press Ctrl+C to stop all systems"

# Wait for user interrupt
wait
