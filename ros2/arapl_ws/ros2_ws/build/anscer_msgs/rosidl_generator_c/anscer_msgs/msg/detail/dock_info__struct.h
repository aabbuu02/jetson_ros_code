// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:msg/DockInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__STRUCT_H_
#define ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FIDUCIALDOCKING'.
enum
{
  anscer_msgs__msg__DockInfo__FIDUCIALDOCKING = 1
};

/// Constant 'REFLECTORDOCKING'.
enum
{
  anscer_msgs__msg__DockInfo__REFLECTORDOCKING = 2
};

/// Constant 'TROLLEYDOCKING'.
enum
{
  anscer_msgs__msg__DockInfo__TROLLEYDOCKING = 3
};

/// Constant 'ICPDOCKING'.
enum
{
  anscer_msgs__msg__DockInfo__ICPDOCKING = 4
};

/// Constant 'GROUNDMARKERDOCKING'.
enum
{
  anscer_msgs__msg__DockInfo__GROUNDMARKERDOCKING = 5
};

/// Constant 'SIDEWISEDOCKING'.
enum
{
  anscer_msgs__msg__DockInfo__SIDEWISEDOCKING = 6
};

/// Constant 'DOCKSTATE'.
enum
{
  anscer_msgs__msg__DockInfo__DOCKSTATE = 1
};

/// Constant 'UNDOCKSTATE'.
enum
{
  anscer_msgs__msg__DockInfo__UNDOCKSTATE = 2
};

/// Struct defined in msg/DockInfo in the package anscer_msgs.
typedef struct anscer_msgs__msg__DockInfo
{
  int8_t dock_marker;
  int8_t dock_mode;
} anscer_msgs__msg__DockInfo;

// Struct for a sequence of anscer_msgs__msg__DockInfo.
typedef struct anscer_msgs__msg__DockInfo__Sequence
{
  anscer_msgs__msg__DockInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__msg__DockInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__STRUCT_H_
