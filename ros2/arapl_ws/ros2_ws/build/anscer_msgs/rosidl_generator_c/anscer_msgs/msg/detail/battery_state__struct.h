// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BatteryState in the package anscer_msgs.
/**
  * mission status
 */
typedef struct anscer_msgs__msg__BatteryState
{
  float voltage;
  float current;
} anscer_msgs__msg__BatteryState;

// Struct for a sequence of anscer_msgs__msg__BatteryState.
typedef struct anscer_msgs__msg__BatteryState__Sequence
{
  anscer_msgs__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
