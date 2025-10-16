// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/NearestNode.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__NEAREST_NODE__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__NEAREST_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/NearestNode in the package anscer_msgs.
typedef struct anscer_msgs__srv__NearestNode_Request
{
  uint8_t structure_needs_at_least_one_member;
} anscer_msgs__srv__NearestNode_Request;

// Struct for a sequence of anscer_msgs__srv__NearestNode_Request.
typedef struct anscer_msgs__srv__NearestNode_Request__Sequence
{
  anscer_msgs__srv__NearestNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__NearestNode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/NearestNode in the package anscer_msgs.
typedef struct anscer_msgs__srv__NearestNode_Response
{
  int32_t id;
} anscer_msgs__srv__NearestNode_Response;

// Struct for a sequence of anscer_msgs__srv__NearestNode_Response.
typedef struct anscer_msgs__srv__NearestNode_Response__Sequence
{
  anscer_msgs__srv__NearestNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__NearestNode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__NEAREST_NODE__STRUCT_H_
