/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#ifndef TWIST_MUX__TWIST_MUX_DIAGNOSTICS_HPP_
#define TWIST_MUX__TWIST_MUX_DIAGNOSTICS_HPP_

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "diagnostic_updater/diagnostic_updater.hpp"
#include "diagnostic_msgs/msg/diagnostic_status.hpp"
#include "twist_mux/twist_mux_diagnostics_status.hpp"

namespace twist_mux
{

class TwistMuxDiagnostics
{
public:
  using status_type = TwistMuxDiagnosticsStatus;
  
  static constexpr double MAIN_LOOP_TIME_MIN = 0.2; // [s]
  static constexpr double READING_AGE_MIN = 3.0;    // [s]
  
  explicit TwistMuxDiagnostics(rclcpp::Node::SharedPtr node);
  virtual ~TwistMuxDiagnostics();
  
  void diagnostics(diagnostic_updater::DiagnosticStatusWrapper& stat);
  void update();
  void updateStatus(const status_type::ConstSharedPtr& status);

private:
  /**
   * @brief Diagnostic levels
   */
  enum Level
  {
    OK = diagnostic_msgs::msg::DiagnosticStatus::OK,
    WARN = diagnostic_msgs::msg::DiagnosticStatus::WARN,
    ERROR = diagnostic_msgs::msg::DiagnosticStatus::ERROR
  };
  
  rclcpp::Node::SharedPtr node_;
  std::unique_ptr<diagnostic_updater::Updater> diagnostic_;
  status_type status_;
};

} // namespace twist_mux

#endif // TWIST_MUX__TWIST_MUX_DIAGNOSTICS_HPP_
