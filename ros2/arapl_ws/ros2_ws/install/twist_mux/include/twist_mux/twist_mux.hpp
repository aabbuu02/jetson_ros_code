/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#ifndef TWIST_MUX__TWIST_MUX_HPP_
#define TWIST_MUX__TWIST_MUX_HPP_

#include <memory>
#include <list>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

namespace twist_mux
{

// Forward declarations
class TwistMuxDiagnostics;
struct TwistMuxDiagnosticsStatus;
class VelocityTopicHandle;
class LockTopicHandle;

/**
 * @brief The TwistMux class implements a top-level twist multiplexer
 */
class TwistMux : public rclcpp::Node
{
public:
  using velocity_topic_container = std::list<VelocityTopicHandle>;
  using lock_topic_container = std::list<LockTopicHandle>;
  
  explicit TwistMux(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
  virtual ~TwistMux();
  
  // Initialize method - MUST be called after construction
  void init();
  
  bool hasPriority(const VelocityTopicHandle& twist);
  void publishTwist(const geometry_msgs::msg::Twist::SharedPtr msg);

protected:
  using diagnostics_type = TwistMuxDiagnostics;
  using status_type = TwistMuxDiagnosticsStatus;
  
  static constexpr double DIAGNOSTICS_PERIOD = 1.0; // seconds
  
  void updateDiagnostics();
  
  template<typename T>
  void getTopicHandles(
    const std::string& param_name,
    std::list<T>& topic_hs);
  
  int getLockPriority();
  
  rclcpp::TimerBase::SharedPtr diagnostics_timer_;
  
  std::shared_ptr<velocity_topic_container> velocity_hs_;
  std::shared_ptr<lock_topic_container> lock_hs_;
  
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_pub_;
  geometry_msgs::msg::Twist last_cmd_;
  
  std::shared_ptr<diagnostics_type> diagnostics_;
  std::shared_ptr<status_type> status_;
};

} // namespace twist_mux

#endif // TWIST_MUX__TWIST_MUX_HPP_
