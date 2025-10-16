cmake_minimum_required(VERSION 3.8)
project(brake_action)

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

# Find libmodbus
find_library(MODBUS_LIBRARY modbus)
if(NOT MODBUS_LIBRARY)
  message(FATAL_ERROR "libmodbus library not found")
endif()

# Include directories
include_directories(
  include
)

# Declare executable
add_executable(brake_action_node
  src/HigherLevelInterface.cpp
  src/ModbusCommunicator.cpp
)

# Specify dependencies
ament_target_dependencies(brake_action_node
  rclcpp
  std_msgs
)

# Link libraries
target_link_libraries(brake_action_node
  ${MODBUS_LIBRARY}
)

# Install executable
install(TARGETS
  brake_action_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

# Install config files
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY
  include/
  DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
