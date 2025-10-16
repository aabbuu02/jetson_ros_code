// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:action/MultiMap.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__MULTI_MAP__BUILDER_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__MULTI_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/action/detail/multi_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_Goal_transition_initial_pose
{
public:
  explicit Init_MultiMap_Goal_transition_initial_pose(::anscer_msgs::action::MultiMap_Goal & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::MultiMap_Goal transition_initial_pose(::anscer_msgs::action::MultiMap_Goal::_transition_initial_pose_type arg)
  {
    msg_.transition_initial_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_Goal msg_;
};

class Init_MultiMap_Goal_transition_map
{
public:
  explicit Init_MultiMap_Goal_transition_map(::anscer_msgs::action::MultiMap_Goal & msg)
  : msg_(msg)
  {}
  Init_MultiMap_Goal_transition_initial_pose transition_map(::anscer_msgs::action::MultiMap_Goal::_transition_map_type arg)
  {
    msg_.transition_map = std::move(arg);
    return Init_MultiMap_Goal_transition_initial_pose(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_Goal msg_;
};

class Init_MultiMap_Goal_transition_goal_pose
{
public:
  Init_MultiMap_Goal_transition_goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMap_Goal_transition_map transition_goal_pose(::anscer_msgs::action::MultiMap_Goal::_transition_goal_pose_type arg)
  {
    msg_.transition_goal_pose = std::move(arg);
    return Init_MultiMap_Goal_transition_map(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_Goal>()
{
  return anscer_msgs::action::builder::Init_MultiMap_Goal_transition_goal_pose();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_Result_results
{
public:
  Init_MultiMap_Result_results()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::MultiMap_Result results(::anscer_msgs::action::MultiMap_Result::_results_type arg)
  {
    msg_.results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_Result>()
{
  return anscer_msgs::action::builder::Init_MultiMap_Result_results();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_Feedback_feedbacks
{
public:
  Init_MultiMap_Feedback_feedbacks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::MultiMap_Feedback feedbacks(::anscer_msgs::action::MultiMap_Feedback::_feedbacks_type arg)
  {
    msg_.feedbacks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_Feedback>()
{
  return anscer_msgs::action::builder::Init_MultiMap_Feedback_feedbacks();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_SendGoal_Request_goal
{
public:
  explicit Init_MultiMap_SendGoal_Request_goal(::anscer_msgs::action::MultiMap_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::MultiMap_SendGoal_Request goal(::anscer_msgs::action::MultiMap_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_SendGoal_Request msg_;
};

class Init_MultiMap_SendGoal_Request_goal_id
{
public:
  Init_MultiMap_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMap_SendGoal_Request_goal goal_id(::anscer_msgs::action::MultiMap_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MultiMap_SendGoal_Request_goal(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_SendGoal_Request>()
{
  return anscer_msgs::action::builder::Init_MultiMap_SendGoal_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_SendGoal_Response_stamp
{
public:
  explicit Init_MultiMap_SendGoal_Response_stamp(::anscer_msgs::action::MultiMap_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::MultiMap_SendGoal_Response stamp(::anscer_msgs::action::MultiMap_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_SendGoal_Response msg_;
};

class Init_MultiMap_SendGoal_Response_accepted
{
public:
  Init_MultiMap_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMap_SendGoal_Response_stamp accepted(::anscer_msgs::action::MultiMap_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MultiMap_SendGoal_Response_stamp(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_SendGoal_Response>()
{
  return anscer_msgs::action::builder::Init_MultiMap_SendGoal_Response_accepted();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_GetResult_Request_goal_id
{
public:
  Init_MultiMap_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::action::MultiMap_GetResult_Request goal_id(::anscer_msgs::action::MultiMap_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_GetResult_Request>()
{
  return anscer_msgs::action::builder::Init_MultiMap_GetResult_Request_goal_id();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_GetResult_Response_result
{
public:
  explicit Init_MultiMap_GetResult_Response_result(::anscer_msgs::action::MultiMap_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::MultiMap_GetResult_Response result(::anscer_msgs::action::MultiMap_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_GetResult_Response msg_;
};

class Init_MultiMap_GetResult_Response_status
{
public:
  Init_MultiMap_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMap_GetResult_Response_result status(::anscer_msgs::action::MultiMap_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MultiMap_GetResult_Response_result(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_GetResult_Response>()
{
  return anscer_msgs::action::builder::Init_MultiMap_GetResult_Response_status();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace action
{

namespace builder
{

class Init_MultiMap_FeedbackMessage_feedback
{
public:
  explicit Init_MultiMap_FeedbackMessage_feedback(::anscer_msgs::action::MultiMap_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::action::MultiMap_FeedbackMessage feedback(::anscer_msgs::action::MultiMap_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_FeedbackMessage msg_;
};

class Init_MultiMap_FeedbackMessage_goal_id
{
public:
  Init_MultiMap_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMap_FeedbackMessage_feedback goal_id(::anscer_msgs::action::MultiMap_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MultiMap_FeedbackMessage_feedback(msg_);
  }

private:
  ::anscer_msgs::action::MultiMap_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::action::MultiMap_FeedbackMessage>()
{
  return anscer_msgs::action::builder::Init_MultiMap_FeedbackMessage_goal_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__MULTI_MAP__BUILDER_HPP_
