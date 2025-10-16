#ifndef UI_INTERFACE_HPP
#define UI_INTERFACE_HPP

#include "lift_action/ModbusCommunicator.h"
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include "lift_action/msg/ui_interface.hpp"
#include "lift_action/msg/homing_status.hpp"
#include "lift_action/msg/home_sensor.hpp"
#include <memory>

class UIInterface
{
public:
    UIInterface(std::shared_ptr<rclcpp::Node> node, ModbusCommunicator* mcPtr);
    ~UIInterface();
    
    lift_action::msg::UiInterface m_liftMsg;
    lift_action::msg::UiInterface m_homingMsg;
    lift_action::msg::HomingStatus m_homingStatus;
    
    int homingControl(lift_action::msg::UiInterface homingMsg);

private:
    void eStopCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void homingCallback(const lift_action::msg::UiInterface::SharedPtr msg);
    void cycleResetCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void homingButtonCallback(const std_msgs::msg::Bool::SharedPtr msg);
    
    std::string m_packageName;
    std::shared_ptr<rclcpp::Node> node_;
    ModbusCommunicator* p_modbusCommunicatorPtr;
    
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr eStopDataSubscriber;
    rclcpp::Subscription<lift_action::msg::UiInterface>::SharedPtr homingDataSubscriber;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr cycleResetDataSubscriber;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr homingButtonSubscriber;
    rclcpp::Publisher<lift_action::msg::HomingStatus>::SharedPtr homingStatusPublisher;
};

#endif // UI_INTERFACE_HPP
