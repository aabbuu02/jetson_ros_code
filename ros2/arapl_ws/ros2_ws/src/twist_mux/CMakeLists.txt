cmake_minimum_required(VERSION 3.8)
project(twist_mux)

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
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(diagnostic_updater REQUIRED)

set(dependencies
  rclcpp
  rclcpp_components
  std_msgs
  geometry_msgs
  visualization_msgs
  diagnostic_updater
)

include_directories(include)

# Twist Mux Library
add_library(twist_mux_lib SHARED
  src/twist_mux.cpp
  src/twist_mux_diagnostics.cpp
)
ament_target_dependencies(twist_mux_lib ${dependencies})
target_compile_definitions(twist_mux_lib PRIVATE "TWIST_MUX_BUILDING_DLL")

# Twist Mux Node
add_executable(twist_mux_node
  src/twist_mux_node.cpp
)
target_link_libraries(twist_mux_node twist_mux_lib)
ament_target_dependencies(twist_mux_node ${dependencies})

# Twist Marker Node
add_executable(twist_marker_node
  src/twist_marker.cpp
)
ament_target_dependencies(twist_marker_node ${dependencies})

# Install targets
install(TARGETS
  twist_mux_lib
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(TARGETS
  twist_mux_node
  twist_marker_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

# Install config files
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}/
)

# Install header files
install(DIRECTORY include/
  DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(include)
ament_export_libraries(twist_mux_lib)
ament_export_dependencies(${dependencies})
ament_package()
