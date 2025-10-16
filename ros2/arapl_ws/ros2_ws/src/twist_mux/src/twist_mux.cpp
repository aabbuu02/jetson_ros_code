/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#include "twist_mux/twist_mux.hpp"
#include "twist_mux/topic_handle.hpp"
#include "twist_mux/twist_mux_diagnostics.hpp"
#include <cmath>
#include <algorithm>

namespace twist_mux
{

/**
 * @brief Check if absolute velocity has increased
 */
bool hasIncreasedAbsVelocity(
  const geometry_msgs::msg::Twist& old_twist,
  const geometry_msgs::msg::Twist& new_twist)
{
  const auto old_linear_x = std::abs(old_twist.linear.x);
  const auto new_linear_x = std::abs(new_twist.linear.x);
  const auto old_angular_z = std::abs(old_twist.angular.z);
  const auto new_angular_z = std::abs(new_twist.angular.z);
  
  return (old_linear_x < new_linear_x) || (old_angular_z < new_angular_z);
}

TwistMux::TwistMux(const rclcpp::NodeOptions& options)
: Node("twist_mux", options)
{
  RCLCPP_INFO(this->get_logger(), "Constructing Twist Mux...");
  
  // Initialize topic handle containers
  velocity_hs_ = std::make_shared<velocity_topic_container>();
  lock_hs_ = std::make_shared<lock_topic_container>();
  
  // Publisher for output topic
  cmd_pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
    "cmd_vel_out",
    rclcpp::QoS(10));
  
  // Initialize status
  status_ = std::make_shared<status_type>();
  status_->velocity_hs = velocity_hs_;
  status_->lock_hs = lock_hs_;
  
  RCLCPP_INFO(this->get_logger(), "Twist Mux construction complete");
}

void TwistMux::init()
{
  RCLCPP_INFO(this->get_logger(), "Initializing Twist Mux...");
  
  // NOW we can safely call shared_from_this()
  // Initialize diagnostics
  diagnostics_ = std::make_shared<diagnostics_type>(
    rclcpp::Node::shared_from_this());
  
  // Get topics and locks from parameters
  getTopicHandles("topics", *velocity_hs_);
  getTopicHandles("locks", *lock_hs_);
  
  // Create diagnostics timer
  diagnostics_timer_ = this->create_wall_timer(
    std::chrono::duration<double>(DIAGNOSTICS_PERIOD),
    std::bind(&TwistMux::updateDiagnostics, this));
  
  RCLCPP_INFO(this->get_logger(), "Twist Mux initialized successfully");
}

TwistMux::~TwistMux()
{
}

void TwistMux::updateDiagnostics()
{
  status_->priority = getLockPriority();
  diagnostics_->updateStatus(status_);
}

void TwistMux::publishTwist(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  cmd_pub_->publish(*msg);
  last_cmd_ = *msg;
}

template<typename T>
void TwistMux::getTopicHandles(
  const std::string& param_name,
  std::list<T>& topic_hs)
{
  RCLCPP_INFO(this->get_logger(), "Loading %s configuration...", param_name.c_str());
  
  try {
    // Get shared_ptr to this node once
    auto node_ptr = rclcpp::Node::shared_from_this();
    
    int index = 0;
    
    while (true) {
      std::string base_param = param_name + "." + std::to_string(index);
      
      // Try to declare parameters for this index
      try {
        this->declare_parameter<std::string>(base_param + ".name", "");
        this->declare_parameter<std::string>(base_param + ".topic", "");
        this->declare_parameter<double>(base_param + ".timeout", 0.0);
        this->declare_parameter<int>(base_param + ".priority", 0);
      } catch (const rclcpp::exceptions::ParameterAlreadyDeclaredException&) {
        // Parameters already declared, that's fine
      }
      
      // Try to get parameter values
      std::string name;
      std::string topic;
      double timeout;
      int priority;
      
      try {
        name = this->get_parameter(base_param + ".name").as_string();
        topic = this->get_parameter(base_param + ".topic").as_string();
        timeout = this->get_parameter(base_param + ".timeout").as_double();
        priority = this->get_parameter(base_param + ".priority").as_int();
      } catch (const rclcpp::exceptions::ParameterNotDeclaredException& e) {
        // No more entries
        RCLCPP_DEBUG(
          this->get_logger(),
          "No parameter found for %s (reached end at index %d)",
          base_param.c_str(),
          index);
        break;
      } catch (const std::exception& e) {
        RCLCPP_ERROR(
          this->get_logger(),
          "Error reading parameter %s: %s",
          base_param.c_str(),
          e.what());
        break;
      }
      
      // Validate we got actual values
      if (name.empty() || topic.empty()) {
        RCLCPP_DEBUG(
          this->get_logger(),
          "Empty name or topic at index %d, stopping",
          index);
        break;
      }
      
      // Create topic handle
      RCLCPP_INFO(
        this->get_logger(),
        "Creating %s handler: name='%s', topic='%s', timeout=%.2f, priority=%d",
        param_name.c_str(),
        name.c_str(),
        topic.c_str(),
        timeout,
        priority);
      
      // Use the captured node_ptr
      topic_hs.emplace_back(
        node_ptr,
        name,
        topic,
        timeout,
        priority,
        this);
      
      index++;
    }
    
    if (index == 0) {
      RCLCPP_WARN(
        this->get_logger(),
        "No %s configurations found in parameters",
        param_name.c_str());
    } else {
      RCLCPP_INFO(
        this->get_logger(),
        "Loaded %d %s configuration(s)",
        index,
        param_name.c_str());
    }
    
  } catch (const std::exception& e) {
    RCLCPP_ERROR(
      this->get_logger(),
      "Exception while parsing parameters for '%s': %s",
      param_name.c_str(),
      e.what());
  }
}

// Explicit template instantiations
template void TwistMux::getTopicHandles<VelocityTopicHandle>(
  const std::string&,
  std::list<VelocityTopicHandle>&);
template void TwistMux::getTopicHandles<LockTopicHandle>(
  const std::string&,
  std::list<LockTopicHandle>&);

int TwistMux::getLockPriority()
{
  LockTopicHandle::priority_type priority = 0;
  
  // Find max priority among locked topics
  for (const auto& lock_h : *lock_hs_) {
    if (lock_h.isLocked()) {
      auto tmp = lock_h.getPriority();
      if (priority < tmp) {
        priority = tmp;
      }
    }
  }
  
  RCLCPP_DEBUG(
    this->get_logger(),
    "Lock priority = %d",
    static_cast<int>(priority));
  
  return priority;
}

bool TwistMux::hasPriority(const VelocityTopicHandle& twist)
{
  const auto lock_priority = getLockPriority();
  LockTopicHandle::priority_type priority = 0;
  std::string velocity_name = "NULL";
  
  // Find max priority among non-masked velocity topics
  for (const auto& velocity_h : *velocity_hs_) {
    if (!velocity_h.isMasked(lock_priority)) {
      const auto velocity_priority = velocity_h.getPriority();
      if (priority < velocity_priority) {
        priority = velocity_priority;
        velocity_name = velocity_h.getName();
      }
    }
  }
  
  return twist.getName() == velocity_name;
}

// Implement VelocityTopicHandle methods
VelocityTopicHandle::VelocityTopicHandle(
  rclcpp::Node::SharedPtr node,
  const std::string& name,
  const std::string& topic,
  double timeout,
  priority_type priority,
  TwistMux* mux)
: base_type(node, name, topic, timeout, priority, mux)
{
  subscriber_ = node_->create_subscription<geometry_msgs::msg::Twist>(
    topic_,
    rclcpp::QoS(10),
    std::bind(&VelocityTopicHandle::callback, this, std::placeholders::_1));
}

bool VelocityTopicHandle::isMasked(priority_type lock_priority) const
{
  return hasExpired() || (getPriority() < lock_priority);
}

void VelocityTopicHandle::callback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  stamp_ = node_->now();
  msg_ = *msg;
  
  // Check if this twist has priority
  if (mux_->hasPriority(*this)) {
    mux_->publishTwist(msg);
  }
}

// Implement LockTopicHandle methods
LockTopicHandle::LockTopicHandle(
  rclcpp::Node::SharedPtr node,
  const std::string& name,
  const std::string& topic,
  double timeout,
  priority_type priority,
  TwistMux* mux)
: base_type(node, name, topic, timeout, priority, mux)
{
  subscriber_ = node_->create_subscription<std_msgs::msg::Bool>(
    topic_,
    rclcpp::QoS(10),
    std::bind(&LockTopicHandle::callback, this, std::placeholders::_1));
}

bool LockTopicHandle::isLocked() const
{
  return hasExpired() || getMessage().data;
}

void LockTopicHandle::callback(const std_msgs::msg::Bool::SharedPtr msg)
{
  stamp_ = node_->now();
  msg_ = *msg;
}

} // namespace twist_mux
