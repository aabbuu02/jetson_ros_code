// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/EditWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/edit_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EditWaypoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: rename
  {
    out << "rename: ";
    rosidl_generator_traits::value_to_yaml(msg.rename, out);
    out << ", ";
  }

  // member: replace_id
  {
    out << "replace_id: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_id, out);
    out << ", ";
  }

  // member: replace_to_current_pose
  {
    out << "replace_to_current_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_to_current_pose, out);
    out << ", ";
  }

  // member: replace_to_pose
  {
    out << "replace_to_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_to_pose, out);
    out << ", ";
  }

  // member: waypoint_order
  {
    out << "waypoint_order: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_order, out);
    out << ", ";
  }

  // member: waypoint_id
  {
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << ", ";
  }

  // member: new_id
  {
    out << "new_id: ";
    rosidl_generator_traits::value_to_yaml(msg.new_id, out);
    out << ", ";
  }

  // member: waypoint_type
  {
    out << "waypoint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_type, out);
    out << ", ";
  }

  // member: waypoint_name
  {
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
    out << ", ";
  }

  // member: waypoint_pose
  {
    out << "waypoint_pose: ";
    to_flow_style_yaml(msg.waypoint_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EditWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rename: ";
    rosidl_generator_traits::value_to_yaml(msg.rename, out);
    out << "\n";
  }

  // member: replace_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replace_id: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_id, out);
    out << "\n";
  }

  // member: replace_to_current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replace_to_current_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_to_current_pose, out);
    out << "\n";
  }

  // member: replace_to_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replace_to_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_to_pose, out);
    out << "\n";
  }

  // member: waypoint_order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_order: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_order, out);
    out << "\n";
  }

  // member: waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << "\n";
  }

  // member: new_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_id: ";
    rosidl_generator_traits::value_to_yaml(msg.new_id, out);
    out << "\n";
  }

  // member: waypoint_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_type, out);
    out << "\n";
  }

  // member: waypoint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
    out << "\n";
  }

  // member: waypoint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_pose:\n";
    to_block_style_yaml(msg.waypoint_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EditWaypoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::EditWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::EditWaypoint_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::EditWaypoint_Request>()
{
  return "anscer_msgs::srv::EditWaypoint_Request";
}

template<>
inline const char * name<anscer_msgs::srv::EditWaypoint_Request>()
{
  return "anscer_msgs/srv/EditWaypoint_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::EditWaypoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::EditWaypoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::EditWaypoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EditWaypoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: edited
  {
    out << "edited: ";
    rosidl_generator_traits::value_to_yaml(msg.edited, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EditWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: edited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edited: ";
    rosidl_generator_traits::value_to_yaml(msg.edited, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EditWaypoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::EditWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::EditWaypoint_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::EditWaypoint_Response>()
{
  return "anscer_msgs::srv::EditWaypoint_Response";
}

template<>
inline const char * name<anscer_msgs::srv::EditWaypoint_Response>()
{
  return "anscer_msgs/srv/EditWaypoint_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::EditWaypoint_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::EditWaypoint_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::EditWaypoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::EditWaypoint>()
{
  return "anscer_msgs::srv::EditWaypoint";
}

template<>
inline const char * name<anscer_msgs::srv::EditWaypoint>()
{
  return "anscer_msgs/srv/EditWaypoint";
}

template<>
struct has_fixed_size<anscer_msgs::srv::EditWaypoint>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::EditWaypoint_Request>::value &&
    has_fixed_size<anscer_msgs::srv::EditWaypoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::EditWaypoint>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::EditWaypoint_Request>::value &&
    has_bounded_size<anscer_msgs::srv::EditWaypoint_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::EditWaypoint>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::EditWaypoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::EditWaypoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__TRAITS_HPP_
