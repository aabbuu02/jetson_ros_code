/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#include "twist_mux/twist_mux_diagnostics.hpp"
#include "twist_mux/topic_handle.hpp"
#include <sstream>

namespace twist_mux
{

TwistMuxDiagnostics::TwistMuxDiagnostics(rclcpp::Node::SharedPtr node)
: node_(node)
{
  diagnostic_ = std::make_unique<diagnostic_updater::Updater>(node_);
  diagnostic_->add(
    "Twist mux status",
    this,
    &TwistMuxDiagnostics::diagnostics);
  diagnostic_->setHardwareID("none");
}

TwistMuxDiagnostics::~TwistMuxDiagnostics()
{
}

void TwistMuxDiagnostics::update()
{
  diagnostic_->force_update();
}

void TwistMuxDiagnostics::updateStatus(const status_type::ConstSharedPtr& status)
{
  RCLCPP_DEBUG_THROTTLE(
    node_->get_logger(),
    *node_->get_clock(),
    1000,
    "Updating status.");
  
  status_.velocity_hs = status->velocity_hs;
  status_.lock_hs = status->lock_hs;
  status_.priority = status->priority;
  status_.main_loop_time = status->main_loop_time;
  status_.reading_age = status->reading_age;
  
  update();
}

void TwistMuxDiagnostics::diagnostics(diagnostic_updater::DiagnosticStatusWrapper& stat)
{
  // Check if the loop period is quick enough
  if (status_.main_loop_time > MAIN_LOOP_TIME_MIN) {
    stat.summary(ERROR, "loop time too long");
  } else if (status_.reading_age > READING_AGE_MIN) {
    stat.summary(ERROR, "data received is too old");
  } else {
    stat.summary(OK, "ok");
  }
  
  // Add velocity topic handlers status
  if (status_.velocity_hs) {
    for (const auto& velocity_h : *status_.velocity_hs) {
      std::ostringstream oss;
      oss << " " << (velocity_h.isMasked(status_.priority) ? "masked" : "unmasked")
          << " (listening to " << velocity_h.getTopic()
          << " @ " << velocity_h.getTimeout() << "s"
          << " with priority #" << static_cast<int>(velocity_h.getPriority()) << ")";
      
      stat.add("velocity " + velocity_h.getName(), oss.str());
    }
  }
  
  // Add lock topic handlers status
  if (status_.lock_hs) {
    for (const auto& lock_h : *status_.lock_hs) {
      std::ostringstream oss;
      oss << " " << (lock_h.isLocked() ? "locked" : "free")
          << " (listening to " << lock_h.getTopic()
          << " @ " << lock_h.getTimeout() << "s"
          << " with priority #" << static_cast<int>(lock_h.getPriority()) << ")";
      
      stat.add("lock " + lock_h.getName(), oss.str());
    }
  }
  
  stat.add("current priority", static_cast<int>(status_.priority));
  stat.add("loop time in [sec]", status_.main_loop_time);
  stat.add("data age in [sec]", status_.reading_age);
  
  RCLCPP_DEBUG_THROTTLE(
    node_->get_logger(),
    *node_->get_clock(),
    1000,
    "Publishing diagnostics.");
}

} // namespace twist_mux
