// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/EditSequence.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint_id'
// Member 'sequence_list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EditSequence in the package anscer_msgs.
typedef struct anscer_msgs__srv__EditSequence_Request
{
  bool save;
  rosidl_runtime_c__String waypoint_id;
  rosidl_runtime_c__String sequence_list;
} anscer_msgs__srv__EditSequence_Request;

// Struct for a sequence of anscer_msgs__srv__EditSequence_Request.
typedef struct anscer_msgs__srv__EditSequence_Request__Sequence
{
  anscer_msgs__srv__EditSequence_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__EditSequence_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EditSequence in the package anscer_msgs.
typedef struct anscer_msgs__srv__EditSequence_Response
{
  bool is_saved;
  rosidl_runtime_c__String status;
} anscer_msgs__srv__EditSequence_Response;

// Struct for a sequence of anscer_msgs__srv__EditSequence_Response.
typedef struct anscer_msgs__srv__EditSequence_Response__Sequence
{
  anscer_msgs__srv__EditSequence_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__EditSequence_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__STRUCT_H_
