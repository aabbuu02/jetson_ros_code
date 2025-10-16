// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:srv/SetEdgeDirectionType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__STRUCT_H_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'edge_direction_creation_type'
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__struct.h"

/// Struct defined in srv/SetEdgeDirectionType in the package graph_creator_msgs.
typedef struct graph_creator_msgs__srv__SetEdgeDirectionType_Request
{
  graph_creator_msgs__msg__EdgeDirectionCreationType edge_direction_creation_type;
} graph_creator_msgs__srv__SetEdgeDirectionType_Request;

// Struct for a sequence of graph_creator_msgs__srv__SetEdgeDirectionType_Request.
typedef struct graph_creator_msgs__srv__SetEdgeDirectionType_Request__Sequence
{
  graph_creator_msgs__srv__SetEdgeDirectionType_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__srv__SetEdgeDirectionType_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetEdgeDirectionType in the package graph_creator_msgs.
typedef struct graph_creator_msgs__srv__SetEdgeDirectionType_Response
{
  bool success;
  rosidl_runtime_c__String message;
} graph_creator_msgs__srv__SetEdgeDirectionType_Response;

// Struct for a sequence of graph_creator_msgs__srv__SetEdgeDirectionType_Response.
typedef struct graph_creator_msgs__srv__SetEdgeDirectionType_Response__Sequence
{
  graph_creator_msgs__srv__SetEdgeDirectionType_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__srv__SetEdgeDirectionType_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__STRUCT_H_
