#include "rotation_controller.h"
#include <rclcpp/rclcpp.hpp>
#include <cmath>

RotationController::RotationController(double max_angular_vel, double min_angular_vel, double gain)
{
  max_angular_velocity = max_angular_vel;
  min_angular_velocity = min_angular_vel;
  control_gain = gain;
}

RotationController::~RotationController() {}

bool RotationController::rotate_to_angle(double desired_theta, pose_struct::ControlInput &control)
{
  control.linear.x = 0;
  double sign = 0.0;

  if (desired_theta > 0.0) {
    sign = 1.0;
  } else {
    sign = -1.0;
  }

  double angular_vel = 3 * sign * control_gain * std::pow(desired_theta, 2);
  
  RCLCPP_INFO(rclcpp::get_logger("rotation_controller"), 
              "angular_vel: %f, desired_theta: %f", angular_vel, desired_theta);

  if (angular_vel > max_angular_velocity)
    angular_vel = max_angular_velocity;
  else if (angular_vel < min_angular_velocity)
    angular_vel = min_angular_velocity;

  if (angular_vel < 0.08 && sign == 1.0) {
    angular_vel = 0.08;
  }

  if (angular_vel > -0.08 && sign == -1.0) {
    angular_vel = -0.08;
  }

  if (angular_vel == 0.0) {
    angular_vel = 0.0;
  }

  control.angular.z = angular_vel;

  return true;
}
