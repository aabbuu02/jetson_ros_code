// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anscer_msgs:srv/ShelfReader.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SHELF_READER__STRUCT_H_
#define ANSCER_MSGS__SRV__DETAIL__SHELF_READER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ShelfReader in the package anscer_msgs.
typedef struct anscer_msgs__srv__ShelfReader_Request
{
  int64_t dummy_req;
} anscer_msgs__srv__ShelfReader_Request;

// Struct for a sequence of anscer_msgs__srv__ShelfReader_Request.
typedef struct anscer_msgs__srv__ShelfReader_Request__Sequence
{
  anscer_msgs__srv__ShelfReader_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__ShelfReader_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ShelfReader in the package anscer_msgs.
typedef struct anscer_msgs__srv__ShelfReader_Response
{
  int64_t shelf_response;
} anscer_msgs__srv__ShelfReader_Response;

// Struct for a sequence of anscer_msgs__srv__ShelfReader_Response.
typedef struct anscer_msgs__srv__ShelfReader_Response__Sequence
{
  anscer_msgs__srv__ShelfReader_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anscer_msgs__srv__ShelfReader_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANSCER_MSGS__SRV__DETAIL__SHELF_READER__STRUCT_H_
