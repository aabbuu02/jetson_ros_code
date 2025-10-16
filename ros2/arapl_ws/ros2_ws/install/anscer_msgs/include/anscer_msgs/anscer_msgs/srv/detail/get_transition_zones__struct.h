// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/GetTransitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTransitionZones in the package anscer_msgs.
typedef struct anscer_msgs__srv__GetTransitionZones_Request
{
  uint8_t structure_needs_at_least_one_member;
} anscer_msgs__srv__GetTransitionZones_Request;

// Struct for a sequence of anscer_msgs__srv__GetTransitionZones_Request.
typedef struct anscer_msgs__srv__GetTransitionZones_Request__Sequence
{
  anscer_msgs__srv__GetTransitionZones_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__GetTransitionZones_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'transition_zones'
#include "anscer_msgs/msg/detail/transition_zones__struct.h"

/// Struct defined in srv/GetTransitionZones in the package anscer_msgs.
typedef struct anscer_msgs__srv__GetTransitionZones_Response
{
  anscer_msgs__msg__TransitionZones transition_zones;
} anscer_msgs__srv__GetTransitionZones_Response;

// Struct for a sequence of anscer_msgs__srv__GetTransitionZones_Response.
typedef struct anscer_msgs__srv__GetTransitionZones_Response__Sequence
{
  anscer_msgs__srv__GetTransitionZones_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__GetTransitionZones_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__STRUCT_H_
