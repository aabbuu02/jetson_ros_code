// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/Indication.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDICATION__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__INDICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Indication in the package anscer_msgs.
typedef struct anscer_msgs__msg__Indication
{
  rosidl_runtime_c__String color;
  int8_t color_mode;
  bool buzzer;
  int8_t buzzer_mode;
  int16_t priority;
} anscer_msgs__msg__Indication;

// Struct for a sequence of anscer_msgs__msg__Indication.
typedef struct anscer_msgs__msg__Indication__Sequence
{
  anscer_msgs__msg__Indication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__Indication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__INDICATION__STRUCT_H_
