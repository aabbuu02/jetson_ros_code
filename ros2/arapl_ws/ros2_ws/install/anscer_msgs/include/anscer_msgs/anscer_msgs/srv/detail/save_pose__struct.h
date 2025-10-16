// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/SavePose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_POSE__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint_name'
// Member 'waypoint_id'
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SavePose in the package anscer_msgs.
typedef struct anscer_msgs__srv__SavePose_Request
{
  bool save;
  bool clear_all;
  rosidl_runtime_c__String waypoint_name;
  rosidl_runtime_c__String waypoint_id;
  rosidl_runtime_c__String type;
} anscer_msgs__srv__SavePose_Request;

// Struct for a sequence of anscer_msgs__srv__SavePose_Request.
typedef struct anscer_msgs__srv__SavePose_Request__Sequence
{
  anscer_msgs__srv__SavePose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__SavePose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SavePose in the package anscer_msgs.
typedef struct anscer_msgs__srv__SavePose_Response
{
  bool is_saved;
  rosidl_runtime_c__String status;
} anscer_msgs__srv__SavePose_Response;

// Struct for a sequence of anscer_msgs__srv__SavePose_Response.
typedef struct anscer_msgs__srv__SavePose_Response__Sequence
{
  anscer_msgs__srv__SavePose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__SavePose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_POSE__STRUCT_H_
