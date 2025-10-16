#include "emergency_handler/emergency_handler.h"

using namespace std::chrono_literals;
using std::placeholders::_1;

/**
 * @brief Constructor for the EmergencyHandler
 */
EmergencyHandler::EmergencyHandler()
: Node("emergency_handler"),
  m_lidar_forward_(false),
  m_lidar_backward_(false),
  m_e_stop_button_(false),
  m_e_stop_web_app_(false),
  m_e_stop_tag_detection_(false),
  m_key_linear_vel_(0.0),
  m_key_angular_vel_(0.0),
  m_linear_vel_(0.0)
{
  RCLCPP_INFO(this->get_logger(), "EmergencyHandler Constructor called");

  // Quality of Service settings for reliable communication
  auto qos = rclcpp::QoS(rclcpp::KeepLast(10)).reliable();

  // Initialize subscribers
  detection_sub_ = this->create_subscription<anscer_msgs::msg::SafetyFields>(
    "/obstacle_detection", qos,
    std::bind(&EmergencyHandler::detectionCallback, this, _1));

  button_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    "/e_stop/button", qos,
    std::bind(&EmergencyHandler::eStopButtonCallback, this, _1));

  web_app_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    "/e_stop/webApp", qos,
    std::bind(&EmergencyHandler::eStopWebAppCallback, this, _1));

  cmd_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
    "cmd_vel", qos,
    std::bind(&EmergencyHandler::cmdVelCallback, this, _1));

  key_cmd_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
    "joy/cmd_vel", qos,
    std::bind(&EmergencyHandler::keyCmdVelCallback, this, _1));

  tag_det_fail_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    "e_stop/tag_detection", qos,
    std::bind(&EmergencyHandler::tagDetFailCallback, this, _1));

  // Initialize publishers
  e_stop_pub_ = this->create_publisher<std_msgs::msg::Bool>("e_stop", qos);
  e_stop_lidar_pub_ = this->create_publisher<std_msgs::msg::Bool>("e_stop/lidar", qos);
  e_stop_button_pub_ = this->create_publisher<std_msgs::msg::Bool>("e_stop/buttons", qos);

  // Create timer for publishing at 20Hz
  timer_ = this->create_wall_timer(
    50ms, std::bind(&EmergencyHandler::publishMessages, this));

  RCLCPP_INFO(this->get_logger(), "EmergencyHandler initialized successfully");
}

/**
 * @brief Destructor for the EmergencyHandler
 */
EmergencyHandler::~EmergencyHandler()
{
  RCLCPP_INFO(this->get_logger(), "EmergencyHandler shutting down");
}

/**
 * @brief Callback for checking if object detected on front/rear of robot
 */
void EmergencyHandler::detectionCallback(const anscer_msgs::msg::SafetyFields::SharedPtr msg)
{
  if (!msg->safety.empty()) {
    m_lidar_forward_ = msg->safety[0].is_front;
    m_lidar_backward_ = msg->safety[0].is_rear;
  }
}

/**
 * @brief Callback for emergency stop button
 */
void EmergencyHandler::eStopButtonCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
  m_e_stop_button_ = msg->data;
  RCLCPP_DEBUG(this->get_logger(), "E-Stop button: %s", msg->data ? "PRESSED" : "RELEASED");
}

/**
 * @brief Callback for emergency stop from WebApp
 */
void EmergencyHandler::eStopWebAppCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
  m_e_stop_web_app_ = msg->data;
  RCLCPP_DEBUG(this->get_logger(), "WebApp E-Stop: %s", msg->data ? "ACTIVE" : "INACTIVE");
}

/**
 * @brief Callback for cmd_vel velocity commands
 */
void EmergencyHandler::cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  m_linear_vel_ = msg->linear.x;
}

/**
 * @brief Callback for joystick velocity commands
 */
void EmergencyHandler::keyCmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  m_key_linear_vel_ = msg->linear.x;
  m_key_angular_vel_ = msg->angular.z;
}

/**
 * @brief Callback for emergency stop from tag detection failure
 */
void EmergencyHandler::tagDetFailCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
  m_e_stop_tag_detection_ = msg->data;
  RCLCPP_DEBUG(this->get_logger(), "Tag detection E-Stop: %s", msg->data ? "ACTIVE" : "INACTIVE");
}

/**
 * @brief Publishes e_stop based on input from various sources
 */
void EmergencyHandler::publishMessages()
{
  auto e_stop_msg = std_msgs::msg::Bool();
  auto e_stop_lidar_msg = std_msgs::msg::Bool();
  auto e_stop_button_msg = std_msgs::msg::Bool();

  bool estop_lidar = false;

  // Check if lidar detects obstacle and robot is moving towards it
  bool cmd_vel_lidar = (m_lidar_forward_ && (m_linear_vel_ > 0.0)) ||
                       (m_lidar_backward_ && (m_linear_vel_ < 0.0));
  
  bool stopped_cmd_vel_lidar = (m_lidar_forward_ && (m_linear_vel_ == 0.0)) ||
                               (m_lidar_backward_ && (m_linear_vel_ == 0.0));
  
  // Check joystick override (inverse logic for joystick control)
  bool key_cmd_vel_lidar = (m_lidar_forward_ && (m_key_linear_vel_ < 0.0)) ||
                           (m_lidar_backward_ && (m_key_linear_vel_ > 0.0));
  
  bool key_cmd_tag_detection = (m_key_linear_vel_ != 0.0) || (m_key_angular_vel_ != 0.0);

  // Determine lidar-based e-stop
  if (cmd_vel_lidar || stopped_cmd_vel_lidar) {
    estop_lidar = true;
  }

  // Allow joystick override of lidar e-stop
  if (key_cmd_vel_lidar) {
    estop_lidar = false;
  }

  // Clear tag detection e-stop if manual control is active
  if (key_cmd_tag_detection) {
    m_e_stop_tag_detection_ = false;
  }

  // Set button-based e-stop
  e_stop_button_msg.data = m_e_stop_button_ || m_e_stop_web_app_;

  // Set lidar-based e-stop
  e_stop_lidar_msg.data = estop_lidar;

  // Aggregate all e-stop sources
  e_stop_msg.data = estop_lidar || m_e_stop_button_ || m_e_stop_web_app_ || m_e_stop_tag_detection_;

  // Publish all e-stop messages
  e_stop_pub_->publish(e_stop_msg);
  e_stop_button_pub_->publish(e_stop_button_msg);
  e_stop_lidar_pub_->publish(e_stop_lidar_msg);

  // Log e-stop state changes
  if (e_stop_msg.data) {
    RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 1000,
                         "E-STOP ACTIVE - Lidar: %s, Button: %s, WebApp: %s, Tag: %s",
                         estop_lidar ? "YES" : "NO",
                         m_e_stop_button_ ? "YES" : "NO",
                         m_e_stop_web_app_ ? "YES" : "NO",
                         m_e_stop_tag_detection_ ? "YES" : "NO");
  }
}

/**
 * @brief Main function
 */
int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<EmergencyHandler>();
  
  RCLCPP_INFO(node->get_logger(), "Emergency Handler node started");
  
  rclcpp::spin(node);
  
  rclcpp::shutdown();
  return 0;
}
