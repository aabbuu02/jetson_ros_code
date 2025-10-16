#ifndef HIGHER_LEVEL_INTERFACE_HPP
#define HIGHER_LEVEL_INTERFACE_HPP

#include "lift_action/Ui_Interface.h"
#include "lift_action/ModbusCommunicator.h"
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int64.hpp>
#include "lift_action/msg/lift_action.hpp"
#include "lift_action/msg/lift_feedback.hpp"
#include "lift_action/msg/error_status.hpp"
#include <string>
#include <vector>
#include <sstream>
#include <memory>

class HigherLevelInterface : public rclcpp::Node
{
public:
    HigherLevelInterface();
    ~HigherLevelInterface();
    
    int readLifterFeedbackData();
    int writeData(int m_writeRegistornumber, int m_writeValue);
    int writeArrayData(int m_writeRegstornumber, char m_arrayData[], int bytes);
    int failureFeedback(std::string uniqueId, int action);
    int sendDataToExtractor();
    
    float m_updateRate;
    lift_action::msg::LiftFeedback m_lifterFeedbackData;
    std::string m_uniqueId;
    lift_action::msg::ErrorStatus m_lifterErrorStatus;
    
    ModbusCommunicator* p_modbusCommunicator;

private:
    bool checkParameters();
    int readParameters();
    
    void robotFeedbackCallback(const lift_action::msg::LiftAction::SharedPtr msg);
    void scannerDataCallback(const std_msgs::msg::String::SharedPtr msg);
    void robotStateCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void robotLocationStatusCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void barcodeTriggerStatusCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void wmsStatusCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void bypassButtonCallback(const std_msgs::msg::Bool::SharedPtr msg);
    
    bool m_parameterExistanceFlag;
    int m_numberOfReadRegisters;
    int m_writeRegistornumber;
    uint32_t m_writeValue;
    uint16_t* p_lifterFeedbackData;
    
    std::string m_subscriberTopic;
    std::string m_publisherTopic;
    std::string m_scannedData;
    std::string m_rackNo;
    std::string m_boxNo;
    std::string m_prevUniqueID;
    std::string m_lastUniqueID;
    
    int m_rack, m_shelf, m_acrShelf, m_action, m_bin;
    int m_prevAcrShelf, m_lastAction, m_triggerCount, m_triggerThreshold;
    bool m_locationChangeFlag, m_agvStopFlag, m_reachedFlag;
    bool m_agvActionFlag, m_extractorStartFlag, m_lifterFeedbackFlag;
    bool m_failStatusFlag, m_barcodeTriggerStatusFlag, m_wmsUpdateFlag;
    bool m_operationFlag;
    uint16_t m_robotMovementFlag;
    int m_side;
    
    std_msgs::msg::Bool robotInitialised;
    
    rclcpp::Subscription<lift_action::msg::LiftAction>::SharedPtr robotFeedBack;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr scannerDataSubscriber;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr robotState;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr robotLocationChangeSubscriber;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr barcodeTriggerStatus;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr wmsUpdateStatus;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr bypassButton;
    
    rclcpp::Publisher<lift_action::msg::LiftFeedback>::SharedPtr lifterFeedback;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr robotInitialisedPublisher;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr scannerTrigger;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr brakeActivator;
    rclcpp::Publisher<lift_action::msg::ErrorStatus>::SharedPtr errorStatus;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr homingStatus;
    
    UIInterface* p_UIInterface;
};

#endif // HIGHER_LEVEL_INTERFACE_HPP
