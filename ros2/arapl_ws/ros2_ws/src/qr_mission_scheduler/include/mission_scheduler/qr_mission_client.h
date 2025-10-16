#ifndef QR_MISSION_CLIENT_H
#define QR_MISSION_CLIENT_H

#include <memory>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "qr_mission_scheduler/action/mission_scheduler.hpp"
#include "qr_mission_scheduler/msg/goal_msg.hpp"

#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/int32.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "lift_action/msg/lift_action.hpp"
#include "std_srvs/srv/trigger.hpp"

// WMS task structure
struct WMSTask {
  std::string unique_id;
  int rack;
  int bin;
  std::string type;
};

class MissionClient : public rclcpp::Node
{
public:
  using MissionSchedulerAction = qr_mission_scheduler::action::MissionScheduler;
  using GoalHandleMissionScheduler = rclcpp_action::ClientGoalHandle<MissionSchedulerAction>;

  explicit MissionClient(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  virtual ~MissionClient();

private:
  // Action client
  rclcpp_action::Client<MissionSchedulerAction>::SharedPtr action_client_;
  
  // Publishers
  rclcpp::Publisher<lift_action::msg::LiftAction>::SharedPtr lift_action_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr robot_location_change_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr enable_break_pub_;
  
  // Subscribers
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr wms_pick_data_sub_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr wms_drop_data_sub_;
  rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
  rclcpp::Subscription<lift_action::msg::LiftAction>::SharedPtr lift_feedback_sub_;
  
  // Service server
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr charging_service_;
  
  // Timers
  rclcpp::TimerBase::SharedPtr main_timer_;
  
  // Data members
  bool is_battery_low_{false};
  int bin_number_{1};
  int rack_number_{0};
  std::string id_{};
  bool lifter_confirmation_{false};
  std::string lifter_id_{};
  lift_action::msg::LiftAction lift_action_data_{};
  bool reached_goal_{false};
  bool fail_status_{false};
  std::string dropping_id_{"Dropping"};
  int picked_count_{0};
  int dropping_pos_count_{0};
  
  std::vector<int> dropping_poses_{5, 6, 7, 8};
  std::vector<std::string> conveyor_data_{};
  bool picked_from_conveyor_{false};
  std::string last_task_unique_id_{};
  std::string dropping_last_task_unique_id_{};
  bool reset_flag_{true};
  bool dropped_flag_{true};
  int maximum_pick_size_{9};
  
  std::vector<std::string> data_vector_;
  std::vector<WMSTask> picking_location_data_{};
  std::vector<WMSTask> dropping_location_data_{};
  std::vector<std::vector<std::string>> pose_data_{};
  std::vector<std::vector<std::string>> conveyor_pose_data_{};
  std::vector<int> dropping_location_{5, 6, 7, 8};
  
  int starting_location_{1};
  int source_{48};
  float temp_source_{1.0f};
  int destination_{1};
  std::string goal_type_{"NORMAL"};
  int battery_percentage_{100};
  int charge_destination_{0};
  bool is_charging_requested_{false};
  bool is_charge_initiated_{false};
  
  std::shared_ptr<GoalHandleMissionScheduler> current_goal_handle_;
  
  // Core methods
  void main_loop();
  void call_action_server(const std::string & goal_type, int source, int destination);
  void go_for_charging();
  void rack_to_conveyor(bool action);
  void drop_in_conveyor(bool action);
  
  // Data loading methods
  void load_data(std::vector<std::string> & data_vector);
  void load_conveyor_location(std::vector<std::string> & conveyor_location);
  void split_data(const std::vector<std::string> & data_vector,
                  std::vector<std::vector<std::string>> & pose_data);
  
  // Callbacks
  void battery_callback(const sensor_msgs::msg::BatteryState::SharedPtr msg);
  void lifter_feedback_callback(const lift_action::msg::LiftAction::SharedPtr msg);
  void wms_pick_data_callback(const std_msgs::msg::String::SharedPtr msg);
  void wms_drop_data_callback(const std_msgs::msg::String::SharedPtr msg);
  void charging_request_callback(
    const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response);
  
  // Action callbacks
  void goal_response_callback(const GoalHandleMissionScheduler::SharedPtr & goal_handle);
  void feedback_callback(
    GoalHandleMissionScheduler::SharedPtr,
    const std::shared_ptr<const MissionSchedulerAction::Feedback> feedback);
  void result_callback(const GoalHandleMissionScheduler::WrappedResult & result);
  
  // Helper methods
  void wms_pick_data_split(const std::string & msg_data);
  void wms_drop_data_split(const std::string & msg_data);
  void lifter_feedback_reset();
};

#endif // QR_MISSION_CLIENT_H
