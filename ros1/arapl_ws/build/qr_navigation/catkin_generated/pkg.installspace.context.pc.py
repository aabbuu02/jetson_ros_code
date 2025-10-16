# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;nav_msgs;roscpp;rospy;sensor_msgs;std_msgs;tf;agv_navigation_qr;dynamic_reconfigure;message_runtime".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lqr_navigation".split(';') if "-lqr_navigation" != "" else []
PROJECT_NAME = "qr_navigation"
PROJECT_SPACE_DIR = "/home/nvidia/Desktop/arapl_ws/install"
PROJECT_VERSION = "0.0.0"
