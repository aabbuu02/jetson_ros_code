// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__STRUCT_H_
#define LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HomingStatus in the package lift_action.
typedef struct lift_action__msg__HomingStatus
{
  bool lifter_status;
  bool extractor_status;
  bool turn_table_status;
  bool is_homed;
} lift_action__msg__HomingStatus;

// Struct for a sequence of lift_action__msg__HomingStatus.
typedef struct lift_action__msg__HomingStatus__Sequence
{
  lift_action__msg__HomingStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_action__msg__HomingStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__STRUCT_H_
