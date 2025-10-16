// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/IndividualProhibition.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'zone'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/IndividualProhibition in the package anscer_msgs.
typedef struct anscer_msgs__msg__IndividualProhibition
{
  geometry_msgs__msg__Point__Sequence zone;
} anscer_msgs__msg__IndividualProhibition;

// Struct for a sequence of anscer_msgs__msg__IndividualProhibition.
typedef struct anscer_msgs__msg__IndividualProhibition__Sequence
{
  anscer_msgs__msg__IndividualProhibition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__IndividualProhibition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__STRUCT_H_
