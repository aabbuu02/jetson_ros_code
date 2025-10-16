// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ControllerMode.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__CONTROLLER_MODE__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__CONTROLLER_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFAULT_MOTION'.
enum
{
  anscer_msgs__msg__ControllerMode__DEFAULT_MOTION = 0
};

/// Constant 'CHARGE_DOCK'.
enum
{
  anscer_msgs__msg__ControllerMode__CHARGE_DOCK = 1
};

/// Constant 'CHARGE_UNDOCK'.
enum
{
  anscer_msgs__msg__ControllerMode__CHARGE_UNDOCK = 2
};

/// Constant 'BARCODE_MOTION'.
enum
{
  anscer_msgs__msg__ControllerMode__BARCODE_MOTION = 3
};

/// Struct defined in msg/ControllerMode in the package anscer_msgs.
typedef struct anscer_msgs__msg__ControllerMode
{
  int8_t controller_mode;
} anscer_msgs__msg__ControllerMode;

// Struct for a sequence of anscer_msgs__msg__ControllerMode.
typedef struct anscer_msgs__msg__ControllerMode__Sequence
{
  anscer_msgs__msg__ControllerMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ControllerMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__CONTROLLER_MODE__STRUCT_H_
