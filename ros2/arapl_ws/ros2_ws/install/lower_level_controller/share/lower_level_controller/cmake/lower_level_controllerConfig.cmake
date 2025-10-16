# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_lower_level_controller_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED lower_level_controller_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(lower_level_controller_FOUND FALSE)
  elseif(NOT lower_level_controller_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(lower_level_controller_FOUND FALSE)
  endif()
  return()
endif()
set(_lower_level_controller_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lower_level_controller_FIND_QUIETLY)
  message(STATUS "Found lower_level_controller: 2.0.0 (${lower_level_controller_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lower_level_controller' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${lower_level_controller_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lower_level_controller_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${lower_level_controller_DIR}/${_extra}")
endforeach()
