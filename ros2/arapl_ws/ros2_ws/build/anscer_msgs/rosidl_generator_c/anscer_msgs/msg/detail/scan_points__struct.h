// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ScanPoints.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SCAN_POINTS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__SCAN_POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "anscer_msgs/msg/detail/scan_point__struct.h"

/// Struct defined in msg/ScanPoints in the package anscer_msgs.
typedef struct anscer_msgs__msg__ScanPoints
{
  anscer_msgs__msg__ScanPoint__Sequence point;
} anscer_msgs__msg__ScanPoints;

// Struct for a sequence of anscer_msgs__msg__ScanPoints.
typedef struct anscer_msgs__msg__ScanPoints__Sequence
{
  anscer_msgs__msg__ScanPoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ScanPoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__SCAN_POINTS__STRUCT_H_
