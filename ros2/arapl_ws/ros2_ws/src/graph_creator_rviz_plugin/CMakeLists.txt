cmake_minimum_required(VERSION 3.5)
project(graph_creator_rviz_plugin)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find required dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rviz_common REQUIRED)
find_package(rviz_default_plugins REQUIRED)
find_package(rviz_rendering REQUIRED)
find_package(rviz_ogre_vendor REQUIRED)
find_package(pluginlib REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

# Optional dependencies - check if custom messages are available
find_package(graph_msgs QUIET)
find_package(graph_creator_msgs QUIET)

# Qt5
find_package(Qt5 REQUIRED COMPONENTS Core Widgets)
set(QT_LIBRARIES Qt5::Widgets)

# Set automoc on
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Avoid Qt keywords conflict
add_definitions(-DQT_NO_KEYWORDS)

# Include directories
include_directories(
  include
  ${CMAKE_CURRENT_BINARY_DIR}
)

# Dependencies list
set(THIS_PACKAGE_INCLUDE_DEPENDS
  rclcpp
  geometry_msgs
  std_msgs
  std_srvs
  nav_msgs
  rviz_common
  rviz_default_plugins
  rviz_rendering
  rviz_ogre_vendor
  pluginlib
  tf2
  tf2_geometry_msgs
)

# Add optional dependencies if found
if(graph_msgs_FOUND)
  list(APPEND THIS_PACKAGE_INCLUDE_DEPENDS graph_msgs)
  add_definitions(-DHAS_GRAPH_MSGS)
  message(STATUS "graph_msgs found - enabling full functionality")
endif()

if(graph_creator_msgs_FOUND)
  list(APPEND THIS_PACKAGE_INCLUDE_DEPENDS graph_creator_msgs)
  add_definitions(-DHAS_GRAPH_CREATOR_MSGS)
  message(STATUS "graph_creator_msgs found - enabling full functionality")
endif()

# Source files
set(${PROJECT_NAME}_SRCS
  src/graph_creator_panel.cpp
  src/combo_box_delegate.cpp
  src/double_spin_box_delegate.cpp
  src/properties_dialog_delegate.cpp
  src/tools/create_vertex_tool.cpp
  src/tools/select_graph_elements_tool.cpp
)

# Build library
add_library(${PROJECT_NAME} SHARED
  ${${PROJECT_NAME}_SRCS}
)

# Link dependencies
ament_target_dependencies(${PROJECT_NAME}
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)

target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
  ${Qt5Widgets_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME}
  ${QT_LIBRARIES}
)

target_compile_definitions(${PROJECT_NAME} PRIVATE "PLUGINLIB__DISABLE_BOOST_FUNCTIONS")

# Plugin export
pluginlib_export_plugin_description_file(rviz_common plugin_description.xml)

# Install
install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(
  FILES plugin_description.xml
  DESTINATION share/${PROJECT_NAME}
)

# Export
ament_export_include_directories(include/${PROJECT_NAME})
ament_export_targets(${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
