// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MotorDiagnosticsArray.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_diagnostics'
#include "anscer_msgs/msg/detail/motor_diagnostics__struct.h"

/// Struct defined in msg/MotorDiagnosticsArray in the package anscer_msgs.
typedef struct anscer_msgs__msg__MotorDiagnosticsArray
{
  anscer_msgs__msg__MotorDiagnostics__Sequence motor_diagnostics;
} anscer_msgs__msg__MotorDiagnosticsArray;

// Struct for a sequence of anscer_msgs__msg__MotorDiagnosticsArray.
typedef struct anscer_msgs__msg__MotorDiagnosticsArray__Sequence
{
  anscer_msgs__msg__MotorDiagnosticsArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MotorDiagnosticsArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS_ARRAY__STRUCT_H_
