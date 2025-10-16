#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>

namespace wms_data
{

class WMSLoggerNode : public rclcpp::Node
{
public:
  WMSLoggerNode()
  : Node("wms_logger_node")
  {
    // Declare parameters
    this->declare_parameter<std::string>("log_file_path", "/tmp/wms_data/log.txt");
    
    // Get parameters
    std::string log_file_path = this->get_parameter("log_file_path").as_string();
    
    // Setup log file
    size_t last_slash = log_file_path.find_last_of('/');
    if (last_slash != std::string::npos) {
      std::string log_dir = log_file_path.substr(0, last_slash);
      system(("mkdir -p " + log_dir).c_str());
    }
    
    log_file_.open(log_file_path, std::ios::app);
    
    if (!log_file_.is_open()) {
      RCLCPP_ERROR(this->get_logger(), "Failed to open log file: %s", log_file_path.c_str());
      return;
    }
    
    // Subscriber
    wms_status_sub_ = this->create_subscription<std_msgs::msg::Bool>(
      "/wms_status", 10,
      std::bind(&WMSLoggerNode::wms_feedback_callback, this, std::placeholders::_1));
    
    RCLCPP_INFO(this->get_logger(), "WMS Logger Node started");
    RCLCPP_INFO(this->get_logger(), "Logging to: %s", log_file_path.c_str());
  }

  ~WMSLoggerNode()
  {
    if (log_file_.is_open()) {
      log_file_.close();
    }
  }

private:
  void wms_feedback_callback(const std_msgs::msg::Bool::SharedPtr msg)
  {
    auto now = std::chrono::system_clock::now();
    auto time_t_now = std::chrono::system_clock::to_time_t(now);
    
    std::stringstream ss;
    ss << std::put_time(std::localtime(&time_t_now), "%Y-%m-%d %H:%M:%S");
    
    std::string status_str = msg->data ? "WMS feedback True" : "WMS feedback FALSE";
    
    if (log_file_.is_open()) {
      log_file_ << ss.str() << " " << status_str << std::endl;
      log_file_.flush();
    }
    
    RCLCPP_DEBUG(this->get_logger(), "Data received: %s", status_str.c_str());
  }

  std::ofstream log_file_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr wms_status_sub_;
};

} // namespace wms_data

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<wms_data::WMSLoggerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
