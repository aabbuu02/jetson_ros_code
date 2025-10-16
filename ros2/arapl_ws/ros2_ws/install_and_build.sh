#!/bin/bash
# ROS2 ANSCER AGV Workspace Installer and Build Script
# This script installs all dependencies and builds packages in correct order

set -e  # Exit on any error

# Color codes for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to print colored messages
print_info() {
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

# Workspace directory
WS_DIR="/ros2_ws"

print_info "=== ANSCER AGV ROS2 Workspace Installer ==="
print_info "Workspace directory: $WS_DIR"

# Check if workspace exists
if [ ! -d "$WS_DIR" ]; then
    print_error "Workspace directory does not exist: $WS_DIR"
    exit 1
fi

cd "$WS_DIR"

# ============================================
# STEP 1: System Update
# ============================================
print_info "Step 1: Updating system packages..."
sudo apt update
print_success "System packages updated"

# ============================================
# STEP 2: Install ROS2 Humble (if not installed)
# ============================================
print_info "Step 2: Checking ROS2 Humble installation..."

if [ ! -f "/opt/ros/humble/setup.bash" ]; then
    print_warning "ROS2 Humble not found. Installing..."

    # Set locale
    sudo apt install -y locales
    sudo locale-gen en_US en_US.UTF-8
    sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
    export LANG=en_US.UTF-8

    # Setup sources
    sudo apt install -y software-properties-common
    sudo add-apt-repository universe -y
    sudo apt update && sudo apt install -y curl
    sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

    # Install ROS2 Humble
    sudo apt update
    sudo apt install -y ros-humble-desktop
    sudo apt install -y ros-dev-tools

    print_success "ROS2 Humble installed"
else
    print_success "ROS2 Humble already installed"
fi

# Source ROS2
source /opt/ros/humble/setup.bash

# ============================================
# STEP 3: Install colcon and build tools
# ============================================
print_info "Step 3: Installing colcon and build tools..."
sudo apt install -y python3-colcon-common-extensions
sudo apt install -y python3-rosdep python3-vcstool
print_success "Build tools installed"

# ============================================
# STEP 4: Initialize rosdep (if not initialized)
# ============================================
print_info "Step 4: Initializing rosdep..."
if [ ! -f "/etc/ros/rosdep/sources.list.d/20-default.list" ]; then
    sudo rosdep init
fi
rosdep update
print_success "rosdep initialized"

# ============================================
# STEP 5: Install common ROS2 dependencies
# ============================================
print_info "Step 5: Installing common ROS2 dependencies..."

sudo apt install -y \
    ros-humble-geometry-msgs \
    ros-humble-std-msgs \
    ros-humble-sensor-msgs \
    ros-humble-nav-msgs \
    ros-humble-tf2 \
    ros-humble-tf2-ros \
    ros-humble-tf2-geometry-msgs \
    ros-humble-rclcpp \
    ros-humble-rclpy \
    ros-humble-ament-cmake \
    ros-humble-ament-cmake-python \
    ros-humble-rosidl-default-generators \
    ros-humble-rosidl-default-runtime \
    ros-humble-visualization-msgs \
    ros-humble-nav2-msgs \
    ros-humble-action-msgs \
    ros-humble-control-msgs \
    ros-humble-trajectory-msgs \
    ros-humble-xacro \
    ros-humble-urdf \
    ros-humble-robot-state-publisher \
    ros-humble-joint-state-publisher \
    ros-humble-twist-mux \
    ros-humble-teleop-twist-keyboard \
    ros-humble-diagnostic-msgs \
    ros-humble-rviz2 \
    ros-humble-rviz-common \
    ros-humble-rviz-default-plugins \
    ros-humble-pluginlib \
    ros-humble-interactive-markers \
    ros-humble-rosbridge-server \
    qtbase5-dev \
    libqt5widgets5 \
    libqt5gui5 \
    libqt5core5a \
    qt5-qmake \
    libyaml-cpp-dev \
    nlohmann-json3-dev \
    libboost-all-dev \
    libeigen3-dev

print_success "Common dependencies installed"

# ============================================
# STEP 6: Install workspace-specific dependencies using rosdep
# ============================================
print_info "Step 6: Installing workspace-specific dependencies..."

if [ -d "$WS_DIR/src" ]; then
    cd "$WS_DIR"
    rosdep install --from-paths src --ignore-src --rosdistro humble -y --skip-keys "rti-connext-dds-6.0.1 rosbridge_server" || true
    print_success "Workspace dependencies installed"
else
    print_warning "src directory not found, skipping rosdep install"
fi

# ============================================
# STEP 7: Clean previous build
# ============================================
print_info "Step 7: Cleaning previous build..."
cd "$WS_DIR"
rm -rf build/ install/ log/
print_success "Previous build cleaned"

# ============================================
# STEP 8: Build packages in correct dependency order
# ============================================
print_info "Step 8: Building packages in dependency order..."

# Function to build a package
build_package() {
    local pkg_name=$1
    local build_number=$2

    print_info "[$build_number] Building: $pkg_name"

    if colcon build --packages-select $pkg_name --symlink-install; then
        print_success "[$build_number] $pkg_name built successfully"
        return 0
    else
        print_error "[$build_number] Failed to build $pkg_name"
        return 1
    fi
}

# Build order based on dependencies
# Messages and base packages first
build_package "anscer_msgs" "1"
build_package "graph_msgs" "2"
build_package "graph_creator_msgs" "3"

# Core packages
build_package "acr_robot_controller" "4"
build_package "anscer_description" "5"
build_package "anscer_teleop" "6"
build_package "wms_data" "7"

# Graph packages (with dependencies)
build_package "graph_creator" "8"
build_package "global_path_graph" "9"
build_package "global_path_graph_planner" "10"
build_package "graph_control" "11"
build_package "graph_server" "12"
build_package "graph_visual_control" "13"
build_package "graph_creator_rviz_plugin" "14"

# Action packages
build_package "brake_action" "15"
build_package "lift_action" "16"

# Controller and navigation packages
build_package "lower_level_controller" "17"
build_package "navigation_speed_control" "18"
build_package "qr_navigation" "19"
build_package "robot_pose_publisher" "20"

# Utility packages
build_package "emergency_handler" "21"
build_package "power_control" "22"
build_package "reader_modules" "23"
build_package "qr_mission_scheduler" "24"
build_package "tag_monitor" "25"
build_package "twist_mux" "26"

# VDA5050 and communication
build_package "vda5050_connector" "27"
build_package "rosbridge_server" "28"

# Bringup packages (depends on multiple packages)
build_package "anscer_agv_bringup" "29"
build_package "start_robot" "30"

# ============================================
# STEP 9: Source the workspace
# ============================================
print_info "Step 9: Sourcing workspace..."
source "$WS_DIR/install/setup.bash"
print_success "Workspace sourced"

# ============================================
# STEP 10: Summary
# ============================================
echo ""
print_success "=== BUILD COMPLETE ==="
print_info "To use this workspace in a new terminal, run:"
echo "    source $WS_DIR/install/setup.bash"
echo ""
print_info "Or add this to your ~/.bashrc file:"
echo "    echo 'source $WS_DIR/install/setup.bash' >> ~/.bashrc"
echo ""
print_info "To rebuild all packages:"
echo "    cd $WS_DIR"
echo "    colcon build --symlink-install"
echo ""
print_info "To rebuild a specific package:"
echo "    cd $WS_DIR"
echo "    colcon build --packages-select <package_name> --symlink-install"
echo ""

# List all built packages
print_info "Built packages:"
if [ -d "$WS_DIR/install" ]; then
    ls -1 "$WS_DIR/install" | grep -v "setup" | grep -v "local_setup" | grep -v "_setup_util" || echo "No packages found"
fi

print_success "Installation and build completed successfully!"
