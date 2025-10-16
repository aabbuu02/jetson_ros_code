#include "RosClass.h"
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

RosClass::RosClass(std::shared_ptr<rclcpp::Node> node) : node_(node) {
    RCLCPP_INFO(node_->get_logger(), "RosClass Constructor called");

    // Declare parameters only if not already declared
    if (!node_->has_parameter("controller_type")) {
        node_->declare_parameter("controller_type", 1);
    }
    if (!node_->has_parameter("cmd_topic")) {
        node_->declare_parameter("cmd_topic", "cmd_vel");
    }
    if (!node_->has_parameter("odom_topic")) {
        node_->declare_parameter("odom_topic", "odom");
    }
    if (!node_->has_parameter("emergency_stop_topic")) {
        node_->declare_parameter("emergency_stop_topic", "e_stop");
    }
    if (!node_->has_parameter("emergency_button_topic")) {
        node_->declare_parameter("emergency_button_topic", "e_stop/button");
    }
    
    m_controller_type_ = node_->get_parameter("controller_type").as_int();
    m_cmd_vel_topic_ = node_->get_parameter("cmd_topic").as_string();
    m_odom_topic_ = node_->get_parameter("odom_topic").as_string();
    m_emergency_stop_topic_ = node_->get_parameter("emergency_stop_topic").as_string();
    m_emergency_button_topic_ = node_->get_parameter("emergency_button_topic").as_string();

    // Initialize subscribers
    cmd_vel_sub_ = node_->create_subscription<geometry_msgs::msg::Twist>(
        m_cmd_vel_topic_, 10,
        std::bind(&RosClass::cmdVelCallback, this, std::placeholders::_1));

    e_stop_sub_ = node_->create_subscription<std_msgs::msg::Bool>(
        m_emergency_stop_topic_, 10,
        std::bind(&RosClass::eStopCallback, this, std::placeholders::_1));

    lifter_sub_ = node_->create_subscription<lift_action::msg::LiftAction>(
        "lift_action", 10,
        std::bind(&RosClass::lifterCallback, this, std::placeholders::_1));

    // Initialize publishers
    odom_pub_ = node_->create_publisher<nav_msgs::msg::Odometry>(m_odom_topic_, 10);
    bot_shelf_pub_ = node_->create_publisher<std_msgs::msg::Int8>("bot_shelf_number", 10);
    emergency_pub_ = node_->create_publisher<std_msgs::msg::Bool>(m_emergency_button_topic_, 10);

    // Initialize service
    relay_service_ = node_->create_service<anscer_msgs::srv::RelayState>(
        "relay_status",
        std::bind(&RosClass::relayStatus, this, std::placeholders::_1, std::placeholders::_2));

    // Initialize timer (4 Hz = 250ms period)
    heartbeat_timer_ = node_->create_wall_timer(
        std::chrono::milliseconds(250),
        std::bind(&RosClass::heartBeatTimerCallback, this));

    // Initialize TF broadcaster
    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(node_);
}

void RosClass::lifterCallback(const lift_action::msg::LiftAction::SharedPtr msg) {
    m_lifter_data_ = *msg;
}

void RosClass::heartBeatTimerCallback() {
    m_heartbeat_state_ = (m_heartbeat_state_ == 0) ? 1 : 0;
}

void RosClass::cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg) {
    m_cmd_vel_ = *msg;
}

void RosClass::eStopCallback(const std_msgs::msg::Bool::SharedPtr msg) {
    m_e_stop_ = msg->data;
}

geometry_msgs::msg::Twist RosClass::getCommandVelocity() {
    if (m_e_stop_) {
        m_cmd_vel_.linear.x = 0.0;
        m_cmd_vel_.angular.z = 0.0;
    }
    return m_cmd_vel_;
}

bool RosClass::getEStopStatus() {
    return m_e_stop_;
}

void RosClass::sendOdometry(const nav_msgs::msg::Odometry &odom) {
    odom_pub_->publish(odom);
}

void RosClass::updateTF(const nav_msgs::msg::Odometry &odom) {
    geometry_msgs::msg::TransformStamped transform_stamped;
    
    transform_stamped.header.stamp = node_->now();
    transform_stamped.header.frame_id = "odom_frame";
    transform_stamped.child_frame_id = "base_footprint";
    
    transform_stamped.transform.translation.x = odom.pose.pose.position.x;
    transform_stamped.transform.translation.y = odom.pose.pose.position.y;
    transform_stamped.transform.translation.z = 0.0;
    
    transform_stamped.transform.rotation = odom.pose.pose.orientation;
    
    tf_broadcaster_->sendTransform(transform_stamped);
}

void RosClass::getWriteParams(writeParameters &value) {
    value.m_heartBeat = m_heartbeat_state_;
    value.m_lifterData = m_lifter_data_;
}

void RosClass::sendReadParameters(const readParameters &parameterValue) {
    auto bot_shelf_msg = std_msgs::msg::Int8();
    bot_shelf_msg.data = static_cast<int8_t>(parameterValue.m_botShelfNo);
    bot_shelf_pub_->publish(bot_shelf_msg);
}

bool RosClass::relayStatus(
    const std::shared_ptr<anscer_msgs::srv::RelayState::Request> request,
    std::shared_ptr<anscer_msgs::srv::RelayState::Response> response) {
    
    // Service definition:
    // Request: bool relay_state
    // Response: bool result
    
    m_relay_state_ = request->relay_state;
    response->result = true;
    
    RCLCPP_INFO(node_->get_logger(), "Relay state updated to: %s", 
                m_relay_state_ ? "ON" : "OFF");
    
    return true;
}

bool RosClass::setRelayState() {
    return m_relay_state_;
}

void RosClass::sendLifterState(const readParameters &rp) {
    // Implementation for lifter state feedback if needed
    (void)rp;  // Suppress unused parameter warning
}
