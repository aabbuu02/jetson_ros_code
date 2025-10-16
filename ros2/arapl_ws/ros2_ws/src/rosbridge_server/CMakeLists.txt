cmake_minimum_required(VERSION 3.8)
project(rosbridge_server)

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
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rosidl_default_runtime REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(rosidl_typesupport_introspection_cpp REQUIRED)
find_package(Boost REQUIRED COMPONENTS system thread)

# Check for nlohmann_json
find_package(nlohmann_json QUIET)
if(NOT nlohmann_json_FOUND)
  # Include nlohmann json header-only library
  include(FetchContent)
  FetchContent_Declare(json
    URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
  )
  FetchContent_MakeAvailable(json)
endif()

# Include directories
include_directories(
  include
  ${Boost_INCLUDE_DIRS}
)

# Rosbridge WebSocket Server Library
add_library(rosbridge_protocol_lib SHARED
  src/rosbridge_protocol.cpp
  src/ros_message_handler.cpp
)

ament_target_dependencies(rosbridge_protocol_lib
  rclcpp
  std_msgs
  geometry_msgs
  sensor_msgs
  nav_msgs
  rosidl_typesupport_cpp
  rosidl_typesupport_introspection_cpp
)

target_link_libraries(rosbridge_protocol_lib
  nlohmann_json::nlohmann_json
  ${Boost_LIBRARIES}
)

# Rosbridge WebSocket Server Executable
add_executable(rosbridge_websocket
  src/rosbridge_websocket.cpp
  src/websocket_server.cpp
)

ament_target_dependencies(rosbridge_websocket
  rclcpp
  std_msgs
  geometry_msgs
  sensor_msgs
  nav_msgs
  rosidl_typesupport_cpp
  rosidl_typesupport_introspection_cpp
)

target_link_libraries(rosbridge_websocket
  rosbridge_protocol_lib
  nlohmann_json::nlohmann_json
  ${Boost_LIBRARIES}
  pthread
)

# Install targets
install(TARGETS
  rosbridge_protocol_lib
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(TARGETS
  rosbridge_websocket
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

# Install include files
install(DIRECTORY
  include/
  DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(include)
ament_export_libraries(rosbridge_protocol_lib)
ament_export_dependencies(
  rclcpp
  std_msgs
  geometry_msgs
  sensor_msgs
  nav_msgs
  rosidl_typesupport_cpp
  rosidl_typesupport_introspection_cpp
)

ament_package()
