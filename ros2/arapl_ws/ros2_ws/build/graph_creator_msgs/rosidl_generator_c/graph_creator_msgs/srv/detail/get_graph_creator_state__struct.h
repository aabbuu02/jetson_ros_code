// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:srv/GetGraphCreatorState.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__GET_GRAPH_CREATOR_STATE__STRUCT_H_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__GET_GRAPH_CREATOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetGraphCreatorState in the package graph_creator_msgs.
typedef struct graph_creator_msgs__srv__GetGraphCreatorState_Request
{
  uint8_t structure_needs_at_least_one_member;
} graph_creator_msgs__srv__GetGraphCreatorState_Request;

// Struct for a sequence of graph_creator_msgs__srv__GetGraphCreatorState_Request.
typedef struct graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence
{
  graph_creator_msgs__srv__GetGraphCreatorState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__srv__GetGraphCreatorState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "graph_creator_msgs/msg/detail/graph_creator_state__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGraphCreatorState in the package graph_creator_msgs.
typedef struct graph_creator_msgs__srv__GetGraphCreatorState_Response
{
  graph_creator_msgs__msg__GraphCreatorState state;
  bool success;
  rosidl_runtime_c__String message;
} graph_creator_msgs__srv__GetGraphCreatorState_Response;

// Struct for a sequence of graph_creator_msgs__srv__GetGraphCreatorState_Response.
typedef struct graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence
{
  graph_creator_msgs__srv__GetGraphCreatorState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__srv__GetGraphCreatorState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__GET_GRAPH_CREATOR_STATE__STRUCT_H_
