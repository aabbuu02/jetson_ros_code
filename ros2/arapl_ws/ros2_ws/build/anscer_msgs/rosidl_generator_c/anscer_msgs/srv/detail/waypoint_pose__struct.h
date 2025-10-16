// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/WaypointPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint_id'
// Member 'waypoint_name'
#include "rosidl_runtime_c/string.h"
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/WaypointPose in the package anscer_msgs.
typedef struct anscer_msgs__srv__WaypointPose_Request
{
  bool save;
  rosidl_runtime_c__String waypoint_id;
  geometry_msgs__msg__PoseStamped waypoint_pose;
  rosidl_runtime_c__String waypoint_name;
} anscer_msgs__srv__WaypointPose_Request;

// Struct for a sequence of anscer_msgs__srv__WaypointPose_Request.
typedef struct anscer_msgs__srv__WaypointPose_Request__Sequence
{
  anscer_msgs__srv__WaypointPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__WaypointPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/WaypointPose in the package anscer_msgs.
typedef struct anscer_msgs__srv__WaypointPose_Response
{
  bool is_saved;
} anscer_msgs__srv__WaypointPose_Response;

// Struct for a sequence of anscer_msgs__srv__WaypointPose_Response.
typedef struct anscer_msgs__srv__WaypointPose_Response__Sequence
{
  anscer_msgs__srv__WaypointPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__WaypointPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__STRUCT_H_
