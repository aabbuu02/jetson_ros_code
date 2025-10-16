cmake_minimum_required(VERSION 3.8)
project(anscer_agv_bringup)

# Default to C++17 for ROS2
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# Enable strict compiler warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(global_path_graph_planner REQUIRED)
find_package(graph_server REQUIRED)
find_package(lower_level_controller REQUIRED)
find_package(reader_modules REQUIRED)

# Include directories
include_directories(
  include
)

# If you have C++ executables, uncomment and modify:
# add_executable(${PROJECT_NAME}_node src/your_node.cpp)
# ament_target_dependencies(${PROJECT_NAME}_node
#   rclcpp
#   global_path_graph_planner
#   graph_server
#   lower_level_controller
#   reader_modules
# )

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

# Install config files if any
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}/
  OPTIONAL
)

# Install any Python scripts
install(PROGRAMS
  scripts/your_script.py
  DESTINATION lib/${PROJECT_NAME}
  OPTIONAL
)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # Run all linters found in package.xml except those listed below
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
