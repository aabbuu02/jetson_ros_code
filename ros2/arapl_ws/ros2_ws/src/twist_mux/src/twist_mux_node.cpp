/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#include "rclcpp/rclcpp.hpp"
#include "twist_mux/twist_mux.hpp"

int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);
  
  // Create the node
  auto node = std::make_shared<twist_mux::TwistMux>();
  
  // NOW initialize it (after shared_ptr is created)
  node->init();
  
  rclcpp::spin(node);
  
  rclcpp::shutdown();
  return 0;
}
