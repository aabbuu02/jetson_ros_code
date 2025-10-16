// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/lift_action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lift_action/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lift_action/msg/detail/lift_action__struct.h"
#include "lift_action/msg/detail/lift_action__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // putaway_barcode, unique_id, whole_bin_no
#include "rosidl_runtime_c/string_functions.h"  // putaway_barcode, unique_id, whole_bin_no

// forward declare type support functions


using _LiftAction__ros_msg_type = lift_action__msg__LiftAction;

static bool _LiftAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LiftAction__ros_msg_type * ros_message = static_cast<const _LiftAction__ros_msg_type *>(untyped_ros_message);
  // Field name: unique_id
  {
    const rosidl_runtime_c__String * str = &ros_message->unique_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: reached
  {
    cdr << (ros_message->reached ? true : false);
  }

  // Field name: rack
  {
    cdr << ros_message->rack;
  }

  // Field name: shelf
  {
    cdr << ros_message->shelf;
  }

  // Field name: acr_shelf
  {
    cdr << ros_message->acr_shelf;
  }

  // Field name: action
  {
    cdr << ros_message->action;
  }

  // Field name: whole_bin_no
  {
    const rosidl_runtime_c__String * str = &ros_message->whole_bin_no;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: putaway_barcode
  {
    const rosidl_runtime_c__String * str = &ros_message->putaway_barcode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LiftAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LiftAction__ros_msg_type * ros_message = static_cast<_LiftAction__ros_msg_type *>(untyped_ros_message);
  // Field name: unique_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unique_id.data) {
      rosidl_runtime_c__String__init(&ros_message->unique_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unique_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unique_id'\n");
      return false;
    }
  }

  // Field name: reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reached = tmp ? true : false;
  }

  // Field name: rack
  {
    cdr >> ros_message->rack;
  }

  // Field name: shelf
  {
    cdr >> ros_message->shelf;
  }

  // Field name: acr_shelf
  {
    cdr >> ros_message->acr_shelf;
  }

  // Field name: action
  {
    cdr >> ros_message->action;
  }

  // Field name: whole_bin_no
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->whole_bin_no.data) {
      rosidl_runtime_c__String__init(&ros_message->whole_bin_no);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->whole_bin_no,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'whole_bin_no'\n");
      return false;
    }
  }

  // Field name: putaway_barcode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->putaway_barcode.data) {
      rosidl_runtime_c__String__init(&ros_message->putaway_barcode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->putaway_barcode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'putaway_barcode'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lift_action
size_t get_serialized_size_lift_action__msg__LiftAction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LiftAction__ros_msg_type * ros_message = static_cast<const _LiftAction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name unique_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unique_id.size + 1);
  // field.name reached
  {
    size_t item_size = sizeof(ros_message->reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rack
  {
    size_t item_size = sizeof(ros_message->rack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shelf
  {
    size_t item_size = sizeof(ros_message->shelf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acr_shelf
  {
    size_t item_size = sizeof(ros_message->acr_shelf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name action
  {
    size_t item_size = sizeof(ros_message->action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whole_bin_no
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->whole_bin_no.size + 1);
  // field.name putaway_barcode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->putaway_barcode.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LiftAction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lift_action__msg__LiftAction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lift_action
size_t max_serialized_size_lift_action__msg__LiftAction(
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

  // member: unique_id
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
  // member: reached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rack
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shelf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: acr_shelf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: whole_bin_no
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
  // member: putaway_barcode
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
    using DataType = lift_action__msg__LiftAction;
    is_plain =
      (
      offsetof(DataType, putaway_barcode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LiftAction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lift_action__msg__LiftAction(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LiftAction = {
  "lift_action::msg",
  "LiftAction",
  _LiftAction__cdr_serialize,
  _LiftAction__cdr_deserialize,
  _LiftAction__get_serialized_size,
  _LiftAction__max_serialized_size
};

static rosidl_message_type_support_t _LiftAction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LiftAction,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_action, msg, LiftAction)() {
  return &_LiftAction__type_support;
}

#if defined(__cplusplus)
}
#endif
