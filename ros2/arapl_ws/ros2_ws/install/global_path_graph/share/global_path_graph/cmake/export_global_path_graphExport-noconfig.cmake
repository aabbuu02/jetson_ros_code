#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "global_path_graph::global_path_graph" for configuration ""
set_property(TARGET global_path_graph::global_path_graph APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(global_path_graph::global_path_graph PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libglobal_path_graph.so"
  IMPORTED_SONAME_NOCONFIG "libglobal_path_graph.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS global_path_graph::global_path_graph )
list(APPEND _IMPORT_CHECK_FILES_FOR_global_path_graph::global_path_graph "${_IMPORT_PREFIX}/lib/libglobal_path_graph.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
