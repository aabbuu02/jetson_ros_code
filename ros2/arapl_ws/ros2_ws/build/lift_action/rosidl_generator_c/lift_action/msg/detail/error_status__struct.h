// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__STRUCT_H_
#define LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ErrorStatus in the package lift_action.
typedef struct lift_action__msg__ErrorStatus
{
  bool lifter_fault;
  bool extractor_fault;
  bool turn_table_fault;
  bool swing_arm_fault;
  bool emergency_pb_fault;
  bool swing_arm_sensor_zero_fault;
  bool swing_arm_sensor_ninety_fault;
  bool turntable_sensor_zero_fault;
  bool extractor_sensor_laser_fault;
} lift_action__msg__ErrorStatus;

// Struct for a sequence of lift_action__msg__ErrorStatus.
typedef struct lift_action__msg__ErrorStatus__Sequence
{
  lift_action__msg__ErrorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_action__msg__ErrorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__STRUCT_H_
