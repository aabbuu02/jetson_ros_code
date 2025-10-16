// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/MotorDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'fault_flags'
#include "anscer_msgs/msg/detail/motor_fault_flags__struct.h"
// Member 'status_flags'
#include "anscer_msgs/msg/detail/motor_status_flags__struct.h"

/// Struct defined in msg/MotorDiagnostics in the package anscer_msgs.
typedef struct anscer_msgs__msg__MotorDiagnostics
{
  rosidl_runtime_c__String name;
  anscer_msgs__msg__MotorFaultFlags fault_flags;
  anscer_msgs__msg__MotorStatusFlags status_flags;
} anscer_msgs__msg__MotorDiagnostics;

// Struct for a sequence of anscer_msgs__msg__MotorDiagnostics.
typedef struct anscer_msgs__msg__MotorDiagnostics__Sequence
{
  anscer_msgs__msg__MotorDiagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__MotorDiagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__STRUCT_H_
