#include "pure_pursuit.h"
#include <cmath>
#include <algorithm>
#include <vector>

PurePursuit::PurePursuit()
{
  robot_pose_.position.x = 0;
  robot_pose_.position.y = 0;
  robot_pose_.orientation.yaw = 0;
  goal_pose_.position.x = 0;
  goal_pose_.position.y = 0;
  goal_pose_.orientation.yaw = 0;
  start_pose_.position.x = 0;
  start_pose_.position.y = 0;
  start_pose_.orientation.yaw = 0;
  path_array_size_ = 0;
  path_data_.rows = 1;
  path_data_.columns = 1;
  min_look_ahead_distance = 0.4;
  max_look_ahead_distance = 1.0;
  min_distance_index = 0;
  previous_index = 0;
  wheel_base = 0.50;
  steering_angle = 0.0;
  curvature = 0.0;
  angular_velocity = 0.0;
  max_angular_vel = 0.4;
  kla = 1.1;
  velocity_change = 0.0;
}

PurePursuit::~PurePursuit() {}

void PurePursuit::Update_params(float min_look_ahead_distance_, float max_look_ahead_distance_,
                                float wheel_base_, float kla_, float max_angular_vel_)
{
  min_look_ahead_distance = min_look_ahead_distance_;
  max_look_ahead_distance = max_look_ahead_distance_;
  wheel_base = wheel_base_;
  kla = kla_;
  max_angular_vel = max_angular_vel_;
}

void PurePursuit::Update_path(const pose_struct::PoseEuler &start_pose,
                               const pose_struct::PoseEuler &goal_pose,
                               const pose_struct::Matrix &path_data,
                               const int &path_array_size)
{
  goal_pose_ = goal_pose;
  start_pose_ = start_pose;
  path_array_size_ = path_array_size;
  path_data_ = path_data;
  previous_index = 0;
}

int PurePursuit::Index_Of_Smallest_Element(float array[], int size)
{
  int index = 0;

  for (int i = 1; i < size; i++) {
    if (array[i] < array[index])
      index = i;
  }

  return index;
}

float PurePursuit::dynamic_look_ahead(double linear_velocity)
{
  float look_ahead;
  look_ahead = kla * std::fabs(linear_velocity);

  if (look_ahead < min_look_ahead_distance) {
    look_ahead = min_look_ahead_distance;
  }

  if (look_ahead > max_look_ahead_distance) {
    look_ahead = max_look_ahead_distance;
  }

  return look_ahead;
}

void PurePursuit::Intermediate_goal_point(const pose_struct::PoseEuler &robot_pose,
                                          const float current_linear_velocity)
{
  robot_pose_ = robot_pose;
  
  // Use std::vector instead of VLA (Variable Length Array)
  std::vector<float> distance_array(path_array_size_);

  for (int i = previous_index; i < path_array_size_; i++) {
    dx = *(path_data_.array[0] + i) - robot_pose_.position.x;
    dy = *(path_data_.array[1] + i) - robot_pose_.position.y;
    distance_array[i] = std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));

    if (distance_array[i] < 0.01)
      distance_array[i] = 0;
  }

  min_distance_index = Index_Of_Smallest_Element(distance_array.data(), path_array_size_);

  float temp_index;
  dynamic_look_ahead_distance = dynamic_look_ahead(current_linear_velocity);
  temp_index = min_distance_index + dynamic_look_ahead_distance * 100;

  if (temp_index < path_array_size_ - 1) {
    previous_index = static_cast<int>(temp_index);
  } else {
    previous_index = path_array_size_ - 1;
  }

  goal_pose_.position.x = *(path_data_.array[0] + previous_index);
  goal_pose_.position.y = *(path_data_.array[1] + previous_index);
}

pose_struct::ControlInput PurePursuit::Pure_pursuit_controller(float linear_velocity)
{
  pose_struct::ControlInput control_data;

  float alpha = std::atan2(goal_pose_.position.y - robot_pose_.position.y,
                           goal_pose_.position.x - robot_pose_.position.x) - 
                           robot_pose_.orientation.yaw;

  locus = std::sqrt(std::pow((goal_pose_.position.x - robot_pose_.position.x), 2) +
                    std::pow((goal_pose_.position.y - robot_pose_.position.y), 2));

  if (locus == 0.0) {
    curvature = 0.0;
  } else {
    curvature = (2 * std::sin(alpha)) / locus;
  }

  lateral_shift = locus * std::sin(alpha);
  angular_velocity = linear_velocity * curvature;

  if (angular_velocity > max_angular_vel) {
    angular_velocity = max_angular_vel;
  } else if (angular_velocity < -max_angular_vel) {
    angular_velocity = -max_angular_vel;
  }

  control_data.linear.x = linear_velocity;
  control_data.linear.y = lateral_shift;
  control_data.linear.z = locus;
  control_data.angular.z = angular_velocity;

  return control_data;
}
