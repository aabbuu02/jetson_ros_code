// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/CallMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CallMission in the package anscer_msgs.
typedef struct anscer_msgs__srv__CallMission_Request
{
  bool initate;
  rosidl_runtime_c__String mission_name;
  int16_t loops;
} anscer_msgs__srv__CallMission_Request;

// Struct for a sequence of anscer_msgs__srv__CallMission_Request.
typedef struct anscer_msgs__srv__CallMission_Request__Sequence
{
  anscer_msgs__srv__CallMission_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__CallMission_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CallMission in the package anscer_msgs.
typedef struct anscer_msgs__srv__CallMission_Response
{
  bool initated;
  rosidl_runtime_c__String status;
} anscer_msgs__srv__CallMission_Response;

// Struct for a sequence of anscer_msgs__srv__CallMission_Response.
typedef struct anscer_msgs__srv__CallMission_Response__Sequence
{
  anscer_msgs__srv__CallMission_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__CallMission_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__STRUCT_H_
