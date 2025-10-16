// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/TransitionInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
// Member 'destination'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in msg/TransitionInfo in the package anscer_msgs.
typedef struct anscer_msgs__msg__TransitionInfo
{
  rosidl_runtime_c__String source;
  rosidl_runtime_c__String destination;
  geometry_msgs__msg__PoseArray pose;
} anscer_msgs__msg__TransitionInfo;

// Struct for a sequence of anscer_msgs__msg__TransitionInfo.
typedef struct anscer_msgs__msg__TransitionInfo__Sequence
{
  anscer_msgs__msg__TransitionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__TransitionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__STRUCT_H_
