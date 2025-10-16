// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'map_name'
// Member 'type'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Waypoint in the package anscer_msgs.
typedef struct anscer_msgs__msg__Waypoint
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String id;
  geometry_msgs__msg__Pose pose;
} anscer_msgs__msg__Waypoint;

// Struct for a sequence of anscer_msgs__msg__Waypoint.
typedef struct anscer_msgs__msg__Waypoint__Sequence
{
  anscer_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
