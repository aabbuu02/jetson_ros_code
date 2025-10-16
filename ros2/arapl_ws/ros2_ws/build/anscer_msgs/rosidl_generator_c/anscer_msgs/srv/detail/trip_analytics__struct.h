// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/TripAnalytics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__TRIP_ANALYTICS__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__TRIP_ANALYTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_date'
// Member 'end_date'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TripAnalytics in the package anscer_msgs.
typedef struct anscer_msgs__srv__TripAnalytics_Request
{
  rosidl_runtime_c__String start_date;
  rosidl_runtime_c__String end_date;
} anscer_msgs__srv__TripAnalytics_Request;

// Struct for a sequence of anscer_msgs__srv__TripAnalytics_Request.
typedef struct anscer_msgs__srv__TripAnalytics_Request__Sequence
{
  anscer_msgs__srv__TripAnalytics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__TripAnalytics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mission_db'
#include "anscer_msgs/msg/detail/mission_db__struct.h"

/// Struct defined in srv/TripAnalytics in the package anscer_msgs.
typedef struct anscer_msgs__srv__TripAnalytics_Response
{
  anscer_msgs__msg__MissionDB__Sequence mission_db;
} anscer_msgs__srv__TripAnalytics_Response;

// Struct for a sequence of anscer_msgs__srv__TripAnalytics_Response.
typedef struct anscer_msgs__srv__TripAnalytics_Response__Sequence
{
  anscer_msgs__srv__TripAnalytics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__TripAnalytics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__TRIP_ANALYTICS__STRUCT_H_
