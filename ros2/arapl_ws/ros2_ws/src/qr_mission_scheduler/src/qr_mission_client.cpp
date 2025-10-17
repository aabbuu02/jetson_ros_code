#include "mission_scheduler/qr_mission_client.h"
#include <std_srvs/srv/trigger.hpp>
#include <chrono>

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

MissionClient::MissionClient(const rclcpp::NodeOptions & options)
: Node("mission_client", options)
{
  // Declare and get parameters
  this->declare_parameter("max_bins", 9);
  this->declare_parameter("starting_vertex", 48);
  this->declare_parameter("picked_count", 0);
  this->declare_parameter("charge_destination", 0);
  this->declare_parameter("rack_data_path", "/home/user/ros2_ws/rack_data.txt");
  this->declare_parameter("conveyor_data_path", "/ros2_ws/install/qr_mission_scheduler/share/qr_mission_scheduler/config/conveyor_data.txt");
  
  maximum_pick_size_ = this->get_parameter("max_bins").as_int();
  source_ = this->get_parameter("starting_vertex").as_int();
  picked_count_ = this->get_parameter("picked_count").as_int();
  charge_destination_ = this->get_parameter("charge_destination").as_int();
  
  // Initialize publishers
  lift_action_pub_ = this->create_publisher<lift_action::msg::LiftAction>("lift_action", 10);
  robot_location_change_pub_ = this->create_publisher<std_msgs::msg::Bool>(
    "/robot_location_change", 10);
  enable_break_pub_ = this->create_publisher<std_msgs::msg::Bool>("/brake_activator", 10);
  
  // Initialize subscribers
  wms_pick_data_sub_ = this->create_subscription<std_msgs::msg::String>(
    "/wms_pick_tasks", 10, std::bind(&MissionClient::wms_pick_data_callback, this, _1));
    
  wms_drop_data_sub_ = this->create_subscription<std_msgs::msg::String>(
    "/wms_drop_tasks", 10, std::bind(&MissionClient::wms_drop_data_callback, this, _1));
    
  battery_sub_ = this->create_subscription<sensor_msgs::msg::BatteryState>(
    "/battery_data", 10, std::bind(&MissionClient::battery_callback, this, _1));
    
  lift_feedback_sub_ = this->create_subscription<lift_action::msg::LiftAction>(
    "lifterFeedback", 10, std::bind(&MissionClient::lifter_feedback_callback, this, _1));
  
  // Initialize service server
  charging_service_ = this->create_service<std_srvs::srv::Trigger>(
    "initiate_charging",
    std::bind(&MissionClient::charging_request_callback, this, _1, _2));
  
  // Initialize action client
  action_client_ = rclcpp_action::create_client<MissionSchedulerAction>(
    this, "mission_server");
  
  // Load data files
  std::string rack_data_path = this->get_parameter("rack_data_path").as_string();
  std::string conveyor_data_path = this->get_parameter("conveyor_data_path").as_string();
  
  load_data(data_vector_);
  split_data(data_vector_, pose_data_);
  load_conveyor_location(conveyor_data_);
  split_data(conveyor_data_, conveyor_pose_data_);
  
  RCLCPP_INFO(this->get_logger(), "Data loading complete");
  
  // Wait for action server
  if (!action_client_->wait_for_action_server(10s)) {
    RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
    rclcpp::shutdown();
  }
  
  // Start main loop timer
  main_timer_ = this->create_wall_timer(
    1s, std::bind(&MissionClient::main_loop, this));
    
  RCLCPP_INFO(this->get_logger(), "Mission Client initialized");
}

MissionClient::~MissionClient()
{
}

void MissionClient::load_data(std::vector<std::string> & data_vector)
{
  std::string rack_data_path = this->get_parameter("rack_data_path").as_string();
  std::ifstream input(rack_data_path);
  
  RCLCPP_INFO(this->get_logger(), "Reading rack data from: %s", rack_data_path.c_str());
  
  if (input.is_open()) {
    std::string data;
    while (std::getline(input, data)) {
      data_vector.push_back(data);
    }
    input.close();
    RCLCPP_INFO(this->get_logger(), "Successfully loaded %zu rack data entries", 
                data_vector.size());
  } else {
    RCLCPP_ERROR(this->get_logger(), "Failed to open rack data file: %s", 
                 rack_data_path.c_str());
  }
}

void MissionClient::load_conveyor_location(std::vector<std::string> & conveyor_location)
{
  std::string conveyor_data_path = this->get_parameter("conveyor_data_path").as_string();
  std::ifstream input(conveyor_data_path);
  
  RCLCPP_INFO(this->get_logger(), "Reading conveyor data from: %s", 
              conveyor_data_path.c_str());
  
  if (input.is_open()) {
    std::string data;
    while (std::getline(input, data)) {
      conveyor_location.push_back(data);
    }
    input.close();
    RCLCPP_INFO(this->get_logger(), "Successfully loaded %zu conveyor data entries", 
                conveyor_location.size());
  } else {
    RCLCPP_ERROR(this->get_logger(), "Failed to open conveyor data file: %s", 
                 conveyor_data_path.c_str());
  }
}

void MissionClient::split_data(
  const std::vector<std::string> & data_vector,
  std::vector<std::vector<std::string>> & pose_data)
{
  char space_delimiter = ' ';
  std::vector<std::string> split_data{};
  
  for (const auto & it : data_vector) {
    split_data.clear();
    std::string word;
    std::stringstream sstream(it);
    
    while (std::getline(sstream, word, space_delimiter)) {
      split_data.push_back(word);
    }
    
    if (!split_data.empty()) {
      pose_data.push_back(split_data);
    }
  }
  
  RCLCPP_INFO(this->get_logger(), "Data split complete. Total rows: %zu", pose_data.size());
}

void MissionClient::battery_callback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
  battery_percentage_ = static_cast<int>(msg->percentage * 100.0f);
  
  if (battery_percentage_ < 20 && picking_location_data_.size() > 0 && picked_count_ == 0) {
    RCLCPP_INFO(this->get_logger(), "Battery low, calling for charging");
    is_battery_low_ = true;
  }
}

void MissionClient::lifter_feedback_callback(const lift_action::msg::LiftAction::SharedPtr msg)
{
  // The actual LiftAction message structure:
  // string unique_id
  // bool reached
  // int16 rack
  // int16 shelf
  // int16 acr_shelf
  // int16 action (0 = failed, 1 = success, 2 = in-progress, etc.)
  // string whole_bin_no
  // string putaway_barcode
  
  if (msg->reached) {
    lifter_confirmation_ = msg->reached;
    lifter_id_ = msg->unique_id;
    
    // Interpret action field: 0 or negative = failure, positive = success
    // Adjust this logic based on your actual convention
    fail_status_ = (msg->action <= 0);
    
    RCLCPP_INFO(this->get_logger(), 
                "Lifter confirmation received - ID: %s, Action: %d, Shelf: %d, Rack: %d, Status: %s", 
                lifter_id_.c_str(), msg->action, msg->shelf, msg->rack,
                fail_status_ ? "FAILED" : "SUCCESS");
  }
  
  // Store the complete lift action data
  lift_action_data_ = *msg;
}



void MissionClient::lifter_feedback_reset()
{
  lifter_confirmation_ = false;
  lifter_id_ = "";
  fail_status_ = false;
}

void MissionClient::wms_pick_data_split(const std::string & msg_data)
{
  // Parse WMS pick data - format: "unique_id,rack,bin,type;..."
  std::stringstream ss(msg_data);
  std::string task_str;
  
  picking_location_data_.clear();
  
  while (std::getline(ss, task_str, ';')) {
    if (task_str.empty()) continue;
    
    std::stringstream task_ss(task_str);
    std::string token;
    std::vector<std::string> tokens;
    
    while (std::getline(task_ss, token, ',')) {
      tokens.push_back(token);
    }
    
    if (tokens.size() >= 4) {
      WMSTask task;
      task.unique_id = tokens[0];
      task.rack = std::stoi(tokens[1]);
      task.bin = std::stoi(tokens[2]);
      task.type = tokens[3];
      picking_location_data_.push_back(task);
    }
  }
  
  RCLCPP_INFO(this->get_logger(), "Received %zu picking tasks", picking_location_data_.size());
}

void MissionClient::wms_drop_data_split(const std::string & msg_data)
{
  // Parse WMS drop data - format: "unique_id,rack,bin,type;..."
  std::stringstream ss(msg_data);
  std::string task_str;
  
  dropping_location_data_.clear();
  
  while (std::getline(ss, task_str, ';')) {
    if (task_str.empty()) continue;
    
    std::stringstream task_ss(task_str);
    std::string token;
    std::vector<std::string> tokens;
    
    while (std::getline(task_ss, token, ',')) {
      tokens.push_back(token);
    }
    
    if (tokens.size() >= 4) {
      WMSTask task;
      task.unique_id = tokens[0];
      task.rack = std::stoi(tokens[1]);
      task.bin = std::stoi(tokens[2]);
      task.type = tokens[3];
      dropping_location_data_.push_back(task);
    }
  }
  
  RCLCPP_INFO(this->get_logger(), "Received %zu dropping tasks", dropping_location_data_.size());
}

void MissionClient::wms_pick_data_callback(const std_msgs::msg::String::SharedPtr msg)
{
  wms_pick_data_split(msg->data);
}

void MissionClient::wms_drop_data_callback(const std_msgs::msg::String::SharedPtr msg)
{
  wms_drop_data_split(msg->data);
}

void MissionClient::charging_request_callback(
  const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
  std::shared_ptr<std_srvs::srv::Trigger::Response> response)
{
  (void)request;
  
  if (!is_charging_requested_) {
    is_charging_requested_ = true;
    response->success = true;
    response->message = "Charging request accepted";
    RCLCPP_INFO(this->get_logger(), "Charging request accepted");
  } else {
    response->success = false;
    response->message = "Charging already requested";
    RCLCPP_WARN(this->get_logger(), "Charging already requested");
  }
}

void MissionClient::goal_response_callback(
  const GoalHandleMissionScheduler::SharedPtr & goal_handle)
{
  if (!goal_handle) {
    RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
  } else {
    RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
  }
}

void MissionClient::feedback_callback(
  GoalHandleMissionScheduler::SharedPtr,
  const std::shared_ptr<const MissionSchedulerAction::Feedback> feedback)
{
  RCLCPP_DEBUG(this->get_logger(), "Received feedback - pose size: %zu", feedback->pose.size());
}

void MissionClient::result_callback(const GoalHandleMissionScheduler::WrappedResult & result)
{
  current_goal_handle_.reset();
  
  switch (result.code) {
    case rclcpp_action::ResultCode::SUCCEEDED:
      RCLCPP_INFO(this->get_logger(), "Goal succeeded! Result: %s", result.result->success.c_str());
      source_ = destination_;
      reached_goal_ = true;
      
      // Publish brake activation
      {
        std_msgs::msg::Bool break_msg;
        break_msg.data = true;
        enable_break_pub_->publish(break_msg);
      }
      
      // Publish location change
      {
        std_msgs::msg::Bool location_msg;
        location_msg.data = false;
        robot_location_change_pub_->publish(location_msg);
      }
      
      if (is_charging_requested_) {
        is_charge_initiated_ = false;
        is_charging_requested_ = false;
      }
      break;
      
    case rclcpp_action::ResultCode::ABORTED:
      RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
      break;
      
    case rclcpp_action::ResultCode::CANCELED:
      RCLCPP_WARN(this->get_logger(), "Goal was canceled");
      if (!is_charging_requested_ && is_charge_initiated_) {
        RCLCPP_WARN(this->get_logger(), "Charging operation was cancelled");
        is_charge_initiated_ = false;
      }
      break;
      
    default:
      RCLCPP_ERROR(this->get_logger(), "Unknown result code");
      break;
  }
}

void MissionClient::call_action_server(
  const std::string & goal_type,
  int source,
  int destination)
{
  if (source == destination) {
    RCLCPP_INFO(this->get_logger(), "Source and destination are same: %d", source);
    
    std_msgs::msg::Bool location_msg;
    location_msg.data = false;
    robot_location_change_pub_->publish(location_msg);
    
    std_msgs::msg::Bool break_msg;
    break_msg.data = true;
    enable_break_pub_->publish(break_msg);
    
    source_ = destination;
    reached_goal_ = true;
    return;
  }
  
  RCLCPP_INFO(this->get_logger(), "Sending goal: %s from %d to %d", 
              goal_type.c_str(), source, destination);
  
  // Publish location change
  std_msgs::msg::Bool location_msg;
  location_msg.data = true;
  robot_location_change_pub_->publish(location_msg);
  
  // Disable brake
  std_msgs::msg::Bool break_msg;
  break_msg.data = false;
  enable_break_pub_->publish(break_msg);
  
  // Send goal
  auto goal_msg = MissionSchedulerAction::Goal();
  goal_msg.goal_type.goal_type = goal_type;
  goal_msg.goal_type.source = static_cast<double>(source);
  goal_msg.goal_type.destination = static_cast<double>(destination);
  
  auto send_goal_options = rclcpp_action::Client<MissionSchedulerAction>::SendGoalOptions();
  send_goal_options.goal_response_callback =
    std::bind(&MissionClient::goal_response_callback, this, _1);
  send_goal_options.feedback_callback =
    std::bind(&MissionClient::feedback_callback, this, _1, _2);
  send_goal_options.result_callback =
    std::bind(&MissionClient::result_callback, this, _1);
  
  auto goal_handle_future = action_client_->async_send_goal(goal_msg, send_goal_options);
  
  // Wait for goal to be accepted
  if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), goal_handle_future) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    current_goal_handle_ = goal_handle_future.get();
    if (!current_goal_handle_) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
      return;
    }
  } else {
    RCLCPP_ERROR(this->get_logger(), "Failed to send goal");
  }
}

void MissionClient::go_for_charging()
{
  RCLCPP_ERROR(this->get_logger(), "Going for charging from source: %d to destination: %d",
               source_, charge_destination_);
  
  goal_type_ = "CHARGING";
  destination_ = charge_destination_;
  call_action_server(goal_type_, source_, destination_);
}

void MissionClient::rack_to_conveyor(bool action)
{
  RCLCPP_INFO(this->get_logger(), "RACK TO CONVEYOR operation started");
  
  if (picking_location_data_.empty()) {
    RCLCPP_WARN(this->get_logger(), "No picking location data available");
    return;
  }
  
  // Extract bin and rack numbers
  bin_number_ = picking_location_data_[0].bin - 100;
  rack_number_ = picking_location_data_[0].rack - 1000;
  rack_number_ = rack_number_ / 10;
  
  if (rack_number_ < 0) {
    RCLCPP_ERROR(this->get_logger(), "Invalid rack number: %d from rack: %d",
                 rack_number_, picking_location_data_[0].rack);
    return;
  }
  
  id_ = picking_location_data_[0].unique_id;
  RCLCPP_WARN(this->get_logger(), "ID: %s, Rack: %d, Bin: %d",
              id_.c_str(), rack_number_, bin_number_);
  
  // Get destination from pose data
  if (rack_number_ < static_cast<int>(pose_data_.size()) &&
      bin_number_ < static_cast<int>(pose_data_[rack_number_].size())) {
    destination_ = std::stoi(pose_data_[rack_number_][bin_number_]);
  } else {
    RCLCPP_ERROR(this->get_logger(), "Invalid pose data indices");
    return;
  }
  
  if (destination_ != source_) {
    reached_goal_ = false;
  }
  
  // Prepare lift action data - CORRECTED for actual message structure
  lift_action_data_.unique_id = id_;
  lift_action_data_.reached = reached_goal_;
  lift_action_data_.shelf = static_cast<int16_t>(bin_number_);
  lift_action_data_.rack = static_cast<int16_t>(rack_number_);
  lift_action_data_.action = action ? 1 : 0;  // 1 = pick/action, 0 = no action
  lift_action_data_.acr_shelf = 0;  // Set appropriately if needed
  lift_action_data_.whole_bin_no = "";  // Set if needed
  lift_action_data_.putaway_barcode = "";  // Set if needed
  
  lifter_feedback_reset();
  
  RCLCPP_INFO(this->get_logger(), "Publishing lift action with reached: %d",
              lift_action_data_.reached);
  lift_action_pub_->publish(lift_action_data_);
  
  // Call action server
  goal_type_ = "MNP";
  call_action_server(goal_type_, source_, destination_);
  
  // Wait for lifter confirmation
  lift_action_pub_->publish(lift_action_data_);
  
  rclcpp::Rate rate(1s);
  while (lifter_confirmation_ != true || id_ != lifter_id_) {
    lift_action_data_.reached = reached_goal_;
    lift_action_pub_->publish(lift_action_data_);
    RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 5000, 
                         "Waiting for lift action confirmation");
    rate.sleep();
    
    if (!rclcpp::ok()) break;
  }
  
  RCLCPP_INFO(this->get_logger(), "Lifter confirmation: %d, ID match: %s == %s",
              lifter_confirmation_, id_.c_str(), lifter_id_.c_str());
  
  if (lifter_confirmation_ && id_ == lifter_id_) {
    RCLCPP_INFO(this->get_logger(), "Lifting done, removing picking location: %s",
                id_.c_str());
    
    try {
      if (!picking_location_data_.empty()) {
        last_task_unique_id_ = id_;
        picking_location_data_.erase(picking_location_data_.begin());
        RCLCPP_INFO(this->get_logger(), "Picking location data size after erasing: %zu",
                    picking_location_data_.size());
      }
    } catch (const std::exception & e) {
      RCLCPP_ERROR(this->get_logger(), "Exception in erasing picking location data: %s", 
                   e.what());
    }
  }
  
  reached_goal_ = false;
  
  // Update picked count
  if (action && !fail_status_) {
    picked_count_++;
    RCLCPP_WARN(this->get_logger(), "Picked count increased to: %d", picked_count_);
  }
  
  if (!action && reset_flag_ && !fail_status_) {
    picked_count_--;
    reset_flag_ = false;
  } else {
    reset_flag_ = true;
  }
  
  RCLCPP_WARN(this->get_logger(), "DONE RACK TO CONVEYOR. Picked count: %d", picked_count_);
}

void MissionClient::drop_in_conveyor(bool action)
{
  RCLCPP_INFO(this->get_logger(), "DROP IN CONVEYOR operation started");
  
  if (dropping_location_data_.empty()) {
    RCLCPP_WARN(this->get_logger(), "No dropping location data available");
    return;
  }
  
  // Extract bin and rack numbers
  bin_number_ = dropping_location_data_[0].bin - 100;
  rack_number_ = dropping_location_data_[0].rack - 1000;
  rack_number_ = rack_number_ / 10;
  
  if (rack_number_ < 0) {
    RCLCPP_ERROR(this->get_logger(), "Invalid rack number: %d from rack: %d",
                 rack_number_, dropping_location_data_[0].rack);
    return;
  }
  
  id_ = dropping_location_data_[0].unique_id;
  RCLCPP_INFO(this->get_logger(), "ID: %s, Rack: %d, Bin: %d",
              id_.c_str(), rack_number_, bin_number_);
  
  // Get destination from pose data
  if (rack_number_ < static_cast<int>(pose_data_.size()) &&
      bin_number_ < static_cast<int>(pose_data_[rack_number_].size())) {
    destination_ = std::stoi(pose_data_[rack_number_][bin_number_]);
  } else {
    RCLCPP_ERROR(this->get_logger(), "Invalid pose data indices");
    return;
  }
  
  if (destination_ != source_) {
    reached_goal_ = false;
  }
  
  // Prepare lift action data - CORRECTED for actual message structure
  lift_action_data_.unique_id = id_;
  lift_action_data_.reached = reached_goal_;
  lift_action_data_.shelf = static_cast<int16_t>(bin_number_);
  lift_action_data_.rack = static_cast<int16_t>(rack_number_);
  lift_action_data_.action = action ? 1 : 0;  // 1 = drop/action, 0 = no action
  lift_action_data_.acr_shelf = 0;  // Set appropriately if needed
  lift_action_data_.whole_bin_no = "";  // Set if needed
  lift_action_data_.putaway_barcode = "";  // Set if needed
  
  lifter_feedback_reset();
  
  RCLCPP_INFO(this->get_logger(), "Publishing lift action with reached: %d",
              lift_action_data_.reached);
  lift_action_pub_->publish(lift_action_data_);
  
  // Call action server
  goal_type_ = "NORMAL";
  call_action_server(goal_type_, source_, destination_);
  
  // Publish lift action after reaching destination
  lift_action_pub_->publish(lift_action_data_);
  
  RCLCPP_INFO(this->get_logger(), "Dropping ID: %s", id_.c_str());
  
  // Wait until goal is reached
  rclcpp::Rate rate(100ms);
  while (reached_goal_) {
    lift_action_data_.reached = true;
    lift_action_pub_->publish(lift_action_data_);
    
    RCLCPP_DEBUG_THROTTLE(this->get_logger(), *this->get_clock(), 5000,
                          "Lifter confirmation: %d, ID: %s, Lifter ID: %s",
                          lifter_confirmation_, id_.c_str(), lifter_id_.c_str());
    
    if (lifter_confirmation_ && id_ == lifter_id_) {
      try {
        if (!dropping_location_data_.empty()) {
          dropping_last_task_unique_id_ = id_;
          dropping_location_data_.erase(dropping_location_data_.begin());
          RCLCPP_INFO(this->get_logger(), "Dropping location data size after erasing: %zu",
                      dropping_location_data_.size());
        }
      } catch (const std::exception & e) {
        RCLCPP_ERROR(this->get_logger(), "Exception in erasing dropping location data: %s",
                     e.what());
      }
      
      RCLCPP_INFO(this->get_logger(), "Dropped at position: %d", dropping_pos_count_);
      dropping_pos_count_++;
      
      // Update picked count
      if (action && !fail_status_) {
        picked_count_--;
      }
      
      reached_goal_ = false;
      
      if (!action && !fail_status_) {
        RCLCPP_WARN(this->get_logger(), "Inside drop conveyor, picked count: %d",
                    picked_count_);
      }
      break;
    }
    
    if (!rclcpp::ok()) break;
    rate.sleep();
  }
  
  RCLCPP_INFO(this->get_logger(), "DONE DROP IN CONVEYOR");
}


void MissionClient::main_loop()
{
  RCLCPP_INFO_THROTTLE(this->get_logger(), *this->get_clock(), 10000,
                       "Main loop - Picking locations: %zu, Source: %d, Picked count: %d",
                       picking_location_data_.size(), source_, picked_count_);
  
  // Process picking tasks
  if (!picking_location_data_.empty()) {
    RCLCPP_INFO(this->get_logger(), "First picking data: %s, Rack: %d, Bin: %d",
                picking_location_data_[0].unique_id.c_str(),
                picking_location_data_[0].rack,
                picking_location_data_[0].bin);
    
    if (last_task_unique_id_ != picking_location_data_[0].unique_id) {
      rack_to_conveyor(true);
    }
  }
  
  // Process dropping tasks
  if (picked_count_ > 0 && !picked_from_conveyor_ && !dropped_flag_) {
    dropping_id_ = "Dropping";
    drop_in_conveyor(true);
    dropped_flag_ = false;
  }
  
  if (picked_count_ > 0 && picked_from_conveyor_) {
    dropping_id_ = "Dropping";
    rack_to_conveyor(false);
  }
  
  // Handle charging requests
  if (is_charging_requested_) {
    is_charge_initiated_ = true;
    go_for_charging();
  }
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<MissionClient>();
  
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();
  
  rclcpp::shutdown();
  return 0;
}
