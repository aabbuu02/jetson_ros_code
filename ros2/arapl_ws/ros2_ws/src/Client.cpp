#include "Client.h"

/**
 * @brief Constructor for the Client class
 * @param node Shared pointer to the ROS2 node
 * @param controllerType Type of controller to instantiate (MODBUS_DEVICE, etc.)
 */
Client::Client(std::shared_ptr<rclcpp::Node> node, int controllerType) 
    : node_(node), 
      m_controller_type_(controllerType), 
      p_high_level_controller_(nullptr) {
    
    RCLCPP_INFO(node_->get_logger(), "Client constructor called with type %d", controllerType);
    
    // Instantiate the appropriate controller based on type
    if (controllerType == MODBUS_DEVICE) {
        RCLCPP_INFO(node_->get_logger(), "Initializing MODBUS_DEVICE controller");
        p_high_level_controller_ = new ModbusController(node_);
    }
    // Commented out controller types - uncomment when implementations are available
    /*
    else if (controllerType == MODBUS_ROBOTEQ_DEVICE) {
        RCLCPP_INFO(node_->get_logger(), "Initializing MODBUS_ROBOTEQ_DEVICE controller");
        p_high_level_controller_ = new ModbusRoboteqController(node_);
    }
    else if (controllerType == ODRIVE_DEVICE) {
        RCLCPP_INFO(node_->get_logger(), "Initializing ODRIVE_DEVICE controller");
        p_high_level_controller_ = new ODriveController(node_);
    }
    else if (controllerType == RAINBOW_DEVICE) {
        RCLCPP_INFO(node_->get_logger(), "Initializing RAINBOW_DEVICE controller");
        p_high_level_controller_ = new RainbowController(node_);
    }
    */
    else {
        // Invalid controller type
        p_high_level_controller_ = nullptr;
        RCLCPP_FATAL(node_->get_logger(), 
                     "Invalid controller type selected: %d. Please check the controller_type parameter.", 
                     controllerType);
        RCLCPP_FATAL(node_->get_logger(), 
                     "Valid types: MODBUS_DEVICE=%d, MODBUS_ROBOTEQ_DEVICE=%d, ODRIVE_DEVICE=%d, RAINBOW_DEVICE=%d",
                     MODBUS_DEVICE, MODBUS_ROBOTEQ_DEVICE, ODRIVE_DEVICE, RAINBOW_DEVICE);
        exit(EXIT_FAILURE);
    }
    
    RCLCPP_INFO(node_->get_logger(), "Client initialization complete");
}

/**
 * @brief Destructor for the Client class
 * Cleans up the dynamically allocated high level controller
 */
Client::~Client() {
    if (p_high_level_controller_ != nullptr) {
        RCLCPP_INFO(node_->get_logger(), "Cleaning up high level controller");
        delete p_high_level_controller_;
        p_high_level_controller_ = nullptr;
    }
}

/**
 * @brief Returns pointer to the high level controller instance
 * @return Pointer to AHighLevelController
 */
AHighLevelController* Client::getHighLevelController() {
    if (p_high_level_controller_ == nullptr) {
        RCLCPP_ERROR(node_->get_logger(), "High level controller is NULL!");
    }
    return p_high_level_controller_;
}
