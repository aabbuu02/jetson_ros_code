cmake_minimum_required(VERSION 3.8)
project(wms_data)

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
find_package(rosidl_default_generators REQUIRED)
find_package(CURL REQUIRED)

# Generate messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/WMSData.msg"
  "msg/WMSTasks.msg"
  "msg/Feedback.msg"
  DEPENDENCIES std_msgs
)

# Include directories
include_directories(include ${CURL_INCLUDE_DIRS})

# Get typesupport target for linking
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")

# WMS Database Node executable
add_executable(wms_database_node 
  src/wms_database_node.cpp
  src/http_client.cpp
  src/json_parser.cpp
  src/xml_parser.cpp
)
ament_target_dependencies(wms_database_node rclcpp std_msgs)
target_link_libraries(wms_database_node ${CURL_LIBRARIES} ${cpp_typesupport_target})

# WMS Database Server Node executable (SOAP/XML)
add_executable(wms_database_server_node 
  src/wms_database_server_node.cpp
  src/http_client.cpp
  src/json_parser.cpp
  src/xml_parser.cpp
)
ament_target_dependencies(wms_database_server_node rclcpp std_msgs)
target_link_libraries(wms_database_server_node ${CURL_LIBRARIES} ${cpp_typesupport_target})

# WMS Logger Node executable
add_executable(wms_logger_node 
  src/wms_logger_node.cpp
)
ament_target_dependencies(wms_logger_node rclcpp std_msgs)
target_link_libraries(wms_logger_node ${cpp_typesupport_target})

# Install executables
install(TARGETS
  wms_database_node
  wms_database_server_node
  wms_logger_node
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

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
