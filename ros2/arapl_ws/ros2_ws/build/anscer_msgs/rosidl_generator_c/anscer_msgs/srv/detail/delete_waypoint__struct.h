// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/DeleteWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__STRUCT_H_

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
// Member 'waypoint_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteWaypoint in the package anscer_msgs.
typedef struct anscer_msgs__srv__DeleteWaypoint_Request
{
  bool delete_wp;
  int16_t waypoint_order;
  rosidl_runtime_c__String waypoint_id;
  rosidl_runtime_c__String waypoint_type;
} anscer_msgs__srv__DeleteWaypoint_Request;

// Struct for a sequence of anscer_msgs__srv__DeleteWaypoint_Request.
typedef struct anscer_msgs__srv__DeleteWaypoint_Request__Sequence
{
  anscer_msgs__srv__DeleteWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__DeleteWaypoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteWaypoint in the package anscer_msgs.
typedef struct anscer_msgs__srv__DeleteWaypoint_Response
{
  rosidl_runtime_c__String status;
  bool is_deleted;
} anscer_msgs__srv__DeleteWaypoint_Response;

// Struct for a sequence of anscer_msgs__srv__DeleteWaypoint_Response.
typedef struct anscer_msgs__srv__DeleteWaypoint_Response__Sequence
{
  anscer_msgs__srv__DeleteWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__DeleteWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__STRUCT_H_
