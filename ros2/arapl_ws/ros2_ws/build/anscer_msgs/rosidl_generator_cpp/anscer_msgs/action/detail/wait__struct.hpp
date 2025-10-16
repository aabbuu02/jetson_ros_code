// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:action/Wait.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__ACTION__DETAIL__WAIT__STRUCT_HPP_
#define ANSCER_MSGS__ACTION__DETAIL__WAIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_Goal __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_Goal __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_Goal_
{
  using Type = Wait_Goal_<ContainerAllocator>;

  explicit Wait_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait_time = 0;
      this->wait_activate = false;
    }
  }

  explicit Wait_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait_time = 0;
      this->wait_activate = false;
    }
  }

  // field types and members
  using _wait_time_type =
    int16_t;
  _wait_time_type wait_time;
  using _wait_activate_type =
    bool;
  _wait_activate_type wait_activate;

  // setters for named parameter idiom
  Type & set__wait_time(
    const int16_t & _arg)
  {
    this->wait_time = _arg;
    return *this;
  }
  Type & set__wait_activate(
    const bool & _arg)
  {
    this->wait_activate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_Goal
    std::shared_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_Goal
    std::shared_ptr<anscer_msgs::action::Wait_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_Goal_ & other) const
  {
    if (this->wait_time != other.wait_time) {
      return false;
    }
    if (this->wait_activate != other.wait_activate) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_Goal_

// alias to use template instance with default allocator
using Wait_Goal =
  anscer_msgs::action::Wait_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_Result __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_Result __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_Result_
{
  using Type = Wait_Result_<ContainerAllocator>;

  explicit Wait_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  explicit Wait_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  // field types and members
  using _is_success_type =
    bool;
  _is_success_type is_success;

  // setters for named parameter idiom
  Type & set__is_success(
    const bool & _arg)
  {
    this->is_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_Result
    std::shared_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_Result
    std::shared_ptr<anscer_msgs::action::Wait_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_Result_ & other) const
  {
    if (this->is_success != other.is_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_Result_

// alias to use template instance with default allocator
using Wait_Result =
  anscer_msgs::action::Wait_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_Feedback __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_Feedback_
{
  using Type = Wait_Feedback_<ContainerAllocator>;

  explicit Wait_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait_feedback = false;
      this->time_elapsed = 0l;
    }
  }

  explicit Wait_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait_feedback = false;
      this->time_elapsed = 0l;
    }
  }

  // field types and members
  using _wait_feedback_type =
    bool;
  _wait_feedback_type wait_feedback;
  using _time_elapsed_type =
    int32_t;
  _time_elapsed_type time_elapsed;

  // setters for named parameter idiom
  Type & set__wait_feedback(
    const bool & _arg)
  {
    this->wait_feedback = _arg;
    return *this;
  }
  Type & set__time_elapsed(
    const int32_t & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_Feedback
    std::shared_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_Feedback
    std::shared_ptr<anscer_msgs::action::Wait_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_Feedback_ & other) const
  {
    if (this->wait_feedback != other.wait_feedback) {
      return false;
    }
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_Feedback_

// alias to use template instance with default allocator
using Wait_Feedback =
  anscer_msgs::action::Wait_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "anscer_msgs/action/detail/wait__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_SendGoal_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_SendGoal_Request_
{
  using Type = Wait_SendGoal_Request_<ContainerAllocator>;

  explicit Wait_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Wait_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    anscer_msgs::action::Wait_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const anscer_msgs::action::Wait_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_SendGoal_Request
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_SendGoal_Request
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_SendGoal_Request_

// alias to use template instance with default allocator
using Wait_SendGoal_Request =
  anscer_msgs::action::Wait_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_SendGoal_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_SendGoal_Response_
{
  using Type = Wait_SendGoal_Response_<ContainerAllocator>;

  explicit Wait_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Wait_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_SendGoal_Response
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_SendGoal_Response
    std::shared_ptr<anscer_msgs::action::Wait_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_SendGoal_Response_

// alias to use template instance with default allocator
using Wait_SendGoal_Response =
  anscer_msgs::action::Wait_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace action
{

struct Wait_SendGoal
{
  using Request = anscer_msgs::action::Wait_SendGoal_Request;
  using Response = anscer_msgs::action::Wait_SendGoal_Response;
};

}  // namespace action

}  // namespace anscer_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_GetResult_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_GetResult_Request_
{
  using Type = Wait_GetResult_Request_<ContainerAllocator>;

  explicit Wait_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Wait_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_GetResult_Request
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_GetResult_Request
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_GetResult_Request_

// alias to use template instance with default allocator
using Wait_GetResult_Request =
  anscer_msgs::action::Wait_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "anscer_msgs/action/detail/wait__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_GetResult_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_GetResult_Response_
{
  using Type = Wait_GetResult_Response_<ContainerAllocator>;

  explicit Wait_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Wait_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    anscer_msgs::action::Wait_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const anscer_msgs::action::Wait_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_GetResult_Response
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_GetResult_Response
    std::shared_ptr<anscer_msgs::action::Wait_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_GetResult_Response_

// alias to use template instance with default allocator
using Wait_GetResult_Response =
  anscer_msgs::action::Wait_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace action
{

struct Wait_GetResult
{
  using Request = anscer_msgs::action::Wait_GetResult_Request;
  using Response = anscer_msgs::action::Wait_GetResult_Response;
};

}  // namespace action

}  // namespace anscer_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "anscer_msgs/action/detail/wait__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__action__Wait_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__action__Wait_FeedbackMessage __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Wait_FeedbackMessage_
{
  using Type = Wait_FeedbackMessage_<ContainerAllocator>;

  explicit Wait_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Wait_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    anscer_msgs::action::Wait_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const anscer_msgs::action::Wait_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__action__Wait_FeedbackMessage
    std::shared_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__action__Wait_FeedbackMessage
    std::shared_ptr<anscer_msgs::action::Wait_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wait_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wait_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wait_FeedbackMessage_

// alias to use template instance with default allocator
using Wait_FeedbackMessage =
  anscer_msgs::action::Wait_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace anscer_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace anscer_msgs
{

namespace action
{

struct Wait
{
  /// The goal message defined in the action definition.
  using Goal = anscer_msgs::action::Wait_Goal;
  /// The result message defined in the action definition.
  using Result = anscer_msgs::action::Wait_Result;
  /// The feedback message defined in the action definition.
  using Feedback = anscer_msgs::action::Wait_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = anscer_msgs::action::Wait_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = anscer_msgs::action::Wait_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = anscer_msgs::action::Wait_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Wait Wait;

}  // namespace action

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__ACTION__DETAIL__WAIT__STRUCT_HPP_
