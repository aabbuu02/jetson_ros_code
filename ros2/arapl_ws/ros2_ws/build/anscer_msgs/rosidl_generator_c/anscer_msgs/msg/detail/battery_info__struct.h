// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/BatteryInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_INFO__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BatteryInfo in the package anscer_msgs.
typedef struct anscer_msgs__msg__BatteryInfo
{
  float voltage;
  float percentage;
  float current;
} anscer_msgs__msg__BatteryInfo;

// Struct for a sequence of anscer_msgs__msg__BatteryInfo.
typedef struct anscer_msgs__msg__BatteryInfo__Sequence
{
  anscer_msgs__msg__BatteryInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__BatteryInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_INFO__STRUCT_H_
