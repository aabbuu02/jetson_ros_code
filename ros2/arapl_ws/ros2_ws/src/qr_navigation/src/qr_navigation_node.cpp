#include "qr_navigation.h"

QrNavigation::QrNavigation()
  : Node("qr_navigation_node"),
    velocity_profile_(0.2),
    rotation_control_(0.3, -0.3, 0.8)
{
  // Declare and get parameters
  declare_parameters();
  get_parameters();

  // Initialize subscribers
  odom_subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>(
    "odom", 10, std::bind(&QrNavigation::odom_callback, this, std::placeholders::_1));

  path_sequence_subscriber_ = this->create_subscription<qr_navigation::msg::GoalMsg>(
    "goal_path", 10, std::bind(&QrNavigation::goal_path_callback, this, std::placeholders::_1));

  robot_init_subscriber_ = this->create_subscription<std_msgs::msg::Bool>(
    "robot_initialized", 10, std::bind(&QrNavigation::robot_init_callback, this, std::placeholders::_1));

  pause_robot_subscriber_ = this->create_subscription<std_msgs::msg::Bool>(
    "pause_robot", 10, std::bind(&QrNavigation::pause_robot_callback, this, std::placeholders::_1));

  // Initialize publishers
  cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("navigation/cmd_vel", 10);
  distance_to_goal_pub_ = this->create_publisher<std_msgs::msg::Float32>("distance_to_goal", 10);
  result_pub_ = this->create_publisher<std_msgs::msg::String>("/goal_result", 10);
  robot_init_status_pub_ = this->create_publisher<std_msgs::msg::Bool>("/robot_init_status", 10);
  robot_pause_status_pub_ = this->create_publisher<std_msgs::msg::Bool>("/robot_pause_status", 10);
  lateral_pub_ = this->create_publisher<std_msgs::msg::Float32>("/lateral_shift", 10);
  look_ahead_pub_ = this->create_publisher<std_msgs::msg::Float32>("/look_ahead", 10);
  extractor_homing_pub_ = this->create_publisher<std_msgs::msg::Bool>("/robot_state", 10);

  // Initialize pose data
  robot_pose_.position.x = 0;
  robot_pose_.position.y = 0;
  robot_pose_.position.z = 0;
  robot_pose_.orientation.yaw = 0;

  goal_pose_.position.x = 0;
  goal_pose_.position.y = 0;
  goal_pose_.position.z = 0;
  goal_pose_.orientation.yaw = 0;

  start_pose_.position.x = 0;
  start_pose_.position.y = 0;
  start_pose_.position.z = 0;
  start_pose_.orientation.yaw = 0;

  path_array_size_ = 0;
  path_data_.rows = 1;
  path_data_.columns = 1;
  path_data_.array = nullptr;
  
  smooth_path_data_.rows = 1;
  smooth_path_data_.columns = 1;
  smooth_path_data_.array = nullptr;
  
  current_linear_velocity_ = 0.0;
  linear_velocity_ = 0.0;

  start_and_goal_data_.init_pose.position.x = 0.0;
  start_and_goal_data_.init_pose.position.y = 0.0;
  start_and_goal_data_.init_pose.position.z = 0.0;
  start_and_goal_data_.goal_pose.position.x = 0.0;
  start_and_goal_data_.goal_pose.position.y = 0.0;
  start_and_goal_data_.goal_pose.position.z = 0.0;
  start_and_goal_data_.goal_pose.orientation.yaw = 0.0;

  in_place_rotation_ = false;
  new_goal_ = true;
  operation_ = "NONE";
  tolerance_distance_ = 0.02;
  is_initialized_ = false;
  is_paused_ = false;
  reached_position_ = false;
  old_goal_ = false;
  last_distance_ = 0.0;
  distance_to_goal_ = 0.0;
  goal_precision_ = 0.005;
  m_inside_count_ = 0;
  m_homing_distance_ = 0.60;
  is_extractor_home_ = false;
  caution_front_ = false;
  caution_rear_ = false;
  stop_front_ = false;
  stop_rear_ = false;
  
  roll_ = 0.0;
  pitch_ = 0.0;
  yaw_ = 0.0;
  goal_roll_ = 0.0;
  goal_pitch_ = 0.0;
  goal_yaw_ = 0.0;
  start_roll_ = 0.0;
  start_pitch_ = 0.0;
  start_yaw_ = 0.0;
  desired_rot_angle_ = 0.0;
  position_tolerance_ = 0.02;
  reverse_max_speed_ = 0.3;
  angular_tolerance_ = 0.05;

  // Create timer for main loop (25 Hz)
  timer_ = this->create_wall_timer(
    std::chrono::milliseconds(40),
    std::bind(&QrNavigation::run, this));

  RCLCPP_INFO(this->get_logger(), "QR Navigation node initialized");
}

QrNavigation::~QrNavigation()
{
  // Cleanup dynamically allocated memory for path_data_
  if (path_data_.array != nullptr) {
    for (int i = 0; i < 2; i++) {
      delete[] path_data_.array[i];
    }
    delete[] path_data_.array;
  }
  
  // Cleanup smooth_path_data_
  if (smooth_path_data_.array != nullptr) {
    for (int i = 0; i < 2; i++) {
      delete[] smooth_path_data_.array[i];
    }
    delete[] smooth_path_data_.array;
  }
}

void QrNavigation::declare_parameters()
{
  this->declare_parameter("forward_max_vel", 0.5);
  this->declare_parameter("acc_constant", 0.2);
  this->declare_parameter("dec_constant", 0.2);
  this->declare_parameter("inertia_constant", 0.8);
  this->declare_parameter("acceleration", 0.2);
  this->declare_parameter("min_lookahead_dist", 0.4);
  this->declare_parameter("max_lookahead", 1.0);
  this->declare_parameter("wheel_base", 0.5);
  this->declare_parameter("kla", 1.1);
  this->declare_parameter("max_angular_vel", 0.4);
  this->declare_parameter("x_position_tolerance", 0.02);
  this->declare_parameter("x_angular_tolerance", 0.05);
  this->declare_parameter("reverse_max_vel", 0.3);
  this->declare_parameter("homing_distance", 0.6);
}

void QrNavigation::get_parameters()
{
  double forward_max_vel = this->get_parameter("forward_max_vel").as_double();
  double acc_constant = this->get_parameter("acc_constant").as_double();
  double dec_constant = this->get_parameter("dec_constant").as_double();
  double inertia_constant = this->get_parameter("inertia_constant").as_double();
  double acceleration = this->get_parameter("acceleration").as_double();
  
  double min_lookahead_dist = this->get_parameter("min_lookahead_dist").as_double();
  double max_lookahead = this->get_parameter("max_lookahead").as_double();
  double wheel_base = this->get_parameter("wheel_base").as_double();
  double kla = this->get_parameter("kla").as_double();
  double max_angular_vel = this->get_parameter("max_angular_vel").as_double();
  
  double x_position_tolerance = this->get_parameter("x_position_tolerance").as_double();
  double x_angular_tolerance = this->get_parameter("x_angular_tolerance").as_double();
  double reverse_max_vel = this->get_parameter("reverse_max_vel").as_double();
  double homing_distance = this->get_parameter("homing_distance").as_double();

  velocity_profile_.Update_params(forward_max_vel, acc_constant, dec_constant, 
                                  inertia_constant, acceleration);
  pure_pursuit_.Update_params(min_lookahead_dist, max_lookahead, wheel_base, 
                              kla, max_angular_vel);
  update_params(x_position_tolerance, x_angular_tolerance, reverse_max_vel, homing_distance);
}

void QrNavigation::robot_init_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
  is_initialized_ = msg->data;
}

void QrNavigation::pause_robot_callback(const std_msgs::msg::Bool::SharedPtr msg)
{
  is_paused_ = msg->data;
}

void QrNavigation::update_params(double x_position_tolerance, double x_angular_tolerance,
                                 double reverse_max_vel, double homing_distance)
{
  position_tolerance_ = x_position_tolerance;
  angular_tolerance_ = x_angular_tolerance;
  reverse_max_speed_ = reverse_max_vel;
  m_homing_distance_ = homing_distance;
  RCLCPP_INFO(this->get_logger(), "Updated position_tolerance: %f", position_tolerance_);
}

void QrNavigation::odom_callback(const nav_msgs::msg::Odometry::SharedPtr odom_msg)
{
  robot_pose_.position.x = odom_msg->pose.pose.position.x;
  robot_pose_.position.y = odom_msg->pose.pose.position.y;
  current_linear_velocity_ = odom_msg->twist.twist.linear.x;

  tf2::Quaternion q(
    odom_msg->pose.pose.orientation.x,
    odom_msg->pose.pose.orientation.y,
    odom_msg->pose.pose.orientation.z,
    odom_msg->pose.pose.orientation.w);

  tf2::Matrix3x3 m(q);
  m.getRPY(roll_, pitch_, yaw_);
  robot_pose_.orientation.yaw = yaw_;

  pure_pursuit_.Intermediate_goal_point(robot_pose_, current_linear_velocity_);
}

pose_struct::Matrix QrNavigation::path_smoothening(pose_struct::PoseEuler start,
                                                    pose_struct::PoseEuler /*goal*/,
                                                    double change_in_value, int x_)
{
  // Cleanup previous allocation if exists
  if (smooth_path_data_.array != nullptr) {
    for (int i = 0; i < 2; i++) {
      delete[] smooth_path_data_.array[i];
    }
    delete[] smooth_path_data_.array;
  }
  
  smooth_path_data_.array = new double *[2];
  path_array_size_ = std::abs(static_cast<int>(change_in_value * 100)) + 1000;

  // This 1000 is added as a part of solving the problem of robot rotating when 
  // it's about to stop, as per the calculations we need to plan ahead if we want 
  // to stop without making too much angular movement
  
  float start_value = start.position.x;
  float goal_value = start.position.y;

  for (int i = 0; i < 2; i++) {
    smooth_path_data_.array[i] = new double[path_array_size_];
  }

  for (int i = 0; i < path_array_size_; i++) {
    if (change_in_value > 0 && i == 0) {
      *(smooth_path_data_.array[0] + 0) = start_value;
      *(smooth_path_data_.array[1] + 0) = goal_value;
    }

    if (change_in_value > 0 && i > 0) {
      if (x_ == 0) {
        *(smooth_path_data_.array[0] + i) = *(smooth_path_data_.array[0] + i - 1) + 0.01;
        *(smooth_path_data_.array[1] + i) = goal_value;
      }
      if (x_ == 1) {
        *(smooth_path_data_.array[0] + i) = start_value;
        *(smooth_path_data_.array[1] + i) = *(smooth_path_data_.array[1] + i - 1) + 0.01;
      }
    }

    if (change_in_value < 0 && i == 0) {
      *(smooth_path_data_.array[0] + 0) = start_value;
      *(smooth_path_data_.array[1] + 0) = goal_value;
    }

    if (change_in_value < 0 && i > 0) {
      if (x_ == 0) {
        *(smooth_path_data_.array[0] + i) = *(smooth_path_data_.array[0] + i - 1) - 0.01;
        *(smooth_path_data_.array[1] + i) = goal_value;
      }
      if (x_ == 1) {
        *(smooth_path_data_.array[0] + i) = start_value;
        *(smooth_path_data_.array[1] + i) = *(smooth_path_data_.array[1] + i - 1) - 0.01;
      }
    }
  }

  smooth_path_data_.rows = 2;
  smooth_path_data_.columns = path_array_size_;
  return smooth_path_data_;
}

void QrNavigation::goal_path_callback(const qr_navigation::msg::GoalMsg::SharedPtr goal_path_msg)
{
  new_goal_ = false;
  old_goal_ = false;
  reached_position_ = false;
  m_inside_count_ = 0;

  operation_ = goal_path_msg->operation;

  goal_pose_.position.x = goal_path_msg->goal[0];
  goal_pose_.position.y = goal_path_msg->goal[1];
  goal_pose_.position.z = 0;
  goal_pose_.orientation.yaw = goal_path_msg->goal[2];

  start_pose_.position.x = goal_path_msg->start[0];
  start_pose_.position.y = goal_path_msg->start[1];
  start_pose_.position.z = 0;

  double change_in_x = goal_pose_.position.x - start_pose_.position.x;
  double change_in_y = goal_pose_.position.y - start_pose_.position.y;

  start_and_goal_data_.goal_pose.position.x = goal_pose_.position.x;
  start_and_goal_data_.goal_pose.position.y = goal_pose_.position.y;
  start_and_goal_data_.goal_pose.orientation.yaw = goal_pose_.orientation.yaw;
  start_and_goal_data_.init_pose.position.x = start_pose_.position.x;
  start_and_goal_data_.init_pose.position.y = start_pose_.position.y;

  if (std::fabs(change_in_x) > 0.1 && std::fabs(change_in_y) < 0.01) {
    path_data_ = path_smoothening(start_pose_, goal_pose_, change_in_x, 0);
    path_array_size_ = std::abs(static_cast<int>(change_in_x * 100)) + 1000;
    RCLCPP_WARN(this->get_logger(), "Change in X, path processing in progress");

    if (change_in_x < 0) {
      start_and_goal_data_.init_pose.position.z = 3.14;
    }
    if (change_in_x > 0) {
      start_and_goal_data_.init_pose.position.z = 0;
    }
  }

  if (std::fabs(change_in_y) > 0.1 && std::fabs(change_in_x) < 0.01) {
    path_data_ = path_smoothening(start_pose_, goal_pose_, change_in_y, 1);
    path_array_size_ = std::abs(static_cast<int>(change_in_y * 100)) + 1000;
    RCLCPP_WARN(this->get_logger(), "Change in Y, path processing in progress");

    if (change_in_y < 0) {
      start_and_goal_data_.init_pose.position.z = -1.57;
    }
    if (change_in_y > 0) {
      start_and_goal_data_.init_pose.position.z = 1.57;
    }
  }

  // Log first 10 path points for debugging
  for (int i = 0; i < std::min(10, path_array_size_); i++) {
    RCLCPP_INFO(this->get_logger(), "Path X: %f, Y: %f",
               *(path_data_.array[0] + i), *(path_data_.array[1] + i));
  }

  pure_pursuit_.Update_path(start_pose_, goal_pose_, path_data_, path_array_size_);
  old_goal_ = true;
}

double QrNavigation::desired_theta_correction(double desired_theta_)
{
  double corrected_theta;

  if (desired_theta_ > 2.5 || desired_theta_ < -2.5) {
    corrected_theta = 3.1416;
  } else if (desired_theta_ > 0.9 && desired_theta_ < 2.0) {
    corrected_theta = 1.5708;
  } else if (desired_theta_ < -0.9 && desired_theta_ > -2.0) {
    corrected_theta = -1.5708;
  } else if (desired_theta_ < 0.3 && desired_theta_ > -0.3) {
    corrected_theta = 0;
  }

  return corrected_theta;
}

double QrNavigation::find_desired_rot_angle(double current_theta, double desired_theta)
{
  double corrected_theta = desired_theta_correction(desired_theta);
  double dif_angle = corrected_theta - current_theta;

  double normalize_angle_positive = std::fmod(std::fmod(dif_angle, 2.0 * 3.1416) + 
                                              (2 * 3.1416), (2.0 * 3.1416));

  if (normalize_angle_positive > 3.1416) {
    normalize_angle_positive -= 2.0 * 3.1416;
  }

  return normalize_angle_positive;
}

float QrNavigation::check_operation(float m_linear_velocity)
{
  if (operation_ == "NORMAL" && caution_front_ == true) {
    m_linear_velocity = 0.2;
  }

  if (operation_ == "UNDOCK") {
    m_linear_velocity = -1 * m_linear_velocity;
    if (m_linear_velocity < (-1 * reverse_max_speed_)) {
      m_linear_velocity = -1 * reverse_max_speed_;
    }
  }

  if (operation_ == "REVERSE") {
    m_linear_velocity = -1 * m_linear_velocity;
    if (caution_rear_ == true) {
      if (m_linear_velocity < -0.15) {
        m_linear_velocity = -0.15;
      }
    }
  }

  if (operation_ == "DOCK") {
    if (m_linear_velocity > 0.2) {
      m_linear_velocity = 0.2;
    }
  }

  if (operation_ == "CHARGE") {
    m_linear_velocity = -1 * m_linear_velocity;
    if (m_linear_velocity < -0.2) {
      m_linear_velocity = -0.1;
    }
  }

  return m_linear_velocity;
}

float QrNavigation::find_distance_to_goal()
{
  float change_in_x_direction = start_and_goal_data_.init_pose.position.x - 
                                start_and_goal_data_.goal_pose.position.x;
  float change_in_y_direction = start_and_goal_data_.init_pose.position.y - 
                                start_and_goal_data_.goal_pose.position.y;
  float distance_to_goal_point;

  if (std::fabs(change_in_x_direction) <= 0.01 && change_in_y_direction != 0) {
    distance_to_goal_point = std::fabs(robot_pose_.position.y - 
                                       start_and_goal_data_.goal_pose.position.y);
    RCLCPP_INFO(this->get_logger(), "Robot travels in Y direction --> distance to goal %f",
               distance_to_goal_point);
  }

  if (change_in_x_direction != 0 && std::fabs(change_in_y_direction) <= 0.1) {
    distance_to_goal_point = std::fabs(robot_pose_.position.x - 
                                       start_and_goal_data_.goal_pose.position.x);
    RCLCPP_INFO(this->get_logger(), "Robot travels in X direction --> distance to goal %f",
               distance_to_goal_point);
  }

  return distance_to_goal_point;
}

void QrNavigation::run()
{
  // Publish robot status
  auto robot_init_status_msg = std_msgs::msg::Bool();
  robot_init_status_msg.data = is_initialized_;
  robot_init_status_pub_->publish(robot_init_status_msg);

  auto robot_pause_status_msg = std_msgs::msg::Bool();
  robot_pause_status_msg.data = is_paused_;
  robot_pause_status_pub_->publish(robot_pause_status_msg);

  if (is_initialized_ == true && is_paused_ == false) {
    double desired_start_orientation = find_desired_rot_angle(robot_pose_.orientation.yaw,
                                                              start_and_goal_data_.init_pose.position.z);
    desired_rot_angle_ = find_desired_rot_angle(robot_pose_.orientation.yaw, 
                                                goal_pose_.orientation.yaw);
    distance_to_goal_ = find_distance_to_goal();

    // Check extractor homing distance
    if (distance_to_goal_ > m_homing_distance_) {
      is_extractor_home_ = true;
    } else {
      is_extractor_home_ = false;
    }

    auto homing_data = std_msgs::msg::Bool();
    homing_data.data = is_extractor_home_;
    extractor_homing_pub_->publish(homing_data);

    if (new_goal_ == false) {
      // Fixed parentheses for logical operators
      if (std::fabs(desired_start_orientation) < 0.3 || 
          ((std::fabs(desired_rot_angle_) > 0.015 && new_goal_ == false && distance_to_goal_ < 0.5) || 
           operation_ == "UNDOCK" || operation_ == "CHARGE")) {
        
        // Calculate linear velocity using velocity profile
        linear_velocity_ = velocity_profile_.Find_linear_velocity(start_and_goal_data_,
                                                                  robot_pose_,
                                                                  current_linear_velocity_);
        linear_velocity_ = check_operation(linear_velocity_);
        RCLCPP_INFO(this->get_logger(), "Linear velocity: %f", linear_velocity_);

        distance_to_goal_ = find_distance_to_goal();

        // Check if robot reached position tolerance
        if (distance_to_goal_ < position_tolerance_ && reached_position_ == false) {
          if (operation_ == "NORMAL") {
            goal_precision_ = 0.005;
          } else {
            goal_precision_ = 0.015;
          }

          if (std::fabs(distance_to_goal_) < goal_precision_) {
            RCLCPP_INFO(this->get_logger(), "Reached position");
            reached_position_ = true;
          }

          if (last_distance_ < distance_to_goal_) {
            RCLCPP_INFO(this->get_logger(), "Last distance %f, distance to goal %f",
                       last_distance_, distance_to_goal_);
            RCLCPP_ERROR(this->get_logger(), "Some issue with position, please check");
          }
        }

        RCLCPP_INFO(this->get_logger(), 
                   "Distance to goal %f, position_tolerance %f, reached_position %d",
                   distance_to_goal_, position_tolerance_, reached_position_);

        // In-place rotation at goal - Fixed parentheses
        if ((std::fabs(distance_to_goal_) <= position_tolerance_ && reached_position_ == true && old_goal_ == true) || 
            in_place_rotation_ == true) {
          
          if (m_inside_count_ < 1) {
            in_place_rotation_ = true;
            control_velocity_.linear.x = 0;
            control_velocity_.angular.z = 0;
            m_inside_count_ += 1;
            cmd_vel_pub_->publish(control_velocity_);
            reached_position_ = true;
            rclcpp::sleep_for(std::chrono::milliseconds(500));
          }

          if (old_goal_ == true) {
            desired_rot_angle_ = find_desired_rot_angle(robot_pose_.orientation.yaw,
                                                        goal_pose_.orientation.yaw);
            RCLCPP_INFO(this->get_logger(), "Desired rotation angle --> %f", desired_rot_angle_);
          }

          rotation_control_.rotate_to_angle(desired_rot_angle_, control_input_);
          control_input_.linear.x = 0.0;

          // Check rotation tolerance
          if (std::fabs(desired_rot_angle_) < angular_tolerance_) {
            RCLCPP_INFO(this->get_logger(), "Rotation complete");
            new_goal_ = true;
            in_place_rotation_ = false;
            m_inside_count_ = 0;

            auto goal_reached = std_msgs::msg::String();
            goal_reached.data = "reached";
            result_pub_->publish(goal_reached);
          }
        } 
        // Pure pursuit control - Fixed parentheses
        else if ((distance_to_goal_ > tolerance_distance_ && in_place_rotation_ == false && reached_position_ == false) || 
                 reached_position_ == false) {
          
          control_input_ = pure_pursuit_.Pure_pursuit_controller(linear_velocity_);

          auto lateral_shift_data = std_msgs::msg::Float32();
          lateral_shift_data.data = control_input_.linear.y;
          lateral_pub_->publish(lateral_shift_data);

          auto look_ahead_data = std_msgs::msg::Float32();
          look_ahead_data.data = control_input_.linear.z;
          look_ahead_pub_->publish(look_ahead_data);
        } 
        else {
          control_input_.linear.x = 0.0;
          control_input_.angular.z = 0.0;
        }

        // Set control velocity
        control_velocity_.linear.x = control_input_.linear.x;
        control_velocity_.angular.z = control_input_.angular.z;

        // Safety checks for reverse operations
        if (operation_ == "UNDOCK" || operation_ == "REVERSE") {
          if (stop_rear_ == true) {
            control_velocity_.linear.x = 0;
            control_velocity_.angular.z = 0;
          }
        }

        // Safety checks for forward operations
        if (operation_ == "NORMAL") {
          if (stop_front_ == true) {
            control_velocity_.linear.x = 0;
            control_velocity_.angular.z = 0;
          }
        }

        // Publish velocity command
        cmd_vel_pub_->publish(control_velocity_);

        // Publish distance to goal
        auto dist_to_goal = std_msgs::msg::Float32();
        dist_to_goal.data = distance_to_goal_;
        distance_to_goal_pub_->publish(dist_to_goal);

        last_distance_ = distance_to_goal_;
      } 
      else {
        control_velocity_.linear.x = 0;
        control_velocity_.angular.z = 0;
        cmd_vel_pub_->publish(control_velocity_);
      }
    } 
    else {
      control_velocity_.linear.x = 0;
      control_velocity_.angular.z = 0;
      cmd_vel_pub_->publish(control_velocity_);
    }
  } 
  else {
    RCLCPP_DEBUG_THROTTLE(this->get_logger(), *this->get_clock(), 3000,
                         "Waiting for robot initialization");
    control_velocity_.linear.x = 0;
    control_velocity_.angular.z = 0;
    cmd_vel_pub_->publish(control_velocity_);
  }
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<QrNavigation>();
  
  RCLCPP_INFO(node->get_logger(), "Started navigation node");
  
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
