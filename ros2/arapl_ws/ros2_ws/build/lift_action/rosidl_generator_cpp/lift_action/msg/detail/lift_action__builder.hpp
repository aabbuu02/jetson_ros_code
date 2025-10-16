// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__BUILDER_HPP_
#define LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_action/msg/detail/lift_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_action
{

namespace msg
{

namespace builder
{

class Init_LiftAction_putaway_barcode
{
public:
  explicit Init_LiftAction_putaway_barcode(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  ::lift_action::msg::LiftAction putaway_barcode(::lift_action::msg::LiftAction::_putaway_barcode_type arg)
  {
    msg_.putaway_barcode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_whole_bin_no
{
public:
  explicit Init_LiftAction_whole_bin_no(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  Init_LiftAction_putaway_barcode whole_bin_no(::lift_action::msg::LiftAction::_whole_bin_no_type arg)
  {
    msg_.whole_bin_no = std::move(arg);
    return Init_LiftAction_putaway_barcode(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_action
{
public:
  explicit Init_LiftAction_action(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  Init_LiftAction_whole_bin_no action(::lift_action::msg::LiftAction::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_LiftAction_whole_bin_no(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_acr_shelf
{
public:
  explicit Init_LiftAction_acr_shelf(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  Init_LiftAction_action acr_shelf(::lift_action::msg::LiftAction::_acr_shelf_type arg)
  {
    msg_.acr_shelf = std::move(arg);
    return Init_LiftAction_action(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_shelf
{
public:
  explicit Init_LiftAction_shelf(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  Init_LiftAction_acr_shelf shelf(::lift_action::msg::LiftAction::_shelf_type arg)
  {
    msg_.shelf = std::move(arg);
    return Init_LiftAction_acr_shelf(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_rack
{
public:
  explicit Init_LiftAction_rack(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  Init_LiftAction_shelf rack(::lift_action::msg::LiftAction::_rack_type arg)
  {
    msg_.rack = std::move(arg);
    return Init_LiftAction_shelf(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_reached
{
public:
  explicit Init_LiftAction_reached(::lift_action::msg::LiftAction & msg)
  : msg_(msg)
  {}
  Init_LiftAction_rack reached(::lift_action::msg::LiftAction::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return Init_LiftAction_rack(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

class Init_LiftAction_unique_id
{
public:
  Init_LiftAction_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftAction_reached unique_id(::lift_action::msg::LiftAction::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_LiftAction_reached(msg_);
  }

private:
  ::lift_action::msg::LiftAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_action::msg::LiftAction>()
{
  return lift_action::msg::builder::Init_LiftAction_unique_id();
}

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__BUILDER_HPP_
