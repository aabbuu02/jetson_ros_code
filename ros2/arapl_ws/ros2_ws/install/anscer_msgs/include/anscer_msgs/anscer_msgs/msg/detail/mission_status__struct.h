// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionStatus in the package anscer_msgs.
typedef struct anscer_msgs__msg__MissionStatus
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String task_id;
} anscer_msgs__msg__MissionStatus;

// Struct for a sequence of anscer_msgs__msg__MissionStatus.
typedef struct anscer_msgs__msg__MissionStatus__Sequence
{
  anscer_msgs__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
