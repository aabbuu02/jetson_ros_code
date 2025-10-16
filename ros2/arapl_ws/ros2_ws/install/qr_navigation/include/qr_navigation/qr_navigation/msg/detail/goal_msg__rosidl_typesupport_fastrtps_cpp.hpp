// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "qr_navigation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "qr_navigation/msg/detail/goal_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace qr_navigation
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_navigation
cdr_serialize(
  const qr_navigation::msg::GoalMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_navigation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  qr_navigation::msg::GoalMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_navigation
get_serialized_size(
  const qr_navigation::msg::GoalMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_navigation
max_serialized_size_GoalMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace qr_navigation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_navigation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qr_navigation, msg, GoalMsg)();

#ifdef __cplusplus
}
#endif

#endif  // QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
