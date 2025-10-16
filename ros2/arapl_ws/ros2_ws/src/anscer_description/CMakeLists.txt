cmake_minimum_required(VERSION 3.8)
project(anscer_description)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)

################################################################################
# Install directories
################################################################################

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
  PATTERN "*.py"
)

# Install URDF/xacro files
install(DIRECTORY urdf
  DESTINATION share/${PROJECT_NAME}/
)

# Install mesh files
install(DIRECTORY meshes
  DESTINATION share/${PROJECT_NAME}/
  OPTIONAL
)

# Install RViz config files
install(DIRECTORY rviz
  DESTINATION share/${PROJECT_NAME}/
  OPTIONAL
)

# Install config files
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}/
  OPTIONAL
)

################################################################################
# Testing
################################################################################

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # Skip copyright and cpplint checks if needed
  # set(ament_cmake_copyright_FOUND TRUE)
  # set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

################################################################################
# Ament package generation
################################################################################

ament_package()
