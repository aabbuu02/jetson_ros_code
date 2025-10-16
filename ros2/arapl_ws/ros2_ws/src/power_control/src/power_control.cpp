#include "power_control/power_control.hpp"

/**
 * @brief Construct a new Power Control object
 */
/**
 * @brief Construct a new Power Control object
 */
PowerControl::PowerControl()
: Node("power_control_node")
{
    // Declare parameters FIRST with defaults - this happens during construction
    this->declare_parameter("system_name", "nx");
    this->declare_parameter("is_system_master", true);
    this->declare_parameter("enable_system_power_control", true);
    this->declare_parameter("enable_slave_power_control", false);
    this->declare_parameter("slave_system_names", std::vector<std::string>{});
    
    // Now load the parameters (from YAML or defaults)
    loadParameters();
    
    // Initialize services
    initializeServices();
    
    // Initialize service clients if this is a master system
    if (is_master_system_ && enable_slave_power_control_ && num_slaves_ > 0)
    {
        initializeServiceClients();
        waitForServices();
    }
    
    // Set up parameter callback
    param_callback_handle_ = this->add_on_set_parameters_callback(
        std::bind(&PowerControl::parametersCallback, this, std::placeholders::_1));
    
    // Create timer for periodic checks (1 Hz)
    timer_ = this->create_wall_timer(
        std::chrono::seconds(1),
        std::bind(&PowerControl::timerCallback, this));
    
    RCLCPP_INFO(this->get_logger(), "Power Control node initialized");
    RCLCPP_INFO(this->get_logger(), "System name: %s", system_name_.c_str());
    RCLCPP_INFO(this->get_logger(), "Is master system: %s", is_master_system_ ? "true" : "false");
    RCLCPP_INFO(this->get_logger(), "System power control enabled: %s", enable_system_power_control_ ? "true" : "false");
    RCLCPP_INFO(this->get_logger(), "Slave power control enabled: %s", enable_slave_power_control_ ? "true" : "false");
}

/**
 * @brief Declare parameters with descriptions
 */
/**
 * @brief Declare parameters with descriptions
 */
// void PowerControl::declareParameters()
// {
//     // Current system settings
//     rcl_interfaces::msg::ParameterDescriptor system_name_desc;
//     system_name_desc.description = "Name of this system";
//     this->declare_parameter("system_name", "nx", system_name_desc);  // Changed default from "master_system" to "nx"
    
//     rcl_interfaces::msg::ParameterDescriptor is_master_desc;
//     is_master_desc.description = "Whether this system is the master controller";
//     this->declare_parameter("is_system_master", true, is_master_desc);  // Changed default from false to true
    
//     // Power control settings
//     rcl_interfaces::msg::ParameterDescriptor enable_sys_ctrl_desc;
//     enable_sys_ctrl_desc.description = "Enable/Disable system power control for testing";
//     this->declare_parameter("enable_system_power_control", true, enable_sys_ctrl_desc);
    
//     rcl_interfaces::msg::ParameterDescriptor enable_slave_ctrl_desc;
//     enable_slave_ctrl_desc.description = "Enable/Disable slave system power control for testing";
//     this->declare_parameter("enable_slave_power_control", false, enable_slave_ctrl_desc);
    
//     // Slave system settings
//     rcl_interfaces::msg::ParameterDescriptor slave_names_desc;
//     slave_names_desc.description = "List of slave system names";
//     this->declare_parameter("slave_system_names", std::vector<std::string>{}, slave_names_desc);
// }



/**
 * @brief Load parameters from parameter server
 */
/**
 * @brief Load parameters from parameter server
 */
void PowerControl::loadParameters()
{
    system_name_ = this->get_parameter("system_name").as_string();
    is_master_system_ = this->get_parameter("is_system_master").as_bool();
    enable_system_power_control_ = this->get_parameter("enable_system_power_control").as_bool();
    enable_slave_power_control_ = this->get_parameter("enable_slave_power_control").as_bool();
    
    // Safe handling for string array parameter
    try {
        if (this->has_parameter("slave_system_names")) {
            rclcpp::Parameter param = this->get_parameter("slave_system_names");
            if (param.get_type() == rclcpp::ParameterType::PARAMETER_STRING_ARRAY) {
                slave_system_names_ = param.as_string_array();
            } else {
                RCLCPP_WARN(this->get_logger(), "slave_system_names parameter has wrong type, using empty array");
                slave_system_names_.clear();
            }
        } else {
            RCLCPP_WARN(this->get_logger(), "slave_system_names parameter not found, using empty array");
            slave_system_names_.clear();
        }
    } catch (const std::exception& e) {
        RCLCPP_ERROR(this->get_logger(), "Error loading slave_system_names: %s. Using empty array.", e.what());
        slave_system_names_.clear();
    }
    
    num_slaves_ = static_cast<int>(slave_system_names_.size());
    
    // Debug logging
    RCLCPP_INFO(this->get_logger(), "=== Loaded Parameters ===");
    RCLCPP_INFO(this->get_logger(), "  system_name: '%s'", system_name_.c_str());
    RCLCPP_INFO(this->get_logger(), "  is_master_system: %s", is_master_system_ ? "true" : "false");
    RCLCPP_INFO(this->get_logger(), "  enable_system_power_control: %s", enable_system_power_control_ ? "true" : "false");
    RCLCPP_INFO(this->get_logger(), "  enable_slave_power_control: %s", enable_slave_power_control_ ? "true" : "false");
    RCLCPP_INFO(this->get_logger(), "  Number of slaves: %d", num_slaves_);
    
    for (const auto& name : slave_system_names_)
    {
        RCLCPP_INFO(this->get_logger(), "    Slave system: %s", name.c_str());
    }
    RCLCPP_INFO(this->get_logger(), "========================");
}


/**
 * @brief Initialize service servers
 */
void PowerControl::initializeServices()
{
  std::stringstream topic_stream;
  topic_stream << "power_control/" 
               << (is_master_system_ ? "master" : "slave") 
               << "/" << system_name_;
  std::string base_topic = topic_stream.str();

  // Create poweroff service server
  poweroff_srv_server_ = this->create_service<std_srvs::srv::Trigger>(
    base_topic + "/poweroff",
    std::bind(&PowerControl::poweroffServiceCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  // Create reboot service server
  reboot_srv_server_ = this->create_service<std_srvs::srv::Trigger>(
    base_topic + "/reboot",
    std::bind(&PowerControl::rebootServiceCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  RCLCPP_INFO(this->get_logger(), "Services created at: %s", base_topic.c_str());
}

/**
 * @brief Initialize service clients for slave systems
 */
void PowerControl::initializeServiceClients()
{
  for (const auto& slave_name : slave_system_names_)
  {
    std::stringstream slave_topic_stream;
    slave_topic_stream << "power_control/slave/" << slave_name;
    std::string slave_base_topic = slave_topic_stream.str();

    // Create poweroff client
    auto poweroff_client = this->create_client<std_srvs::srv::Trigger>(
      slave_base_topic + "/poweroff");
    slave_poweroff_clients_.push_back(poweroff_client);

    // Create reboot client
    auto reboot_client = this->create_client<std_srvs::srv::Trigger>(
      slave_base_topic + "/reboot");
    slave_reboot_clients_.push_back(reboot_client);

    RCLCPP_INFO(this->get_logger(), "Service clients created for slave: %s", slave_name.c_str());
  }
}

/**
 * @brief Wait for slave services to become available
 */
void PowerControl::waitForServices()
{
  RCLCPP_INFO(this->get_logger(), "Waiting for slave services to be available...");

  for (size_t i = 0; i < slave_poweroff_clients_.size(); ++i)
  {
    if (!slave_poweroff_clients_[i]->wait_for_service(std::chrono::seconds(5)))
    {
      RCLCPP_WARN(this->get_logger(), 
                  "Poweroff service for slave %s not available", 
                  slave_system_names_[i].c_str());
    }

    if (!slave_reboot_clients_[i]->wait_for_service(std::chrono::seconds(5)))
    {
      RCLCPP_WARN(this->get_logger(), 
                  "Reboot service for slave %s not available", 
                  slave_system_names_[i].c_str());
    }
  }

  RCLCPP_INFO(this->get_logger(), "Slave service check complete");
}

/**
 * @brief Callback for poweroff service
 */
void PowerControl::poweroffServiceCallback(
  const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
  std::shared_ptr<std_srvs::srv::Trigger::Response> response)
{
  (void)request; // Unused parameter

  RCLCPP_INFO(this->get_logger(), "Poweroff service called");

  if (!enable_system_power_control_)
  {
    response->success = false;
    response->message = "System power control is disabled";
    RCLCPP_WARN(this->get_logger(), "%s", response->message.c_str());
    return;
  }

  power_ctrl_cmd_ = POWEROFF;
  response->success = true;
  response->message = "Poweroff command received. System will shut down.";
  RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
}

/**
 * @brief Callback for reboot service
 */
void PowerControl::rebootServiceCallback(
  const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
  std::shared_ptr<std_srvs::srv::Trigger::Response> response)
{
  (void)request; // Unused parameter

  RCLCPP_INFO(this->get_logger(), "Reboot service called");

  if (!enable_system_power_control_)
  {
    response->success = false;
    response->message = "System power control is disabled";
    RCLCPP_WARN(this->get_logger(), "%s", response->message.c_str());
    return;
  }

  power_ctrl_cmd_ = REBOOT;
  response->success = true;
  response->message = "Reboot command received. System will reboot.";
  RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
}

/**
 * @brief Parameter change callback
 */
rcl_interfaces::msg::SetParametersResult PowerControl::parametersCallback(
  const std::vector<rclcpp::Parameter> &parameters)
{
  rcl_interfaces::msg::SetParametersResult result;
  result.successful = true;

  for (const auto &param : parameters)
  {
    if (param.get_name() == "enable_system_power_control")
    {
      enable_system_power_control_ = param.as_bool();
      RCLCPP_INFO(this->get_logger(), 
                  "System power control updated: %s", 
                  enable_system_power_control_ ? "enabled" : "disabled");
    }
    else if (param.get_name() == "enable_slave_power_control")
    {
      enable_slave_power_control_ = param.as_bool();
      RCLCPP_INFO(this->get_logger(), 
                  "Slave power control updated: %s", 
                  enable_slave_power_control_ ? "enabled" : "disabled");
    }
  }

  return result;
}

/**
 * @brief Power off this system
 */
bool PowerControl::powerOffSystem()
{
  RCLCPP_INFO(this->get_logger(), "Powering off system: %s", system_name_.c_str());
  
  int result = std::system("sudo /sbin/poweroff");
  
  if (result != 0)
  {
    RCLCPP_ERROR(this->get_logger(), "Failed to execute poweroff command");
    return false;
  }
  
  return true;
}

/**
 * @brief Reboot this system
 */
bool PowerControl::rebootSystem()
{
  RCLCPP_INFO(this->get_logger(), "Rebooting system: %s", system_name_.c_str());
  
  int result = std::system("sudo /sbin/reboot");
  
  if (result != 0)
  {
    RCLCPP_ERROR(this->get_logger(), "Failed to execute reboot command");
    return false;
  }
  
  return true;
}

/**
 * @brief Power off all slave systems
 */
bool PowerControl::poweroffSlaveSystems()
{
  if (!is_master_system_ || !enable_slave_power_control_)
  {
    RCLCPP_WARN(this->get_logger(), "Slave power control not enabled or not master system");
    return false;
  }

  RCLCPP_INFO(this->get_logger(), "Powering off slave systems...");
  bool all_success = true;

  for (size_t i = 0; i < slave_poweroff_clients_.size(); ++i)
  {
    auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
    
    if (!slave_poweroff_clients_[i]->service_is_ready())
    {
      RCLCPP_WARN(this->get_logger(), 
                  "Service not ready for slave: %s", 
                  slave_system_names_[i].c_str());
      all_success = false;
      continue;
    }

    auto result_future = slave_poweroff_clients_[i]->async_send_request(request);
    
    // Wait for response with timeout
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), 
                                           result_future, 
                                           std::chrono::seconds(5)) == 
        rclcpp::FutureReturnCode::SUCCESS)
    {
      auto response = result_future.get();
      if (response->success)
      {
        RCLCPP_INFO(this->get_logger(), 
                    "Successfully sent poweroff to slave: %s", 
                    slave_system_names_[i].c_str());
      }
      else
      {
        RCLCPP_WARN(this->get_logger(), 
                    "Failed to poweroff slave %s: %s", 
                    slave_system_names_[i].c_str(), 
                    response->message.c_str());
        all_success = false;
      }
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), 
                   "Timeout calling poweroff service for slave: %s", 
                   slave_system_names_[i].c_str());
      all_success = false;
    }
  }

  return all_success;
}

/**
 * @brief Reboot all slave systems
 */
bool PowerControl::rebootSlaveSystems()
{
  if (!is_master_system_ || !enable_slave_power_control_)
  {
    RCLCPP_WARN(this->get_logger(), "Slave power control not enabled or not master system");
    return false;
  }

  RCLCPP_INFO(this->get_logger(), "Rebooting slave systems...");
  bool all_success = true;

  for (size_t i = 0; i < slave_reboot_clients_.size(); ++i)
  {
    auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
    
    if (!slave_reboot_clients_[i]->service_is_ready())
    {
      RCLCPP_WARN(this->get_logger(), 
                  "Service not ready for slave: %s", 
                  slave_system_names_[i].c_str());
      all_success = false;
      continue;
    }

    auto result_future = slave_reboot_clients_[i]->async_send_request(request);
    
    // Wait for response with timeout
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), 
                                           result_future, 
                                           std::chrono::seconds(5)) == 
        rclcpp::FutureReturnCode::SUCCESS)
    {
      auto response = result_future.get();
      if (response->success)
      {
        RCLCPP_INFO(this->get_logger(), 
                    "Successfully sent reboot to slave: %s", 
                    slave_system_names_[i].c_str());
      }
      else
      {
        RCLCPP_WARN(this->get_logger(), 
                    "Failed to reboot slave %s: %s", 
                    slave_system_names_[i].c_str(), 
                    response->message.c_str());
        all_success = false;
      }
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), 
                   "Timeout calling reboot service for slave: %s", 
                   slave_system_names_[i].c_str());
      all_success = false;
    }
  }

  return all_success;
}

/**
 * @brief Timer callback for periodic power control checks
 */
void PowerControl::timerCallback()
{
  uint8_t cmd = power_ctrl_cmd_.load();
  
  if (cmd == WAIT)
  {
    return;
  }

  // Reset command immediately to prevent multiple executions
  power_ctrl_cmd_ = WAIT;

  if (cmd == POWEROFF)
  {
    RCLCPP_INFO(this->get_logger(), "Executing poweroff sequence...");
    
    // Power off slaves first if master
    if (is_master_system_ && enable_slave_power_control_)
    {
      poweroffSlaveSystems();
      // Give slaves time to shut down
      rclcpp::sleep_for(std::chrono::seconds(3));
    }

    // Power off this system
    if (enable_system_power_control_)
    {
      powerOffSystem();
    }
  }
  else if (cmd == REBOOT)
  {
    RCLCPP_INFO(this->get_logger(), "Executing reboot sequence...");
    
    // Reboot slaves first if master
    if (is_master_system_ && enable_slave_power_control_)
    {
      rebootSlaveSystems();
      // Give slaves time to start rebooting
      rclcpp::sleep_for(std::chrono::seconds(3));
    }

    // Reboot this system
    if (enable_system_power_control_)
    {
      rebootSystem();
    }
  }
}

/**
 * @brief Main run loop
 */
void PowerControl::run()
{
  RCLCPP_INFO(this->get_logger(), "Power Control node running...");
  rclcpp::spin(shared_from_this());
}

/**
 * @brief Main function
 */
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<PowerControl>();
  node->run();
  
  rclcpp::shutdown();
  return 0;
}
