#ifndef CLIENT_H
#define CLIENT_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "AHighLevelController.h"
#include "ModbusController.h"
#include "Utilities.h"

// Forward declarations for other controller types
// Uncomment these when the corresponding controller implementations are available
// #include "ModbusRoboteqController.h"
// #include "ODriveController.h"
// #include "RainbowController.h"

/**
 * @class Client
 * @brief Factory class for creating high-level controller instances
 * 
 * This class acts as a factory pattern implementation that instantiates
 * the appropriate controller based on the controller type parameter.
 * It manages the lifecycle of the controller and provides access to it.
 */
class Client {
public:
    /**
     * @brief Constructor for the Client class
     * @param node Shared pointer to the ROS2 node
     * @param controllerType Type of controller to instantiate
     *        - MODBUS_DEVICE (1): Standard Modbus controller
     *        - MODBUS_ROBOTEQ_DEVICE (2): Modbus Roboteq controller
     *        - ODRIVE_DEVICE (3): ODrive controller
     *        - RAINBOW_DEVICE (4): Rainbow controller
     */
    explicit Client(std::shared_ptr<rclcpp::Node> node, int controllerType);
    
    /**
     * @brief Destructor for the Client class
     * Cleans up the dynamically allocated controller
     */
    ~Client();
    
    // Delete copy constructor and assignment operator
    Client(const Client&) = delete;
    Client& operator=(const Client&) = delete;
    
    /**
     * @brief Get pointer to the high level controller
     * @return Pointer to the instantiated AHighLevelController
     */
    AHighLevelController* getHighLevelController();

private:
    /**
     * @brief Shared pointer to the ROS2 node
     */
    std::shared_ptr<rclcpp::Node> node_;
    
    /**
     * @brief Controller type identifier
     */
    int m_controller_type_;
    
    /**
     * @brief Pointer to the high level controller instance
     */
    AHighLevelController* p_high_level_controller_;
};

#endif  // CLIENT_H
