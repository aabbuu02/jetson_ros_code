// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MotorFaultFlags.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_FAULT_FLAGS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_FAULT_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorFaultFlags in the package anscer_msgs.
typedef struct anscer_msgs__msg__MotorFaultFlags
{
  bool overheat;
  bool overvoltage;
  bool undervoltage;
  bool short_circuit;
  bool emergency_stop;
  bool motor_setup_fault;
  bool mosfet_failure;
  bool default_configuration;
} anscer_msgs__msg__MotorFaultFlags;

// Struct for a sequence of anscer_msgs__msg__MotorFaultFlags.
typedef struct anscer_msgs__msg__MotorFaultFlags__Sequence
{
  anscer_msgs__msg__MotorFaultFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MotorFaultFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_FAULT_FLAGS__STRUCT_H_
