cmake_minimum_required(VERSION 3.8)
project(emergency_handler)

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
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(anscer_msgs REQUIRED)

# Include directories
include_directories(
  include
  ${PROJECT_SOURCE_DIR}/include
)

# Add executable
add_executable(emergency_handler
  src/emergency_handler.cpp
)

# Specify dependencies
ament_target_dependencies(emergency_handler
  rclcpp
  std_msgs
  geometry_msgs
  anscer_msgs
)

# Install targets
install(TARGETS
  emergency_handler
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files and directories
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

install(DIRECTORY
  include/
  DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
