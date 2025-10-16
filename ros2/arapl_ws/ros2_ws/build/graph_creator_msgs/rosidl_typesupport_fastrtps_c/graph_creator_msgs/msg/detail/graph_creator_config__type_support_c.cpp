// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_creator_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "graph_creator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "graph_creator_msgs/msg/detail/graph_creator_config__struct.h"
#include "graph_creator_msgs/msg/detail/graph_creator_config__functions.h"
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


// forward declare type support functions


using _GraphCreatorConfig__ros_msg_type = graph_creator_msgs__msg__GraphCreatorConfig;

static bool _GraphCreatorConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GraphCreatorConfig__ros_msg_type * ros_message = static_cast<const _GraphCreatorConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: vertex_sphere_scale
  {
    cdr << ros_message->vertex_sphere_scale;
  }

  // Field name: vertex_arrow_scale
  {
    cdr << ros_message->vertex_arrow_scale;
  }

  // Field name: control_pose_scale
  {
    cdr << ros_message->control_pose_scale;
  }

  // Field name: edge_pose_spacing
  {
    cdr << ros_message->edge_pose_spacing;
  }

  // Field name: bezier_resolution
  {
    cdr << ros_message->bezier_resolution;
  }

  return true;
}

static bool _GraphCreatorConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GraphCreatorConfig__ros_msg_type * ros_message = static_cast<_GraphCreatorConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: vertex_sphere_scale
  {
    cdr >> ros_message->vertex_sphere_scale;
  }

  // Field name: vertex_arrow_scale
  {
    cdr >> ros_message->vertex_arrow_scale;
  }

  // Field name: control_pose_scale
  {
    cdr >> ros_message->control_pose_scale;
  }

  // Field name: edge_pose_spacing
  {
    cdr >> ros_message->edge_pose_spacing;
  }

  // Field name: bezier_resolution
  {
    cdr >> ros_message->bezier_resolution;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graph_creator_msgs
size_t get_serialized_size_graph_creator_msgs__msg__GraphCreatorConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphCreatorConfig__ros_msg_type * ros_message = static_cast<const _GraphCreatorConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vertex_sphere_scale
  {
    size_t item_size = sizeof(ros_message->vertex_sphere_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertex_arrow_scale
  {
    size_t item_size = sizeof(ros_message->vertex_arrow_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_pose_scale
  {
    size_t item_size = sizeof(ros_message->control_pose_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name edge_pose_spacing
  {
    size_t item_size = sizeof(ros_message->edge_pose_spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bezier_resolution
  {
    size_t item_size = sizeof(ros_message->bezier_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GraphCreatorConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_graph_creator_msgs__msg__GraphCreatorConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graph_creator_msgs
size_t max_serialized_size_graph_creator_msgs__msg__GraphCreatorConfig(
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

  // member: vertex_sphere_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vertex_arrow_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: control_pose_scale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: edge_pose_spacing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bezier_resolution
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
    using DataType = graph_creator_msgs__msg__GraphCreatorConfig;
    is_plain =
      (
      offsetof(DataType, bezier_resolution) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GraphCreatorConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_graph_creator_msgs__msg__GraphCreatorConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraphCreatorConfig = {
  "graph_creator_msgs::msg",
  "GraphCreatorConfig",
  _GraphCreatorConfig__cdr_serialize,
  _GraphCreatorConfig__cdr_deserialize,
  _GraphCreatorConfig__get_serialized_size,
  _GraphCreatorConfig__max_serialized_size
};

static rosidl_message_type_support_t _GraphCreatorConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraphCreatorConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, GraphCreatorConfig)() {
  return &_GraphCreatorConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
