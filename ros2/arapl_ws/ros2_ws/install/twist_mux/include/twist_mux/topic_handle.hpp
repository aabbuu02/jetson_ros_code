/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#ifndef TWIST_MUX__TOPIC_HANDLE_HPP_
#define TWIST_MUX__TOPIC_HANDLE_HPP_

#include <string>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/bool.hpp"
#include "twist_mux/utils.hpp"

namespace twist_mux
{

// Forward declaration
class TwistMux;

template<typename T>
class TopicHandle_
{
public:
  using priority_type = int;
  
  /**
   * @brief TopicHandle_ constructor
   * @param node ROS2 node shared pointer
   * @param name Name identifier
   * @param topic Topic name
   * @param timeout Timeout to consider messages old (0.0 = no timeout)
   * @param priority Priority of the topic (0-255)
   * @param mux Pointer to TwistMux instance
   */
  TopicHandle_(
    rclcpp::Node::SharedPtr node,
    const std::string& name,
    const std::string& topic,
    double timeout,
    priority_type priority,
    TwistMux* mux)
  : node_(node),
    name_(name),
    topic_(topic),
    timeout_(timeout),
    priority_(clamp(priority, priority_type(0), priority_type(255))),
    mux_(mux),
    stamp_(node_->now())
  {
    std::string timeout_str = (timeout_ > 0.0) ? 
      (std::to_string(timeout_) + "s") : "None";
    
    RCLCPP_INFO(
      node_->get_logger(),
      "Topic handler '%s' subscribed to topic '%s': timeout = %s, priority = %d",
      name_.c_str(),
      topic_.c_str(),
      timeout_str.c_str(),
      static_cast<int>(priority_)
    );
  }
  
  virtual ~TopicHandle_() = default;
  
  /**
   * @brief Check if message has expired
   * @return true if expired; false otherwise
   */
  bool hasExpired() const
  {
    if (timeout_ <= 0.0) {
      return false;
    }
    return (node_->now() - stamp_).seconds() > timeout_;
  }
  
  const std::string& getName() const { return name_; }
  const std::string& getTopic() const { return topic_; }
  double getTimeout() const { return timeout_; }
  priority_type getPriority() const { return priority_; }
  const rclcpp::Time& getStamp() const { return stamp_; }
  const T& getMessage() const { return msg_; }

protected:
  rclcpp::Node::SharedPtr node_;
  std::string name_;
  std::string topic_;
  double timeout_;
  priority_type priority_;
  TwistMux* mux_;
  rclcpp::Time stamp_;
  T msg_;
};

class VelocityTopicHandle : public TopicHandle_<geometry_msgs::msg::Twist>
{
private:
  using base_type = TopicHandle_<geometry_msgs::msg::Twist>;

public:
  using priority_type = typename base_type::priority_type;
  
  VelocityTopicHandle(
    rclcpp::Node::SharedPtr node,
    const std::string& name,
    const std::string& topic,
    double timeout,
    priority_type priority,
    TwistMux* mux);
  
  bool isMasked(priority_type lock_priority) const;

private:
  void callback(const geometry_msgs::msg::Twist::SharedPtr msg);
  
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscriber_;
};

class LockTopicHandle : public TopicHandle_<std_msgs::msg::Bool>
{
private:
  using base_type = TopicHandle_<std_msgs::msg::Bool>;

public:
  using priority_type = typename base_type::priority_type;
  
  LockTopicHandle(
    rclcpp::Node::SharedPtr node,
    const std::string& name,
    const std::string& topic,
    double timeout,
    priority_type priority,
    TwistMux* mux);
  
  /**
   * @brief Check if locked
   * @return true if expired or locked (bool message data is true)
   */
  bool isLocked() const;

private:
  void callback(const std_msgs::msg::Bool::SharedPtr msg);
  
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr subscriber_;
};

} // namespace twist_mux

#endif // TWIST_MUX__TOPIC_HANDLE_HPP_
