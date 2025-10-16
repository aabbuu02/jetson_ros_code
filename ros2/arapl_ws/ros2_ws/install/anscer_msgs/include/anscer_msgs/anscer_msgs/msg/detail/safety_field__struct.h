// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/SafetyField.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SafetyField in the package anscer_msgs.
typedef struct anscer_msgs__msg__SafetyField
{
  int8_t field_id;
  bool is_front;
  bool is_rear;
} anscer_msgs__msg__SafetyField;

// Struct for a sequence of anscer_msgs__msg__SafetyField.
typedef struct anscer_msgs__msg__SafetyField__Sequence
{
  anscer_msgs__msg__SafetyField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__SafetyField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__STRUCT_H_
