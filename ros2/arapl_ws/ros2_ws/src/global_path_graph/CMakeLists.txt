cmake_minimum_required(VERSION 3.8)
project(global_path_graph)

# Default to C++17 for better performance and features
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

# Compiler options for optimization
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -O3)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(graph_creator REQUIRED)
find_package(graph_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)

# Collect all dependencies
set(dependencies
  rclcpp
  geometry_msgs
  graph_creator
  graph_msgs
  nav_msgs
  std_msgs
  tf2
  tf2_ros
)

###########
## Build ##
###########

# Include directories
include_directories(
  include
)

# Declare C++ library
add_library(${PROJECT_NAME} SHARED
  src/global_path_graph.cpp
)

# Specify dependencies for the library
ament_target_dependencies(${PROJECT_NAME}
  ${dependencies}
)

# Export modern CMake targets
target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

#############
## Install ##
#############

# Install library
install(TARGETS ${PROJECT_NAME}
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

# Install header files
install(DIRECTORY include/
  DESTINATION include
  FILES_MATCHING PATTERN "*.hpp"
  PATTERN ".svn" EXCLUDE
)

# Export dependencies
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(${dependencies})

#############
## Testing ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
  
  # Add unit tests if needed
  # find_package(ament_cmake_gtest REQUIRED)
  # ament_add_gtest(${PROJECT_NAME}_test test/test_global_path_graph.cpp)
  # if(TARGET ${PROJECT_NAME}_test)
  #   target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME})
  #   ament_target_dependencies(${PROJECT_NAME}_test ${dependencies})
  # endif()
endif()

# Must be called last
ament_package()
