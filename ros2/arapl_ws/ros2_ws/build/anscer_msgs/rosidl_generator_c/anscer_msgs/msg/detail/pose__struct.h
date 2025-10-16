// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__POSE__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Pose in the package anscer_msgs.
typedef struct anscer_msgs__msg__Pose
{
  int16_t time;
  geometry_msgs__msg__Pose pose;
} anscer_msgs__msg__Pose;

// Struct for a sequence of anscer_msgs__msg__Pose.
typedef struct anscer_msgs__msg__Pose__Sequence
{
  anscer_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__POSE__STRUCT_H_
