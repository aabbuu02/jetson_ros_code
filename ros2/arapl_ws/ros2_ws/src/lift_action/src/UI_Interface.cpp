#include "lift_action/Ui_Interface.h"

UIInterface::UIInterface(std::shared_ptr<rclcpp::Node> node, ModbusCommunicator* mcPtr)
    : node_(node), p_modbusCommunicatorPtr(mcPtr)
{
    m_packageName = "lift_action";
    m_homingMsg.process = "";
    m_homingMsg.button = 0;
    m_homingMsg.direction = 0;
    
    eStopDataSubscriber = node_->create_subscription<std_msgs::msg::Bool>(
        "/e_stop", 10,
        std::bind(&UIInterface::eStopCallback, this, std::placeholders::_1));
    
    cycleResetDataSubscriber = node_->create_subscription<std_msgs::msg::Bool>(
        "/lifter/cycle_reset", 10,
        std::bind(&UIInterface::cycleResetCallback, this, std::placeholders::_1));
    
    homingButtonSubscriber = node_->create_subscription<std_msgs::msg::Bool>(
        "/lifter/homing_button", 10,
        std::bind(&UIInterface::homingButtonCallback, this, std::placeholders::_1));
}

UIInterface::~UIInterface()
{
}

void UIInterface::homingButtonCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    if (msg->data == true)
    {
        p_modbusCommunicatorPtr->writeDataToRegister(19, 1);
        rclcpp::sleep_for(std::chrono::seconds(1));
        p_modbusCommunicatorPtr->writeDataToRegister(19, 0);
    }
    else
    {
        p_modbusCommunicatorPtr->writeDataToRegister(19, 0);
    }
}

void UIInterface::eStopCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    // Emergency stop logic
    (void)msg;     // Suppress unused parameter warning

}

void UIInterface::homingCallback(const lift_action::msg::UiInterface::SharedPtr msg)
{
    m_homingMsg = *msg;
}

void UIInterface::cycleResetCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    if (msg->data == 1)
    {
        p_modbusCommunicatorPtr->writeDataToRegister(47, 1);
        rclcpp::sleep_for(std::chrono::seconds(2));
        p_modbusCommunicatorPtr->writeDataToRegister(47, 0);
    }
    else
    {
        p_modbusCommunicatorPtr->writeDataToRegister(47, 0);
    }
}

int UIInterface::homingControl(lift_action::msg::UiInterface homingMsg)
{
    std::string process = homingMsg.process;

    // Homing control logic

    // int direction = homingMsg.direction;

    //homeSensor.process=homingMsg.process.c_str();
  
    // m_homingStatus.lifterStatus=p_modbusCommunicatorPtr->readRegister(81);;
    // m_homingStatus.extractorSatus=p_modbusCommunicatorPtr->readRegister(82);
    // m_homingStatus.turnTableStatus=p_modbusCommunicatorPtr->readRegister(83);
    

    // homingStatusPublisher.publish(m_homingStatus);
    return 0;
}
