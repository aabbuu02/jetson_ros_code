// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qr_mission_scheduler:action/MissionScheduler.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__BUILDER_HPP_
#define QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qr_mission_scheduler/action/detail/mission_scheduler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_Goal_goal_type
{
public:
  Init_MissionScheduler_Goal_goal_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_Goal goal_type(::qr_mission_scheduler::action::MissionScheduler_Goal::_goal_type_type arg)
  {
    msg_.goal_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_Goal>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_Goal_goal_type();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_Result_success
{
public:
  Init_MissionScheduler_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_Result success(::qr_mission_scheduler::action::MissionScheduler_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_Result>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_Result_success();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_Feedback_pose
{
public:
  Init_MissionScheduler_Feedback_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_Feedback pose(::qr_mission_scheduler::action::MissionScheduler_Feedback::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_Feedback>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_Feedback_pose();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_SendGoal_Request_goal
{
public:
  explicit Init_MissionScheduler_SendGoal_Request_goal(::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request goal(::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request msg_;
};

class Init_MissionScheduler_SendGoal_Request_goal_id
{
public:
  Init_MissionScheduler_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionScheduler_SendGoal_Request_goal goal_id(::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MissionScheduler_SendGoal_Request_goal(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_SendGoal_Request>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_SendGoal_Request_goal_id();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_SendGoal_Response_stamp
{
public:
  explicit Init_MissionScheduler_SendGoal_Response_stamp(::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response stamp(::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response msg_;
};

class Init_MissionScheduler_SendGoal_Response_accepted
{
public:
  Init_MissionScheduler_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionScheduler_SendGoal_Response_stamp accepted(::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MissionScheduler_SendGoal_Response_stamp(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_SendGoal_Response>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_SendGoal_Response_accepted();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_GetResult_Request_goal_id
{
public:
  Init_MissionScheduler_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_GetResult_Request goal_id(::qr_mission_scheduler::action::MissionScheduler_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_GetResult_Request>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_GetResult_Request_goal_id();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_GetResult_Response_result
{
public:
  explicit Init_MissionScheduler_GetResult_Response_result(::qr_mission_scheduler::action::MissionScheduler_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_GetResult_Response result(::qr_mission_scheduler::action::MissionScheduler_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_GetResult_Response msg_;
};

class Init_MissionScheduler_GetResult_Response_status
{
public:
  Init_MissionScheduler_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionScheduler_GetResult_Response_result status(::qr_mission_scheduler::action::MissionScheduler_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MissionScheduler_GetResult_Response_result(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_GetResult_Response>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_GetResult_Response_status();
}

}  // namespace qr_mission_scheduler


namespace qr_mission_scheduler
{

namespace action
{

namespace builder
{

class Init_MissionScheduler_FeedbackMessage_feedback
{
public:
  explicit Init_MissionScheduler_FeedbackMessage_feedback(::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage feedback(::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage msg_;
};

class Init_MissionScheduler_FeedbackMessage_goal_id
{
public:
  Init_MissionScheduler_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionScheduler_FeedbackMessage_feedback goal_id(::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MissionScheduler_FeedbackMessage_feedback(msg_);
  }

private:
  ::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::action::MissionScheduler_FeedbackMessage>()
{
  return qr_mission_scheduler::action::builder::Init_MissionScheduler_FeedbackMessage_goal_id();
}

}  // namespace qr_mission_scheduler

#endif  // QR_MISSION_SCHEDULER__ACTION__DETAIL__MISSION_SCHEDULER__BUILDER_HPP_
