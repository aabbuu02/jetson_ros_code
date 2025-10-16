// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Paths.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PATHS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__PATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'global_path'
#include "anscer_msgs/msg/detail/path__struct.h"

/// Struct defined in msg/Paths in the package anscer_msgs.
typedef struct anscer_msgs__msg__Paths
{
  anscer_msgs__msg__Path__Sequence global_path;
} anscer_msgs__msg__Paths;

// Struct for a sequence of anscer_msgs__msg__Paths.
typedef struct anscer_msgs__msg__Paths__Sequence
{
  anscer_msgs__msg__Paths * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Paths__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__PATHS__STRUCT_H_
