# Install script for directory: /home/nvidia/Desktop/arapl_ws/src/qr_mission_scheduler

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/msg" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/src/qr_mission_scheduler/msg/goalMsg.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/srv" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/src/qr_mission_scheduler/srv/GetGoal.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/action" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/src/qr_mission_scheduler/action/mission_scheduler.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/msg" TYPE FILE FILES
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerAction.msg"
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerActionGoal.msg"
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerActionResult.msg"
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerActionFeedback.msg"
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerGoal.msg"
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerResult.msg"
    "/home/nvidia/Desktop/arapl_ws/devel/share/qr_mission_scheduler/msg/mission_schedulerFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/cmake" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/build/qr_mission_scheduler/catkin_generated/installspace/qr_mission_scheduler-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/include/qr_mission_scheduler")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/share/roseus/ros/qr_mission_scheduler")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/share/common-lisp/ros/qr_mission_scheduler")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/share/gennodejs/ros/qr_mission_scheduler")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/nvidia/Desktop/arapl_ws/devel/lib/python3/dist-packages/qr_mission_scheduler")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/nvidia/Desktop/arapl_ws/devel/lib/python3/dist-packages/qr_mission_scheduler")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/build/qr_mission_scheduler/catkin_generated/installspace/qr_mission_scheduler.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/cmake" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/build/qr_mission_scheduler/catkin_generated/installspace/qr_mission_scheduler-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler/cmake" TYPE FILE FILES
    "/home/nvidia/Desktop/arapl_ws/build/qr_mission_scheduler/catkin_generated/installspace/qr_mission_schedulerConfig.cmake"
    "/home/nvidia/Desktop/arapl_ws/build/qr_mission_scheduler/catkin_generated/installspace/qr_mission_schedulerConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qr_mission_scheduler" TYPE FILE FILES "/home/nvidia/Desktop/arapl_ws/src/qr_mission_scheduler/package.xml")
endif()

