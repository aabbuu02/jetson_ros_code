cmake_minimum_required(VERSION 3.8)
project(acr_robot_controller)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_CXX_STANDARD 17)
add_definitions(-Dlinux)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(anscer_msgs REQUIRED)

# Include directories
include_directories(
  include/${PROJECT_NAME}
)

# Executable
add_executable(acr_robot_controller
  src/acr_robot_controller_node.cpp
  src/LowerLevelInterface.cpp
  src/LowerLevelComputations.cpp
  src/RosClass.cpp
  src/RoboteqController.cpp
  src/RoboteqDevice.cpp
)

# Dependencies
ament_target_dependencies(acr_robot_controller
  rclcpp
  geometry_msgs
  nav_msgs
  sensor_msgs
  std_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  anscer_msgs
)

# Link libraries
target_link_libraries(acr_robot_controller
  modbus
)

# Install targets
install(TARGETS acr_robot_controller
  DESTINATION lib/${PROJECT_NAME}
)

# Install directories
install(DIRECTORY 
  launch 
  config 
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
