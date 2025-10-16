// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/BatteryDB.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BatteryDB in the package anscer_msgs.
typedef struct anscer_msgs__msg__BatteryDB
{
  rosidl_runtime_c__String timestamp;
  float capacity;
  float voltage;
  float current;
  float linear_velocity;
  float angular_velocity;
  int8_t state_of_charge;
} anscer_msgs__msg__BatteryDB;

// Struct for a sequence of anscer_msgs__msg__BatteryDB.
typedef struct anscer_msgs__msg__BatteryDB__Sequence
{
  anscer_msgs__msg__BatteryDB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__BatteryDB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__STRUCT_H_
