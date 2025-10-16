// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/ProximitySensors.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PROXIMITY_SENSORS__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__PROXIMITY_SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor'
#include "anscer_msgs/msg/detail/static_lidars__struct.h"

/// Struct defined in msg/ProximitySensors in the package anscer_msgs.
typedef struct anscer_msgs__msg__ProximitySensors
{
  anscer_msgs__msg__StaticLidars__Sequence sensor;
} anscer_msgs__msg__ProximitySensors;

// Struct for a sequence of anscer_msgs__msg__ProximitySensors.
typedef struct anscer_msgs__msg__ProximitySensors__Sequence
{
  anscer_msgs__msg__ProximitySensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__ProximitySensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__PROXIMITY_SENSORS__STRUCT_H_
