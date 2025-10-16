// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:msg/ZoneInformation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "anscer_msgs/msg/detail/zone_information__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace anscer_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ZoneInformation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) anscer_msgs::msg::ZoneInformation(_init);
}

void ZoneInformation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<anscer_msgs::msg::ZoneInformation *>(message_memory);
  typed_message->~ZoneInformation();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ZoneInformation_message_member_array[2] = {
  {
    "indication_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<anscer_msgs::msg::Indication>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs::msg::ZoneInformation, indication_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_factor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs::msg::ZoneInformation, speed_factor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ZoneInformation_message_members = {
  "anscer_msgs::msg",  // message namespace
  "ZoneInformation",  // message name
  2,  // number of fields
  sizeof(anscer_msgs::msg::ZoneInformation),
  ZoneInformation_message_member_array,  // message members
  ZoneInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  ZoneInformation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ZoneInformation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ZoneInformation_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace anscer_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::msg::ZoneInformation>()
{
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::ZoneInformation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, msg, ZoneInformation)() {
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::ZoneInformation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
