// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Debug.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DEBUG__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Debug in the package anscer_msgs.
typedef struct anscer_msgs__msg__Debug
{
  float left_rpm_command;
  float right_rpm_command;
  float left_rpm_feedback;
  float right_rpm_feedback;
} anscer_msgs__msg__Debug;

// Struct for a sequence of anscer_msgs__msg__Debug.
typedef struct anscer_msgs__msg__Debug__Sequence
{
  anscer_msgs__msg__Debug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Debug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__DEBUG__STRUCT_H_
