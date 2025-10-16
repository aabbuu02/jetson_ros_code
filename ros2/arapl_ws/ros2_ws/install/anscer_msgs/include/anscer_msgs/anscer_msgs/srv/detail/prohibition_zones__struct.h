// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/ProhibitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__PROHIBITION_ZONES__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__PROHIBITION_ZONES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prohibition_zones'
#include "anscer_msgs/msg/detail/individual_prohibition__struct.h"

/// Struct defined in srv/ProhibitionZones in the package anscer_msgs.
typedef struct anscer_msgs__srv__ProhibitionZones_Request
{
  anscer_msgs__msg__IndividualProhibition__Sequence prohibition_zones;
} anscer_msgs__srv__ProhibitionZones_Request;

// Struct for a sequence of anscer_msgs__srv__ProhibitionZones_Request.
typedef struct anscer_msgs__srv__ProhibitionZones_Request__Sequence
{
  anscer_msgs__srv__ProhibitionZones_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__ProhibitionZones_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ProhibitionZones in the package anscer_msgs.
typedef struct anscer_msgs__srv__ProhibitionZones_Response
{
  bool status;
} anscer_msgs__srv__ProhibitionZones_Response;

// Struct for a sequence of anscer_msgs__srv__ProhibitionZones_Response.
typedef struct anscer_msgs__srv__ProhibitionZones_Response__Sequence
{
  anscer_msgs__srv__ProhibitionZones_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__ProhibitionZones_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__PROHIBITION_ZONES__STRUCT_H_
