// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/WaypointArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/waypoint_array__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/waypoint_array__functions.h"
#include "anscer_msgs/msg/detail/waypoint_array__struct.h"


// Include directives for member types
// Member `name`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__WaypointArray__init(message_memory);
}

void anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_fini_function(void * message_memory)
{
  anscer_msgs__msg__WaypointArray__fini(message_memory);
}

size_t anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__size_function__WaypointArray__map_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_const_function__WaypointArray__map_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_function__WaypointArray__map_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__fetch_function__WaypointArray__map_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_const_function__WaypointArray__map_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__assign_function__WaypointArray__map_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_function__WaypointArray__map_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__resize_function__WaypointArray__map_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__size_function__WaypointArray__pose(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_const_function__WaypointArray__pose(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_function__WaypointArray__pose(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__fetch_function__WaypointArray__pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_const_function__WaypointArray__pose(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__assign_function__WaypointArray__pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_function__WaypointArray__pose(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__resize_function__WaypointArray__pose(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__WaypointArray, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__WaypointArray, map_name),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__size_function__WaypointArray__map_name,  // size() function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_const_function__WaypointArray__map_name,  // get_const(index) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_function__WaypointArray__map_name,  // get(index) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__fetch_function__WaypointArray__map_name,  // fetch(index, &value) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__assign_function__WaypointArray__map_name,  // assign(index, value) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__resize_function__WaypointArray__map_name  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__WaypointArray, pose),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__size_function__WaypointArray__pose,  // size() function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_const_function__WaypointArray__pose,  // get_const(index) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__get_function__WaypointArray__pose,  // get(index) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__fetch_function__WaypointArray__pose,  // fetch(index, &value) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__assign_function__WaypointArray__pose,  // assign(index, value) function pointer
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__resize_function__WaypointArray__pose  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_members = {
  "anscer_msgs__msg",  // message namespace
  "WaypointArray",  // message name
  3,  // number of fields
  sizeof(anscer_msgs__msg__WaypointArray),
  anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_member_array,  // message members
  anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_type_support_handle = {
  0,
  &anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, WaypointArray)() {
  anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__WaypointArray__rosidl_typesupport_introspection_c__WaypointArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
