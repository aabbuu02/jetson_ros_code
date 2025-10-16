cmake_minimum_required(VERSION 3.8)
project(graph_msgs)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

# Compiler options
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

# Generate interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  # Message files
  "msg/Property.msg"
  "msg/Vertex.msg"
  "msg/Edge.msg"
  "msg/GraphMetaData.msg"
  "msg/Graph.msg"
  # Service files
  "srv/GetGraph.srv"
  "srv/SaveGraph.srv"
  "srv/LoadGraph.srv"
  "srv/GetGraphPlan.srv"
  DEPENDENCIES
    geometry_msgs
    nav_msgs
    std_msgs
    builtin_interfaces
)

# Install message and service files
install(
  DIRECTORY msg srv
  DESTINATION share/${PROJECT_NAME}
)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Export dependencies
ament_export_dependencies(
  rosidl_default_runtime
  geometry_msgs
  nav_msgs
  std_msgs
  builtin_interfaces
)

ament_package()
