#ifndef QR_NAVIGATION_H
#define QR_NAVIGATION_H

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/pose2_d.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/path.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "pose_struct.h"
#include "pure_pursuit.h"
#include "velocity_profile.h"
#include "rotation_controller.h"
#include "qr_navigation/msg/goal_msg.hpp"

#include <memory>
#include <string>
#include <cmath>

class QrNavigation : public rclcpp::Node
{
public:
  QrNavigation();
  ~QrNavigation();

  void run();

private:
  // Subscribers
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
  rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr path_subscriber_;
  rclcpp::Subscription<qr_navigation::msg::GoalMsg>::SharedPtr path_sequence_subscriber_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr robot_init_subscriber_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr pause_robot_subscriber_;

  // Publishers
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr distance_to_goal_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr result_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr robot_init_status_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr robot_pause_status_pub_;
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr lateral_pub_;
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr look_ahead_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr extractor_homing_pub_;

  // Timer
  rclcpp::TimerBase::SharedPtr timer_;

  // Callback functions
  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
  void path_callback(const nav_msgs::msg::Path::SharedPtr msg);
  void goal_path_callback(const qr_navigation::msg::GoalMsg::SharedPtr msg);
  void robot_init_callback(const std_msgs::msg::Bool::SharedPtr msg);
  void pause_robot_callback(const std_msgs::msg::Bool::SharedPtr msg);

  // Helper functions
  pose_struct::Matrix path_smoothening(pose_struct::PoseEuler start, 
                                        pose_struct::PoseEuler goal,
                                        double change_in_value, int x_);
  void update_params(double x_position_tolerance, double x_angular_tolerance,
                     double reverse_max_vel, double homing_distance);
  float check_operation(float m_linear_velocity);
  double desired_theta_correction(double desired_theta_);
  double find_desired_rot_angle(double current_theta, double desired_theta);
  float find_distance_to_goal();

  // Data members
  pose_struct::PoseEuler robot_pose_;
  pose_struct::PoseEuler start_pose_;
  pose_struct::PoseEuler goal_pose_;
  pose_struct::Matrix path_data_;
  pose_struct::Matrix smooth_path_data_;
  pose_struct::PathData start_and_goal_data_;
  geometry_msgs::msg::Twist control_velocity_;
  pose_struct::ControlInput control_input_;

  PurePursuit pure_pursuit_;
  VelocityProfile velocity_profile_;
  RotationController rotation_control_;

  std::string last_goal_position_, operation_;
  bool is_initialized_;
  bool is_paused_;
  double m_homing_distance_;
  bool is_extractor_home_;
  double tolerance_distance_;
  bool caution_front_;
  bool caution_rear_;
  bool stop_front_;
  bool stop_rear_;
  bool reached_position_;
  bool old_goal_;
  double last_distance_;
  double distance_to_goal_;
  float goal_precision_;
  bool in_place_rotation_;
  bool new_goal_;
  double desired_rot_angle_;
  double position_tolerance_;
  double reverse_max_speed_;
  double angular_tolerance_;
  double roll_, pitch_, yaw_;
  double goal_roll_, goal_pitch_, goal_yaw_;
  double start_roll_, start_pitch_, start_yaw_;
  int m_inside_count_;
  int path_array_size_;
  float current_linear_velocity_;
  float angular_velocity_;
  float linear_velocity_;
  float max_angular_vel_;

  // Parameters
  void declare_parameters();
  void get_parameters();
};

#endif // QR_NAVIGATION_H
