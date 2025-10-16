// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MissionData.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionData in the package anscer_msgs.
typedef struct anscer_msgs__msg__MissionData
{
  rosidl_runtime_c__String mission_name;
  int16_t success_count;
  int16_t mission_count;
} anscer_msgs__msg__MissionData;

// Struct for a sequence of anscer_msgs__msg__MissionData.
typedef struct anscer_msgs__msg__MissionData__Sequence
{
  anscer_msgs__msg__MissionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MissionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__STRUCT_H_
