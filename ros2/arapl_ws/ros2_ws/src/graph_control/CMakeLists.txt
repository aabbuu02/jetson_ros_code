cmake_minimum_required(VERSION 3.8)
project(graph_control)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(pluginlib REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(graph_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

# Define dependencies list for reuse
set(dependencies
  rclcpp
  pluginlib
  geometry_msgs
  nav_msgs
  graph_msgs
  action_msgs
  nav2_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
)

###########
## Build ##
###########

# Include directories
include_directories(
  include
)

# Build plugin loader library
add_library(graph_control_plugin_loader SHARED
  src/graph_control_plugin_loader.cpp
)

# Specify dependencies for the library
ament_target_dependencies(graph_control_plugin_loader
  ${dependencies}
)

# Make sure the library is visible to plugins
target_compile_definitions(graph_control_plugin_loader
  PRIVATE "GRAPH_CONTROL_BUILDING_DLL"
)

#############
## Install ##
#############

# Install library
install(TARGETS graph_control_plugin_loader
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install header files
install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

# Export dependencies
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(${dependencies})

# Export include directories
ament_export_include_directories(include)

#############
## Testing ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # Run all lint tests in package.xml except those listed below
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
  
  # Add gtest based cpp test target
  find_package(ament_cmake_gtest REQUIRED)
  # ament_add_gtest(${PROJECT_NAME}_test test/test_graph_control.cpp)
  # if(TARGET ${PROJECT_NAME}_test)
  #   target_link_libraries(${PROJECT_NAME}_test graph_control_plugin_loader)
  #   ament_target_dependencies(${PROJECT_NAME}_test ${dependencies})
  # endif()
endif()

ament_package()
