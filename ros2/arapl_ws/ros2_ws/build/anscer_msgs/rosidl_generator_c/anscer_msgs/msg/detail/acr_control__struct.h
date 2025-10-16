// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ACRControl.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PICKUP'.
enum
{
  anscer_msgs__msg__ACRControl__PICKUP = 0l
};

/// Constant 'DROPOFF'.
enum
{
  anscer_msgs__msg__ACRControl__DROPOFF = 1l
};

/// Struct defined in msg/ACRControl in the package anscer_msgs.
/**
  * mission status
 */
typedef struct anscer_msgs__msg__ACRControl
{
  int16_t acr_shelf;
  int16_t target_shelf;
  int16_t acr_action;
  int64_t bar_code_number;
  int64_t whole_bin_number;
} anscer_msgs__msg__ACRControl;

// Struct for a sequence of anscer_msgs__msg__ACRControl.
typedef struct anscer_msgs__msg__ACRControl__Sequence
{
  anscer_msgs__msg__ACRControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ACRControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__STRUCT_H_
