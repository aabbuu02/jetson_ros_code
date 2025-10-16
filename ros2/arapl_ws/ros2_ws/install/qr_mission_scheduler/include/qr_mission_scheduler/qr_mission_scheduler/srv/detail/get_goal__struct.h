// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qr_mission_scheduler:srv/GetGoal.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__STRUCT_H_
#define QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGoal in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__srv__GetGoal_Request
{
  rosidl_runtime_c__String goal_type;
  double source_id;
  double target_id;
} qr_mission_scheduler__srv__GetGoal_Request;

// Struct for a sequence of qr_mission_scheduler__srv__GetGoal_Request.
typedef struct qr_mission_scheduler__srv__GetGoal_Request__Sequence
{
  qr_mission_scheduler__srv__GetGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__srv__GetGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGoal in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__srv__GetGoal_Response
{
  rosidl_runtime_c__String result;
} qr_mission_scheduler__srv__GetGoal_Response;

// Struct for a sequence of qr_mission_scheduler__srv__GetGoal_Response.
typedef struct qr_mission_scheduler__srv__GetGoal_Response__Sequence
{
  qr_mission_scheduler__srv__GetGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__srv__GetGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__STRUCT_H_
