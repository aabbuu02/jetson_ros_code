# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "interactive_markers;roscpp;roscpp;rospy;std_msgs;tf2;tf2_ros;visualization_msgs;graph_msgs;graph_creator_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lgraph_visuals;-lgraph_loader;-lgraph_curves;-lgraph_utils;-lgraph_file_utils".split(';') if "-lgraph_visuals;-lgraph_loader;-lgraph_curves;-lgraph_utils;-lgraph_file_utils" != "" else []
PROJECT_NAME = "graph_creator"
PROJECT_SPACE_DIR = "/home/nvidia/Desktop/arapl_ws/install"
PROJECT_VERSION = "0.0.0"
