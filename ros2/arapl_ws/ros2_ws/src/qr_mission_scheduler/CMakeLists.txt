cmake_minimum_required(VERSION 3.8)
project(qr_mission_scheduler)

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
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(graph_msgs REQUIRED)
find_package(global_path_graph_planner REQUIRED)
find_package(lift_action REQUIRED)

# Generate messages, services, and actions
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/GoalMsg.msg"
  "srv/GetGoal.srv"
  "action/MissionScheduler.action"
  DEPENDENCIES std_msgs geometry_msgs
)

# Include directories
include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR}/include/mission_scheduler
)

# Mission Scheduler Server executable
add_executable(qr_mission_scheduler_server
  src/mission_scheduler.cpp
)

ament_target_dependencies(qr_mission_scheduler_server
  rclcpp
  rclcpp_action
  std_msgs
  sensor_msgs
  nav_msgs
  geometry_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  graph_msgs
  global_path_graph_planner
)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(qr_mission_scheduler_server "${cpp_typesupport_target}")

# Mission Client executable
add_executable(qr_mission_scheduler_client
  src/qr_mission_client.cpp
)

ament_target_dependencies(qr_mission_scheduler_client
  rclcpp
  rclcpp_action
  std_msgs
  std_srvs
  sensor_msgs
  nav_msgs
  geometry_msgs
  lift_action
)

target_link_libraries(qr_mission_scheduler_client "${cpp_typesupport_target}")

# Install executables
install(TARGETS
  qr_mission_scheduler_server
  qr_mission_scheduler_client
  DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY include/
  DESTINATION include
)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Install config files
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
  PATTERN "*.txt"
  PATTERN "*.yaml"
  PATTERN "*.graphml"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(rosidl_default_runtime)
ament_package()
