// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__STRUCT_H_
#define QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__STRUCT_H_

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
// Member 'operation'
#include "rosidl_runtime_c/string.h"
// Member 'start'
// Member 'goal'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GoalMsg in the package qr_navigation.
typedef struct qr_navigation__msg__GoalMsg
{
  rosidl_runtime_c__String pose;
  rosidl_runtime_c__double__Sequence start;
  rosidl_runtime_c__double__Sequence goal;
  rosidl_runtime_c__String operation;
} qr_navigation__msg__GoalMsg;

// Struct for a sequence of qr_navigation__msg__GoalMsg.
typedef struct qr_navigation__msg__GoalMsg__Sequence
{
  qr_navigation__msg__GoalMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_navigation__msg__GoalMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__STRUCT_H_
