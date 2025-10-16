// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/snap_pose_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "graph_creator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "graph_creator_msgs/msg/detail/snap_pose_config__struct.h"
#include "graph_creator_msgs/msg/detail/snap_pose_config__functions.h"
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


using _SnapPoseConfig__ros_msg_type = graph_creator_msgs__msg__SnapPoseConfig;

static bool _SnapPoseConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SnapPoseConfig__ros_msg_type * ros_message = static_cast<const _SnapPoseConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: enable_for_vertices
  {
    cdr << (ros_message->enable_for_vertices ? true : false);
  }

  // Field name: enable_for_edges
  {
    cdr << (ros_message->enable_for_edges ? true : false);
  }

  // Field name: enable_position_snap
  {
    cdr << (ros_message->enable_position_snap ? true : false);
  }

  // Field name: enable_orientation_snap
  {
    cdr << (ros_message->enable_orientation_snap ? true : false);
  }

  // Field name: position_snap_grid_size
  {
    cdr << ros_message->position_snap_grid_size;
  }

  // Field name: orientation_snap_angle
  {
    cdr << ros_message->orientation_snap_angle;
  }

  return true;
}

static bool _SnapPoseConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SnapPoseConfig__ros_msg_type * ros_message = static_cast<_SnapPoseConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: enable_for_vertices
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_for_vertices = tmp ? true : false;
  }

  // Field name: enable_for_edges
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_for_edges = tmp ? true : false;
  }

  // Field name: enable_position_snap
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_position_snap = tmp ? true : false;
  }

  // Field name: enable_orientation_snap
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_orientation_snap = tmp ? true : false;
  }

  // Field name: position_snap_grid_size
  {
    cdr >> ros_message->position_snap_grid_size;
  }

  // Field name: orientation_snap_angle
  {
    cdr >> ros_message->orientation_snap_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graph_creator_msgs
size_t get_serialized_size_graph_creator_msgs__msg__SnapPoseConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SnapPoseConfig__ros_msg_type * ros_message = static_cast<const _SnapPoseConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enable_for_vertices
  {
    size_t item_size = sizeof(ros_message->enable_for_vertices);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_for_edges
  {
    size_t item_size = sizeof(ros_message->enable_for_edges);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_position_snap
  {
    size_t item_size = sizeof(ros_message->enable_position_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_orientation_snap
  {
    size_t item_size = sizeof(ros_message->enable_orientation_snap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_snap_grid_size
  {
    size_t item_size = sizeof(ros_message->position_snap_grid_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation_snap_angle
  {
    size_t item_size = sizeof(ros_message->orientation_snap_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SnapPoseConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_graph_creator_msgs__msg__SnapPoseConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graph_creator_msgs
size_t max_serialized_size_graph_creator_msgs__msg__SnapPoseConfig(
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

  // member: enable_for_vertices
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enable_for_edges
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enable_position_snap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enable_orientation_snap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_snap_grid_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: orientation_snap_angle
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
    using DataType = graph_creator_msgs__msg__SnapPoseConfig;
    is_plain =
      (
      offsetof(DataType, orientation_snap_angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SnapPoseConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_graph_creator_msgs__msg__SnapPoseConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SnapPoseConfig = {
  "graph_creator_msgs::msg",
  "SnapPoseConfig",
  _SnapPoseConfig__cdr_serialize,
  _SnapPoseConfig__cdr_deserialize,
  _SnapPoseConfig__get_serialized_size,
  _SnapPoseConfig__max_serialized_size
};

static rosidl_message_type_support_t _SnapPoseConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SnapPoseConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, SnapPoseConfig)() {
  return &_SnapPoseConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
