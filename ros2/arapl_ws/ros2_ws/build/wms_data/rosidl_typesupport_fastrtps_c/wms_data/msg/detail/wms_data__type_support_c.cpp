// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice
#include "wms_data/msg/detail/wms_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wms_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wms_data/msg/detail/wms_data__struct.h"
#include "wms_data/msg/detail/wms_data__functions.h"
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

#include "rosidl_runtime_c/string.h"  // core, date, date_data, ean_code, level, putaway_code, serial_no, unique_id, whole_bin_no, year
#include "rosidl_runtime_c/string_functions.h"  // core, date, date_data, ean_code, level, putaway_code, serial_no, unique_id, whole_bin_no, year

// forward declare type support functions


using _WMSData__ros_msg_type = wms_data__msg__WMSData;

static bool _WMSData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WMSData__ros_msg_type * ros_message = static_cast<const _WMSData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: date
  {
    const rosidl_runtime_c__String * str = &ros_message->date;
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

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  // Field name: rack
  {
    cdr << ros_message->rack;
  }

  // Field name: shelf
  {
    cdr << ros_message->shelf;
  }

  // Field name: bin
  {
    cdr << ros_message->bin;
  }

  // Field name: action
  {
    cdr << (ros_message->action ? true : false);
  }

  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  // Field name: ean_code
  {
    const rosidl_runtime_c__String * str = &ros_message->ean_code;
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

  // Field name: putaway_code
  {
    const rosidl_runtime_c__String * str = &ros_message->putaway_code;
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

  // Field name: acr_shelf
  {
    cdr << ros_message->acr_shelf;
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

  // Field name: core
  {
    const rosidl_runtime_c__String * str = &ros_message->core;
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

  // Field name: level
  {
    const rosidl_runtime_c__String * str = &ros_message->level;
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

  // Field name: year
  {
    const rosidl_runtime_c__String * str = &ros_message->year;
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

  // Field name: date_data
  {
    const rosidl_runtime_c__String * str = &ros_message->date_data;
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

  // Field name: serial_no
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_no;
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

static bool _WMSData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WMSData__ros_msg_type * ros_message = static_cast<_WMSData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->date.data) {
      rosidl_runtime_c__String__init(&ros_message->date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'date'\n");
      return false;
    }
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  // Field name: rack
  {
    cdr >> ros_message->rack;
  }

  // Field name: shelf
  {
    cdr >> ros_message->shelf;
  }

  // Field name: bin
  {
    cdr >> ros_message->bin;
  }

  // Field name: action
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->action = tmp ? true : false;
  }

  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  // Field name: ean_code
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ean_code.data) {
      rosidl_runtime_c__String__init(&ros_message->ean_code);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ean_code,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ean_code'\n");
      return false;
    }
  }

  // Field name: putaway_code
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->putaway_code.data) {
      rosidl_runtime_c__String__init(&ros_message->putaway_code);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->putaway_code,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'putaway_code'\n");
      return false;
    }
  }

  // Field name: acr_shelf
  {
    cdr >> ros_message->acr_shelf;
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

  // Field name: core
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->core.data) {
      rosidl_runtime_c__String__init(&ros_message->core);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->core,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'core'\n");
      return false;
    }
  }

  // Field name: level
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->level.data) {
      rosidl_runtime_c__String__init(&ros_message->level);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->level,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'level'\n");
      return false;
    }
  }

  // Field name: year
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->year.data) {
      rosidl_runtime_c__String__init(&ros_message->year);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->year,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'year'\n");
      return false;
    }
  }

  // Field name: date_data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->date_data.data) {
      rosidl_runtime_c__String__init(&ros_message->date_data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->date_data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'date_data'\n");
      return false;
    }
  }

  // Field name: serial_no
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_no.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_no);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_no,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_no'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wms_data
size_t get_serialized_size_wms_data__msg__WMSData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WMSData__ros_msg_type * ros_message = static_cast<const _WMSData__ros_msg_type *>(untyped_ros_message);
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
  // field.name date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->date.size + 1);
  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
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
  // field.name bin
  {
    size_t item_size = sizeof(ros_message->bin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name action
  {
    size_t item_size = sizeof(ros_message->action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ean_code
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ean_code.size + 1);
  // field.name putaway_code
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->putaway_code.size + 1);
  // field.name acr_shelf
  {
    size_t item_size = sizeof(ros_message->acr_shelf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whole_bin_no
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->whole_bin_no.size + 1);
  // field.name core
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->core.size + 1);
  // field.name level
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->level.size + 1);
  // field.name year
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->year.size + 1);
  // field.name date_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->date_data.size + 1);
  // field.name serial_no
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_no.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WMSData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wms_data__msg__WMSData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wms_data
size_t max_serialized_size_wms_data__msg__WMSData(
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
  // member: date
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
  // member: priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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
  // member: bin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ean_code
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
  // member: putaway_code
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
  // member: acr_shelf
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
  // member: core
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
  // member: level
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
  // member: year
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
  // member: date_data
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
  // member: serial_no
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
    using DataType = wms_data__msg__WMSData;
    is_plain =
      (
      offsetof(DataType, serial_no) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WMSData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wms_data__msg__WMSData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WMSData = {
  "wms_data::msg",
  "WMSData",
  _WMSData__cdr_serialize,
  _WMSData__cdr_deserialize,
  _WMSData__get_serialized_size,
  _WMSData__max_serialized_size
};

static rosidl_message_type_support_t _WMSData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WMSData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wms_data, msg, WMSData)() {
  return &_WMSData__type_support;
}

#if defined(__cplusplus)
}
#endif
