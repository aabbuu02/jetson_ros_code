#include "navigation_speed_control.h"

/**
 * @brief Constructor for NavigationSpeedControl
 */
NavigationSpeedControl::NavigationSpeedControl()
  : Node("navigation_speed_control"),
    m_warningPreviousStatus(false),
    m_warningCurrentStatus(false),
    m_linearVel__m_s(0.0),
    m_reverseVel__m_s(0.0),
    m_speedFactor(0.8),
    m_zoneSpeedFactor(1.0),
    m_selectorSwitchStatus(0)
{
  initializeParameters();
  
  // Create subscribers
  fieldSub_ = this->create_subscription<anscer_msgs::msg::FieldStatus>(
    m_fieldTopic, 10,
    std::bind(&NavigationSpeedControl::fieldCallback, this, std::placeholders::_1));
  
  selectorSub_ = this->create_subscription<std_msgs::msg::Int32>(
    m_selectorSwitchTopic, 10,
    std::bind(&NavigationSpeedControl::selectorSwitchCallback, this, std::placeholders::_1));
  
  cmdVelSub_ = this->create_subscription<geometry_msgs::msg::Twist>(
    m_preNavigationTopic, 10,
    std::bind(&NavigationSpeedControl::preNavigateCallback, this, std::placeholders::_1));
  
  zoneInfoSub_ = this->create_subscription<anscer_msgs::msg::ZoneInformation>(
    m_zoneInfoTopic, 10,
    std::bind(&NavigationSpeedControl::zoneInfoCallback, this, std::placeholders::_1));
  
  // Create publisher
  cmdVelPub_ = this->create_publisher<geometry_msgs::msg::Twist>(
    m_navigationTopic, 10);
  
  // Create service client for parameter reconfiguration
  std::string paramServiceName = "/" + m_controllerNodeName + "/set_parameters";
  paramClient_ = this->create_client<rcl_interfaces::srv::SetParameters>(paramServiceName);
  
  RCLCPP_INFO(this->get_logger(), "NavigationSpeedControl initialized");
  RCLCPP_INFO(this->get_logger(), "Controller type: %s", m_controller.c_str());
  RCLCPP_INFO(this->get_logger(), "Max linear velocity: %.2f m/s", m_linearVel__m_s);
  RCLCPP_INFO(this->get_logger(), "Max reverse velocity: %.2f m/s", m_reverseVel__m_s);
}

/**
 * @brief Destructor for NavigationSpeedControl
 */
NavigationSpeedControl::~NavigationSpeedControl()
{
  RCLCPP_INFO(this->get_logger(), "NavigationSpeedControl shutting down");
}

/**
 * @brief Initialize parameters from ROS2 parameter server
 */
void NavigationSpeedControl::initializeParameters()
{
  // Declare and get parameters
  this->declare_parameter<std::string>("controller_type", "pure");
  this->declare_parameter<std::string>("field_topic", "lidar_fields");
  this->declare_parameter<std::string>("zone_info_topic", "zone_info");
  this->declare_parameter<std::string>("selector_switch_topic", "mode_selection");
  this->declare_parameter<std::string>("pre_navigation_topic", "pre_navigation/cmd_vel");
  this->declare_parameter<std::string>("navigation_topic", "navigation/cmd_vel");
  this->declare_parameter<double>("speed_factor", 0.8);
  this->declare_parameter<double>("speed_value", 0.7);
  
  this->get_parameter("controller_type", m_controller);
  this->get_parameter("field_topic", m_fieldTopic);
  this->get_parameter("zone_info_topic", m_zoneInfoTopic);
  this->get_parameter("selector_switch_topic", m_selectorSwitchTopic);
  this->get_parameter("pre_navigation_topic", m_preNavigationTopic);
  this->get_parameter("navigation_topic", m_navigationTopic);
  this->get_parameter("speed_factor", m_speedFactor);
  
  double speedValue;
  this->get_parameter("speed_value", speedValue);
  
  // Configure based on controller type
  if (m_controller == "pure") {
    m_controllerNodeName = "qr_navigation_node";
    m_controllerMaxVelocityParam = "forward_max_vel";
    m_controllerReversedVelocityParam = "reverse_max_vel";
    
    // Try to get parameters from controller node
    auto paramClient = this->create_client<rcl_interfaces::srv::GetParameters>(
      "/" + m_controllerNodeName + "/get_parameters");
    
    if (paramClient->wait_for_service(std::chrono::seconds(2))) {
      auto request = std::make_shared<rcl_interfaces::srv::GetParameters::Request>();
      request->names.push_back(m_controllerMaxVelocityParam);
      request->names.push_back(m_controllerReversedVelocityParam);
      
      auto result = paramClient->async_send_request(request);
      if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result, std::chrono::seconds(1)) ==
          rclcpp::FutureReturnCode::SUCCESS) {
        auto response = result.get();
        if (response->values.size() >= 2) {
          m_linearVel__m_s = response->values[0].double_value;
          m_reverseVel__m_s = response->values[1].double_value;
          RCLCPP_INFO(this->get_logger(), "Got controller params - Forward: %.2f, Reverse: %.2f",
                      m_linearVel__m_s, m_reverseVel__m_s);
        } else {
          RCLCPP_WARN(this->get_logger(), "Could not retrieve controller parameters, using default");
          m_linearVel__m_s = speedValue;
          m_reverseVel__m_s = speedValue;
        }
      } else {
        RCLCPP_WARN(this->get_logger(), "Timeout waiting for parameter response, using default");
        m_linearVel__m_s = speedValue;
        m_reverseVel__m_s = speedValue;
      }
    } else {
      RCLCPP_WARN(this->get_logger(), "Controller parameter service not available, using default values");
      m_linearVel__m_s = speedValue;
      m_reverseVel__m_s = speedValue;
    }
  } else if (m_controller == "lyapunov") {
    m_controllerNodeName = "tracking_controller";
    m_controllerMaxVelocityParam = "maxLinearVel__m_s";
    m_controllerReversedVelocityParam = "";
    
    // Similar parameter retrieval for lyapunov controller
    auto paramClient = this->create_client<rcl_interfaces::srv::GetParameters>(
      "/" + m_controllerNodeName + "/get_parameters");
    
    if (paramClient->wait_for_service(std::chrono::seconds(2))) {
      auto request = std::make_shared<rcl_interfaces::srv::GetParameters::Request>();
      request->names.push_back(m_controllerMaxVelocityParam);
      
      auto result = paramClient->async_send_request(request);
      if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result, std::chrono::seconds(1)) ==
          rclcpp::FutureReturnCode::SUCCESS) {
        auto response = result.get();
        if (!response->values.empty()) {
          m_linearVel__m_s = response->values[0].double_value;
          RCLCPP_INFO(this->get_logger(), "Got controller param - MaxLinearVel: %.2f", m_linearVel__m_s);
        } else {
          m_linearVel__m_s = speedValue;
        }
      } else {
        m_linearVel__m_s = speedValue;
      }
    } else {
      RCLCPP_WARN(this->get_logger(), "Controller parameter service not available");
      m_linearVel__m_s = speedValue;
    }
    m_reverseVel__m_s = m_linearVel__m_s;
  } else {
    RCLCPP_ERROR(this->get_logger(), "Unknown controller type: %s", m_controller.c_str());
    m_linearVel__m_s = speedValue;
    m_reverseVel__m_s = speedValue;
  }
}

/**
 * @brief Callback for lidar field status
 */
void NavigationSpeedControl::fieldCallback(const anscer_msgs::msg::FieldStatus::SharedPtr msg)
{
  m_warningCurrentStatus = msg->is_warning;
  
  if ((m_warningCurrentStatus != m_warningPreviousStatus) && (m_zoneSpeedFactor == 1.0)) {
    reconfigureParameters(m_warningCurrentStatus);
    m_warningPreviousStatus = m_warningCurrentStatus;
  }
}

/**
 * @brief Callback for zone information
 */
void NavigationSpeedControl::zoneInfoCallback(const anscer_msgs::msg::ZoneInformation::SharedPtr msg)
{
  m_zoneSpeedFactor = msg->speed_factor;
  RCLCPP_DEBUG(this->get_logger(), "Zone speed factor updated: %.2f", m_zoneSpeedFactor);
}

/**
 * @brief Callback for selector switch
 */
void NavigationSpeedControl::selectorSwitchCallback(const std_msgs::msg::Int32::SharedPtr msg)
{
  m_selectorSwitchStatus = msg->data;
  RCLCPP_DEBUG(this->get_logger(), "Selector switch status: %d", m_selectorSwitchStatus);
}

/**
 * @brief Callback for pre-navigation velocity commands
 */
void NavigationSpeedControl::preNavigateCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
  if (m_selectorSwitchStatus == AUTO_MODE) {
    cmdVelPub_->publish(*msg);
  }
}

/**
 * @brief Reconfigure controller parameters based on warning status
 */
void NavigationSpeedControl::reconfigureParameters(bool warningStatus)
{
  double speedFactor = warningStatus ? m_speedFactor : 1.0;
  double newLinearVel = m_linearVel__m_s * speedFactor;
  double newReverseVel = m_reverseVel__m_s * speedFactor;
  
  setControllerParameters(newLinearVel, newReverseVel);
  
  RCLCPP_INFO(this->get_logger(), "Reconfigured velocities - Linear: %.2f, Reverse: %.2f (factor: %.2f)",
              newLinearVel, newReverseVel, speedFactor);
}

/**
 * @brief Set controller parameters via ROS2 service
 */
void NavigationSpeedControl::setControllerParameters(double linearVel, double reverseVel)
{
  if (!paramClient_->wait_for_service(std::chrono::seconds(1))) {
    RCLCPP_WARN(this->get_logger(), "Parameter service not available");
    return;
  }
  
  auto request = std::make_shared<rcl_interfaces::srv::SetParameters::Request>();
  
  // Set forward velocity parameter
  rcl_interfaces::msg::Parameter forwardParam;
  forwardParam.name = m_controllerMaxVelocityParam;
  forwardParam.value.type = rcl_interfaces::msg::ParameterType::PARAMETER_DOUBLE;
  forwardParam.value.double_value = linearVel;
  request->parameters.push_back(forwardParam);
  
  // Set reverse velocity parameter (only for pure controller)
  if (m_controller == "pure" && !m_controllerReversedVelocityParam.empty()) {
    rcl_interfaces::msg::Parameter reverseParam;
    reverseParam.name = m_controllerReversedVelocityParam;
    reverseParam.value.type = rcl_interfaces::msg::ParameterType::PARAMETER_DOUBLE;
    reverseParam.value.double_value = reverseVel;
    request->parameters.push_back(reverseParam);
  }
  
  // Send async request
  auto result_future = paramClient_->async_send_request(request);
  
  // Optional: wait for result with timeout
  if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future, 
                                         std::chrono::milliseconds(500)) == 
      rclcpp::FutureReturnCode::SUCCESS) {
    auto response = result_future.get();
    bool allSuccess = true;
    for (const auto& result : response->results) {
      if (!result.successful) {
        allSuccess = false;
        RCLCPP_WARN(this->get_logger(), "Failed to set parameter: %s", result.reason.c_str());
      }
    }
    if (allSuccess) {
      RCLCPP_DEBUG(this->get_logger(), "Successfully updated controller parameters");
    }
  } else {
    RCLCPP_WARN(this->get_logger(), "Timeout setting parameters");
  }
}

/**
 * @brief Main function
 */
int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<NavigationSpeedControl>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
