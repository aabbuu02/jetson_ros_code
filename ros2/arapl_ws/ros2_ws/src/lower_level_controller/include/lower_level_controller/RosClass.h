#ifndef ROS_CLASS_H
#define ROS_CLASS_H

#include <memory>
#include <string>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/int8.hpp"
#include "std_msgs/msg/int32.hpp"
#include "std_msgs/msg/int8_multi_array.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "anscer_msgs/srv/relay_state.hpp"
#include "anscer_msgs/msg/feedback.hpp"
#include "anscer_msgs/msg/controller_mode.hpp"
#include "lift_action/msg/lift_action.hpp"

#include "Utilities.h"

class RosClass {
public:
    /**
     * @brief Constructor for the RosClass
     */
    explicit RosClass(std::shared_ptr<rclcpp::Node> node);

    /**
     * @brief Destructor for the RosClass
     */
    ~RosClass() = default;

    /* Getter Functions */
    geometry_msgs::msg::Twist getCommandVelocity();
    bool getEStopStatus();
    bool setRelayState();

    /* Setter functions */
    void sendOdometry(const nav_msgs::msg::Odometry &odom);
    void sendReadParameters(const readParameters &parameterValue);
    void updateTF(const nav_msgs::msg::Odometry &odom);
    void getWriteParams(writeParameters &value);
    void sendLifterState(const readParameters &rp);

private:
    std::shared_ptr<rclcpp::Node> node_;

    /* ROS Subscribers */
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr e_stop_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    rclcpp::Subscription<lift_action::msg::LiftAction>::SharedPtr lifter_sub_;

    /* ROS Publishers */
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr emergency_pub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr confirmation_pub_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr mode_pub_;
    rclcpp::Publisher<std_msgs::msg::Int8>::SharedPtr bot_shelf_pub_;

    /* ROS Services */
    rclcpp::Service<anscer_msgs::srv::RelayState>::SharedPtr relay_service_;

    /* Timers */
    rclcpp::TimerBase::SharedPtr heartbeat_timer_;

    /* Timer callback */
    void heartBeatTimerCallback();

    /* Callback functions */
    void eStopCallback(const std_msgs::msg::Bool::SharedPtr msg);
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
    void lifterCallback(const lift_action::msg::LiftAction::SharedPtr msg);
    bool relayStatus(
        const std::shared_ptr<anscer_msgs::srv::RelayState::Request> request,
        std::shared_ptr<anscer_msgs::srv::RelayState::Response> response);

    /* Member variables */
    int m_controller_type_;
    bool m_e_stop_ = false;
    bool m_relay_state_ = false;
    int m_heartbeat_state_ = 0;
    int m_current_lift_command_ = 0;
    
    lift_action::msg::LiftAction m_lifter_data_;
    std::string m_odom_topic_, m_cmd_vel_topic_, m_emergency_stop_topic_, m_emergency_button_topic_;
    geometry_msgs::msg::Twist m_cmd_vel_;
    
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

#endif  // ROS_CLASS_H
