// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:action/Wait.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__WAIT__BUILDER_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__WAIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/action/detail/wait__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_Goal_wait_activate
{
public:
  explicit Init_Wait_Goal_wait_activate(::anscer_msgs::action::Wait_Goal & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Wait_Goal wait_activate(::anscer_msgs::action::Wait_Goal::_wait_activate_type arg)
  {
    msg_.wait_activate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_Goal msg_;
};

class Init_Wait_Goal_wait_time
{
public:
  Init_Wait_Goal_wait_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wait_Goal_wait_activate wait_time(::anscer_msgs::action::Wait_Goal::_wait_time_type arg)
  {
    msg_.wait_time = std::move(arg);
    return Init_Wait_Goal_wait_activate(msg_);
  }

private:
  ::anscer_msgs::action::Wait_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_Goal>()
{
  return anscer_msgs::action::builder::Init_Wait_Goal_wait_time();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_Result_is_success
{
public:
  Init_Wait_Result_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Wait_Result is_success(::anscer_msgs::action::Wait_Result::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_Result>()
{
  return anscer_msgs::action::builder::Init_Wait_Result_is_success();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_Feedback_time_elapsed
{
public:
  explicit Init_Wait_Feedback_time_elapsed(::anscer_msgs::action::Wait_Feedback & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Wait_Feedback time_elapsed(::anscer_msgs::action::Wait_Feedback::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_Feedback msg_;
};

class Init_Wait_Feedback_wait_feedback
{
public:
  Init_Wait_Feedback_wait_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wait_Feedback_time_elapsed wait_feedback(::anscer_msgs::action::Wait_Feedback::_wait_feedback_type arg)
  {
    msg_.wait_feedback = std::move(arg);
    return Init_Wait_Feedback_time_elapsed(msg_);
  }

private:
  ::anscer_msgs::action::Wait_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_Feedback>()
{
  return anscer_msgs::action::builder::Init_Wait_Feedback_wait_feedback();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_SendGoal_Request_goal
{
public:
  explicit Init_Wait_SendGoal_Request_goal(::anscer_msgs::action::Wait_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Wait_SendGoal_Request goal(::anscer_msgs::action::Wait_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_SendGoal_Request msg_;
};

class Init_Wait_SendGoal_Request_goal_id
{
public:
  Init_Wait_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wait_SendGoal_Request_goal goal_id(::anscer_msgs::action::Wait_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Wait_SendGoal_Request_goal(msg_);
  }

private:
  ::anscer_msgs::action::Wait_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_SendGoal_Request>()
{
  return anscer_msgs::action::builder::Init_Wait_SendGoal_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_SendGoal_Response_stamp
{
public:
  explicit Init_Wait_SendGoal_Response_stamp(::anscer_msgs::action::Wait_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Wait_SendGoal_Response stamp(::anscer_msgs::action::Wait_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_SendGoal_Response msg_;
};

class Init_Wait_SendGoal_Response_accepted
{
public:
  Init_Wait_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wait_SendGoal_Response_stamp accepted(::anscer_msgs::action::Wait_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Wait_SendGoal_Response_stamp(msg_);
  }

private:
  ::anscer_msgs::action::Wait_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_SendGoal_Response>()
{
  return anscer_msgs::action::builder::Init_Wait_SendGoal_Response_accepted();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_GetResult_Request_goal_id
{
public:
  Init_Wait_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Wait_GetResult_Request goal_id(::anscer_msgs::action::Wait_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_GetResult_Request>()
{
  return anscer_msgs::action::builder::Init_Wait_GetResult_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_GetResult_Response_result
{
public:
  explicit Init_Wait_GetResult_Response_result(::anscer_msgs::action::Wait_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Wait_GetResult_Response result(::anscer_msgs::action::Wait_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_GetResult_Response msg_;
};

class Init_Wait_GetResult_Response_status
{
public:
  Init_Wait_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wait_GetResult_Response_result status(::anscer_msgs::action::Wait_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Wait_GetResult_Response_result(msg_);
  }

private:
  ::anscer_msgs::action::Wait_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_GetResult_Response>()
{
  return anscer_msgs::action::builder::Init_Wait_GetResult_Response_status();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Wait_FeedbackMessage_feedback
{
public:
  explicit Init_Wait_FeedbackMessage_feedback(::anscer_msgs::action::Wait_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Wait_FeedbackMessage feedback(::anscer_msgs::action::Wait_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Wait_FeedbackMessage msg_;
};

class Init_Wait_FeedbackMessage_goal_id
{
public:
  Init_Wait_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wait_FeedbackMessage_feedback goal_id(::anscer_msgs::action::Wait_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Wait_FeedbackMessage_feedback(msg_);
  }

private:
  ::anscer_msgs::action::Wait_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Wait_FeedbackMessage>()
{
  return anscer_msgs::action::builder::Init_Wait_FeedbackMessage_goal_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__WAIT__BUILDER_HPP_
