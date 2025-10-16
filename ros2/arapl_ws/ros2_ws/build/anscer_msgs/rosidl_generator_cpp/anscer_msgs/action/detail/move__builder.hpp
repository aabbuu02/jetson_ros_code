// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_Goal_target_id
{
public:
  explicit Init_Move_Goal_target_id(::anscer_msgs::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Move_Goal target_id(::anscer_msgs::action::Move_Goal::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_Goal msg_;
};

class Init_Move_Goal_source_id
{
public:
  Init_Move_Goal_source_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_target_id source_id(::anscer_msgs::action::Move_Goal::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_Move_Goal_target_id(msg_);
  }

private:
  ::anscer_msgs::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_Goal>()
{
  return anscer_msgs::action::builder::Init_Move_Goal_source_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_Result_is_success
{
public:
  Init_Move_Result_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Move_Result is_success(::anscer_msgs::action::Move_Result::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_Result>()
{
  return anscer_msgs::action::builder::Init_Move_Result_is_success();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_move_feedback
{
public:
  Init_Move_Feedback_move_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Move_Feedback move_feedback(::anscer_msgs::action::Move_Feedback::_move_feedback_type arg)
  {
    msg_.move_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_Feedback>()
{
  return anscer_msgs::action::builder::Init_Move_Feedback_move_feedback();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::anscer_msgs::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Move_SendGoal_Request goal(::anscer_msgs::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::anscer_msgs::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::anscer_msgs::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_SendGoal_Request>()
{
  return anscer_msgs::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::anscer_msgs::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Move_SendGoal_Response stamp(::anscer_msgs::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::anscer_msgs::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::anscer_msgs::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_SendGoal_Response>()
{
  return anscer_msgs::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::Move_GetResult_Request goal_id(::anscer_msgs::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_GetResult_Request>()
{
  return anscer_msgs::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::anscer_msgs::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Move_GetResult_Response result(::anscer_msgs::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::anscer_msgs::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::anscer_msgs::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_GetResult_Response>()
{
  return anscer_msgs::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::anscer_msgs::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::Move_FeedbackMessage feedback(::anscer_msgs::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::anscer_msgs::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::anscer_msgs::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::Move_FeedbackMessage>()
{
  return anscer_msgs::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__MOVE__BUILDER_HPP_
