# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "graph_msgs: 5 messages, 4 services")

set(MSG_I_FLAGS "-Igraph_msgs:/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Inav_msgs:/opt/ros/noetic/share/nav_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(graph_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" "geometry_msgs/Point:geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" "geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property:geometry_msgs/Point:std_msgs/Header:geometry_msgs/PoseArray"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" ""
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" "geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property:graph_msgs/Vertex:graph_msgs/GraphMetaData:geometry_msgs/Point:std_msgs/Header:graph_msgs/Edge:geometry_msgs/PoseArray"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" "graph_msgs/Graph:geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property:graph_msgs/Vertex:graph_msgs/GraphMetaData:geometry_msgs/Point:std_msgs/Header:graph_msgs/Edge:geometry_msgs/PoseArray"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" "graph_msgs/Graph:geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property:graph_msgs/Vertex:graph_msgs/GraphMetaData:geometry_msgs/Point:std_msgs/Header:graph_msgs/Edge:geometry_msgs/PoseArray"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" "graph_msgs/Graph:geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property:graph_msgs/Vertex:graph_msgs/GraphMetaData:geometry_msgs/Point:std_msgs/Header:graph_msgs/Edge:geometry_msgs/PoseArray"
)

get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" NAME_WE)
add_custom_target(_graph_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "graph_msgs" "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" "nav_msgs/Path:geometry_msgs/Pose:geometry_msgs/Quaternion:graph_msgs/Property:graph_msgs/Vertex:geometry_msgs/Point:std_msgs/Header:geometry_msgs/PoseStamped"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_msg_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_msg_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_msg_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_msg_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)

### Generating Services
_generate_srv_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_srv_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_srv_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)
_generate_srv_cpp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
)

### Generating Module File
_generate_module_cpp(graph_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(graph_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(graph_msgs_generate_messages graph_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_cpp _graph_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_msgs_gencpp)
add_dependencies(graph_msgs_gencpp graph_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_msg_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_msg_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_msg_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_msg_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)

### Generating Services
_generate_srv_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_srv_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_srv_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)
_generate_srv_eus(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
)

### Generating Module File
_generate_module_eus(graph_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(graph_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(graph_msgs_generate_messages graph_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_eus _graph_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_msgs_geneus)
add_dependencies(graph_msgs_geneus graph_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_msg_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_msg_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_msg_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_msg_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)

### Generating Services
_generate_srv_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_srv_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_srv_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)
_generate_srv_lisp(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
)

### Generating Module File
_generate_module_lisp(graph_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(graph_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(graph_msgs_generate_messages graph_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_lisp _graph_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_msgs_genlisp)
add_dependencies(graph_msgs_genlisp graph_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_msg_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_msg_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_msg_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_msg_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)

### Generating Services
_generate_srv_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_srv_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_srv_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)
_generate_srv_nodejs(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
)

### Generating Module File
_generate_module_nodejs(graph_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(graph_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(graph_msgs_generate_messages graph_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_nodejs _graph_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_msgs_gennodejs)
add_dependencies(graph_msgs_gennodejs graph_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_msg_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_msg_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_msg_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_msg_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)

### Generating Services
_generate_srv_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_srv_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_srv_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv"
  "${MSG_I_FLAGS}"
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseArray.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)
_generate_srv_py(graph_msgs
  "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg;/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
)

### Generating Module File
_generate_module_py(graph_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(graph_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(graph_msgs_generate_messages graph_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Vertex.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Edge.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Property.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/GraphMetaData.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/msg/Graph.msg" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/SaveGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/LoadGraph.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/nvidia/Desktop/arapl_ws/src/graph_msgs/srv/GetGraphPlan.srv" NAME_WE)
add_dependencies(graph_msgs_generate_messages_py _graph_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(graph_msgs_genpy)
add_dependencies(graph_msgs_genpy graph_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS graph_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/graph_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(graph_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(graph_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET nav_msgs_generate_messages_cpp)
  add_dependencies(graph_msgs_generate_messages_cpp nav_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/graph_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(graph_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(graph_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET nav_msgs_generate_messages_eus)
  add_dependencies(graph_msgs_generate_messages_eus nav_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/graph_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(graph_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(graph_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET nav_msgs_generate_messages_lisp)
  add_dependencies(graph_msgs_generate_messages_lisp nav_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/graph_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(graph_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(graph_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET nav_msgs_generate_messages_nodejs)
  add_dependencies(graph_msgs_generate_messages_nodejs nav_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/graph_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(graph_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(graph_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET nav_msgs_generate_messages_py)
  add_dependencies(graph_msgs_generate_messages_py nav_msgs_generate_messages_py)
endif()
