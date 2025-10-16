// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ZonePoints.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ZONE_POINTS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__ZONE_POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'index'
#include "rosidl_runtime_c/string.h"
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ZonePoints in the package anscer_msgs.
typedef struct anscer_msgs__msg__ZonePoints
{
  rosidl_runtime_c__String index;
  geometry_msgs__msg__Point__Sequence coordinates;
} anscer_msgs__msg__ZonePoints;

// Struct for a sequence of anscer_msgs__msg__ZonePoints.
typedef struct anscer_msgs__msg__ZonePoints__Sequence
{
  anscer_msgs__msg__ZonePoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ZonePoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__ZONE_POINTS__STRUCT_H_
