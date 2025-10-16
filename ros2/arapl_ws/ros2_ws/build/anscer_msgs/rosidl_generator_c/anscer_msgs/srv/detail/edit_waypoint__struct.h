// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/EditWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__STRUCT_H_

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
// Member 'new_id'
// Member 'waypoint_type'
// Member 'waypoint_name'
#include "rosidl_runtime_c/string.h"
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/EditWaypoint in the package anscer_msgs.
typedef struct anscer_msgs__srv__EditWaypoint_Request
{
  bool rename;
  bool replace_id;
  bool replace_to_current_pose;
  bool replace_to_pose;
  int16_t waypoint_order;
  rosidl_runtime_c__String waypoint_id;
  rosidl_runtime_c__String new_id;
  rosidl_runtime_c__String waypoint_type;
  rosidl_runtime_c__String waypoint_name;
  geometry_msgs__msg__PoseStamped waypoint_pose;
} anscer_msgs__srv__EditWaypoint_Request;

// Struct for a sequence of anscer_msgs__srv__EditWaypoint_Request.
typedef struct anscer_msgs__srv__EditWaypoint_Request__Sequence
{
  anscer_msgs__srv__EditWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__EditWaypoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EditWaypoint in the package anscer_msgs.
typedef struct anscer_msgs__srv__EditWaypoint_Response
{
  rosidl_runtime_c__String status;
  bool edited;
} anscer_msgs__srv__EditWaypoint_Response;

// Struct for a sequence of anscer_msgs__srv__EditWaypoint_Response.
typedef struct anscer_msgs__srv__EditWaypoint_Response__Sequence
{
  anscer_msgs__srv__EditWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__EditWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__STRUCT_H_
