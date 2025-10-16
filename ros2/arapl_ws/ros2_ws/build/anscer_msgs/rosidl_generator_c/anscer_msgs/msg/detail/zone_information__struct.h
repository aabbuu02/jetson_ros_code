// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ZoneInformation.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'indication_info'
#include "anscer_msgs/msg/detail/indication__struct.h"

/// Struct defined in msg/ZoneInformation in the package anscer_msgs.
typedef struct anscer_msgs__msg__ZoneInformation
{
  anscer_msgs__msg__Indication indication_info;
  float speed_factor;
} anscer_msgs__msg__ZoneInformation;

// Struct for a sequence of anscer_msgs__msg__ZoneInformation.
typedef struct anscer_msgs__msg__ZoneInformation__Sequence
{
  anscer_msgs__msg__ZoneInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ZoneInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__STRUCT_H_
