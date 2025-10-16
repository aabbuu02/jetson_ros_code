// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:action/Transition.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__TRANSITION__BUILDER_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__TRANSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/action/detail/transition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_Goal_map_name
{
public:
  Init_Transition_Goal_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Transition_Goal map_name(::anscer_msgs::action::Transition_Goal::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_Goal>()
{
  return anscer_msgs::action::builder::Init_Transition_Goal_map_name();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_Result_is_success
{
public:
  Init_Transition_Result_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Transition_Result is_success(::anscer_msgs::action::Transition_Result::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_Result>()
{
  return anscer_msgs::action::builder::Init_Transition_Result_is_success();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_Feedback_transition_feedback
{
public:
  Init_Transition_Feedback_transition_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Transition_Feedback transition_feedback(::anscer_msgs::action::Transition_Feedback::_transition_feedback_type arg)
  {
    msg_.transition_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_Feedback>()
{
  return anscer_msgs::action::builder::Init_Transition_Feedback_transition_feedback();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_SendGoal_Request_goal
{
public:
  explicit Init_Transition_SendGoal_Request_goal(::anscer_msgs::action::Transition_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Transition_SendGoal_Request goal(::anscer_msgs::action::Transition_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_SendGoal_Request msg_;
};

class Init_Transition_SendGoal_Request_goal_id
{
public:
  Init_Transition_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_SendGoal_Request_goal goal_id(::anscer_msgs::action::Transition_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Transition_SendGoal_Request_goal(msg_);
  }

private:
  ::anscer_msgs::action::Transition_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_SendGoal_Request>()
{
  return anscer_msgs::action::builder::Init_Transition_SendGoal_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_SendGoal_Response_stamp
{
public:
  explicit Init_Transition_SendGoal_Response_stamp(::anscer_msgs::action::Transition_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Transition_SendGoal_Response stamp(::anscer_msgs::action::Transition_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_SendGoal_Response msg_;
};

class Init_Transition_SendGoal_Response_accepted
{
public:
  Init_Transition_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_SendGoal_Response_stamp accepted(::anscer_msgs::action::Transition_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Transition_SendGoal_Response_stamp(msg_);
  }

private:
  ::anscer_msgs::action::Transition_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_SendGoal_Response>()
{
  return anscer_msgs::action::builder::Init_Transition_SendGoal_Response_accepted();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_GetResult_Request_goal_id
{
public:
  Init_Transition_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Transition_GetResult_Request goal_id(::anscer_msgs::action::Transition_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_GetResult_Request>()
{
  return anscer_msgs::action::builder::Init_Transition_GetResult_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_GetResult_Response_result
{
public:
  explicit Init_Transition_GetResult_Response_result(::anscer_msgs::action::Transition_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Transition_GetResult_Response result(::anscer_msgs::action::Transition_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_GetResult_Response msg_;
};

class Init_Transition_GetResult_Response_status
{
public:
  Init_Transition_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_GetResult_Response_result status(::anscer_msgs::action::Transition_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Transition_GetResult_Response_result(msg_);
  }

private:
  ::anscer_msgs::action::Transition_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_GetResult_Response>()
{
  return anscer_msgs::action::builder::Init_Transition_GetResult_Response_status();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Transition_FeedbackMessage_feedback
{
public:
  explicit Init_Transition_FeedbackMessage_feedback(::anscer_msgs::action::Transition_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Transition_FeedbackMessage feedback(::anscer_msgs::action::Transition_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Transition_FeedbackMessage msg_;
};

class Init_Transition_FeedbackMessage_goal_id
{
public:
  Init_Transition_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_FeedbackMessage_feedback goal_id(::anscer_msgs::action::Transition_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Transition_FeedbackMessage_feedback(msg_);
  }

private:
  ::anscer_msgs::action::Transition_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Transition_FeedbackMessage>()
{
  return anscer_msgs::action::builder::Init_Transition_FeedbackMessage_goal_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__TRANSITION__BUILDER_HPP_
