/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*********************************************************************/

#include <memory>
#include <string>
#include <cmath>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "visualization_msgs/msg/marker.hpp"

namespace twist_mux
{

class TwistMarker
{
public:
  TwistMarker(
    double scale = 1.0,
    double z = 0.0,
    const std::string& frame_id = "base_footprint")
  : frame_id_(frame_id),
    scale_(scale),
    z_(z)
  {
    // ID and type
    marker_.id = 0;
    marker_.type = visualization_msgs::msg::Marker::ARROW;
    
    // Frame ID
    marker_.header.frame_id = frame_id_;
    
    // Pre-allocate points for arrow
    marker_.points.resize(2);
    
    // Vertical position
    marker_.pose.position.z = z_;
    
    // Scale
    marker_.scale.x = 0.05 * scale_;
    marker_.scale.y = 2 * marker_.scale.x;
    
    // Color (green)
    marker_.color.a = 1.0;
    marker_.color.r = 0.0;
    marker_.color.g = 1.0;
    marker_.color.b = 0.0;
  }
  
  void update(const geometry_msgs::msg::Twist& twist)
  {
    marker_.points[1].x = twist.linear.x;
    
    if (std::fabs(twist.linear.y) > std::fabs(twist.angular.z)) {
      marker_.points[1].y = twist.linear.y;
    } else {
      marker_.points[1].y = twist.angular.z;
    }
  }
  
  const visualization_msgs::msg::Marker& getMarker() const
  {
    return marker_;
  }

private:
  visualization_msgs::msg::Marker marker_;
  std::string frame_id_;
  double scale_;
  double z_;
};

class TwistMarkerPublisher : public rclcpp::Node
{
public:
  TwistMarkerPublisher(
    double scale = 1.0,
    double z = 0.0,
    const rclcpp::NodeOptions& options = rclcpp::NodeOptions())
  : Node("twist_marker", options),
    marker_(scale, z)
  {
    pub_ = this->create_publisher<visualization_msgs::msg::Marker>(
      "marker",
      rclcpp::QoS(10).transient_local());
    
    sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
      "twist",
      rclcpp::QoS(10),
      std::bind(&TwistMarkerPublisher::callback, this, std::placeholders::_1));
    
    RCLCPP_INFO(this->get_logger(), "Twist marker publisher initialized");
  }

private:
  void callback(const geometry_msgs::msg::Twist::SharedPtr twist)
  {
    marker_.update(*twist);
    pub_->publish(marker_.getMarker());
  }
  
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr pub_;
  TwistMarker marker_;
};

} // namespace twist_mux

int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<twist_mux::TwistMarkerPublisher>(1.0, 2.0);
  
  rclcpp::spin(node);
  
  rclcpp::shutdown();
  return 0;
}
