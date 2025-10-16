cmake_minimum_required(VERSION 3.8)
project(navigation_speed_control)

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
find_package(anscer_msgs REQUIRED)
find_package(rcl_interfaces REQUIRED)

# Include directories
include_directories(
  include
  ${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME}
)

# Add executable
add_executable(${PROJECT_NAME}_node
  src/navigation_speed_control.cpp
)

# Set dependencies
set(dependencies
  rclcpp
  rclcpp_components
  std_msgs
  geometry_msgs
  anscer_msgs
  rcl_interfaces
)

ament_target_dependencies(${PROJECT_NAME}_node
  ${dependencies}
)

# Install executable
install(TARGETS ${PROJECT_NAME}_node
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
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
