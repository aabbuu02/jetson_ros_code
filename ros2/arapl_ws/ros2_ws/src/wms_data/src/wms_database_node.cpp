#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include "wms_data/msg/wms_data.hpp"
#include "wms_data/msg/wms_tasks.hpp"
#include "wms_data/msg/feedback.hpp"
#include "wms_data/http_client.hpp"
#include "wms_data/json_parser.hpp"

#include <fstream>
#include <sstream>

namespace wms_data
{

class WMSDatabaseNode : public rclcpp::Node
{
public:
  WMSDatabaseNode()
  : Node("wms_database_node")
  {
    // Declare parameters
    this->declare_parameter<std::string>("wms_url", "http://localhost:3333/");
    this->declare_parameter<std::string>("log_file_path", "/tmp/wms_data/logs/wms.log");
    this->declare_parameter<double>("update_rate", 1.0);
    this->declare_parameter<int>("timeout_seconds", 10);
    
    // Get parameters from config
    wms_url_ = this->get_parameter("wms_url").as_string();
    log_file_path_ = this->get_parameter("log_file_path").as_string();
    double update_rate = this->get_parameter("update_rate").as_double();
    int timeout = this->get_parameter("timeout_seconds").as_int();
    
    // Setup HTTP client
    http_client_ = std::make_shared<HttpClient>();
    http_client_->set_timeout(timeout);
    
    // Setup logging
    setup_logging();
    
    // Initialize state
    last_uid_ = "";
    last_action_ = -1;
    update_flag_ = true;
    
    // Publishers
    wms_pick_pub_ = this->create_publisher<msg::WMSTasks>("/wms_pick_tasks", 10);
    wms_drop_pub_ = this->create_publisher<msg::WMSTasks>("/wms_drop_tasks", 10);
    wms_status_pub_ = this->create_publisher<std_msgs::msg::Bool>("/wms_status", 10);
    
    // Subscriber
    lifter_feedback_sub_ = this->create_subscription<msg::Feedback>(
      "/lifterFeedback", 10,
      std::bind(&WMSDatabaseNode::lifter_feedback_callback, this, std::placeholders::_1));
    
    // Timer
    auto timer_period = std::chrono::milliseconds(static_cast<int>(1000.0 / update_rate));
    timer_ = this->create_wall_timer(
      timer_period,
      std::bind(&WMSDatabaseNode::timer_callback, this));
    
    RCLCPP_INFO(this->get_logger(), "WMS Database Node started");
    RCLCPP_INFO(this->get_logger(), "WMS URL: %s", wms_url_.c_str());
  }

private:
  void setup_logging()
  {
    // Create log directory if it doesn't exist
    size_t last_slash = log_file_path_.find_last_of('/');
    if (last_slash != std::string::npos) {
      std::string log_dir = log_file_path_.substr(0, last_slash);
      system(("mkdir -p " + log_dir).c_str());
    }
    
    log_file_.open(log_file_path_, std::ios::app);
  }

  void write_log(const std::string& message)
  {
    if (log_file_.is_open()) {
      auto now = this->now();
      log_file_ << "[" << now.seconds() << "] " << message << std::endl;
      log_file_.flush();
    }
  }

  void timer_callback()
  {
    if (!update_flag_) {
      RCLCPP_WARN(this->get_logger(), "Updating WMS failed, retrying...");
      update_data(id_record_, action_record_, acr_shelf_record_);
    }
    
    read_picking_data();
    read_dropping_data();
  }

  void read_picking_data()
  {
    std::string url = wms_url_ + "getWMSPickDataNew";
    std::string response;
    
    if (!http_client_->get(url, response)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to fetch pick data");
      return;
    }
    
    auto json_array = JsonParser::parse_array(response);
    auto wms_pick_tasks = msg::WMSTasks();
    
    for (const auto& item : json_array) {
      msg::WMSData task;
      
      task.unique_id = JsonParser::get_string(item, "Inst_Kid");
      task.date = JsonParser::get_string(item, "Inst_Date");
      task.priority = JsonParser::get_int(item, "Inst_Priority");
      task.rack = JsonParser::get_int(item, "Inst_RackNo");
      task.shelf = 1 + (JsonParser::get_int(item, "Inst_ShelfNo") % 10);
      task.bin = JsonParser::get_int(item, "Inst_BinNo");
      task.action = true;
      task.status = JsonParser::get_bool(item, "Inst_IsCompleted");
      task.ean_code = JsonParser::get_string(item, "Inst_EANCode");
      task.putaway_code = JsonParser::get_string(item, "Inst_PutawayBarcode");
      
      std::string bot_shelf_str = JsonParser::get_string(item, "Inst_BotShelfNo");
      if (bot_shelf_str.empty() || bot_shelf_str == "None") {
        task.acr_shelf = 0;
      } else {
        task.acr_shelf = std::stoi(bot_shelf_str);
      }
      
      task.whole_bin_no = JsonParser::get_string(item, "Inst_WholeBinNo");
      task.core = "None";
      task.level = "None";
      task.year = "None";
      task.date_data = "None";
      task.serial_no = "None";
      
      wms_pick_tasks.tasks.push_back(task);
    }
    
    wms_pick_pub_->publish(wms_pick_tasks);
  }

  void read_dropping_data()
  {
    std::string url = wms_url_ + "getWMSDropDataNew";
    std::string response;
    
    if (!http_client_->get(url, response)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to fetch drop data");
      return;
    }
    
    auto json_array = JsonParser::parse_array(response);
    auto wms_drop_tasks = msg::WMSTasks();
    
    for (const auto& item : json_array) {
      msg::WMSData task;
      
      task.unique_id = JsonParser::get_string(item, "Inst_Kid");
      task.date = JsonParser::get_string(item, "Inst_Date");
      task.priority = JsonParser::get_int(item, "Inst_ToPriority");
      task.rack = JsonParser::get_int(item, "Inst_ToRackNo");
      task.shelf = 1 + (JsonParser::get_int(item, "Inst_ToShelfNo") % 10);
      task.bin = JsonParser::get_int(item, "Inst_ToBinNo");
      task.action = true;
      task.status = JsonParser::get_bool(item, "Inst_ToIsCompleted");
      task.ean_code = JsonParser::get_string(item, "Inst_EANCode");
      task.putaway_code = JsonParser::get_string(item, "Inst_PutawayBarcode");
      
      std::string bot_shelf_str = JsonParser::get_string(item, "Inst_BotShelfNo");
      if (bot_shelf_str.empty() || bot_shelf_str == "None") {
        task.acr_shelf = 0;
      } else {
        task.acr_shelf = std::stoi(bot_shelf_str);
      }
      
      task.whole_bin_no = JsonParser::get_string(item, "Inst_ToWholeBinNo");
      task.core = "None";
      task.level = "None";
      task.year = "None";
      task.date_data = "None";
      task.serial_no = "None";
      
      wms_drop_tasks.tasks.push_back(task);
    }
    
    wms_drop_pub_->publish(wms_drop_tasks);
  }

  void update_data(const std::string& inst_kid, int action, int bot_shelf)
  {
    id_record_ = inst_kid;
    action_record_ = action;
    acr_shelf_record_ = bot_shelf;
    update_flag_ = false;
    
    RCLCPP_INFO(this->get_logger(), "WMS update request received");
    
    // Create JSON payload
    JsonParser::JsonObject payload;
    payload["Kid"] = inst_kid;
    payload["BotShelf"] = std::to_string(bot_shelf);
    payload["Action"] = action;
    
    std::string json_payload = JsonParser::stringify(payload);
    std::string url = wms_url_ + "UpdateWMSData";
    std::string response;
    
    if (!http_client_->post_json(url, json_payload, response)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to update WMS data");
      publish_feedback(false);
      return;
    }
    
    write_log("UID: " + inst_kid + ", Action: " + std::to_string(action) + ", Response: " + response);
    
    bool success = (response.find("success") != std::string::npos);
    update_flag_ = success;
    
    publish_feedback(success);
    
    if (success) {
      RCLCPP_INFO(this->get_logger(), "WMS update successful for UID: %s", inst_kid.c_str());
    } else {
      RCLCPP_WARN(this->get_logger(), "WMS update failed for UID: %s", inst_kid.c_str());
    }
  }

  void publish_feedback(bool success)
  {
    auto feedback_msg = std_msgs::msg::Bool();
    feedback_msg.data = success;
    wms_status_pub_->publish(feedback_msg);
  }

  void lifter_feedback_callback(const msg::Feedback::SharedPtr feedback_msg)
  {
    std::string inst_kid = feedback_msg->unique_id;
    int action = feedback_msg->action;
    int bot_shelf = feedback_msg->acr_shelf;
    bool instruction_completed = feedback_msg->status;
    bool fail_status = feedback_msg->fail_status;
    
    RCLCPP_DEBUG(this->get_logger(), 
                 "Feedback - UID: %s, Action: %d, BotShelf: %d, Status: %d, FailStatus: %d",
                 inst_kid.c_str(), action, bot_shelf, instruction_completed, fail_status);
    
    if (instruction_completed && !fail_status) {
      if (inst_kid != last_uid_ || action != last_action_) {
        if ((action == 1 && bot_shelf != 0) || action == 0) {
          last_uid_ = inst_kid;
          last_action_ = action;
          update_data(inst_kid, action, bot_shelf);
        }
      }
    }
  }

  // Member variables
  std::shared_ptr<HttpClient> http_client_;
  std::string wms_url_;
  std::string log_file_path_;
  std::ofstream log_file_;
  
  std::string last_uid_;
  int last_action_;
  std::string id_record_;
  int action_record_;
  int acr_shelf_record_;
  bool update_flag_;
  
  rclcpp::Publisher<msg::WMSTasks>::SharedPtr wms_pick_pub_;
  rclcpp::Publisher<msg::WMSTasks>::SharedPtr wms_drop_pub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr wms_status_pub_;
  rclcpp::Subscription<msg::Feedback>::SharedPtr lifter_feedback_sub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

} // namespace wms_data

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<wms_data::WMSDatabaseNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
