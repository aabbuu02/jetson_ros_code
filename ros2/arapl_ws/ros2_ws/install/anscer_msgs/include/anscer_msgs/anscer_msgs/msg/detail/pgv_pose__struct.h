// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/PGVPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PGV_POSE__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__PGV_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PGVPose in the package anscer_msgs.
typedef struct anscer_msgs__msg__PGVPose
{
  float x;
  float y;
  float yaw;
  int16_t id;
} anscer_msgs__msg__PGVPose;

// Struct for a sequence of anscer_msgs__msg__PGVPose.
typedef struct anscer_msgs__msg__PGVPose__Sequence
{
  anscer_msgs__msg__PGVPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__PGVPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__PGV_POSE__STRUCT_H_
