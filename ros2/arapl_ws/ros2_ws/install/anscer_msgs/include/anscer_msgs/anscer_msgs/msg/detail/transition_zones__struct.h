// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/TransitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'zones'
#include "anscer_msgs/msg/detail/transition_info__struct.h"

/// Struct defined in msg/TransitionZones in the package anscer_msgs.
typedef struct anscer_msgs__msg__TransitionZones
{
  anscer_msgs__msg__TransitionInfo__Sequence zones;
} anscer_msgs__msg__TransitionZones;

// Struct for a sequence of anscer_msgs__msg__TransitionZones.
typedef struct anscer_msgs__msg__TransitionZones__Sequence
{
  anscer_msgs__msg__TransitionZones * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__TransitionZones__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__TRANSITION_ZONES__STRUCT_H_
