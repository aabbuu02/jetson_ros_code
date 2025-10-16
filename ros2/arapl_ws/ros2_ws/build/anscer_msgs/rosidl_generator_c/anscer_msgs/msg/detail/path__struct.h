// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agent_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "anscer_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Path in the package anscer_msgs.
typedef struct anscer_msgs__msg__Path
{
  rosidl_runtime_c__String agent_name;
  anscer_msgs__msg__Pose__Sequence pose;
} anscer_msgs__msg__Path;

// Struct for a sequence of anscer_msgs__msg__Path.
typedef struct anscer_msgs__msg__Path__Sequence
{
  anscer_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__PATH__STRUCT_H_
