// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/ZoneInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/zone_info__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/zone_info__functions.h"
#include "anscer_msgs/msg/detail/zone_info__struct.h"


// Include directives for member types
// Member `index`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinates`
#include "geometry_msgs/msg/point.h"
// Member `coordinates`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__ZoneInfo__init(message_memory);
}

void anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_fini_function(void * message_memory)
{
  anscer_msgs__msg__ZoneInfo__fini(message_memory);
}

size_t anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__size_function__ZoneInfo__coordinates(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__get_const_function__ZoneInfo__coordinates(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__get_function__ZoneInfo__coordinates(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__fetch_function__ZoneInfo__coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__get_const_function__ZoneInfo__coordinates(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__assign_function__ZoneInfo__coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__get_function__ZoneInfo__coordinates(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__resize_function__ZoneInfo__coordinates(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_member_array[2] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__ZoneInfo, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__ZoneInfo, coordinates),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__size_function__ZoneInfo__coordinates,  // size() function pointer
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__get_const_function__ZoneInfo__coordinates,  // get_const(index) function pointer
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__get_function__ZoneInfo__coordinates,  // get(index) function pointer
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__fetch_function__ZoneInfo__coordinates,  // fetch(index, &value) function pointer
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__assign_function__ZoneInfo__coordinates,  // assign(index, value) function pointer
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__resize_function__ZoneInfo__coordinates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_members = {
  "anscer_msgs__msg",  // message namespace
  "ZoneInfo",  // message name
  2,  // number of fields
  sizeof(anscer_msgs__msg__ZoneInfo),
  anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_member_array,  // message members
  anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_type_support_handle = {
  0,
  &anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, ZoneInfo)() {
  anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__ZoneInfo__rosidl_typesupport_introspection_c__ZoneInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
