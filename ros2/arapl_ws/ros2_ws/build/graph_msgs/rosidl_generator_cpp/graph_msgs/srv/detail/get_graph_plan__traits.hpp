// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:srv/GetGraphPlan.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__TRAITS_HPP_
#define GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_msgs/srv/detail/get_graph_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGraphPlan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: source_id
  {
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << ", ";
  }

  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << ", ";
  }

  // member: ignore_goal_orientation
  {
    out << "ignore_goal_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_goal_orientation, out);
    out << ", ";
  }

  // member: ignore_path_orientation
  {
    out << "ignore_path_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_path_orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGraphPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << "\n";
  }

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }

  // member: ignore_goal_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_goal_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_goal_orientation, out);
    out << "\n";
  }

  // member: ignore_path_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_path_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_path_orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGraphPlan_Request & msg, bool use_flow_style = false)
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

}  // namespace graph_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_msgs::srv::GetGraphPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::srv::GetGraphPlan_Request & msg)
{
  return graph_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::srv::GetGraphPlan_Request>()
{
  return "graph_msgs::srv::GetGraphPlan_Request";
}

template<>
inline const char * name<graph_msgs::srv::GetGraphPlan_Request>()
{
  return "graph_msgs/srv/GetGraphPlan_Request";
}

template<>
struct has_fixed_size<graph_msgs::srv::GetGraphPlan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<graph_msgs::srv::GetGraphPlan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<graph_msgs::srv::GetGraphPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'vertices_in_plan'
#include "graph_msgs/msg/detail/vertex__traits.hpp"
// Member 'plan'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace graph_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGraphPlan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: vertices_in_plan
  {
    if (msg.vertices_in_plan.size() == 0) {
      out << "vertices_in_plan: []";
    } else {
      out << "vertices_in_plan: [";
      size_t pending_items = msg.vertices_in_plan.size();
      for (auto item : msg.vertices_in_plan) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plan
  {
    out << "plan: ";
    to_flow_style_yaml(msg.plan, out);
    out << ", ";
  }

  // member: plan_distance
  {
    out << "plan_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_distance, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGraphPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vertices_in_plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices_in_plan.size() == 0) {
      out << "vertices_in_plan: []\n";
    } else {
      out << "vertices_in_plan:\n";
      for (auto item : msg.vertices_in_plan) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan:\n";
    to_block_style_yaml(msg.plan, out, indentation + 2);
  }

  // member: plan_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_distance, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGraphPlan_Response & msg, bool use_flow_style = false)
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

}  // namespace graph_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_msgs::srv::GetGraphPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::srv::GetGraphPlan_Response & msg)
{
  return graph_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::srv::GetGraphPlan_Response>()
{
  return "graph_msgs::srv::GetGraphPlan_Response";
}

template<>
inline const char * name<graph_msgs::srv::GetGraphPlan_Response>()
{
  return "graph_msgs/srv/GetGraphPlan_Response";
}

template<>
struct has_fixed_size<graph_msgs::srv::GetGraphPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::srv::GetGraphPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::srv::GetGraphPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msgs::srv::GetGraphPlan>()
{
  return "graph_msgs::srv::GetGraphPlan";
}

template<>
inline const char * name<graph_msgs::srv::GetGraphPlan>()
{
  return "graph_msgs/srv/GetGraphPlan";
}

template<>
struct has_fixed_size<graph_msgs::srv::GetGraphPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<graph_msgs::srv::GetGraphPlan_Request>::value &&
    has_fixed_size<graph_msgs::srv::GetGraphPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<graph_msgs::srv::GetGraphPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<graph_msgs::srv::GetGraphPlan_Request>::value &&
    has_bounded_size<graph_msgs::srv::GetGraphPlan_Response>::value
  >
{
};

template<>
struct is_service<graph_msgs::srv::GetGraphPlan>
  : std::true_type
{
};

template<>
struct is_service_request<graph_msgs::srv::GetGraphPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<graph_msgs::srv::GetGraphPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__TRAITS_HPP_
