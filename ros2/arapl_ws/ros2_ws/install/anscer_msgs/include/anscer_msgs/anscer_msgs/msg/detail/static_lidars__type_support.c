// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/StaticLidars.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/static_lidars__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/static_lidars__functions.h"
#include "anscer_msgs/msg/detail/static_lidars__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `point`
#include "anscer_msgs/msg/static_lidar.h"
// Member `point`
#include "anscer_msgs/msg/detail/static_lidar__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__StaticLidars__init(message_memory);
}

void anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_fini_function(void * message_memory)
{
  anscer_msgs__msg__StaticLidars__fini(message_memory);
}

size_t anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__size_function__StaticLidars__point(
  const void * untyped_member)
{
  const anscer_msgs__msg__StaticLidar__Sequence * member =
    (const anscer_msgs__msg__StaticLidar__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__get_const_function__StaticLidars__point(
  const void * untyped_member, size_t index)
{
  const anscer_msgs__msg__StaticLidar__Sequence * member =
    (const anscer_msgs__msg__StaticLidar__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__get_function__StaticLidars__point(
  void * untyped_member, size_t index)
{
  anscer_msgs__msg__StaticLidar__Sequence * member =
    (anscer_msgs__msg__StaticLidar__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__fetch_function__StaticLidars__point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const anscer_msgs__msg__StaticLidar * item =
    ((const anscer_msgs__msg__StaticLidar *)
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__get_const_function__StaticLidars__point(untyped_member, index));
  anscer_msgs__msg__StaticLidar * value =
    (anscer_msgs__msg__StaticLidar *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__assign_function__StaticLidars__point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  anscer_msgs__msg__StaticLidar * item =
    ((anscer_msgs__msg__StaticLidar *)
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__get_function__StaticLidars__point(untyped_member, index));
  const anscer_msgs__msg__StaticLidar * value =
    (const anscer_msgs__msg__StaticLidar *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__resize_function__StaticLidars__point(
  void * untyped_member, size_t size)
{
  anscer_msgs__msg__StaticLidar__Sequence * member =
    (anscer_msgs__msg__StaticLidar__Sequence *)(untyped_member);
  anscer_msgs__msg__StaticLidar__Sequence__fini(member);
  return anscer_msgs__msg__StaticLidar__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__StaticLidars, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__StaticLidars, point),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__size_function__StaticLidars__point,  // size() function pointer
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__get_const_function__StaticLidars__point,  // get_const(index) function pointer
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__get_function__StaticLidars__point,  // get(index) function pointer
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__fetch_function__StaticLidars__point,  // fetch(index, &value) function pointer
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__assign_function__StaticLidars__point,  // assign(index, value) function pointer
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__resize_function__StaticLidars__point  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_members = {
  "anscer_msgs__msg",  // message namespace
  "StaticLidars",  // message name
  2,  // number of fields
  sizeof(anscer_msgs__msg__StaticLidars),
  anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_member_array,  // message members
  anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_type_support_handle = {
  0,
  &anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, StaticLidars)() {
  anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, StaticLidar)();
  if (!anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__StaticLidars__rosidl_typesupport_introspection_c__StaticLidars_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
