#ifndef ANSCER_TELEOP__ANSCER_TELEOP_KEY_HPP_
#define ANSCER_TELEOP__ANSCER_TELEOP_KEY_HPP_

#include <string>
#include <termios.h>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

/**
 * @brief Class for handling terminal input
 */
class KeyboardReader
{
public:
    KeyboardReader();
    ~KeyboardReader();
    char readKey();

private:
    struct termios original_settings_;
};

/**
 * @brief ROS2 Node for ANSCER keyboard teleoperation
 */
class AnscerTeleopNode : public rclcpp::Node
{
public:
    AnscerTeleopNode();
    void processKey(char key);
    void stop();

private:
    void timerCallback();
    double checkLinearLimitVelocity(double vel);
    double checkAngularLimitVelocity(double vel);
    void printVels() const;

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    std::string robot_model_;
    double target_linear_vel_;
    double target_angular_vel_;
    double control_linear_vel_;
    double control_angular_vel_;
    int status_;
};

#endif  // ANSCER_TELEOP__ANSCER_TELEOP_KEY_HPP_
