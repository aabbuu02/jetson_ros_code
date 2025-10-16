// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ChargeInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONNECTED'.
enum
{
  anscer_msgs__msg__ChargeInfo__CONNECTED = 1
};

/// Constant 'DISCONNECTED'.
enum
{
  anscer_msgs__msg__ChargeInfo__DISCONNECTED = 2
};

/// Constant 'OVERRIDE'.
enum
{
  anscer_msgs__msg__ChargeInfo__OVERRIDE = 3
};

/// Struct defined in msg/ChargeInfo in the package anscer_msgs.
typedef struct anscer_msgs__msg__ChargeInfo
{
  bool charger_activate;
  int32_t charge_time;
  bool ignore_time;
  float charge_percentage;
  bool ignore_percentage;
} anscer_msgs__msg__ChargeInfo;

// Struct for a sequence of anscer_msgs__msg__ChargeInfo.
typedef struct anscer_msgs__msg__ChargeInfo__Sequence
{
  anscer_msgs__msg__ChargeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ChargeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__STRUCT_H_
