// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/error_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lift_action/msg/detail/error_status__struct.hpp"

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
  const lift_action::msg::ErrorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lifter_fault
  cdr << (ros_message.lifter_fault ? true : false);
  // Member: extractor_fault
  cdr << (ros_message.extractor_fault ? true : false);
  // Member: turn_table_fault
  cdr << (ros_message.turn_table_fault ? true : false);
  // Member: swing_arm_fault
  cdr << (ros_message.swing_arm_fault ? true : false);
  // Member: emergency_pb_fault
  cdr << (ros_message.emergency_pb_fault ? true : false);
  // Member: swing_arm_sensor_zero_fault
  cdr << (ros_message.swing_arm_sensor_zero_fault ? true : false);
  // Member: swing_arm_sensor_ninety_fault
  cdr << (ros_message.swing_arm_sensor_ninety_fault ? true : false);
  // Member: turntable_sensor_zero_fault
  cdr << (ros_message.turntable_sensor_zero_fault ? true : false);
  // Member: extractor_sensor_laser_fault
  cdr << (ros_message.extractor_sensor_laser_fault ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lift_action::msg::ErrorStatus & ros_message)
{
  // Member: lifter_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lifter_fault = tmp ? true : false;
  }

  // Member: extractor_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.extractor_fault = tmp ? true : false;
  }

  // Member: turn_table_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_table_fault = tmp ? true : false;
  }

  // Member: swing_arm_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.swing_arm_fault = tmp ? true : false;
  }

  // Member: emergency_pb_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_pb_fault = tmp ? true : false;
  }

  // Member: swing_arm_sensor_zero_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.swing_arm_sensor_zero_fault = tmp ? true : false;
  }

  // Member: swing_arm_sensor_ninety_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.swing_arm_sensor_ninety_fault = tmp ? true : false;
  }

  // Member: turntable_sensor_zero_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turntable_sensor_zero_fault = tmp ? true : false;
  }

  // Member: extractor_sensor_laser_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.extractor_sensor_laser_fault = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
get_serialized_size(
  const lift_action::msg::ErrorStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lifter_fault
  {
    size_t item_size = sizeof(ros_message.lifter_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extractor_fault
  {
    size_t item_size = sizeof(ros_message.extractor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_table_fault
  {
    size_t item_size = sizeof(ros_message.turn_table_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: swing_arm_fault
  {
    size_t item_size = sizeof(ros_message.swing_arm_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_pb_fault
  {
    size_t item_size = sizeof(ros_message.emergency_pb_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: swing_arm_sensor_zero_fault
  {
    size_t item_size = sizeof(ros_message.swing_arm_sensor_zero_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: swing_arm_sensor_ninety_fault
  {
    size_t item_size = sizeof(ros_message.swing_arm_sensor_ninety_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turntable_sensor_zero_fault
  {
    size_t item_size = sizeof(ros_message.turntable_sensor_zero_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extractor_sensor_laser_fault
  {
    size_t item_size = sizeof(ros_message.extractor_sensor_laser_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
max_serialized_size_ErrorStatus(
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


  // Member: lifter_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extractor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_table_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: swing_arm_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_pb_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: swing_arm_sensor_zero_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: swing_arm_sensor_ninety_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turntable_sensor_zero_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: extractor_sensor_laser_fault
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
    using DataType = lift_action::msg::ErrorStatus;
    is_plain =
      (
      offsetof(DataType, extractor_sensor_laser_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ErrorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lift_action::msg::ErrorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ErrorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lift_action::msg::ErrorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ErrorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lift_action::msg::ErrorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ErrorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ErrorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ErrorStatus__callbacks = {
  "lift_action::msg",
  "ErrorStatus",
  _ErrorStatus__cdr_serialize,
  _ErrorStatus__cdr_deserialize,
  _ErrorStatus__get_serialized_size,
  _ErrorStatus__max_serialized_size
};

static rosidl_message_type_support_t _ErrorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ErrorStatus__callbacks,
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
get_message_type_support_handle<lift_action::msg::ErrorStatus>()
{
  return &lift_action::msg::typesupport_fastrtps_cpp::_ErrorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lift_action, msg, ErrorStatus)() {
  return &lift_action::msg::typesupport_fastrtps_cpp::_ErrorStatus__handle;
}

#ifdef __cplusplus
}
#endif
