/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#ifndef TWIST_MUX__TWIST_MUX_DIAGNOSTICS_STATUS_HPP_
#define TWIST_MUX__TWIST_MUX_DIAGNOSTICS_STATUS_HPP_

#include <memory>
#include <list>
#include "rclcpp/rclcpp.hpp"
#include "twist_mux/topic_handle.hpp"

namespace twist_mux
{

struct TwistMuxDiagnosticsStatus
{
  using SharedPtr = std::shared_ptr<TwistMuxDiagnosticsStatus>;
  using ConstSharedPtr = std::shared_ptr<const TwistMuxDiagnosticsStatus>;
  
  double reading_age;
  rclcpp::Time last_loop_update;
  double main_loop_time;
  LockTopicHandle::priority_type priority;
  
  std::shared_ptr<std::list<VelocityTopicHandle>> velocity_hs;
  std::shared_ptr<std::list<LockTopicHandle>> lock_hs;
  
  TwistMuxDiagnosticsStatus()
  : reading_age(0.0),
    last_loop_update(rclcpp::Clock().now()),
    main_loop_time(0.0),
    priority(0)
  {}
};

using TwistMuxDiagnosticsStatusPtr = TwistMuxDiagnosticsStatus::SharedPtr;
using TwistMuxDiagnosticsStatusConstPtr = TwistMuxDiagnosticsStatus::ConstSharedPtr;

} // namespace twist_mux

#endif // TWIST_MUX__TWIST_MUX_DIAGNOSTICS_STATUS_HPP_
