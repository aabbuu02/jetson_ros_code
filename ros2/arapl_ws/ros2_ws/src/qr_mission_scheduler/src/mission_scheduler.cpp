#include "mission_scheduler/mission_scheduler.h"
#include <chrono>
#include <functional>
#include <memory>
#include <thread>
#include <cmath>

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

MissionScheduler::MissionScheduler(const rclcpp::NodeOptions & options)
: Node("mission_scheduler_server", options)
{
  // Declare parameters
  this->declare_parameter("minimum_battery_threshold", 48.0);
  this->declare_parameter("max_charge", 98);
  
  minimum_battery_threshold_ = this->get_parameter("minimum_battery_threshold").as_double();
  max_charge_ = this->get_parameter("max_charge").as_int();
  
  RCLCPP_INFO(this->get_logger(), "Initializing Mission Scheduler Server");
  RCLCPP_INFO(this->get_logger(), "Battery threshold: %.1f%%, Max charge: %d%%", 
              minimum_battery_threshold_, max_charge_);
  
  // Initialize publishers
  charge_battery_pub_ = this->create_publisher<std_msgs::msg::Int32>("/charge_battery", 10);
  robot_status_pub_ = this->create_publisher<std_msgs::msg::Bool>("robot_status", 10);
  
  // Initialize subscribers
  robot_odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
    "/odom", 10, std::bind(&MissionScheduler::odom_callback, this, _1));
    
  robot_goal_result_sub_ = this->create_subscription<std_msgs::msg::String>(
    "/goal_result", 10, std::bind(&MissionScheduler::goal_result_callback, this, _1));
  
  // Initialize service clients
  path_client_ = this->create_client<graph_msgs::srv::GetGraphPlan>("make_graph_plan");
  
  // Initialize action server
  action_server_ = rclcpp_action::create_server<MissionSchedulerAction>(
    this,
    "mission_server",
    std::bind(&MissionScheduler::handle_goal, this, _1, _2),
    std::bind(&MissionScheduler::handle_cancel, this, _1),
    std::bind(&MissionScheduler::handle_accepted, this, _1));
    
  RCLCPP_INFO(this->get_logger(), "Mission Scheduler Server initialized successfully");
}

MissionScheduler::~MissionScheduler()
{
  RCLCPP_INFO(this->get_logger(), "Mission Scheduler Server shutting down");
}

// ============================================================================
// ACTION SERVER CALLBACKS
// ============================================================================

rclcpp_action::GoalResponse MissionScheduler::handle_goal(
  const rclcpp_action::GoalUUID & uuid,
  std::shared_ptr<const MissionSchedulerAction::Goal> goal)
{
  (void)uuid;
  RCLCPP_INFO(this->get_logger(), "Received goal request - Type: %s, Source: %.0f, Destination: %.0f",
              goal->goal_type.goal_type.c_str(),
              goal->goal_type.source,
              goal->goal_type.destination);
  
  // Validate goal
  if (goal->goal_type.source == goal->goal_type.destination) {
    RCLCPP_WARN(this->get_logger(), "Source and destination are the same");
  }
  
  return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse MissionScheduler::handle_cancel(
  const std::shared_ptr<GoalHandleMissionScheduler> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
  (void)goal_handle;
  return rclcpp_action::CancelResponse::ACCEPT;
}

void MissionScheduler::handle_accepted(
  const std::shared_ptr<GoalHandleMissionScheduler> goal_handle)
{
  // Execute in a separate thread to avoid blocking
  std::thread{std::bind(&MissionScheduler::execute, this, _1), goal_handle}.detach();
}

void MissionScheduler::execute(const std::shared_ptr<GoalHandleMissionScheduler> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing goal");
  const auto goal = goal_handle->get_goal();
  
  qr_mission_scheduler::msg::GoalMsg goal_data;
  goal_data.goal_type = goal->goal_type.goal_type;
  goal_data.source = goal->goal_type.source;
  goal_data.destination = goal->goal_type.destination;
  
  execute_goal(goal_data, goal_handle);
}

// ============================================================================
// SUBSCRIBER CALLBACKS
// ============================================================================

void MissionScheduler::odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
{
  robot_pose_data_ = *msg;
  
  // Extract yaw from quaternion
  tf2::Quaternion q(
    msg->pose.pose.orientation.x,
    msg->pose.pose.orientation.y,
    msg->pose.pose.orientation.z,
    msg->pose.pose.orientation.w);
    
  tf2::Matrix3x3 m(q);
  double roll, pitch;
  m.getRPY(roll, pitch, robot_odom_yaw_);
}

void MissionScheduler::goal_result_callback(const std_msgs::msg::String::SharedPtr msg)
{
  goal_result_ = msg->data;
  RCLCPP_DEBUG(this->get_logger(), "Goal result received: %s", goal_result_.c_str());
}

void MissionScheduler::battery_callback_data(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
  battery_percentage_ = msg->percentage * 100.0f;
  
  robot_status_data_.data = (battery_percentage_ > minimum_battery_threshold_ && 
                              !robot_on_duty_);
  robot_status_pub_->publish(robot_status_data_);
  
  RCLCPP_DEBUG(this->get_logger(), "Battery: %.1f%%, Status: %d", 
               battery_percentage_, robot_status_data_.data);
}

// ============================================================================
// PATH PLANNING METHODS
// ============================================================================

bool MissionScheduler::get_path_plan(const qr_mission_scheduler::msg::GoalMsg & goal)
{
  RCLCPP_INFO(this->get_logger(), "Requesting path plan from %.0f to %.0f", 
              goal.source, goal.destination);
  
  auto request = std::make_shared<graph_msgs::srv::GetGraphPlan::Request>();
  request->source_id = static_cast<int>(goal.source);
  request->target_id = static_cast<int>(goal.destination);
  request->ignore_path_orientation = false;
  request->ignore_goal_orientation = false;
  
  // Wait for service with timeout
  if (!path_client_->wait_for_service(5s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for path planning service");
      return false;
    }
    RCLCPP_WARN(this->get_logger(), "Path planning service not available");
    return false;
  }
  
  auto result_future = path_client_->async_send_request(request);
  
  // Wait for result with timeout
  auto future_status = result_future.wait_for(10s);
  if (future_status != std::future_status::ready) {
    RCLCPP_ERROR(this->get_logger(), "Path planning service call timed out");
    return false;
  }
  
  auto response = result_future.get();
  if (response->plan.poses.empty()) {
    RCLCPP_WARN(this->get_logger(), "Received empty path from planner");
    return false;
  }
  
  RCLCPP_INFO(this->get_logger(), "Received path with %zu poses", response->plan.poses.size());
  
  // Process the path
  path_filtered_data_vec_2d_.clear();
  stripped_path_poses_.clear();
  check_straight_line(*response);
  split_path(*response, stripped_path_poses_);
  
  return true;
}

void MissionScheduler::check_straight_line(
  const graph_msgs::srv::GetGraphPlan::Response & response_data)
{
  RCLCPP_INFO(this->get_logger(), "Checking straight line - Path size: %zu", 
              response_data.plan.poses.size());
  
  path_filtered_data_vec_2d_.clear();
  reset_flag_ = false;
  
  if (response_data.plan.poses.size() < 2) {
    RCLCPP_WARN(this->get_logger(), "Path too short for filtering");
    return;
  }
  
  // Process intermediate poses
  for (size_t k = 1; k < response_data.plan.poses.size() - 1; ++k) {
    const auto & current_pose = response_data.plan.poses[k];
    const auto & previous_pose = response_data.plan.poses[k - 1];
    const auto & next_pose = response_data.plan.poses[k + 1];
    
    // Extract yaw angles
    tf2::Quaternion q_current(
      current_pose.pose.orientation.x,
      current_pose.pose.orientation.y,
      current_pose.pose.orientation.z,
      current_pose.pose.orientation.w);
      
    tf2::Quaternion q_prev(
      previous_pose.pose.orientation.x,
      previous_pose.pose.orientation.y,
      previous_pose.pose.orientation.z,
      previous_pose.pose.orientation.w);
      
    tf2::Quaternion q_next(
      next_pose.pose.orientation.x,
      next_pose.pose.orientation.y,
      next_pose.pose.orientation.z,
      next_pose.pose.orientation.w);
    
    tf2::Matrix3x3 m_current(q_current);
    tf2::Matrix3x3 m_prev(q_prev);
    tf2::Matrix3x3 m_next(q_next);
    
    double roll, pitch, yaw, prev_yaw, next_yaw;
    m_current.getRPY(roll, pitch, yaw);
    m_prev.getRPY(roll, pitch, prev_yaw);
    m_next.getRPY(roll, pitch, next_yaw);
    
    goal_yaw_for_charging_ = next_yaw;
    
    // Check if current yaw is different from both previous and next (anomaly detection)
    if (std::abs(yaw - next_yaw) > 0.01 && 
        std::abs(yaw - prev_yaw) > 0.01 && 
        std::abs(prev_yaw - next_yaw) < 0.01) {
      
      RCLCPP_INFO(this->get_logger(), "Yaw anomaly detected at pose %zu: %.3f (prev: %.3f, next: %.3f)",
                  k, yaw, prev_yaw, next_yaw);
      reset_flag_ = true;
      
      // Use previous pose with previous yaw
      std::vector<double> filtered_point = {
        previous_pose.pose.position.x,
        previous_pose.pose.position.y,
        prev_yaw
      };
      path_filtered_data_vec_2d_.push_back(filtered_point);
      
    } else {
      if (reset_flag_) {
        RCLCPP_INFO(this->get_logger(), "Resetting after anomaly - using yaw: %.3f", yaw);
        reset_flag_ = false;
      }
      
      std::vector<double> filtered_point = {
        previous_pose.pose.position.x,
        previous_pose.pose.position.y,
        prev_yaw
      };
      path_filtered_data_vec_2d_.push_back(filtered_point);
    }
  }
  
  // Add last pose
  if (!response_data.plan.poses.empty()) {
    const auto & last_pose = response_data.plan.poses.back();
    tf2::Quaternion q_last(
      last_pose.pose.orientation.x,
      last_pose.pose.orientation.y,
      last_pose.pose.orientation.z,
      last_pose.pose.orientation.w);
      
    tf2::Matrix3x3 m_last(q_last);
    double roll, pitch, yaw;
    m_last.getRPY(roll, pitch, yaw);
    
    std::vector<double> last_point = {
      last_pose.pose.position.x,
      last_pose.pose.position.y,
      yaw
    };
    path_filtered_data_vec_2d_.push_back(last_point);
  }
  
  RCLCPP_INFO(this->get_logger(), "Filtered path size: %zu", path_filtered_data_vec_2d_.size());
}

void MissionScheduler::split_path(
  const graph_msgs::srv::GetGraphPlan::Response & /*response_data*/,  // Mark as intentionally unused
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses)
{
  RCLCPP_INFO(this->get_logger(), "Splitting path - Filtered data size: %zu", 
              path_filtered_data_vec_2d_.size());
  
  if (path_filtered_data_vec_2d_.empty()) {
    RCLCPP_WARN(this->get_logger(), "No filtered path data to split");
    return;
  }
  
  path_data_vec_2d_.clear();
  int stripped_path_count = 0;
  double previous_yaw = 0.0;
  
  for (size_t k = 0; k < path_filtered_data_vec_2d_.size(); ++k) {
    double yaw = path_filtered_data_vec_2d_[k][2];
    
    std::vector<double> path_point = {
      path_filtered_data_vec_2d_[k][0],
      path_filtered_data_vec_2d_[k][1],
      path_filtered_data_vec_2d_[k][2]
    };
    path_data_vec_2d_.push_back(path_point);
    
    // Check for yaw change (approximately 90 degrees or 180 degrees)
    if (k != 0) {
      previous_yaw = path_filtered_data_vec_2d_[k - 1][2];
      double yaw_diff = std::abs(yaw - previous_yaw);
      
      // Split on significant yaw changes (90° ≈ 1.57, 180° ≈ 3.14)
      if ((yaw_diff > 1.5 && yaw_diff < 1.7) || (yaw_diff > 4.6 && yaw_diff < 4.8)) {
        stripped_path_poses.push_back(path_data_vec_2d_);
        path_data_vec_2d_.clear();
        stripped_path_count++;
        RCLCPP_INFO(this->get_logger(), "Path stripped at segment %d - yaw change: %.3f rad", 
                    stripped_path_count, yaw_diff);
      }
    }
    
    // Check first pose against second pose
    if (k == 0 && path_filtered_data_vec_2d_.size() > 1) {
      double next_yaw = path_filtered_data_vec_2d_[k + 1][2];
      double yaw_diff = std::abs(yaw - next_yaw);
      
      if ((yaw_diff > 1.5 && yaw_diff < 1.7) || (yaw_diff > 4.6 && yaw_diff < 4.8)) {
        stripped_path_poses.push_back(path_data_vec_2d_);
        path_data_vec_2d_.clear();
        stripped_path_count++;
        RCLCPP_INFO(this->get_logger(), "First pose stripped - yaw change: %.3f rad", yaw_diff);
      }
    }
    
    // Add remaining path data at the end
    if (k == path_filtered_data_vec_2d_.size() - 1 && !path_data_vec_2d_.empty()) {
      stripped_path_poses.push_back(path_data_vec_2d_);
      RCLCPP_INFO(this->get_logger(), "Added final path segment");
    }
  }
  
  RCLCPP_INFO(this->get_logger(), "Path split into %zu segments", stripped_path_poses.size());
}

// ============================================================================
// PATH ORIENTATION CORRECTION METHODS
// ============================================================================

void MissionScheduler::check_inplace_rotation(
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses,
  bool /*robot_orientation*/)  // Mark as intentionally unused
{
  if (stripped_path_poses.empty() || stripped_path_poses[0].empty()) {
    RCLCPP_WARN(this->get_logger(), "Empty path for inplace rotation check");
    return;
  }
  
  double yaw = stripped_path_poses[0][0][2];
  double yaw_diff = std::abs(std::abs(robot_odom_yaw_) - std::abs(yaw));
  
  RCLCPP_INFO(this->get_logger(), "Inplace rotation check - Robot yaw: %.3f, Path yaw: %.3f, Diff: %.3f",
              robot_odom_yaw_, yaw, yaw_diff);
  
  // Check if path requires significant rotation (>~103 degrees)
  if (yaw_diff > 1.8 || (std::abs(robot_odom_yaw_ + yaw) < 0.2)) {
    
    // Calculate if path is behind the robot
    double v_r_x = std::cos(robot_odom_yaw_);
    double v_r_y = std::sin(robot_odom_yaw_);
    
    size_t last_idx = stripped_path_poses[0].size() - 1;
    double v_p_x = stripped_path_poses[0][last_idx][0] - robot_pose_data_.pose.pose.position.x;
    double v_p_y = stripped_path_poses[0][last_idx][1] - robot_pose_data_.pose.pose.position.y;
    
    double dot_product = (v_r_x * v_p_x) + (v_r_y * v_p_y);
    
    RCLCPP_INFO(this->get_logger(), 
                "Robot pos: (%.2f, %.2f), Path end: (%.2f, %.2f), Dot product: %.3f",
                robot_pose_data_.pose.pose.position.x,
                robot_pose_data_.pose.pose.position.y,
                stripped_path_poses[0][last_idx][0],
                stripped_path_poses[0][last_idx][1],
                dot_product);
    
    if (dot_product < 0) {
      RCLCPP_WARN(this->get_logger(), "Path is behind robot - reversing orientation");
      reverse_orientation(stripped_path_poses);
      undock_ = true;
    } else {
      RCLCPP_INFO(this->get_logger(), "Path is in front of robot");
      undock_ = false;
    }
  } else {
    RCLCPP_DEBUG(this->get_logger(), "No significant inplace rotation needed");
  }
}

void MissionScheduler::ignore_orientation(
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses,
  bool robot_orientation)
{
  if (stripped_path_poses.empty()) {
    return;
  }
  
  size_t x = stripped_path_poses.size();
  size_t y = stripped_path_poses[x - 1].size();
  
  RCLCPP_DEBUG(this->get_logger(), "Ignoring orientation for path (segments: %zu)", x);
  
  for (size_t i = 0; i < x; ++i) {
    for (size_t j = 0; j < stripped_path_poses[i].size(); ++j) {
      // Keep last point orientation for docking
      if (i == (x - 1) && j == (y - 1)) {
        // Keep original orientation
        RCLCPP_DEBUG(this->get_logger(), "Preserving goal orientation: %.3f", 
                     stripped_path_poses[i][j][2]);
      } 
      // Set first point to robot's current orientation if requested
      else if (robot_orientation && i == 0 && j == 0) {
        stripped_path_poses[i][j][2] = robot_odom_yaw_;
        RCLCPP_DEBUG(this->get_logger(), "Setting start orientation to robot yaw: %.3f", 
                     robot_odom_yaw_);
      }
    }
  }
}

void MissionScheduler::reverse_orientation(
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses)
{
  RCLCPP_INFO(this->get_logger(), "Reversing path orientations");
  
  for (auto & segment : stripped_path_poses) {
    for (auto & point : segment) {
      // Reverse orientation by adding PI
      double original_yaw = point[2];
      point[2] = std::fmod(point[2] + M_PI, 2.0 * M_PI);
      
      // Normalize to [-PI, PI]
      if (point[2] > M_PI) {
        point[2] -= 2.0 * M_PI;
      }
      
      RCLCPP_DEBUG(this->get_logger(), "Reversed yaw: %.3f -> %.3f", 
                   original_yaw, point[2]);
    }
  }
}

void MissionScheduler::correct_orientation(
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses)
{
  RCLCPP_DEBUG(this->get_logger(), "Correcting path orientations");
  
  // Implementation for orientation correction based on path geometry
  // This can be customized based on specific robot requirements
  for (size_t i = 0; i < stripped_path_poses.size(); ++i) {
    for (size_t j = 0; j < stripped_path_poses[i].size(); ++j) {
      // Custom orientation correction logic
      // Example: Align with direction of travel
      if (j < stripped_path_poses[i].size() - 1) {
        double dx = stripped_path_poses[i][j + 1][0] - stripped_path_poses[i][j][0];
        double dy = stripped_path_poses[i][j + 1][1] - stripped_path_poses[i][j][1];
        // Angle calculation for potential use
        // double angle = std::atan2(dy, dx);
        
        // Optionally adjust orientation
        // stripped_path_poses[i][j][2] = angle;
        
        // Suppress unused variable warning
        (void)dx;
        (void)dy;
      }
    }
  }
}

void MissionScheduler::charging_path_correction(
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses)
{
  RCLCPP_INFO(this->get_logger(), "Correcting charging path orientation");
  
  if (stripped_path_poses.empty()) {
    return;
  }
  
  size_t total_segments = stripped_path_poses.size();
  size_t last_segment_size = stripped_path_poses[total_segments - 1].size();
  
  // Set goal yaw for all points in last segment for charging alignment
  for (size_t j = 0; j < last_segment_size; ++j) {
    stripped_path_poses[total_segments - 1][j][2] = goal_yaw_for_charging_;
    RCLCPP_DEBUG(this->get_logger(), "Set charging yaw at point %zu: %.3f", 
                 j, goal_yaw_for_charging_);
  }
  
  RCLCPP_INFO(this->get_logger(), "Charging path corrected with yaw: %.3f", 
              goal_yaw_for_charging_);
}

// ============================================================================
// GOAL EXECUTION METHODS
// ============================================================================

void MissionScheduler::execute_goal(
  const qr_mission_scheduler::msg::GoalMsg & goal_data,
  const std::shared_ptr<GoalHandleMissionScheduler> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing goal - Type: %s, Source: %.0f, Destination: %.0f",
              goal_data.goal_type.c_str(), goal_data.source, goal_data.destination);
  
  auto result = std::make_shared<MissionSchedulerAction::Result>();
  rclcpp::Rate rate(10ms);
  
  // ========== NORMAL GOAL ==========
  if (goal_data.goal_type == "NORMAL") {
    if (battery_percentage_ > minimum_battery_threshold_) {
      RCLCPP_INFO(this->get_logger(), "Processing NORMAL goal");
      
      if (get_path_plan(goal_data)) {
        RCLCPP_INFO(this->get_logger(), "Path received - executing mission");
        charging_mission_initiated_ = false;
        pub_path("NORMAL", stripped_path_poses_, false, "NORMAL", goal_handle);
        
        result->success = "true";
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "NORMAL goal completed successfully");
      } else {
        RCLCPP_ERROR(this->get_logger(), "Path planning failed");
        result->success = "false";
        goal_handle->abort(result);
      }
    } else {
      RCLCPP_WARN(this->get_logger(), "Battery too low: %.1f%% (threshold: %.1f%%)",
                  battery_percentage_, minimum_battery_threshold_);
      result->success = "false";
      goal_handle->abort(result);
    }
    robot_on_duty_ = false;
  }
  
  // ========== MOVE AND PICK (MNP) GOAL ==========
  else if (goal_data.goal_type == "MNP") {
    RCLCPP_INFO(this->get_logger(), "Processing MNP (Move and Pick) goal");
    
    if (battery_percentage_ > minimum_battery_threshold_) {
      if (get_path_plan(goal_data)) {
        RCLCPP_INFO(this->get_logger(), "Path received - executing move and pick");
        pub_path("MNP", stripped_path_poses_, true, "UNDOCK", goal_handle);
        
        result->success = "true";
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "MNP goal completed successfully");
      } else {
        RCLCPP_ERROR(this->get_logger(), "Path planning failed for MNP");
        result->success = "false";
        goal_handle->abort(result);
      }
    } else {
      RCLCPP_WARN(this->get_logger(), "Battery too low for MNP operation");
      result->success = "false";
      goal_handle->abort(result);
    }
    robot_on_duty_ = false;
  }
  
  // ========== UNDOCK GOAL ==========
  else if (goal_data.goal_type == "UNDOCK") {
    RCLCPP_INFO(this->get_logger(), "Processing UNDOCK goal");
    
    if (get_path_plan(goal_data)) {
      RCLCPP_INFO(this->get_logger(), "Path received - robot yaw: %.3f", robot_odom_yaw_);
      charging_mission_initiated_ = false;
      pub_path("UNDOCK", stripped_path_poses_, false, "UNDOCK", goal_handle);
      
      result->success = "true";
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "UNDOCK goal completed successfully");
    } else {
      RCLCPP_ERROR(this->get_logger(), "Path planning failed for UNDOCK");
      result->success = "false";
      goal_handle->abort(result);
    }
  }
  
  // ========== CHARGING GOAL ==========
  else if (goal_data.goal_type == "CHARGING") {
    RCLCPP_INFO(this->get_logger(), "Processing CHARGING goal");
    charging_mission_initiated_ = true;
    
    if (get_path_plan(goal_data)) {
      RCLCPP_INFO(this->get_logger(), "Charging path received - navigating to charger");
      pub_path("CHARGING", stripped_path_poses_, true, "DOCK", goal_handle);
      
      // Start charging process
      charge_battery(goal_handle);
      
      result->success = "true";
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "CHARGING goal completed successfully");
    } else {
      RCLCPP_ERROR(this->get_logger(), "Path planning failed for CHARGING");
      result->success = "false";
      goal_handle->abort(result);
    }
    robot_on_duty_ = false;
  }
  
  // ========== INVALID GOAL TYPE ==========
  else {
    RCLCPP_ERROR(this->get_logger(), "Invalid goal type: %s", goal_data.goal_type.c_str());
    result->success = "false";
    goal_handle->abort(result);
  }
}

void MissionScheduler::charge_battery(
  const std::shared_ptr<GoalHandleMissionScheduler> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Starting battery charging process");
  
  rclcpp::Rate rate(1s);
  std_msgs::msg::Int32 charge_msg;
  charge_msg.data = 1;
  charge_battery_pub_->publish(charge_msg);
  
  robot_on_duty_ = true;
  
  auto feedback = std::make_shared<MissionSchedulerAction::Feedback>();
  auto result = std::make_shared<MissionSchedulerAction::Result>();
  
  while (battery_percentage_ < max_charge_ && rclcpp::ok()) {
    // Check for cancellation
    if (goal_handle->is_canceling()) {
      RCLCPP_WARN(this->get_logger(), "Charging process cancelled by user");
      result->success = "cancelled";
      goal_handle->canceled(result);
      robot_on_duty_ = false;
      charge_msg.data = 0;
      charge_battery_pub_->publish(charge_msg);
      return;
    }
    
    RCLCPP_INFO(this->get_logger(), "Charging - Battery: %.1f%% / %d%%", 
                battery_percentage_, max_charge_);
    
    // Publish feedback
    feedback->pose = {
      robot_pose_data_.pose.pose.position.x,
      robot_pose_data_.pose.pose.position.y
    };
    goal_handle->publish_feedback(feedback);
    
    // Check if fully charged
    if (battery_percentage_ >= max_charge_) {
      RCLCPP_INFO(this->get_logger(), "Battery fully charged: %.1f%%", battery_percentage_);
      robot_on_duty_ = false;
      result->success = "true";
      goal_handle->succeed(result);
      break;
    }
    
    rate.sleep();
  }
  
  // Stop charging
  robot_on_duty_ = false;
  charge_msg.data = 0;
  charge_battery_pub_->publish(charge_msg);
  
  RCLCPP_INFO(this->get_logger(), "Charging process completed - Final battery: %.1f%%", 
              battery_percentage_);
}

void MissionScheduler::pub_path(
  const std::string & operation,
  std::vector<std::vector<std::vector<double>>> & stripped_path_poses,
  bool dock,
  const std::string & type,
  const std::shared_ptr<GoalHandleMissionScheduler> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Publishing path - Operation: %s, Type: %s, Dock: %d",
              operation.c_str(), type.c_str(), dock);
  
  // Apply inplace rotation check
  check_inplace_rotation(stripped_path_poses, true);
  
  int num_segments = static_cast<int>(stripped_path_poses.size());
  RCLCPP_INFO(this->get_logger(), "Total path segments: %d", num_segments);
  
  if (num_segments == 0) {
    RCLCPP_ERROR(this->get_logger(), "No path segments to publish");
    return;
  }
  
  std::string temp_operation = type;
  
  // Process each path segment
  for (int i = 0; i < num_segments; ++i) {
    // Check for goal cancellation
    if (goal_handle->is_canceling()) {
      RCLCPP_WARN(this->get_logger(), "Goal cancelled during path execution at segment %d", i);
      return;
    }
    
    // Publish feedback with current robot position
    auto feedback = std::make_shared<MissionSchedulerAction::Feedback>();
    feedback->pose = {
      robot_pose_data_.pose.pose.position.x,
      robot_pose_data_.pose.pose.position.y
    };
    goal_handle->publish_feedback(feedback);
    
    // Determine operation for this segment
    if (dock && i == (num_segments - 1)) {
      temp_operation = type;
      ignore_orientation(stripped_path_poses);
      RCLCPP_INFO(this->get_logger(), "Final segment - %s operation", temp_operation.c_str());
    } 
    else if (dock && i < (num_segments - 1)) {
      temp_operation = "NORMAL";
    } 
    else if (undock_) {
      temp_operation = "UNDOCK";
      undock_ = false;
      RCLCPP_INFO(this->get_logger(), "Undocking operation");
    } 
    else {
      temp_operation = type;
    }
    
    // Get segment details
    size_t segment_size = stripped_path_poses[i].size();
    if (segment_size == 0) {
      RCLCPP_WARN(this->get_logger(), "Empty segment %d, skipping", i);
      continue;
    }
    
    // Log segment information
    RCLCPP_INFO(this->get_logger(), 
                "Segment %d/%d: Start=(%.2f, %.2f, %.3f), End=(%.2f, %.2f, %.3f), Points=%zu, Op=%s",
                i + 1, num_segments,
                stripped_path_poses[i][0][0], stripped_path_poses[i][0][1], stripped_path_poses[i][0][2],
                stripped_path_poses[i][segment_size-1][0], 
                stripped_path_poses[i][segment_size-1][1], 
                stripped_path_poses[i][segment_size-1][2],
                segment_size, temp_operation.c_str());
    
    // TODO: Publish path segment to navigation stack
    // This would typically involve publishing to /cmd_vel or a navigation action server
    // Example:
    // nav_msgs::msg::Path path_msg;
    // ... populate path_msg from stripped_path_poses[i] ...
    // path_publisher_->publish(path_msg);
    
    // For now, simulate path execution with position check
    reached_pos_check(pos_num_, temp_operation);
    pos_num_++;
    pos_num_ = (pos_num_ > 110) ? 100 : pos_num_;
    
    // Small delay between segments
    rclcpp::sleep_for(100ms);
  }
  
  RCLCPP_INFO(this->get_logger(), "Path publication complete");
  goal_result_ = "";
}

void MissionScheduler::reached_pos_check(int pos_num, const std::string & operation)
{
  // Implementation for checking if position is reached
  // This would integrate with your navigation feedback system
  RCLCPP_DEBUG(this->get_logger(), "Checking position %d reached for operation: %s",
               pos_num, operation.c_str());
  
  // Wait for navigation to complete this segment
  // This is a placeholder - actual implementation would wait for nav feedback
  rclcpp::Rate rate(10ms);
  
  // TODO: Implement actual position reached check
  // Example: wait for goal_result_ to be updated by navigation
  /*
  while (goal_result_ != "reached" && rclcpp::ok()) {
    rate.sleep();
  }
  */
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Starting Mission Scheduler Server");
  
  auto node = std::make_shared<MissionScheduler>();
  
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  
  try {
    executor.spin();
  } catch (const std::exception & e) {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Exception in executor: %s", e.what());
  }
  
  rclcpp::shutdown();
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Mission Scheduler Server terminated");
  
  return 0;
}
