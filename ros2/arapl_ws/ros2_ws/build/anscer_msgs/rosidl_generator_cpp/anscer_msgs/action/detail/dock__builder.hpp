// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:action/Dock.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__DOCK__BUILDER_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__DOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/action/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_Goal_undock_distance
{
public:
  explicit Init_Dock_Goal_undock_distance(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Dock_Goal undock_distance(::anscer_msgs::action::Dock_Goal::_undock_distance_type arg)
  {
    msg_.undock_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_inplace_id
{
public:
  explicit Init_Dock_Goal_inplace_id(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  Init_Dock_Goal_undock_distance inplace_id(::anscer_msgs::action::Dock_Goal::_inplace_id_type arg)
  {
    msg_.inplace_id = std::move(arg);
    return Init_Dock_Goal_undock_distance(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_start_undock
{
public:
  explicit Init_Dock_Goal_start_undock(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  Init_Dock_Goal_inplace_id start_undock(::anscer_msgs::action::Dock_Goal::_start_undock_type arg)
  {
    msg_.start_undock = std::move(arg);
    return Init_Dock_Goal_inplace_id(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_start_dock
{
public:
  explicit Init_Dock_Goal_start_dock(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  Init_Dock_Goal_start_undock start_dock(::anscer_msgs::action::Dock_Goal::_start_dock_type arg)
  {
    msg_.start_dock = std::move(arg);
    return Init_Dock_Goal_start_undock(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_vlmarker_charging
{
public:
  explicit Init_Dock_Goal_vlmarker_charging(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  Init_Dock_Goal_start_dock vlmarker_charging(::anscer_msgs::action::Dock_Goal::_vlmarker_charging_type arg)
  {
    msg_.vlmarker_charging = std::move(arg);
    return Init_Dock_Goal_start_dock(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_general_docking
{
public:
  explicit Init_Dock_Goal_general_docking(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  Init_Dock_Goal_vlmarker_charging general_docking(::anscer_msgs::action::Dock_Goal::_general_docking_type arg)
  {
    msg_.general_docking = std::move(arg);
    return Init_Dock_Goal_vlmarker_charging(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_reflector_charging
{
public:
  explicit Init_Dock_Goal_reflector_charging(::anscer_msgs::action::Dock_Goal & msg)
  : msg_(msg)
  {}
  Init_Dock_Goal_general_docking reflector_charging(::anscer_msgs::action::Dock_Goal::_reflector_charging_type arg)
  {
    msg_.reflector_charging = std::move(arg);
    return Init_Dock_Goal_general_docking(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

class Init_Dock_Goal_aruco_charging
{
public:
  Init_Dock_Goal_aruco_charging()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_Goal_reflector_charging aruco_charging(::anscer_msgs::action::Dock_Goal::_aruco_charging_type arg)
  {
    msg_.aruco_charging = std::move(arg);
    return Init_Dock_Goal_reflector_charging(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_Goal>()
{
  return anscer_msgs::action::builder::Init_Dock_Goal_aruco_charging();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_Result_is_success
{
public:
  Init_Dock_Result_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Dock_Result is_success(::anscer_msgs::action::Dock_Result::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_Result>()
{
  return anscer_msgs::action::builder::Init_Dock_Result_is_success();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_Feedback_controller_status
{
public:
  explicit Init_Dock_Feedback_controller_status(::anscer_msgs::action::Dock_Feedback & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Dock_Feedback controller_status(::anscer_msgs::action::Dock_Feedback::_controller_status_type arg)
  {
    msg_.controller_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Feedback msg_;
};

class Init_Dock_Feedback_dock_found
{
public:
  explicit Init_Dock_Feedback_dock_found(::anscer_msgs::action::Dock_Feedback & msg)
  : msg_(msg)
  {}
  Init_Dock_Feedback_controller_status dock_found(::anscer_msgs::action::Dock_Feedback::_dock_found_type arg)
  {
    msg_.dock_found = std::move(arg);
    return Init_Dock_Feedback_controller_status(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Feedback msg_;
};

class Init_Dock_Feedback_undock_distance_remaining
{
public:
  explicit Init_Dock_Feedback_undock_distance_remaining(::anscer_msgs::action::Dock_Feedback & msg)
  : msg_(msg)
  {}
  Init_Dock_Feedback_dock_found undock_distance_remaining(::anscer_msgs::action::Dock_Feedback::_undock_distance_remaining_type arg)
  {
    msg_.undock_distance_remaining = std::move(arg);
    return Init_Dock_Feedback_dock_found(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Feedback msg_;
};

class Init_Dock_Feedback_dock_info
{
public:
  Init_Dock_Feedback_dock_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_Feedback_undock_distance_remaining dock_info(::anscer_msgs::action::Dock_Feedback::_dock_info_type arg)
  {
    msg_.dock_info = std::move(arg);
    return Init_Dock_Feedback_undock_distance_remaining(msg_);
  }

private:
  ::anscer_msgs::action::Dock_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_Feedback>()
{
  return anscer_msgs::action::builder::Init_Dock_Feedback_dock_info();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_SendGoal_Request_goal
{
public:
  explicit Init_Dock_SendGoal_Request_goal(::anscer_msgs::action::Dock_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Dock_SendGoal_Request goal(::anscer_msgs::action::Dock_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_SendGoal_Request msg_;
};

class Init_Dock_SendGoal_Request_goal_id
{
public:
  Init_Dock_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_SendGoal_Request_goal goal_id(::anscer_msgs::action::Dock_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Dock_SendGoal_Request_goal(msg_);
  }

private:
  ::anscer_msgs::action::Dock_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_SendGoal_Request>()
{
  return anscer_msgs::action::builder::Init_Dock_SendGoal_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_SendGoal_Response_stamp
{
public:
  explicit Init_Dock_SendGoal_Response_stamp(::anscer_msgs::action::Dock_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Dock_SendGoal_Response stamp(::anscer_msgs::action::Dock_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_SendGoal_Response msg_;
};

class Init_Dock_SendGoal_Response_accepted
{
public:
  Init_Dock_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_SendGoal_Response_stamp accepted(::anscer_msgs::action::Dock_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Dock_SendGoal_Response_stamp(msg_);
  }

private:
  ::anscer_msgs::action::Dock_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_SendGoal_Response>()
{
  return anscer_msgs::action::builder::Init_Dock_SendGoal_Response_accepted();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_GetResult_Request_goal_id
{
public:
  Init_Dock_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Dock_GetResult_Request goal_id(::anscer_msgs::action::Dock_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_GetResult_Request>()
{
  return anscer_msgs::action::builder::Init_Dock_GetResult_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_GetResult_Response_result
{
public:
  explicit Init_Dock_GetResult_Response_result(::anscer_msgs::action::Dock_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Dock_GetResult_Response result(::anscer_msgs::action::Dock_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_GetResult_Response msg_;
};

class Init_Dock_GetResult_Response_status
{
public:
  Init_Dock_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_GetResult_Response_result status(::anscer_msgs::action::Dock_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Dock_GetResult_Response_result(msg_);
  }

private:
  ::anscer_msgs::action::Dock_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_GetResult_Response>()
{
  return anscer_msgs::action::builder::Init_Dock_GetResult_Response_status();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Dock_FeedbackMessage_feedback
{
public:
  explicit Init_Dock_FeedbackMessage_feedback(::anscer_msgs::action::Dock_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Dock_FeedbackMessage feedback(::anscer_msgs::action::Dock_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Dock_FeedbackMessage msg_;
};

class Init_Dock_FeedbackMessage_goal_id
{
public:
  Init_Dock_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_FeedbackMessage_feedback goal_id(::anscer_msgs::action::Dock_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Dock_FeedbackMessage_feedback(msg_);
  }

private:
  ::anscer_msgs::action::Dock_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Dock_FeedbackMessage>()
{
  return anscer_msgs::action::builder::Init_Dock_FeedbackMessage_goal_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__DOCK__BUILDER_HPP_
