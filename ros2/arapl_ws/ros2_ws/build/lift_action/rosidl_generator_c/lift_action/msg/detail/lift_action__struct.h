// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__STRUCT_H_
#define LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__STRUCT_H_

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
// Member 'whole_bin_no'
// Member 'putaway_barcode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LiftAction in the package lift_action.
typedef struct lift_action__msg__LiftAction
{
  rosidl_runtime_c__String unique_id;
  bool reached;
  int16_t rack;
  int16_t shelf;
  int16_t acr_shelf;
  int16_t action;
  rosidl_runtime_c__String whole_bin_no;
  rosidl_runtime_c__String putaway_barcode;
} lift_action__msg__LiftAction;

// Struct for a sequence of lift_action__msg__LiftAction.
typedef struct lift_action__msg__LiftAction__Sequence
{
  lift_action__msg__LiftAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_action__msg__LiftAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__STRUCT_H_
