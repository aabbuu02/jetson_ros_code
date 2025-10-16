cmake_minimum_required(VERSION 3.8)
project(graph_visual_control)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(interactive_markers REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(graph_msgs REQUIRED)
find_package(anscer_msgs REQUIRED)

# Include directories
include_directories(
  include
  ${graph_msgs_INCLUDE_DIRS}
  ${anscer_msgs_INCLUDE_DIRS}
)

# Define dependencies list (now includes graph_msgs)
set(dependencies
  rclcpp
  rclcpp_action
  rclcpp_components
  geometry_msgs
  nav_msgs
  visualization_msgs
  anscer_msgs
  interactive_markers
  nav2_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  graph_msgs # Added: graph_msgs was missing from this list
)

# Add executable
add_executable(graph_viz_ctrl 
  src/graph_viz_ctrl.cpp
)

ament_target_dependencies(graph_viz_ctrl anscer_msgs
  ${dependencies}
)

# Install targets
install(TARGETS
  graph_viz_ctrl
  DESTINATION lib/${PROJECT_NAME}
)

# Install include directory
install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.hpp"
  )

# Install launch files
install(DIRECTORY
  launch/
  DESTINATION share/${PROJECT_NAME}/launch
  FILES_MATCHING PATTERN "*.launch.py"
)

# Install config files if they exist
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/config)
  install(DIRECTORY
    config/
    DESTINATION share/${PROJECT_NAME}/config
    FILES_MATCHING PATTERN "*.yaml"
  )
endif()

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()


