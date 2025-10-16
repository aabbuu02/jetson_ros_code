// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/GoToPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GoToPose in the package anscer_msgs.
typedef struct anscer_msgs__srv__GoToPose_Request
{
  bool initate;
  int16_t level;
} anscer_msgs__srv__GoToPose_Request;

// Struct for a sequence of anscer_msgs__srv__GoToPose_Request.
typedef struct anscer_msgs__srv__GoToPose_Request__Sequence
{
  anscer_msgs__srv__GoToPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__GoToPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GoToPose in the package anscer_msgs.
typedef struct anscer_msgs__srv__GoToPose_Response
{
  bool status;
} anscer_msgs__srv__GoToPose_Response;

// Struct for a sequence of anscer_msgs__srv__GoToPose_Response.
typedef struct anscer_msgs__srv__GoToPose_Response__Sequence
{
  anscer_msgs__srv__GoToPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__GoToPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__GO_TO_POSE__STRUCT_H_
