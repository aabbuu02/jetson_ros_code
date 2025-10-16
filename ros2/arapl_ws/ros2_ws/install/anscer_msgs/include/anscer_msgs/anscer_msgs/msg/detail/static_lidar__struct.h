// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/StaticLidar.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__STATIC_LIDAR__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__STATIC_LIDAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/StaticLidar in the package anscer_msgs.
typedef struct anscer_msgs__msg__StaticLidar
{
  std_msgs__msg__Header header;
  float data;
} anscer_msgs__msg__StaticLidar;

// Struct for a sequence of anscer_msgs__msg__StaticLidar.
typedef struct anscer_msgs__msg__StaticLidar__Sequence
{
  anscer_msgs__msg__StaticLidar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__StaticLidar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__STATIC_LIDAR__STRUCT_H_
