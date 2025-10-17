cmake_minimum_required(VERSION 3.8)
project(lower_level_controller)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -std=c++17)
endif()

add_definitions(-Dlinux)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(anscer_msgs REQUIRED)
find_package(lift_action REQUIRED)
find_package(wms_data REQUIRED)

# Include directories
include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_NAME}
)

# Add executable
add_executable(${PROJECT_NAME}_node
  src/LowerLevelInterface.cpp
  src/LowerLevelComputations.cpp
  src/RosClass.cpp
  src/ModbusController.cpp
  src/ModbusDevice.cpp
  src/Client.cpp
)

# Add robot health service executable
add_executable(robot_health_service
  src/robot_health_service.cpp
)

# Specify dependencies
set(dependencies
  rclcpp
  rclcpp_components
  geometry_msgs
  nav_msgs
  std_msgs
  sensor_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  std_srvs
  anscer_msgs
  lift_action
  wms_data
)

ament_target_dependencies(${PROJECT_NAME}_node ${dependencies})

# Link libraries
target_link_libraries(${PROJECT_NAME}_node
  modbus
)

# Install targets
install(TARGETS
  ${PROJECT_NAME}_node
  robot_health_service
  DESTINATION lib/${PROJECT_NAME}
)

# Install directories
install(DIRECTORY
  launch
  config
  include/
  DESTINATION share/${PROJECT_NAME}
)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
