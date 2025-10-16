#ifndef LOWER_LEVEL_INTERFACE_H
#define LOWER_LEVEL_INTERFACE_H

#include "rclcpp/rclcpp.hpp"
#include "RosClass.h"
#include "LowerLevelComputations.h"
#include "Client.h"

#define MACADDRESS "48:b0:2d:5f:86:30"

using namespace std;

class LowerLevelInterface
{
public:
    LowerLevelInterface(std::shared_ptr<rclcpp::Node> node);
    ~LowerLevelInterface();
    
    void controlFlow();

private:
    std::shared_ptr<rclcpp::Node> node_;
    
    void initializeParameters();
    void authenticationProcess();
    void getMACAddress();
    void diagnoseMotorControllerHealth(const readParameters &readParams, 
                                      geometry_msgs::msg::Twist &cmdVel);
    void resetCmdVelocity(geometry_msgs::msg::Twist &cmdVel);
    
    int64_t m_currentTime, m_lastTime, m_deltaTime;
    int m_controllerType;
    bool m_publishTF;
    
    nav_msgs::msg::Odometry m_odom;
    
    RosClass *p_getVariables;
    LowerLevelComputations *p_lowerLevelComputation;
    Client *p_client;
    AHighLevelController *p_highLevelController;
};

#endif
