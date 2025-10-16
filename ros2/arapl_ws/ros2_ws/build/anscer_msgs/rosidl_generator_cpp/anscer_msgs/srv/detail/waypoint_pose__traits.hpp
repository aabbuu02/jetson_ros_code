// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/WaypointPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/waypoint_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WaypointPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: save
  {
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << ", ";
  }

  // member: waypoint_id
  {
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << ", ";
  }

  // member: waypoint_pose
  {
    out << "waypoint_pose: ";
    to_flow_style_yaml(msg.waypoint_pose, out);
    out << ", ";
  }

  // member: waypoint_name
  {
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
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

  // member: waypoint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_pose:\n";
    to_block_style_yaml(msg.waypoint_pose, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointPose_Request & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::WaypointPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::WaypointPose_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::WaypointPose_Request>()
{
  return "anscer_msgs::srv::WaypointPose_Request";
}

template<>
inline const char * name<anscer_msgs::srv::WaypointPose_Request>()
{
  return "anscer_msgs/srv/WaypointPose_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::WaypointPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::WaypointPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::WaypointPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WaypointPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_saved
  {
    out << "is_saved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_saved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_saved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_saved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_saved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointPose_Response & msg, bool use_flow_style = false)
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
  const anscer_msgs::srv::WaypointPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::WaypointPose_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::WaypointPose_Response>()
{
  return "anscer_msgs::srv::WaypointPose_Response";
}

template<>
inline const char * name<anscer_msgs::srv::WaypointPose_Response>()
{
  return "anscer_msgs/srv/WaypointPose_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::WaypointPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anscer_msgs::srv::WaypointPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anscer_msgs::srv::WaypointPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::WaypointPose>()
{
  return "anscer_msgs::srv::WaypointPose";
}

template<>
inline const char * name<anscer_msgs::srv::WaypointPose>()
{
  return "anscer_msgs/srv/WaypointPose";
}

template<>
struct has_fixed_size<anscer_msgs::srv::WaypointPose>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::WaypointPose_Request>::value &&
    has_fixed_size<anscer_msgs::srv::WaypointPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::WaypointPose>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::WaypointPose_Request>::value &&
    has_bounded_size<anscer_msgs::srv::WaypointPose_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::WaypointPose>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::WaypointPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::WaypointPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__TRAITS_HPP_
