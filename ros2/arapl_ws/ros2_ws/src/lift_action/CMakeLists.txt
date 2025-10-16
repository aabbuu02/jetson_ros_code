cmake_minimum_required(VERSION 3.8)
project(lift_action)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Find libmodbus
find_library(MODBUS_LIBRARY modbus REQUIRED)
if(NOT MODBUS_LIBRARY)
  message(FATAL_ERROR "libmodbus not found. Please install libmodbus-dev")
endif()

# Generate interfaces - UPDATED with correct message names
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/LiftFeedback.msg"
  "msg/LiftAction.msg"
  "msg/UiInterface.msg"
  "msg/HomingStatus.msg"
  "msg/HomeSensor.msg"
  "msg/ErrorStatus.msg"
  DEPENDENCIES std_msgs
)

# Include directories
include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# ModbusCommunicator library
add_library(modbus_communicator_lib SHARED
  src/ModbusComunicator.cpp
)

ament_target_dependencies(modbus_communicator_lib
  rclcpp
  std_msgs
)

target_link_libraries(modbus_communicator_lib
  ${MODBUS_LIBRARY}
)

rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(modbus_communicator_lib ${cpp_typesupport_target})

# UIInterface library
add_library(ui_interface_lib SHARED
  src/UI_Interface.cpp
)

ament_target_dependencies(ui_interface_lib
  rclcpp
  std_msgs
)

target_link_libraries(ui_interface_lib
  modbus_communicator_lib
  ${cpp_typesupport_target}
)

# Main executable - modbus_communicator
add_executable(modbus_communicator
  src/HigherLevelInterface.cpp
)

ament_target_dependencies(modbus_communicator
  rclcpp
  std_msgs
)

target_link_libraries(modbus_communicator
  modbus_communicator_lib
  ui_interface_lib
  ${MODBUS_LIBRARY}
  ${cpp_typesupport_target}
)

# Install targets
install(TARGETS
  modbus_communicator
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS
  modbus_communicator_lib
  ui_interface_lib
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  include/
  DESTINATION include
)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
