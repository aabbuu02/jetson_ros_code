cmake_minimum_required(VERSION 3.8)
project(graph_creator)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(interactive_markers REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(graph_msgs REQUIRED)
find_package(graph_creator_msgs REQUIRED)

# System dependencies
find_package(PkgConfig REQUIRED)
find_package(rclcpp REQUIRED)
pkg_check_modules(DXFLIB REQUIRED dxflib)
pkg_check_modules(TINYXML REQUIRED tinyxml)

# Include directories
include_directories(
  include
  ${DXFLIB_INCLUDE_DIRS}
  ${TINYXML_INCLUDE_DIRS}
)

# Declare ROS2 dependencies list for easier management
set(dependencies
  rclcpp
  rclcpp_components
  std_msgs
  geometry_msgs
  visualization_msgs
  interactive_markers
  tf2
  tf2_ros
  tf2_geometry_msgs
  graph_msgs
  graph_creator_msgs
)

add_definitions(-DBOOST_HEADER_DEPRECATED=boost/detail/no_exceptions_support.hpp)

# Library: directed_graph
add_library(directed_graph SHARED
  src/directed_graph.cpp
)
ament_target_dependencies(directed_graph ${dependencies})
target_link_libraries(directed_graph ${TINYXML_LIBRARIES})

# Library: graph_utils
add_library(graph_utils SHARED
  src/graph_utils.cpp
)
ament_target_dependencies(graph_utils ${dependencies})
target_link_libraries(graph_utils directed_graph)

# Library: graph_curves
add_library(graph_curves SHARED
  src/graph_curves.cpp
)
ament_target_dependencies(graph_curves ${dependencies})
target_link_libraries(graph_curves graph_utils)

# Library: graph_file_utils
add_library(graph_file_utils SHARED
  src/graph_file_utils.cpp
)
ament_target_dependencies(graph_file_utils ${dependencies})

# Library: graph_saver
add_library(graph_saver SHARED
  src/graph_saver.cpp
)
ament_target_dependencies(graph_saver ${dependencies})
target_link_libraries(graph_saver 
  directed_graph 
  graph_utils 
  ${TINYXML_LIBRARIES}
)

# Library: graph_loader
add_library(graph_loader SHARED
  src/graph_loader.cpp
)
ament_target_dependencies(graph_loader ${dependencies})
target_link_libraries(graph_loader 
  directed_graph 
  graph_utils 
  ${TINYXML_LIBRARIES}
)

# Library: graph_visuals
add_library(graph_visuals SHARED
  src/graph_visuals.cpp
)
ament_target_dependencies(graph_visuals ${dependencies})
target_link_libraries(graph_visuals graph_curves)

# Library: graph_generators
add_library(graph_generators SHARED
  src/graph_generators.cpp
)
ament_target_dependencies(graph_generators ${dependencies})
target_link_libraries(graph_generators graph_utils)

# Library: dxf_graph_generator
add_library(dxf_graph_generator SHARED
  src/dxf_graph_generator.cpp
)
ament_target_dependencies(dxf_graph_generator ${dependencies})
target_link_libraries(dxf_graph_generator 
  graph_utils 
  ${DXFLIB_LIBRARIES}
)

# Library: graph_transformers
add_library(graph_transformers SHARED
  src/graph_transformers.cpp
)
ament_target_dependencies(graph_transformers ${dependencies})
target_link_libraries(graph_transformers graph_utils)

# Main executable: graph_creator
add_executable(graph_creator
  src/graph_creator.cpp
)
ament_target_dependencies(graph_creator ${dependencies})
target_link_libraries(graph_creator
  directed_graph
  graph_curves
  graph_visuals
  graph_saver
  graph_loader
  graph_utils
  graph_file_utils
  graph_generators
  dxf_graph_generator
  graph_transformers
)

# Install targets
install(TARGETS
  directed_graph
  graph_utils
  graph_curves
  graph_file_utils
  graph_saver
  graph_loader
  graph_visuals
  graph_generators
  dxf_graph_generator
  graph_transformers
  graph_creator
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Install config files
install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

# Install rviz files
install(DIRECTORY rviz/
  DESTINATION share/${PROJECT_NAME}/rviz
)

# Install maps (if any)
install(DIRECTORY maps/
  DESTINATION share/${PROJECT_NAME}/maps
  OPTIONAL
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Export dependencies
ament_export_include_directories(include)
ament_export_libraries(
  directed_graph
  graph_utils
  graph_curves
  graph_file_utils
  graph_saver
  graph_loader
  graph_visuals
  graph_generators
  dxf_graph_generator
  graph_transformers
)
ament_export_dependencies(${dependencies})

ament_package()
