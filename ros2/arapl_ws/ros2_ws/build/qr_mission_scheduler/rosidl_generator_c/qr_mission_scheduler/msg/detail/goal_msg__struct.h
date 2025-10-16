// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qr_mission_scheduler:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__STRUCT_H_
#define QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__STRUCT_H_

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

/// Struct defined in msg/GoalMsg in the package qr_mission_scheduler.
typedef struct qr_mission_scheduler__msg__GoalMsg
{
  rosidl_runtime_c__String goal_type;
  double source;
  double destination;
} qr_mission_scheduler__msg__GoalMsg;

// Struct for a sequence of qr_mission_scheduler__msg__GoalMsg.
typedef struct qr_mission_scheduler__msg__GoalMsg__Sequence
{
  qr_mission_scheduler__msg__GoalMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_mission_scheduler__msg__GoalMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__STRUCT_H_
