// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Delay.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DELAY__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__DELAY__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Delay in the package anscer_msgs.
typedef struct anscer_msgs__msg__Delay
{
  rosidl_runtime_c__String name;
  int16_t value;
  rosidl_runtime_c__String map_name;
} anscer_msgs__msg__Delay;

// Struct for a sequence of anscer_msgs__msg__Delay.
typedef struct anscer_msgs__msg__Delay__Sequence
{
  anscer_msgs__msg__Delay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Delay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__DELAY__STRUCT_H_
