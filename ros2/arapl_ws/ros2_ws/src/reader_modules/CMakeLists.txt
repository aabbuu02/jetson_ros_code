cmake_minimum_required(VERSION 3.8)
project(reader_modules)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(anscer_msgs REQUIRED)
find_package(angles REQUIRED)
find_package(ament_index_cpp REQUIRED)

# Find external libraries
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBSERIAL REQUIRED libserial)
find_library(SQLITE3_LIBRARY sqlite3)

# Include directories
include_directories(
  include
  ${LIBSERIAL_INCLUDE_DIRS}
)

# Shelf Reader executable
add_executable(shelf_reader
  src/shelf_reader.cpp
)

ament_target_dependencies(shelf_reader
  rclcpp
  std_msgs
  geometry_msgs
  anscer_msgs
)

target_link_libraries(shelf_reader)

# PGV Reader executable
add_executable(pgv_reader
  src/pgv_reader.cpp
)

ament_target_dependencies(pgv_reader
  rclcpp
  std_msgs
  geometry_msgs
  visualization_msgs
  anscer_msgs
  angles
  ament_index_cpp
)

target_link_libraries(pgv_reader
  ${LIBSERIAL_LIBRARIES}
  ${SQLITE3_LIBRARY}
)

# Install targets
install(TARGETS
  shelf_reader
  pgv_reader
  DESTINATION lib/${PROJECT_NAME}
)

# Install directories
install(DIRECTORY
  launch
  config
  data
  include/
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
