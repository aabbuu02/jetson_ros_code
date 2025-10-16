// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
// Member 'unit'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValue in the package anscer_msgs.
typedef struct anscer_msgs__msg__KeyValue
{
  /// Label of the value
  rosidl_runtime_c__String key;
  /// Value to track
  rosidl_runtime_c__String value;
  rosidl_runtime_c__String unit;
  /// Errorlevel of the value
  float errorlevel;
} anscer_msgs__msg__KeyValue;

// Struct for a sequence of anscer_msgs__msg__KeyValue.
typedef struct anscer_msgs__msg__KeyValue__Sequence
{
  anscer_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
