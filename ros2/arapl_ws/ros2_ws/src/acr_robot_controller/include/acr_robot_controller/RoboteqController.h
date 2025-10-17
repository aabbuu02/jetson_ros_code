#ifndef MODBUS_ROBOTEQ_CONTROLLER_H
#define MODBUS_ROBOTEQ_CONTROLLER_H

#include "AHighLevelController.h"
#include "RoboteqDevice.h"
#include "anscer_msgs/msg/motor_status_flags.hpp"
#include "anscer_msgs/msg/motor_fault_flags.hpp"
#include "anscer_msgs/msg/motor_diagnostics.hpp"
#include "anscer_msgs/msg/motor_diagnostics_array.hpp"
#include "rclcpp/rclcpp.hpp"

class RoboteqController : public AHighLevelController
{
public:
    RoboteqController(std::shared_ptr<rclcpp::Node> node);
    virtual ~RoboteqController() 
    {
        // Properly disconnect from Roboteq device on shutdown
        if (m_roboteqDevice.IsConnected()) {
            RCLCPP_INFO(node_->get_logger(), "Disconnecting from Roboteq device...");
            m_roboteqDevice.Disconnect();
        }
    }
    
    rclcpp::Publisher<anscer_msgs::msg::MotorDiagnosticsArray>::SharedPtr motorPub;
    
    void writeCommands(writeParameters &writeParams) override;
    void readCommands(readParameters &readParam) override;

private:
    std::shared_ptr<rclcpp::Node> node_;
    
    void initialize();
    void initializeParameters();
    void setMotorFaultFlags(int setfaultFlags, anscer_msgs::msg::MotorFaultFlags &motorFaultFlags);
    void setMotorStatusFlags(int setStatusFlags, anscer_msgs::msg::MotorStatusFlags &motorStatusFlags);
    void readMotorControllerFlags(anscer_msgs::msg::MotorDiagnosticsArray &motorDiagnosticsArray);
    void readBatteryParameters(int &batteryVoltage, int &batteryCurrent);
    
    std::string m_roboteqPort;
    int m_modbusPort;
    int m_motorFaultFlags = 0;
    int m_motorStatusFlags = 0;
    int m_rightEncoderReading, m_leftEncoderReading;
    int m_leftSpeed, m_rightSpeed;
    RoboteqDevice m_roboteqDevice;
};

#endif
