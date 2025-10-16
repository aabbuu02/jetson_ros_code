# Install script for directory: /home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nvidia/Desktop/arapl_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/graph_creator_msgs/msg" TYPE FILE FILES
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorMode.msg"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeCreationType.msg"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/EdgeDirectionCreationType.msg"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphCreatorState.msg"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/GraphGeneratorConfig.msg"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SelectedGraphElements.msg"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/msg/SnapPoseConfig.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/graph_creator_msgs/srv" TYPE FILE FILES
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetGraphCreatorMode.srv"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeCreationType.srv"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetEdgeDirectionCreationType.srv"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GetGraphCreatorState.srv"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/GenerateGraph.srv"
    "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/srv/SetSnapPose.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/graph_creator_msgs/cmake" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/build/graph_creator_msgs/catkin_generated/installspace/graph_creator_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/include/graph_creator_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/share/roseus/ros/graph_creator_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/share/common-lisp/ros/graph_creator_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/share/gennodejs/ros/graph_creator_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/nvidia/Desktop/arapl_ws/devel/lib/python3/dist-packages/graph_creator_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/lib/python3/dist-packages/graph_creator_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/build/graph_creator_msgs/catkin_generated/installspace/graph_creator_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/graph_creator_msgs/cmake" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/build/graph_creator_msgs/catkin_generated/installspace/graph_creator_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/graph_creator_msgs/cmake" TYPE FILE FILES
    "/home/nvidia/Desktop/arapl_ws/build/graph_creator_msgs/catkin_generated/installspace/graph_creator_msgsConfig.cmake"
    "/home/nvidia/Desktop/arapl_ws/build/graph_creator_msgs/catkin_generated/installspace/graph_creator_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/graph_creator_msgs" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/src/graph_creator_msgs/package.xml")
endif()

