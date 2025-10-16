# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "graph_creator_msgs: 7 messages, 6 services")

set(MSG_I_FLAGS "-Igraph_creator_msgs:/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Igraph_msgs:/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg;-Inav_msgs:/opt/ros/noetic/share/nav_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(graph_creator_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" ""
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" ""
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" ""
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" "graph_creator_msgs/SnapPoseConfig:graph_creator_msgs/EdgeCreationType:graph_creator_msgs/EdgeDirectionCreationType:graph_creator_msgs/GraphCreatorMode"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" "graph_creator_msgs/EdgeCreationType:geometry_msgs/Point:geometry_msgs/Pose:geometry_msgs/Quaternion:graph_creator_msgs/EdgeDirectionCreationType"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" ""
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" ""
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" "graph_creator_msgs/GraphCreatorMode"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" "graph_creator_msgs/EdgeCreationType"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" "graph_creator_msgs/EdgeDirectionCreationType"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" "graph_creator_msgs/GraphCreatorMode:graph_creator_msgs/EdgeCreationType:graph_creator_msgs/SnapPoseConfig:graph_creator_msgs/EdgeDirectionCreationType:graph_creator_msgs/GraphCreatorState"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" "graph_creator_msgs/EdgeCreationType:geometry_msgs/Point:geometry_msgs/Pose:graph_creator_msgs/GraphGeneratorConfig:geometry_msgs/Quaternion:graph_creator_msgs/EdgeDirectionCreationType"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" NAME_WE)
add_custom_target(_graph_creator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_creator_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" "graph_creator_msgs/SnapPoseConfig"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)

### Generating Services
_generate_srv_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_cpp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
)

### Generating Module File
_generate_module_cpp(graph_creator_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(graph_creator_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(graph_creator_msgs_generate_messages graph_creator_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_cpp _graph_creator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_creator_msgs_gencpp)
add_dependencies(graph_creator_msgs_gencpp graph_creator_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_creator_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)

### Generating Services
_generate_srv_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_eus(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
)

### Generating Module File
_generate_module_eus(graph_creator_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(graph_creator_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(graph_creator_msgs_generate_messages graph_creator_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_eus _graph_creator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_creator_msgs_geneus)
add_dependencies(graph_creator_msgs_geneus graph_creator_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_creator_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)

### Generating Services
_generate_srv_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_lisp(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
)

### Generating Module File
_generate_module_lisp(graph_creator_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(graph_creator_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(graph_creator_msgs_generate_messages graph_creator_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_lisp _graph_creator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_creator_msgs_genlisp)
add_dependencies(graph_creator_msgs_genlisp graph_creator_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_creator_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)

### Generating Services
_generate_srv_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_nodejs(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
)

### Generating Module File
_generate_module_nodejs(graph_creator_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(graph_creator_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(graph_creator_msgs_generate_messages graph_creator_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_nodejs _graph_creator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_creator_msgs_gennodejs)
add_dependencies(graph_creator_msgs_gennodejs graph_creator_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_creator_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_msg_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)

### Generating Services
_generate_srv_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)
_generate_srv_py(graph_creator_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
)

### Generating Module File
_generate_module_py(graph_creator_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(graph_creator_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(graph_creator_msgs_generate_messages graph_creator_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv" NAME_WE)
add_dependencies(graph_creator_msgs_generate_messages_py _graph_creator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_creator_msgs_genpy)
add_dependencies(graph_creator_msgs_genpy graph_creator_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_creator_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_creator_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(graph_creator_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(graph_creator_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET graph_msgs_generate_messages_cpp)
  add_dependencies(graph_creator_msgs_generate_messages_cpp graph_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_creator_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(graph_creator_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(graph_creator_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET graph_msgs_generate_messages_eus)
  add_dependencies(graph_creator_msgs_generate_messages_eus graph_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_creator_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(graph_creator_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(graph_creator_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET graph_msgs_generate_messages_lisp)
  add_dependencies(graph_creator_msgs_generate_messages_lisp graph_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_creator_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(graph_creator_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(graph_creator_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET graph_msgs_generate_messages_nodejs)
  add_dependencies(graph_creator_msgs_generate_messages_nodejs graph_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_creator_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(graph_creator_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(graph_creator_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET graph_msgs_generate_messages_py)
  add_dependencies(graph_creator_msgs_generate_messages_py graph_msgs_generate_messages_py)
endif()
