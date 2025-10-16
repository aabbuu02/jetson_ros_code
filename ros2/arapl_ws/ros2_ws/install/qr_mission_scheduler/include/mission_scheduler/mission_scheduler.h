#ifndef MISSION_SCHEDULER_H
#define MISSION_SCHEDULER_H

#include <memory>
#include <string>
#include <vector>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "qr_mission_scheduler/action/mission_scheduler.hpp"
#include "qr_mission_scheduler/srv/get_goal.hpp"
#include "qr_mission_scheduler/msg/goal_msg.hpp"

#include "std_msgs/msg/float32.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/int32.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/path.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "graph_msgs/srv/get_graph_plan.hpp"

class MissionScheduler : public rclcpp::Node
{
public:
  using MissionSchedulerAction = qr_mission_scheduler::action::MissionScheduler;
  using GoalHandleMissionScheduler = rclcpp_action::ServerGoalHandle<MissionSchedulerAction>;

  explicit MissionScheduler(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  virtual ~MissionScheduler();

private:
  // Action server
  rclcpp_action::Server<MissionSchedulerAction>::SharedPtr action_server_;
  
  // Subscribers
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr robot_odom_sub_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr robot_goal_result_sub_;
  
  // Publishers
  rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr charge_battery_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr robot_status_pub_;
  
  // Service clients
  rclcpp::Client<graph_msgs::srv::GetGraphPlan>::SharedPtr path_client_;
  
  // Data members
  nav_msgs::msg::Odometry robot_pose_data_;
  std_msgs::msg::Bool robot_status_data_;
  std::string goal_result_;
  
  std::vector<std::vector<std::vector<double>>> stripped_path_poses_;
  std::vector<std::vector<double>> path_data_vec_2d_;
  std::vector<double> path_data_vec_1d_;
  std::vector<std::vector<double>> path_filtered_data_vec_2d_;
  std::vector<double> path_filtered_data_vec_1d_;
  
  double robot_odom_yaw_{0.0};
  double goal_yaw_for_charging_{0.0};
  float battery_percentage_{100.0};
  float minimum_battery_threshold_{48.0};
  int max_charge_{98};
  int pos_num_{100};
  
  bool robot_on_duty_{false};
  bool undock_{false};
  bool charging_mission_initiated_{false};
  bool reset_flag_{false};
  
  // Action server callbacks
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const MissionSchedulerAction::Goal> goal);
    
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleMissionScheduler> goal_handle);
    
  void handle_accepted(const std::shared_ptr<GoalHandleMissionScheduler> goal_handle);
  
  void execute(const std::shared_ptr<GoalHandleMissionScheduler> goal_handle);
  
  // Subscriber callbacks
  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
  void goal_result_callback(const std_msgs::msg::String::SharedPtr msg);
  void battery_callback_data(const sensor_msgs::msg::BatteryState::SharedPtr msg);
  
  // Core functionality
  void execute_goal(const qr_mission_scheduler::msg::GoalMsg & goal_data,
                    const std::shared_ptr<GoalHandleMissionScheduler> goal_handle);
  bool get_path_plan(const qr_mission_scheduler::msg::GoalMsg & goal);
  void split_path(const graph_msgs::srv::GetGraphPlan::Response & response_data,
                  std::vector<std::vector<std::vector<double>>> & stripped_path_poses);
  void pub_path(const std::string & operation,
                std::vector<std::vector<std::vector<double>>> & stripped_path_poses,
                bool dock, const std::string & type,
                const std::shared_ptr<GoalHandleMissionScheduler> goal_handle);
  void charge_battery(const std::shared_ptr<GoalHandleMissionScheduler> goal_handle);
  
  // Path processing methods
  void check_straight_line(const graph_msgs::srv::GetGraphPlan::Response & response_data);
  void check_inplace_rotation(std::vector<std::vector<std::vector<double>>> & stripped_path_poses,
                               bool robot_orientation);
  void ignore_orientation(std::vector<std::vector<std::vector<double>>> & stripped_path_poses,
                          bool robot_orientation = false);
  void reverse_orientation(std::vector<std::vector<std::vector<double>>> & stripped_path_poses);
  void correct_orientation(std::vector<std::vector<std::vector<double>>> & stripped_path_poses);
  void charging_path_correction(std::vector<std::vector<std::vector<double>>> & stripped_path_poses);
  void reached_pos_check(int pos_num, const std::string & operation);
};

#endif // MISSION_SCHEDULER_H
