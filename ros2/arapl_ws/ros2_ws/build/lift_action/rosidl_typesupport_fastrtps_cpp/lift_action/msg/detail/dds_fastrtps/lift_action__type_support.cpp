// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/lift_action__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lift_action/msg/detail/lift_action__struct.hpp"

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
  const lift_action::msg::LiftAction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: unique_id
  cdr << ros_message.unique_id;
  // Member: reached
  cdr << (ros_message.reached ? true : false);
  // Member: rack
  cdr << ros_message.rack;
  // Member: shelf
  cdr << ros_message.shelf;
  // Member: acr_shelf
  cdr << ros_message.acr_shelf;
  // Member: action
  cdr << ros_message.action;
  // Member: whole_bin_no
  cdr << ros_message.whole_bin_no;
  // Member: putaway_barcode
  cdr << ros_message.putaway_barcode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lift_action::msg::LiftAction & ros_message)
{
  // Member: unique_id
  cdr >> ros_message.unique_id;

  // Member: reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reached = tmp ? true : false;
  }

  // Member: rack
  cdr >> ros_message.rack;

  // Member: shelf
  cdr >> ros_message.shelf;

  // Member: acr_shelf
  cdr >> ros_message.acr_shelf;

  // Member: action
  cdr >> ros_message.action;

  // Member: whole_bin_no
  cdr >> ros_message.whole_bin_no;

  // Member: putaway_barcode
  cdr >> ros_message.putaway_barcode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
get_serialized_size(
  const lift_action::msg::LiftAction & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: unique_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.unique_id.size() + 1);
  // Member: reached
  {
    size_t item_size = sizeof(ros_message.reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rack
  {
    size_t item_size = sizeof(ros_message.rack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shelf
  {
    size_t item_size = sizeof(ros_message.shelf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acr_shelf
  {
    size_t item_size = sizeof(ros_message.acr_shelf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: action
  {
    size_t item_size = sizeof(ros_message.action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: whole_bin_no
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.whole_bin_no.size() + 1);
  // Member: putaway_barcode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.putaway_barcode.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lift_action
max_serialized_size_LiftAction(
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


  // Member: unique_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: reached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rack
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shelf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: acr_shelf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: whole_bin_no
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: putaway_barcode
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lift_action::msg::LiftAction;
    is_plain =
      (
      offsetof(DataType, putaway_barcode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LiftAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lift_action::msg::LiftAction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LiftAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lift_action::msg::LiftAction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LiftAction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lift_action::msg::LiftAction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LiftAction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LiftAction(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LiftAction__callbacks = {
  "lift_action::msg",
  "LiftAction",
  _LiftAction__cdr_serialize,
  _LiftAction__cdr_deserialize,
  _LiftAction__get_serialized_size,
  _LiftAction__max_serialized_size
};

static rosidl_message_type_support_t _LiftAction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LiftAction__callbacks,
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
get_message_type_support_handle<lift_action::msg::LiftAction>()
{
  return &lift_action::msg::typesupport_fastrtps_cpp::_LiftAction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lift_action, msg, LiftAction)() {
  return &lift_action::msg::typesupport_fastrtps_cpp::_LiftAction__handle;
}

#ifdef __cplusplus
}
#endif
