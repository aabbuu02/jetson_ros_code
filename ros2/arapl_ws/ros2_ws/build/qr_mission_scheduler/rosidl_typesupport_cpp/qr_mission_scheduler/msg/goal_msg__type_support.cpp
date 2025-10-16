// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from qr_mission_scheduler:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "qr_mission_scheduler/msg/detail/goal_msg__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace qr_mission_scheduler
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoalMsg_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoalMsg_type_support_ids_t;

static const _GoalMsg_type_support_ids_t _GoalMsg_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoalMsg_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoalMsg_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoalMsg_type_support_symbol_names_t _GoalMsg_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qr_mission_scheduler, msg, GoalMsg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qr_mission_scheduler, msg, GoalMsg)),
  }
};

typedef struct _GoalMsg_type_support_data_t
{
  void * data[2];
} _GoalMsg_type_support_data_t;

static _GoalMsg_type_support_data_t _GoalMsg_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoalMsg_message_typesupport_map = {
  2,
  "qr_mission_scheduler",
  &_GoalMsg_message_typesupport_ids.typesupport_identifier[0],
  &_GoalMsg_message_typesupport_symbol_names.symbol_name[0],
  &_GoalMsg_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoalMsg_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoalMsg_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace qr_mission_scheduler

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qr_mission_scheduler::msg::GoalMsg>()
{
  return &::qr_mission_scheduler::msg::rosidl_typesupport_cpp::GoalMsg_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, qr_mission_scheduler, msg, GoalMsg)() {
  return get_message_type_support_handle<qr_mission_scheduler::msg::GoalMsg>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
