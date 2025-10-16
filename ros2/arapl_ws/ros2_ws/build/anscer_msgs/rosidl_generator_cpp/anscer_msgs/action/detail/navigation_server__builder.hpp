// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:action/NavigationServer.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__NAVIGATION_SERVER__BUILDER_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__NAVIGATION_SERVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/action/detail/navigation_server__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_Goal_default_location
{
public:
  explicit Init_NavigationServer_Goal_default_location(::anscer_msgs::action::NavigationServer_Goal & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_Goal default_location(::anscer_msgs::action::NavigationServer_Goal::_default_location_type arg)
  {
    msg_.default_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Goal msg_;
};

class Init_NavigationServer_Goal_destination_process
{
public:
  explicit Init_NavigationServer_Goal_destination_process(::anscer_msgs::action::NavigationServer_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigationServer_Goal_default_location destination_process(::anscer_msgs::action::NavigationServer_Goal::_destination_process_type arg)
  {
    msg_.destination_process = std::move(arg);
    return Init_NavigationServer_Goal_default_location(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Goal msg_;
};

class Init_NavigationServer_Goal_destination_location
{
public:
  explicit Init_NavigationServer_Goal_destination_location(::anscer_msgs::action::NavigationServer_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigationServer_Goal_destination_process destination_location(::anscer_msgs::action::NavigationServer_Goal::_destination_location_type arg)
  {
    msg_.destination_location = std::move(arg);
    return Init_NavigationServer_Goal_destination_process(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Goal msg_;
};

class Init_NavigationServer_Goal_source_process
{
public:
  explicit Init_NavigationServer_Goal_source_process(::anscer_msgs::action::NavigationServer_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigationServer_Goal_destination_location source_process(::anscer_msgs::action::NavigationServer_Goal::_source_process_type arg)
  {
    msg_.source_process = std::move(arg);
    return Init_NavigationServer_Goal_destination_location(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Goal msg_;
};

class Init_NavigationServer_Goal_source_location
{
public:
  Init_NavigationServer_Goal_source_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_Goal_source_process source_location(::anscer_msgs::action::NavigationServer_Goal::_source_location_type arg)
  {
    msg_.source_location = std::move(arg);
    return Init_NavigationServer_Goal_source_process(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_Goal>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_Goal_source_location();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_Result_status
{
public:
  explicit Init_NavigationServer_Result_status(::anscer_msgs::action::NavigationServer_Result & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_Result status(::anscer_msgs::action::NavigationServer_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Result msg_;
};

class Init_NavigationServer_Result_goal_succeeded
{
public:
  Init_NavigationServer_Result_goal_succeeded()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_Result_status goal_succeeded(::anscer_msgs::action::NavigationServer_Result::_goal_succeeded_type arg)
  {
    msg_.goal_succeeded = std::move(arg);
    return Init_NavigationServer_Result_status(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_Result>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_Result_goal_succeeded();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_Feedback_warning_msg
{
public:
  explicit Init_NavigationServer_Feedback_warning_msg(::anscer_msgs::action::NavigationServer_Feedback & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_Feedback warning_msg(::anscer_msgs::action::NavigationServer_Feedback::_warning_msg_type arg)
  {
    msg_.warning_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Feedback msg_;
};

class Init_NavigationServer_Feedback_warning
{
public:
  explicit Init_NavigationServer_Feedback_warning(::anscer_msgs::action::NavigationServer_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigationServer_Feedback_warning_msg warning(::anscer_msgs::action::NavigationServer_Feedback::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_NavigationServer_Feedback_warning_msg(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Feedback msg_;
};

class Init_NavigationServer_Feedback_status
{
public:
  explicit Init_NavigationServer_Feedback_status(::anscer_msgs::action::NavigationServer_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigationServer_Feedback_warning status(::anscer_msgs::action::NavigationServer_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigationServer_Feedback_warning(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Feedback msg_;
};

class Init_NavigationServer_Feedback_mission_status
{
public:
  explicit Init_NavigationServer_Feedback_mission_status(::anscer_msgs::action::NavigationServer_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigationServer_Feedback_status mission_status(::anscer_msgs::action::NavigationServer_Feedback::_mission_status_type arg)
  {
    msg_.mission_status = std::move(arg);
    return Init_NavigationServer_Feedback_status(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Feedback msg_;
};

class Init_NavigationServer_Feedback_completed
{
public:
  Init_NavigationServer_Feedback_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_Feedback_mission_status completed(::anscer_msgs::action::NavigationServer_Feedback::_completed_type arg)
  {
    msg_.completed = std::move(arg);
    return Init_NavigationServer_Feedback_mission_status(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_Feedback>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_Feedback_completed();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_SendGoal_Request_goal
{
public:
  explicit Init_NavigationServer_SendGoal_Request_goal(::anscer_msgs::action::NavigationServer_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_SendGoal_Request goal(::anscer_msgs::action::NavigationServer_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_SendGoal_Request msg_;
};

class Init_NavigationServer_SendGoal_Request_goal_id
{
public:
  Init_NavigationServer_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_SendGoal_Request_goal goal_id(::anscer_msgs::action::NavigationServer_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigationServer_SendGoal_Request_goal(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_SendGoal_Request>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_SendGoal_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_SendGoal_Response_stamp
{
public:
  explicit Init_NavigationServer_SendGoal_Response_stamp(::anscer_msgs::action::NavigationServer_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_SendGoal_Response stamp(::anscer_msgs::action::NavigationServer_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_SendGoal_Response msg_;
};

class Init_NavigationServer_SendGoal_Response_accepted
{
public:
  Init_NavigationServer_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_SendGoal_Response_stamp accepted(::anscer_msgs::action::NavigationServer_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigationServer_SendGoal_Response_stamp(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_SendGoal_Response>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_SendGoal_Response_accepted();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_GetResult_Request_goal_id
{
public:
  Init_NavigationServer_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::NavigationServer_GetResult_Request goal_id(::anscer_msgs::action::NavigationServer_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_GetResult_Request>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_GetResult_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_GetResult_Response_result
{
public:
  explicit Init_NavigationServer_GetResult_Response_result(::anscer_msgs::action::NavigationServer_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_GetResult_Response result(::anscer_msgs::action::NavigationServer_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_GetResult_Response msg_;
};

class Init_NavigationServer_GetResult_Response_status
{
public:
  Init_NavigationServer_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_GetResult_Response_result status(::anscer_msgs::action::NavigationServer_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigationServer_GetResult_Response_result(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_GetResult_Response>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_GetResult_Response_status();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_NavigationServer_FeedbackMessage_feedback
{
public:
  explicit Init_NavigationServer_FeedbackMessage_feedback(::anscer_msgs::action::NavigationServer_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::NavigationServer_FeedbackMessage feedback(::anscer_msgs::action::NavigationServer_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_FeedbackMessage msg_;
};

class Init_NavigationServer_FeedbackMessage_goal_id
{
public:
  Init_NavigationServer_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationServer_FeedbackMessage_feedback goal_id(::anscer_msgs::action::NavigationServer_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigationServer_FeedbackMessage_feedback(msg_);
  }

private:
  ::anscer_msgs::action::NavigationServer_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::NavigationServer_FeedbackMessage>()
{
  return anscer_msgs::action::builder::Init_NavigationServer_FeedbackMessage_goal_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__NAVIGATION_SERVER__BUILDER_HPP_
