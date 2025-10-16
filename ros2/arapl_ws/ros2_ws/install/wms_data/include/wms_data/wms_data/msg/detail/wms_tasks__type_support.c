// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wms_data/msg/detail/wms_tasks__rosidl_typesupport_introspection_c.h"
#include "wms_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wms_data/msg/detail/wms_tasks__functions.h"
#include "wms_data/msg/detail/wms_tasks__struct.h"


// Include directives for member types
// Member `tasks`
#include "wms_data/msg/wms_data.h"
// Member `tasks`
#include "wms_data/msg/detail/wms_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wms_data__msg__WMSTasks__init(message_memory);
}

void wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_fini_function(void * message_memory)
{
  wms_data__msg__WMSTasks__fini(message_memory);
}

size_t wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__size_function__WMSTasks__tasks(
  const void * untyped_member)
{
  const wms_data__msg__WMSData__Sequence * member =
    (const wms_data__msg__WMSData__Sequence *)(untyped_member);
  return member->size;
}

const void * wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__get_const_function__WMSTasks__tasks(
  const void * untyped_member, size_t index)
{
  const wms_data__msg__WMSData__Sequence * member =
    (const wms_data__msg__WMSData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__get_function__WMSTasks__tasks(
  void * untyped_member, size_t index)
{
  wms_data__msg__WMSData__Sequence * member =
    (wms_data__msg__WMSData__Sequence *)(untyped_member);
  return &member->data[index];
}

void wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__fetch_function__WMSTasks__tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wms_data__msg__WMSData * item =
    ((const wms_data__msg__WMSData *)
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__get_const_function__WMSTasks__tasks(untyped_member, index));
  wms_data__msg__WMSData * value =
    (wms_data__msg__WMSData *)(untyped_value);
  *value = *item;
}

void wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__assign_function__WMSTasks__tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wms_data__msg__WMSData * item =
    ((wms_data__msg__WMSData *)
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__get_function__WMSTasks__tasks(untyped_member, index));
  const wms_data__msg__WMSData * value =
    (const wms_data__msg__WMSData *)(untyped_value);
  *item = *value;
}

bool wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__resize_function__WMSTasks__tasks(
  void * untyped_member, size_t size)
{
  wms_data__msg__WMSData__Sequence * member =
    (wms_data__msg__WMSData__Sequence *)(untyped_member);
  wms_data__msg__WMSData__Sequence__fini(member);
  return wms_data__msg__WMSData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_member_array[1] = {
  {
    "tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wms_data__msg__WMSTasks, tasks),  // bytes offset in struct
    NULL,  // default value
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__size_function__WMSTasks__tasks,  // size() function pointer
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__get_const_function__WMSTasks__tasks,  // get_const(index) function pointer
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__get_function__WMSTasks__tasks,  // get(index) function pointer
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__fetch_function__WMSTasks__tasks,  // fetch(index, &value) function pointer
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__assign_function__WMSTasks__tasks,  // assign(index, value) function pointer
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__resize_function__WMSTasks__tasks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_members = {
  "wms_data__msg",  // message namespace
  "WMSTasks",  // message name
  1,  // number of fields
  sizeof(wms_data__msg__WMSTasks),
  wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_member_array,  // message members
  wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_init_function,  // function to initialize message memory (memory has to be allocated)
  wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_type_support_handle = {
  0,
  &wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wms_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wms_data, msg, WMSTasks)() {
  wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wms_data, msg, WMSData)();
  if (!wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_type_support_handle.typesupport_identifier) {
    wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wms_data__msg__WMSTasks__rosidl_typesupport_introspection_c__WMSTasks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
