// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_creator_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "graph_creator_msgs/msg/detail/graph_creator_state__struct.hpp"

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
  const graph_creator_msgs::msg::GraphCreatorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: graph_mode
  cdr << ros_message.graph_mode;
  // Member: current_edge_type
  cdr << ros_message.current_edge_type;
  // Member: edge_is_bidirectional
  cdr << (ros_message.edge_is_bidirectional ? true : false);
  // Member: all_vertices_locked
  cdr << (ros_message.all_vertices_locked ? true : false);
  // Member: all_edges_locked
  cdr << (ros_message.all_edges_locked ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_creator_msgs::msg::GraphCreatorState & ros_message)
{
  // Member: graph_mode
  cdr >> ros_message.graph_mode;

  // Member: current_edge_type
  cdr >> ros_message.current_edge_type;

  // Member: edge_is_bidirectional
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.edge_is_bidirectional = tmp ? true : false;
  }

  // Member: all_vertices_locked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.all_vertices_locked = tmp ? true : false;
  }

  // Member: all_edges_locked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.all_edges_locked = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
get_serialized_size(
  const graph_creator_msgs::msg::GraphCreatorState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: graph_mode
  {
    size_t item_size = sizeof(ros_message.graph_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_edge_type
  {
    size_t item_size = sizeof(ros_message.current_edge_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: edge_is_bidirectional
  {
    size_t item_size = sizeof(ros_message.edge_is_bidirectional);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_vertices_locked
  {
    size_t item_size = sizeof(ros_message.all_vertices_locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_edges_locked
  {
    size_t item_size = sizeof(ros_message.all_edges_locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
max_serialized_size_GraphCreatorState(
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


  // Member: graph_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_edge_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: edge_is_bidirectional
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: all_vertices_locked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: all_edges_locked
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
    using DataType = graph_creator_msgs::msg::GraphCreatorState;
    is_plain =
      (
      offsetof(DataType, all_edges_locked) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GraphCreatorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::msg::GraphCreatorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GraphCreatorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_creator_msgs::msg::GraphCreatorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GraphCreatorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::msg::GraphCreatorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GraphCreatorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GraphCreatorState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GraphCreatorState__callbacks = {
  "graph_creator_msgs::msg",
  "GraphCreatorState",
  _GraphCreatorState__cdr_serialize,
  _GraphCreatorState__cdr_deserialize,
  _GraphCreatorState__get_serialized_size,
  _GraphCreatorState__max_serialized_size
};

static rosidl_message_type_support_t _GraphCreatorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GraphCreatorState__callbacks,
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
get_message_type_support_handle<graph_creator_msgs::msg::GraphCreatorState>()
{
  return &graph_creator_msgs::msg::typesupport_fastrtps_cpp::_GraphCreatorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, msg, GraphCreatorState)() {
  return &graph_creator_msgs::msg::typesupport_fastrtps_cpp::_GraphCreatorState__handle;
}

#ifdef __cplusplus
}
#endif
