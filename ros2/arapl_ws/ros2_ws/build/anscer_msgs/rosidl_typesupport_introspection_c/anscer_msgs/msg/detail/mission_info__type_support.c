// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/mission_info__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/mission_info__functions.h"
#include "anscer_msgs/msg/detail/mission_info__struct.h"


// Include directives for member types
// Member `mission_info`
#include "anscer_msgs/msg/mission_data.h"
// Member `mission_info`
#include "anscer_msgs/msg/detail/mission_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__MissionInfo__init(message_memory);
}

void anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_fini_function(void * message_memory)
{
  anscer_msgs__msg__MissionInfo__fini(message_memory);
}

size_t anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__size_function__MissionInfo__mission_info(
  const void * untyped_member)
{
  const anscer_msgs__msg__MissionData__Sequence * member =
    (const anscer_msgs__msg__MissionData__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__get_const_function__MissionInfo__mission_info(
  const void * untyped_member, size_t index)
{
  const anscer_msgs__msg__MissionData__Sequence * member =
    (const anscer_msgs__msg__MissionData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__get_function__MissionInfo__mission_info(
  void * untyped_member, size_t index)
{
  anscer_msgs__msg__MissionData__Sequence * member =
    (anscer_msgs__msg__MissionData__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__fetch_function__MissionInfo__mission_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const anscer_msgs__msg__MissionData * item =
    ((const anscer_msgs__msg__MissionData *)
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__get_const_function__MissionInfo__mission_info(untyped_member, index));
  anscer_msgs__msg__MissionData * value =
    (anscer_msgs__msg__MissionData *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__assign_function__MissionInfo__mission_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  anscer_msgs__msg__MissionData * item =
    ((anscer_msgs__msg__MissionData *)
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__get_function__MissionInfo__mission_info(untyped_member, index));
  const anscer_msgs__msg__MissionData * value =
    (const anscer_msgs__msg__MissionData *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__resize_function__MissionInfo__mission_info(
  void * untyped_member, size_t size)
{
  anscer_msgs__msg__MissionData__Sequence * member =
    (anscer_msgs__msg__MissionData__Sequence *)(untyped_member);
  anscer_msgs__msg__MissionData__Sequence__fini(member);
  return anscer_msgs__msg__MissionData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_member_array[1] = {
  {
    "mission_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__MissionInfo, mission_info),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__size_function__MissionInfo__mission_info,  // size() function pointer
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__get_const_function__MissionInfo__mission_info,  // get_const(index) function pointer
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__get_function__MissionInfo__mission_info,  // get(index) function pointer
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__fetch_function__MissionInfo__mission_info,  // fetch(index, &value) function pointer
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__assign_function__MissionInfo__mission_info,  // assign(index, value) function pointer
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__resize_function__MissionInfo__mission_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_members = {
  "anscer_msgs__msg",  // message namespace
  "MissionInfo",  // message name
  1,  // number of fields
  sizeof(anscer_msgs__msg__MissionInfo),
  anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_member_array,  // message members
  anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_type_support_handle = {
  0,
  &anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, MissionInfo)() {
  anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, MissionData)();
  if (!anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__MissionInfo__rosidl_typesupport_introspection_c__MissionInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
