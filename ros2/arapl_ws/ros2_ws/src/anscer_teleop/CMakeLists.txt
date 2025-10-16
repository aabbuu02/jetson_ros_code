cmake_minimum_required(VERSION 3.8)
project(anscer_teleop)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

################################################################################
# Find dependencies
################################################################################
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

################################################################################
# Build
################################################################################
include_directories(include)

# Add executable
add_executable(anscer_teleop_key
  src/anscer_teleop_key.cpp
)

ament_target_dependencies(anscer_teleop_key
  rclcpp
  geometry_msgs
)

################################################################################
# Install
################################################################################
install(TARGETS
  anscer_teleop_key
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

################################################################################
# Testing
################################################################################
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

################################################################################
# Ament package
################################################################################
ament_package()
