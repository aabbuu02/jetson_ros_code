// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/BatteryManagement.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/BatteryManagement in the package anscer_msgs.
typedef struct anscer_msgs__srv__BatteryManagement_Request
{
  geometry_msgs__msg__Pose robot_pose;
} anscer_msgs__srv__BatteryManagement_Request;

// Struct for a sequence of anscer_msgs__srv__BatteryManagement_Request.
typedef struct anscer_msgs__srv__BatteryManagement_Request__Sequence
{
  anscer_msgs__srv__BatteryManagement_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__BatteryManagement_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BatteryManagement in the package anscer_msgs.
typedef struct anscer_msgs__srv__BatteryManagement_Response
{
  int32_t id;
  bool is_available;
} anscer_msgs__srv__BatteryManagement_Response;

// Struct for a sequence of anscer_msgs__srv__BatteryManagement_Response.
typedef struct anscer_msgs__srv__BatteryManagement_Response__Sequence
{
  anscer_msgs__srv__BatteryManagement_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__BatteryManagement_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__STRUCT_H_
