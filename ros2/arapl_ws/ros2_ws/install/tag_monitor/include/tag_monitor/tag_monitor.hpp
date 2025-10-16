#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <tf2/LinearMath/Vector3.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <anscer_msgs/msg/pgv_pose.hpp>

#include <string>
#include <memory>

class TagMonitor : public rclcpp::Node
{
public:
    TagMonitor();
    ~TagMonitor() = default;

private:
    // Messages
    std_msgs::msg::Bool m_eStopMsg;
    std_msgs::msg::Bool m_initRobotMsg;

    // Publishers
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr m_eStopPub;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr m_initRobotPub;

    // Subscribers
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr m_odomSub;
    rclcpp::Subscription<anscer_msgs::msg::PGVPose>::SharedPtr m_detectedTagSub;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr m_initRobotSub;

    // Subscriber callbacks
    void odometryCb(const nav_msgs::msg::Odometry::SharedPtr odomMsg);
    void detectedTagCb(const anscer_msgs::msg::PGVPose::SharedPtr tagMsg);
    void initializeRobotCb(const std_msgs::msg::Bool::SharedPtr initStateMsg);

    // Topic names
    std::string m_odomTopic;
    std::string m_initRobotTopic;
    std::string m_deinitRobotTopic;
    std::string m_detTagTopic;
    std::string m_eStopTopic;

    // Tag monitoring variables
    bool m_enableTagDetAsInit;
    uint32_t m_curTagId;
    uint32_t m_prevTagId;
    double m_maxDetectionDistance; // Maximum distance that can be travelled without detecting a tag in meters

    // Distance travelled by the robot
    bool m_isRobotInitialized;
    tf2::Vector3 m_prevPoseVec;
    tf2::Vector3 m_curPoseVec;
    double m_curDistTravelled;

    // Helper methods
    void getParameters();
    void initializePublishers();
    void initializeSubscribers();
};
