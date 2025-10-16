// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lift_action:msg/HomeSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lift_action/msg/detail/home_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lift_action
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HomeSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lift_action::msg::HomeSensor(_init);
}

void HomeSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lift_action::msg::HomeSensor *>(message_memory);
  typed_message->~HomeSensor();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HomeSensor_message_member_array[2] = {
  {
    "process",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lift_action::msg::HomeSensor, process),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "homing_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lift_action::msg::HomeSensor, homing_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HomeSensor_message_members = {
  "lift_action::msg",  // message namespace
  "HomeSensor",  // message name
  2,  // number of fields
  sizeof(lift_action::msg::HomeSensor),
  HomeSensor_message_member_array,  // message members
  HomeSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  HomeSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HomeSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HomeSensor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lift_action


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lift_action::msg::HomeSensor>()
{
  return &::lift_action::msg::rosidl_typesupport_introspection_cpp::HomeSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lift_action, msg, HomeSensor)() {
  return &::lift_action::msg::rosidl_typesupport_introspection_cpp::HomeSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
