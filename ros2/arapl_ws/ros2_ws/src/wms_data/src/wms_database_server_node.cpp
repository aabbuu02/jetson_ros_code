#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include "wms_data/msg/wms_data.hpp"
#include "wms_data/msg/wms_tasks.hpp"
#include "wms_data/msg/feedback.hpp"
#include "wms_data/http_client.hpp"
#include "wms_data/json_parser.hpp"
#include "wms_data/xml_parser.hpp"

#include <fstream>
#include <sstream>

namespace wms_data
{

class WMSDatabaseServerNode : public rclcpp::Node
{
public:
  WMSDatabaseServerNode()
  : Node("wms_database_server_node")
  {
    // Declare parameters
    this->declare_parameter<std::string>("wms_url", "http://192.168.1.10/wms_webservice/Services.asmx");
    this->declare_parameter<std::string>("log_file_path", "/tmp/wms_data/logs/wms_server.log");
    this->declare_parameter<double>("update_rate", 1.0);
    this->declare_parameter<int>("timeout_seconds", 10);
    
    // Get parameters
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
      std::bind(&WMSDatabaseServerNode::lifter_feedback_callback, this, std::placeholders::_1));
    
    // Timer
    auto timer_period = std::chrono::milliseconds(static_cast<int>(1000.0 / update_rate));
    timer_ = this->create_wall_timer(
      timer_period,
      std::bind(&WMSDatabaseServerNode::timer_callback, this));
    
    RCLCPP_INFO(this->get_logger(), "WMS Database Server Node started (SOAP/XML mode)");
    RCLCPP_INFO(this->get_logger(), "WMS URL: %s", wms_url_.c_str());
  }

private:
  void setup_logging()
  {
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
    std::string soap_body = "<getWMSPickDataNew xmlns=\"http://tempuri.org/\" />";
    std::string xml_payload = XmlParser::create_soap_envelope(soap_body);
    
    std::string response;
    if (!http_client_->post_xml(wms_url_, xml_payload, response)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to fetch pick data");
      return;
    }
    
    std::string json_str = XmlParser::extract_tag_content(response, "getWMSPickDataNewResult");
    auto json_array = JsonParser::parse_array(json_str);
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
      task.acr_shelf = (bot_shelf_str.empty() || bot_shelf_str == "None") ? 0 : std::stoi(bot_shelf_str);
      
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
    std::string soap_body = "<getWMSDropDataNew xmlns=\"http://tempuri.org/\" />";
    std::string xml_payload = XmlParser::create_soap_envelope(soap_body);
    
    std::string response;
    if (!http_client_->post_xml(wms_url_, xml_payload, response)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to fetch drop data");
      return;
    }
    
    std::string json_str = XmlParser::extract_tag_content(response, "getWMSDropDataNewResult");
    auto json_array = JsonParser::parse_array(json_str);
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
      task.acr_shelf = (bot_shelf_str.empty() || bot_shelf_str == "None") ? 0 : std::stoi(bot_shelf_str);
      
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
    
    // Build SOAP body using string concatenation
    std::string soap_body = 
      "<UpdateWMSData xmlns=\"http://tempuri.org/\">" +
      std::string("<Kid>") + inst_kid + std::string("</Kid>") +
      std::string("<BotShelf>") + std::to_string(bot_shelf) + std::string("</BotShelf>") +
      std::string("<Action>") + std::to_string(action) + std::string("</Action>") +
      std::string("</UpdateWMSData>");
    
    std::string xml_payload = XmlParser::create_soap_envelope(soap_body);
    std::string response;
    
    if (!http_client_->post_xml(wms_url_, xml_payload, response)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to update WMS data");
      publish_feedback(false);
      return;
    }
    
    std::string result = XmlParser::extract_tag_content(response, "UpdateWMSDataResult");
    write_log("UID: " + inst_kid + ", Action: " + std::to_string(action) + ", Result: " + result);
    
    bool success = (result == "true");
    update_flag_ = success;
    
    publish_feedback(success);
  }

  void publish_feedback(bool success)
  {
    auto feedback_msg = std_msgs::msg::Bool();
    feedback_msg.data = success;
    wms_status_pub_->publish(feedback_msg);
  }

  void lifter_feedback_callback(const msg::Feedback::SharedPtr feedback_msg)
  {
    if (feedback_msg->status && !feedback_msg->fail_status) {
      if (feedback_msg->unique_id != last_uid_ || feedback_msg->action != last_action_) {
        if ((feedback_msg->action == 1 && feedback_msg->acr_shelf != 0) || feedback_msg->action == 0) {
          last_uid_ = feedback_msg->unique_id;
          last_action_ = feedback_msg->action;
          update_data(feedback_msg->unique_id, feedback_msg->action, feedback_msg->acr_shelf);
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
  auto node = std::make_shared<wms_data::WMSDatabaseServerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
