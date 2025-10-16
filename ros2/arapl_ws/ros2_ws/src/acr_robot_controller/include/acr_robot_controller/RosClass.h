#ifndef ROS_CLASS_H
#define ROS_CLASS_H

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "std_msgs/msg/bool.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "anscer_msgs/msg/battery_state.hpp"
#include "Utilities.h"

class RosClass
{
public:
    RosClass(std::shared_ptr<rclcpp::Node> node);
    ~RosClass();
    
    geometry_msgs::msg::Twist getCommandVelocity();
    bool getEStopStatus();
    
    void sendOdometry(const nav_msgs::msg::Odometry &odom);
    void sendReadParameters(const readParameters &parameterValue);
    void updateTF(const nav_msgs::msg::Odometry &odom);

private:
    std::shared_ptr<rclcpp::Node> node_;
    
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr eStopSub;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmdVelSub;
    
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odomPub;
    rclcpp::Publisher<anscer_msgs::msg::MotorDiagnosticsArray>::SharedPtr motorDiagPub;
    rclcpp::Publisher<sensor_msgs::msg::BatteryState>::SharedPtr batteryPub;
    
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    
    rclcpp::Time m_cmdVelPrevUpdateTime;
    
    void eStopCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void initializeParameters();
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
    
    int m_controllerType;
    bool m_eStop = false;
    std::string m_odomTopic, m_cmdVelTopic, m_emergencyStopTopic;
    std::string m_motorDiagnosticsTopic, m_batteryTopic;
    geometry_msgs::msg::Twist m_cmdVel;
    double m_cmdVelResetTimeout = 0.25;
};

#endif
