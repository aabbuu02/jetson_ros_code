cmake_minimum_required(VERSION 3.8)
project(global_path_graph_planner)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(global_path_graph REQUIRED)
find_package(graph_msgs REQUIRED)

# Collect all dependencies
set(dependencies
  rclcpp
  geometry_msgs
  nav_msgs
  std_msgs
  global_path_graph
  graph_msgs
)

###########
## Build ##
###########

# Include directories
include_directories(
  include
)

# Try to locate graph_creator headers manually
set(GRAPH_CREATOR_FOUND FALSE)

# Check multiple possible locations
set(POSSIBLE_PATHS
  "${CMAKE_INSTALL_PREFIX}/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/../graph_creator/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/../../install/graph_creator/include"
)

foreach(CHECK_PATH ${POSSIBLE_PATHS})
  if(EXISTS "${CHECK_PATH}/graph_creator/graph_curves.hpp")
    include_directories(${CHECK_PATH})
    set(GRAPH_CREATOR_FOUND TRUE)
    message(STATUS "Found graph_creator headers at: ${CHECK_PATH}")
    break()
  endif()
endforeach()

if(NOT GRAPH_CREATOR_FOUND)
  message(FATAL_ERROR "Cannot find graph_creator/graph_curves.hpp. Please ensure graph_creator package is built and installed.")
endif()

# Declare library
add_library(${PROJECT_NAME} SHARED
  src/dijkstra_graph_planner.cpp
)

ament_target_dependencies(${PROJECT_NAME} ${dependencies})

# Declare executable
add_executable(path_graph_planner_node
  src/path_graph_planner_node.cpp
)

ament_target_dependencies(path_graph_planner_node ${dependencies})

# Link library to executable
target_link_libraries(path_graph_planner_node ${PROJECT_NAME})

#############
## Install ##
#############

# Install library
install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install executable
install(TARGETS path_graph_planner_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY include/
  DESTINATION include
)

#############
## Testing ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Export information
ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})
ament_export_dependencies(${dependencies})

ament_package()
