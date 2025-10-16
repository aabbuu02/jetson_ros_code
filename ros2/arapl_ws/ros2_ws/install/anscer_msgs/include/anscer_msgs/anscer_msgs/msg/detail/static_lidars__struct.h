// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/StaticLidars.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__STRUCT_H_

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
// Member 'point'
#include "anscer_msgs/msg/detail/static_lidar__struct.h"

/// Struct defined in msg/StaticLidars in the package anscer_msgs.
typedef struct anscer_msgs__msg__StaticLidars
{
  std_msgs__msg__Header header;
  anscer_msgs__msg__StaticLidar__Sequence point;
} anscer_msgs__msg__StaticLidars;

// Struct for a sequence of anscer_msgs__msg__StaticLidars.
typedef struct anscer_msgs__msg__StaticLidars__Sequence
{
  anscer_msgs__msg__StaticLidars * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__StaticLidars__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__STRUCT_H_
