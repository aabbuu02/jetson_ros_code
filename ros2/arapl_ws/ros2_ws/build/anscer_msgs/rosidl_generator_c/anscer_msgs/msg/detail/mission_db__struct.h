// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MissionDB.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DB__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionDB in the package anscer_msgs.
typedef struct anscer_msgs__msg__MissionDB
{
  rosidl_runtime_c__String timestamp;
  float current_distance;
  float total_distance;
} anscer_msgs__msg__MissionDB;

// Struct for a sequence of anscer_msgs__msg__MissionDB.
typedef struct anscer_msgs__msg__MissionDB__Sequence
{
  anscer_msgs__msg__MissionDB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MissionDB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DB__STRUCT_H_
