// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_info'
#include "anscer_msgs/msg/detail/mission_data__struct.h"

/// Struct defined in msg/MissionInfo in the package anscer_msgs.
typedef struct anscer_msgs__msg__MissionInfo
{
  anscer_msgs__msg__MissionData__Sequence mission_info;
} anscer_msgs__msg__MissionInfo;

// Struct for a sequence of anscer_msgs__msg__MissionInfo.
typedef struct anscer_msgs__msg__MissionInfo__Sequence
{
  anscer_msgs__msg__MissionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MissionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_H_
