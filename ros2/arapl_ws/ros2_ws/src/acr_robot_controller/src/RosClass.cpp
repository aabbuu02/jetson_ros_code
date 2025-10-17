#include <memory>
#include "RosClass.h"

RosClass::RosClass(std::shared_ptr<rclcpp::Node> node)
    : node_(node)
{
    RCLCPP_INFO(node_->get_logger(), "RosClass Constructor called");
    
    initializeParameters();
    
    // Use system time instead of ROS time to avoid time source conflicts
    m_cmdVelPrevUpdateTime = rclcpp::Time(Utilities::millis() * 1000000, RCL_SYSTEM_TIME);
    
    cmdVelSub = node_->create_subscription<geometry_msgs::msg::Twist>(
        m_cmdVelTopic, 1, 
        std::bind(&RosClass::cmdVelCallback, this, std::placeholders::_1));
    
    eStopSub = node_->create_subscription<std_msgs::msg::Bool>(
        m_emergencyStopTopic, 1,
        std::bind(&RosClass::eStopCallback, this, std::placeholders::_1));
    
    odomPub = node_->create_publisher<nav_msgs::msg::Odometry>(m_odomTopic, 1);
    batteryPub = node_->create_publisher<sensor_msgs::msg::BatteryState>(m_batteryTopic, 1);
    
    if(m_controllerType == ROBOTEQ_DEVICE)
    {
        motorDiagPub = node_->create_publisher<anscer_msgs::msg::MotorDiagnosticsArray>(
            m_motorDiagnosticsTopic, 1);
    }
    
    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(node_);
}

RosClass::~RosClass()
{
}

void RosClass::initializeParameters()
{
    // Remove ALL declare_parameter calls
    // Parameters are already declared by automatically_declare_parameters_from_overrides
    
    m_controllerType = node_->get_parameter("controller_type").as_int();
    m_cmdVelTopic = node_->get_parameter("cmd_topic").as_string();
    m_odomTopic = node_->get_parameter("odom_topic").as_string();
    m_emergencyStopTopic = node_->get_parameter("emergency_stop_topic").as_string();
    m_motorDiagnosticsTopic = node_->get_parameter("motor_diagnostics_topic").as_string();
    m_batteryTopic = node_->get_parameter("battery_topic").as_string();
    m_cmdVelResetTimeout = node_->get_parameter("cmd_vel_timeout").as_double();
}

void RosClass::cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
    m_cmdVel = *msg;
    // Use system time instead of ROS time to avoid time source conflicts
    m_cmdVelPrevUpdateTime = rclcpp::Time(Utilities::millis() * 1000000, RCL_SYSTEM_TIME);
}

void RosClass::eStopCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    m_eStop = msg->data;
}

geometry_msgs::msg::Twist RosClass::getCommandVelocity()
{
    bool resetVel = false;
    
    // Use system time for consistent time source
    rclcpp::Time currentTime(Utilities::millis() * 1000000, RCL_SYSTEM_TIME);
    rclcpp::Duration elapsedTime = currentTime - m_cmdVelPrevUpdateTime;
    
    if(elapsedTime.seconds() >= m_cmdVelResetTimeout) 
        resetVel = true;
    
    if(m_eStop || resetVel)
    {
        m_cmdVel.linear.x = 0.0;
        m_cmdVel.angular.z = 0.0;
    }
    
    return m_cmdVel;
}

bool RosClass::getEStopStatus()
{
    return m_eStop;
}

void RosClass::sendOdometry(const nav_msgs::msg::Odometry &odom)
{
    odomPub->publish(odom);
}

void RosClass::updateTF(const nav_msgs::msg::Odometry &odom)
{
    geometry_msgs::msg::TransformStamped transformStamped;
    
    // Use system time for consistent time source
    transformStamped.header.stamp = rclcpp::Time(Utilities::millis() * 1000000, RCL_SYSTEM_TIME);
    transformStamped.header.frame_id = "/odom_frame";
    transformStamped.child_frame_id = "/base_footprint";
    
    transformStamped.transform.translation.x = odom.pose.pose.position.x;
    transformStamped.transform.translation.y = odom.pose.pose.position.y;
    transformStamped.transform.translation.z = 0.0;
    
    transformStamped.transform.rotation = odom.pose.pose.orientation;
    
    tf_broadcaster_->sendTransform(transformStamped);
}

void RosClass::sendReadParameters(const readParameters &parameterValue)
{
    if (m_controllerType == ROBOTEQ_DEVICE)
    {
        anscer_msgs::msg::MotorDiagnosticsArray motorDiagnosticsArray;
        motorDiagnosticsArray.motor_diagnostics = 
            parameterValue.m_roboteqDiagnosticsFeedback.motor_diagnostics;
        
        sensor_msgs::msg::BatteryState batteryMsg;
        // Use system time for consistent time source
        batteryMsg.header.stamp = rclcpp::Time(Utilities::millis() * 1000000, RCL_SYSTEM_TIME);
        batteryMsg.charge = 100.0f;
        batteryMsg.capacity = 120.0f;
        batteryMsg.design_capacity = 120.0f;
        batteryMsg.percentage = 1.0f;
        batteryMsg.power_supply_status = 1;
        batteryMsg.power_supply_health = 1;
        batteryMsg.power_supply_technology = 2;
        batteryMsg.present = 1;
        batteryMsg.voltage = parameterValue.m_batteryVoltage;
        batteryMsg.current = parameterValue.m_batteryCurrent;
        
        batteryPub->publish(batteryMsg);
        motorDiagPub->publish(motorDiagnosticsArray);
    }
}
