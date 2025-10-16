#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "graph_control::graph_control_plugin_loader" for configuration ""
set_property(TARGET graph_control::graph_control_plugin_loader APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(graph_control::graph_control_plugin_loader PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgraph_control_plugin_loader.so"
  IMPORTED_SONAME_NOCONFIG "libgraph_control_plugin_loader.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS graph_control::graph_control_plugin_loader )
list(APPEND _IMPORT_CHECK_FILES_FOR_graph_control::graph_control_plugin_loader "${_IMPORT_PREFIX}/lib/libgraph_control_plugin_loader.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
