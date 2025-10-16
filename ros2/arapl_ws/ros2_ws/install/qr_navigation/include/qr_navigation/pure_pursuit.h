#ifndef PURE_PURSUIT_H
#define PURE_PURSUIT_H

#include <rclcpp/rclcpp.hpp>
#include <cmath>
#include "pose_struct.h"

class PurePursuit
{
public:
  PurePursuit();
  ~PurePursuit();

  pose_struct::PoseEuler robot_pose_;
  pose_struct::PoseEuler start_pose_;
  pose_struct::PoseEuler goal_pose_;
  pose_struct::Matrix path_data_;
  
  int path_array_size_;
  float distance, locus, dx, dy;
  double velocity_change;
  double dynamic_look_ahead_distance;
  int min_distance_index;
  int previous_index;
  float lateral_shift, steering_angle, wheel_base;
  float min_look_ahead_distance;
  float max_look_ahead_distance;
  float kla;
  float angular_velocity, curvature, max_angular_vel;

  void Update_path(const pose_struct::PoseEuler &start_pose,
                   const pose_struct::PoseEuler &goal_pose,
                   const pose_struct::Matrix &path_data,
                   const int &path_array_size);

  int Index_Of_Smallest_Element(float array[], int size);

  float dynamic_look_ahead(double linear_velocity);

  void Intermediate_goal_point(const pose_struct::PoseEuler &robot_pose, 
                               const float current_linear_velocity);

  pose_struct::ControlInput Pure_pursuit_controller(float linear_velocity);

  void Update_params(float min_look_ahead_distance_, float max_look_ahead_distance_,
                     float wheel_base_, float kla_, float max_angular_vel_);
};

#endif // PURE_PURSUIT_H
