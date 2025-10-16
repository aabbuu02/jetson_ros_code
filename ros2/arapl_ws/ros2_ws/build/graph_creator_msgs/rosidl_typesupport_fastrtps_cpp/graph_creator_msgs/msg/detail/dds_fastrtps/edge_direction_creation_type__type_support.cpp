// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from graph_creator_msgs:msg/EdgeDirectionCreationType.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__struct.hpp"

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

namespace graph_creator_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_serialize(
  const graph_creator_msgs::msg::EdgeDirectionCreationType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: direction_type
  cdr << ros_message.direction_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_creator_msgs::msg::EdgeDirectionCreationType & ros_message)
{
  // Member: direction_type
  cdr >> ros_message.direction_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
get_serialized_size(
  const graph_creator_msgs::msg::EdgeDirectionCreationType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: direction_type
  {
    size_t item_size = sizeof(ros_message.direction_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
max_serialized_size_EdgeDirectionCreationType(
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


  // Member: direction_type
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
    using DataType = graph_creator_msgs::msg::EdgeDirectionCreationType;
    is_plain =
      (
      offsetof(DataType, direction_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EdgeDirectionCreationType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::msg::EdgeDirectionCreationType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EdgeDirectionCreationType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_creator_msgs::msg::EdgeDirectionCreationType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EdgeDirectionCreationType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::msg::EdgeDirectionCreationType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EdgeDirectionCreationType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EdgeDirectionCreationType(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EdgeDirectionCreationType__callbacks = {
  "graph_creator_msgs::msg",
  "EdgeDirectionCreationType",
  _EdgeDirectionCreationType__cdr_serialize,
  _EdgeDirectionCreationType__cdr_deserialize,
  _EdgeDirectionCreationType__get_serialized_size,
  _EdgeDirectionCreationType__max_serialized_size
};

static rosidl_message_type_support_t _EdgeDirectionCreationType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EdgeDirectionCreationType__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace graph_creator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_creator_msgs::msg::EdgeDirectionCreationType>()
{
  return &graph_creator_msgs::msg::typesupport_fastrtps_cpp::_EdgeDirectionCreationType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, msg, EdgeDirectionCreationType)() {
  return &graph_creator_msgs::msg::typesupport_fastrtps_cpp::_EdgeDirectionCreationType__handle;
}

#ifdef __cplusplus
}
#endif
