// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_action:msg/LiftFeedback.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__STRUCT_H_
#define LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'unique_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LiftFeedback in the package lift_action.
typedef struct lift_action__msg__LiftFeedback
{
  rosidl_runtime_c__String unique_id;
  int16_t acr_shelf;
  int16_t action;
  bool status;
  bool fail_status;
} lift_action__msg__LiftFeedback;

// Struct for a sequence of lift_action__msg__LiftFeedback.
typedef struct lift_action__msg__LiftFeedback__Sequence
{
  lift_action__msg__LiftFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_action__msg__LiftFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__STRUCT_H_
