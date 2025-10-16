// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_action:msg/UiInterface.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__STRUCT_H_
#define LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'process'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UiInterface in the package lift_action.
typedef struct lift_action__msg__UiInterface
{
  rosidl_runtime_c__String process;
  bool button;
  int16_t direction;
} lift_action__msg__UiInterface;

// Struct for a sequence of lift_action__msg__UiInterface.
typedef struct lift_action__msg__UiInterface__Sequence
{
  lift_action__msg__UiInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_action__msg__UiInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__STRUCT_H_
