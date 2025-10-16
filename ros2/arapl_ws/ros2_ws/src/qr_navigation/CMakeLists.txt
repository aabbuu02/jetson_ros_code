cmake_minimum_required(VERSION 3.8)
project(qr_navigation)

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
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate custom messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/GoalMsg.msg"
  DEPENDENCIES std_msgs geometry_msgs
)

# Include directories
include_directories(
  include
  scripts
  ${CMAKE_CURRENT_SOURCE_DIR}/include/qr_navigation
)

# QR Navigation Node
add_executable(qr_navigation_node
  src/qr_navigation_node.cpp
  src/pure_pursuit.cpp
  src/velocity_profile.cpp
  src/rotation_controller.cpp
)

ament_target_dependencies(qr_navigation_node
  rclcpp
  std_msgs
  geometry_msgs
  nav_msgs
  sensor_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp)

target_link_libraries(qr_navigation_node "${cpp_typesupport_target}")

# Battery Node
add_executable(battery_node
  src/battery_node.cpp
)

ament_target_dependencies(battery_node
  rclcpp
  std_msgs
)

# Install executables
install(TARGETS
  qr_navigation_node
  battery_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install Python scripts
install(PROGRAMS
  scripts/path_publisher.py
  scripts/map_to_qr.py
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
  DESTINATION include/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(rosidl_default_runtime)
ament_package()
