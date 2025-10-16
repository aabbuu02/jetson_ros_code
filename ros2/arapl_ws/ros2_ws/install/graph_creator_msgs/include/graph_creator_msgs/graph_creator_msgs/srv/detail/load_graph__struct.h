// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:srv/LoadGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__LOAD_GRAPH__STRUCT_H_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__LOAD_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadGraph in the package graph_creator_msgs.
typedef struct graph_creator_msgs__srv__LoadGraph_Request
{
  rosidl_runtime_c__String file_path;
} graph_creator_msgs__srv__LoadGraph_Request;

// Struct for a sequence of graph_creator_msgs__srv__LoadGraph_Request.
typedef struct graph_creator_msgs__srv__LoadGraph_Request__Sequence
{
  graph_creator_msgs__srv__LoadGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__srv__LoadGraph_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadGraph in the package graph_creator_msgs.
typedef struct graph_creator_msgs__srv__LoadGraph_Response
{
  bool success;
  rosidl_runtime_c__String message;
} graph_creator_msgs__srv__LoadGraph_Response;

// Struct for a sequence of graph_creator_msgs__srv__LoadGraph_Response.
typedef struct graph_creator_msgs__srv__LoadGraph_Response__Sequence
{
  graph_creator_msgs__srv__LoadGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__srv__LoadGraph_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__LOAD_GRAPH__STRUCT_H_
