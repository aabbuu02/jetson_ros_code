#include "velocity_profile.h"
#include <rclcpp/rclcpp.hpp>
#include <cmath>
#include <algorithm>

VelocityProfile::VelocityProfile(float vel_limit)
{
  path_length = 0.0;
  distance_traveled = 0.0;
  dist_to_goal = 0.0;
  stabilize_dis = 0.8;
  slowdown_dis = 0.8;
  acc_constant = 0.2;
  dec_constant = 0.2;
  inertia_constant = 0.8;
  acceleration_const = 0.2;
  vmax = vel_limit;
}

VelocityProfile::~VelocityProfile() {}

void VelocityProfile::Update_params(float vmax_, float acc_constant_, float dec_constant_,
                                    float inertia_constant_, float acceleration_)
{
  RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
              "Updated params %f, %f, %f, %f", vmax, acc_constant_, dec_constant_, inertia_constant_);
  vmax = vmax_;
  acc_constant = acc_constant_;
  dec_constant = dec_constant_;
  inertia_constant = inertia_constant_;
  acceleration_const = acceleration_;
}

void VelocityProfile::find_distance_segment(float path_dis)
{
  distance_for_acc = path_dis * (dec_constant / (acc_constant + dec_constant));
  distance_for_dec = path_dis * (acc_constant / (acc_constant + dec_constant));
  dis_to_max_vel = std::pow(vmax, 2) / (2 * acceleration_const);

  if (dis_to_max_vel > distance_for_acc) {
    dis_to_max_vel = distance_for_acc;
    max_n_vel = std::sqrt(2 * acceleration_const * dis_to_max_vel);
  } else {
    max_n_vel = vmax;
  }

  RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
              "Distance for acceleration: %f", distance_for_acc);
  RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
              "Distance to reach max velocity: %f", dis_to_max_vel);
  RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
              "Max velocity achievable: %f", max_n_vel);
}

double VelocityProfile::find_acceleration()
{
  double vel = std::sqrt(2 * acceleration_const * distance_traveled);
  if (vel > vmax) {
    vel = vmax;
  }
  return vel;
}

double VelocityProfile::find_deceleration(double odom_max_vel)
{
  double vel = std::sqrt(std::pow(odom_max_vel, 2) - 2 * acceleration_const * 
                        (distance_traveled - distance_for_acc));
  if (vel < pull_velocity) {
    vel = pull_velocity;
  }
  return vel;
}

float VelocityProfile::Find_linear_velocity(const pose_struct::PathData &path_data,
                                            const pose_struct::PoseEuler &robot_pose,
                                            const float current_linear_velocity)
{
  if (trigger == false) {
    last_pos_x = robot_pose.position.x;
    last_pos_y = robot_pose.position.y;
    distance_traveled = 0.0;
    trigger = true;

    path_length = std::sqrt(std::pow(path_data.goal_pose.position.x - path_data.init_pose.position.x, 2) +
                           std::pow(path_data.goal_pose.position.y - path_data.init_pose.position.y, 2));

    find_distance_segment(path_length);
    RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
                "Path length is %f", path_length);
  }

  dist_to_goal = std::sqrt(std::pow(path_data.goal_pose.position.x - robot_pose.position.x, 2) +
                          std::pow(path_data.goal_pose.position.y - robot_pose.position.y, 2));

  distance_traveled += std::sqrt(std::pow(robot_pose.position.x - last_pos_x, 2) +
                                 std::pow(robot_pose.position.y - last_pos_y, 2));

  last_pos_x = robot_pose.position.x;
  last_pos_y = robot_pose.position.y;

  RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
              "Distance traveled: %f", distance_traveled);

  if (distance_traveled < dis_to_max_vel) {
    linear_velocity = find_acceleration();
    RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
                "Accelerating | Linear velocity: %f", linear_velocity);
  } else if (distance_traveled >= dis_to_max_vel && distance_traveled < distance_for_acc) {
    linear_velocity = max_n_vel;
    RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
                "Constant velocity | Linear velocity: %f", linear_velocity);
  } else {
    linear_velocity = find_deceleration(max_n_vel);

    if (linear_velocity < current_linear_velocity) {
      linear_velocity = current_linear_velocity - inertia_constant * 
                       (current_linear_velocity - linear_velocity);
    }

    RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
                "Decelerating | Linear velocity: %f", linear_velocity);

    if (dist_to_goal < 0.05) {
      linear_velocity = 0.0;
      RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
                  "Near goal | Setting velocity to zero");
    }
  }

  if (distance_traveled >= path_length - 0.05) {
    trigger = false;
    linear_velocity = 0.0;
    goal_reached = true;
    RCLCPP_INFO(rclcpp::get_logger("velocity_profile"), 
                "Goal reached | Resetting trigger");
  }

  return linear_velocity;
}
