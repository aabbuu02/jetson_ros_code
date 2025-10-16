#ifndef LOWER_LEVEL_COMPUTATIONS_H
#define LOWER_LEVEL_COMPUTATIONS_H

#include <cmath>
#include <iostream>
#include <vector>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "anscer_msgs/msg/pgv_pose.hpp"
#include "Utilities.h"

#define LEFT 0
#define RIGHT 1
#define CW 0
#define CCW 1

using namespace std;

class LowerLevelComputations
{
public:
    LowerLevelComputations(std::shared_ptr<rclcpp::Node> node);
    ~LowerLevelComputations();
    
    void initializeComputation(const geometry_msgs::msg::Twist &cmdVel, writeParameters &writeParam);
    void updateOdometry(uint32_t deltaTime, const readParameters &readParam, 
                       nav_msgs::msg::Odometry &odometryData);

private:
    std::shared_ptr<rclcpp::Node> node_;
    
    rclcpp::Subscription<anscer_msgs::msg::PGVPose>::SharedPtr barcodePoseSub;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr debugCmdVelPub;
    
    void initializeParameters();
    void velocityLimiter(double &linearVel, double &angularVel);
    void motorDriveCommands(writeParameters &writeParam, int leftRPM, int rightRPM);
    void barcodeCallback(const anscer_msgs::msg::PGVPose::SharedPtr msg);
    void computeOdometry(uint32_t deltaTime, const readParameters &readParam, 
                        nav_msgs::msg::Odometry &odom);
    
    double m_wheelSeperation;
    double m_wheelRadius;
    double m_TPR;
    double m_linearVelocityLimit;
    double m_angularVelocityLimit;
    double m_gearRatio;
    std::string m_odomFrame;
    std::string m_baseFrame;
    std::string m_barcodeGlobalTopic;
    std::string m_debugCmdVelTopic;
    
    double m_xPosition = 0.0;
    double m_yPosition = 0.0;
    double m_theta = 0.0;
    int m_leftEncoderPrev = 0;
    int m_rightEncoderPrev = 0;
    bool m_firstTime = true;
};

#endif
