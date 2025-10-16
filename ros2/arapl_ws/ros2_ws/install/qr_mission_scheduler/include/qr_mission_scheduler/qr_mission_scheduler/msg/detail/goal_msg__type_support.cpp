// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from qr_mission_scheduler:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "qr_mission_scheduler/msg/detail/goal_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace qr_mission_scheduler
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GoalMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qr_mission_scheduler::msg::GoalMsg(_init);
}

void GoalMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qr_mission_scheduler::msg::GoalMsg *>(message_memory);
  typed_message->~GoalMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoalMsg_message_member_array[3] = {
  {
    "goal_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler::msg::GoalMsg, goal_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler::msg::GoalMsg, source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "destination",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler::msg::GoalMsg, destination),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoalMsg_message_members = {
  "qr_mission_scheduler::msg",  // message namespace
  "GoalMsg",  // message name
  3,  // number of fields
  sizeof(qr_mission_scheduler::msg::GoalMsg),
  GoalMsg_message_member_array,  // message members
  GoalMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoalMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoalMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace qr_mission_scheduler


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qr_mission_scheduler::msg::GoalMsg>()
{
  return &::qr_mission_scheduler::msg::rosidl_typesupport_introspection_cpp::GoalMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qr_mission_scheduler, msg, GoalMsg)() {
  return &::qr_mission_scheduler::msg::rosidl_typesupport_introspection_cpp::GoalMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
