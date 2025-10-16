// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_creator_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "graph_creator_msgs/msg/detail/graph_creator_config__struct.hpp"

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
  const graph_creator_msgs::msg::GraphCreatorConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vertex_sphere_scale
  cdr << ros_message.vertex_sphere_scale;
  // Member: vertex_arrow_scale
  cdr << ros_message.vertex_arrow_scale;
  // Member: control_pose_scale
  cdr << ros_message.control_pose_scale;
  // Member: edge_pose_spacing
  cdr << ros_message.edge_pose_spacing;
  // Member: bezier_resolution
  cdr << ros_message.bezier_resolution;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_creator_msgs::msg::GraphCreatorConfig & ros_message)
{
  // Member: vertex_sphere_scale
  cdr >> ros_message.vertex_sphere_scale;

  // Member: vertex_arrow_scale
  cdr >> ros_message.vertex_arrow_scale;

  // Member: control_pose_scale
  cdr >> ros_message.control_pose_scale;

  // Member: edge_pose_spacing
  cdr >> ros_message.edge_pose_spacing;

  // Member: bezier_resolution
  cdr >> ros_message.bezier_resolution;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
get_serialized_size(
  const graph_creator_msgs::msg::GraphCreatorConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vertex_sphere_scale
  {
    size_t item_size = sizeof(ros_message.vertex_sphere_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertex_arrow_scale
  {
    size_t item_size = sizeof(ros_message.vertex_arrow_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_pose_scale
  {
    size_t item_size = sizeof(ros_message.control_pose_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: edge_pose_spacing
  {
    size_t item_size = sizeof(ros_message.edge_pose_spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bezier_resolution
  {
    size_t item_size = sizeof(ros_message.bezier_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
max_serialized_size_GraphCreatorConfig(
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


  // Member: vertex_sphere_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vertex_arrow_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: control_pose_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: edge_pose_spacing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bezier_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = graph_creator_msgs::msg::GraphCreatorConfig;
    is_plain =
      (
      offsetof(DataType, bezier_resolution) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GraphCreatorConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::msg::GraphCreatorConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GraphCreatorConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_creator_msgs::msg::GraphCreatorConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GraphCreatorConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::msg::GraphCreatorConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GraphCreatorConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GraphCreatorConfig(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GraphCreatorConfig__callbacks = {
  "graph_creator_msgs::msg",
  "GraphCreatorConfig",
  _GraphCreatorConfig__cdr_serialize,
  _GraphCreatorConfig__cdr_deserialize,
  _GraphCreatorConfig__get_serialized_size,
  _GraphCreatorConfig__max_serialized_size
};

static rosidl_message_type_support_t _GraphCreatorConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GraphCreatorConfig__callbacks,
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
get_message_type_support_handle<graph_creator_msgs::msg::GraphCreatorConfig>()
{
  return &graph_creator_msgs::msg::typesupport_fastrtps_cpp::_GraphCreatorConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, msg, GraphCreatorConfig)() {
  return &graph_creator_msgs::msg::typesupport_fastrtps_cpp::_GraphCreatorConfig__handle;
}

#ifdef __cplusplus
}
#endif
