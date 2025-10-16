cmake_minimum_required(VERSION 3.8)
project(graph_creator_msgs)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

# Check if graph_msgs exists, if not, remove it from dependencies
find_package(graph_msgs QUIET)

# Declare ROS2 messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/GraphCreatorMode.msg"
  "msg/EdgeCreationType.msg"
  "msg/EdgeDirectionCreationType.msg"
  "msg/GraphCreatorConfig.msg"
  "msg/GraphCreatorState.msg"
  "msg/GraphGeneratorConfig.msg"
  "msg/SelectedGraphElements.msg"
  "msg/SnapPoseConfig.msg"
  "srv/SetGraphCreatorMode.srv"
  "srv/LoadGraph.srv"
  "srv/SaveGraph.srv"
  "srv/SetBool.srv"
  "srv/SetEdgeDirectionType.srv"
  "srv/SetEdgeCreationType.srv"
  "srv/SetEdgeDirectionCreationType.srv"
  "srv/GetGraphCreatorState.srv"
  "srv/GenerateGraph.srv"
  "srv/SetSnapPose.srv"
  DEPENDENCIES
    geometry_msgs
    graph_msgs
    std_msgs
)

# Export dependencies
ament_export_dependencies(rosidl_default_runtime)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
