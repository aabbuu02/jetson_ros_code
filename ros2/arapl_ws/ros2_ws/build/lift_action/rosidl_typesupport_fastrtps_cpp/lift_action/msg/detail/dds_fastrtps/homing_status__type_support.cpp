// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/homing_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lift_action/msg/detail/homing_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lift_action
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
cdr_serialize(
  const lift_action::msg::HomingStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lifter_status
  cdr << (ros_message.lifter_status ? true : false);
  // Member: extractor_status
  cdr << (ros_message.extractor_status ? true : false);
  // Member: turn_table_status
  cdr << (ros_message.turn_table_status ? true : false);
  // Member: is_homed
  cdr << (ros_message.is_homed ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lift_action::msg::HomingStatus & ros_message)
{
  // Member: lifter_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lifter_status = tmp ? true : false;
  }

  // Member: extractor_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.extractor_status = tmp ? true : false;
  }

  // Member: turn_table_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_table_status = tmp ? true : false;
  }

  // Member: is_homed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_homed = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
get_serialized_size(
  const lift_action::msg::HomingStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lifter_status
  {
    size_t item_size = sizeof(ros_message.lifter_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extractor_status
  {
    size_t item_size = sizeof(ros_message.extractor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_table_status
  {
    size_t item_size = sizeof(ros_message.turn_table_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_homed
  {
    size_t item_size = sizeof(ros_message.is_homed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
max_serialized_size_HomingStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: lifter_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extractor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_table_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_homed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lift_action::msg::HomingStatus;
    is_plain =
      (
      offsetof(DataType, is_homed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HomingStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lift_action::msg::HomingStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HomingStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lift_action::msg::HomingStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HomingStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lift_action::msg::HomingStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HomingStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HomingStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HomingStatus__callbacks = {
  "lift_action::msg",
  "HomingStatus",
  _HomingStatus__cdr_serialize,
  _HomingStatus__cdr_deserialize,
  _HomingStatus__get_serialized_size,
  _HomingStatus__max_serialized_size
};

static rosidl_message_type_support_t _HomingStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HomingStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lift_action

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lift_action
const rosidl_message_type_support_t *
get_message_type_support_handle<lift_action::msg::HomingStatus>()
{
  return &lift_action::msg::typesupport_fastrtps_cpp::_HomingStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lift_action, msg, HomingStatus)() {
  return &lift_action::msg::typesupport_fastrtps_cpp::_HomingStatus__handle;
}

#ifdef __cplusplus
}
#endif
