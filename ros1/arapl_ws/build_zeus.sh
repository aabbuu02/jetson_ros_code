#!/bin/bash

# Function to install dependencies
install_dependencies() {
    echo "Updating package list..."
    sudo apt-get update

    echo "Installing dependencies..."
    sudo apt-get install -y vim python3-catkin-tools ros-noetic-rviz ros-noetic-diagnostic-updater ros-noetic-move-base-msgs libmodbus* libmysqlcppconn* libsql* unixodbc-dev libdxflib-dev
    if [ $? -ne 0 ]; then
        echo "Error installing dependencies"
        exit 1
    fi
    echo "Dependencies installed successfully"
}

# Function to run catkin_make and check for errors
run_catkin_make() {
    echo "Running catkin_make"
    catkin_make -j1
    if [ $? -ne 0 ]; then
        echo "Error running catkin_make"
        return 1
    fi
    return 0
}

# Install dependencies
install_dependencies

# Navigate to the catkin workspace
catkin_make


# Ensure workspace is sourced
if [ -f devel/setup.bash ]; then
    source devel/setup.bash
    
else
    echo "Workspace setup file not found. Make sure to run 'catkin_make' or 'catkin build' first to create the setup file."
    exit 1
fi

rosdep install --from-paths src --ignore-src -r -y

echo "Moving to 1st failed package"
sleep 2
catkin_make --pkg anscer_msgs && run_catkin_make

echo "Moving to 2nd failed package"
sleep 2
catkin_make --pkg lift_action && run_catkin_make


echo "Moving to 3rd failed package"
sleep 2  
catkin_make --pkg qr_navigation && run_catkin_make       

echo "Moving to last failed package"
sleep 2  
catkin_make --pkg qr_mission_scheduler && run_catkin_make

run_catkin_make

sleep 1

echo "All packages built successfully"
