// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorStatusFlags in the package anscer_msgs.
typedef struct anscer_msgs__msg__MotorStatusFlags
{
  bool serial_mode;
  bool pulse_mode;
  bool analog_mode;
  bool power_stage_off;
  bool stall_detected;
  bool at_limit;
  bool unused;
  bool micro_basic_script_running;
  bool motor_tuning_mode;
} anscer_msgs__msg__MotorStatusFlags;

// Struct for a sequence of anscer_msgs__msg__MotorStatusFlags.
typedef struct anscer_msgs__msg__MotorStatusFlags__Sequence
{
  anscer_msgs__msg__MotorStatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MotorStatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__STRUCT_H_
