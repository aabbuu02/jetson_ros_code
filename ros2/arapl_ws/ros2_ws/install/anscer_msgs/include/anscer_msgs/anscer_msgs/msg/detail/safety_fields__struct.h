// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/SafetyFields.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'warning'
// Member 'safety'
#include "anscer_msgs/msg/detail/safety_field__struct.h"

/// Struct defined in msg/SafetyFields in the package anscer_msgs.
typedef struct anscer_msgs__msg__SafetyFields
{
  anscer_msgs__msg__SafetyField__Sequence warning;
  anscer_msgs__msg__SafetyField__Sequence safety;
} anscer_msgs__msg__SafetyFields;

// Struct for a sequence of anscer_msgs__msg__SafetyFields.
typedef struct anscer_msgs__msg__SafetyFields__Sequence
{
  anscer_msgs__msg__SafetyFields * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__SafetyFields__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__STRUCT_H_
