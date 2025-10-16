/*
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Software License Agreement (BSD License 2.0)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of the Willow Garage nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <chrono>
#include <memory>
#include <string>
#include <iostream>
#include <algorithm>
#include <termios.h>
#include <unistd.h>
#include <sys/select.h>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

// Velocity limits
constexpr double BURGER_MAX_LIN_VEL = 0.22;
constexpr double BURGER_MAX_ANG_VEL = 2.84;
constexpr double WAFFLE_MAX_LIN_VEL = 0.26;
constexpr double WAFFLE_MAX_ANG_VEL = 1.82;

constexpr double LIN_VEL_STEP_SIZE = 0.01;
constexpr double ANG_VEL_STEP_SIZE = 0.05;

const std::string MSG = R"(
Control Your AMR!
---------------------------
Moving around:
        w
   a    s    d
        x

w/x : increase/decrease linear velocity (Burger : ~ 0.22, Waffle and Waffle Pi : ~ 0.26)
a/d : increase/decrease angular velocity (Burger : ~ 2.84, Waffle and Waffle Pi : ~ 1.82)

space key, s : force stop

CTRL-C to quit
)";

/**
 * @brief Constrain a value within specified limits
 * @param value Input value
 * @param low Lower bound
 * @param high Upper bound
 * @return Constrained value
 */
inline double constrain(double value, double low, double high)
{
    return std::max(low, std::min(value, high));
}

/**
 * @brief Create a velocity profile for smooth acceleration
 * @param output Current output value
 * @param input Target input value
 * @param slop Acceleration/deceleration rate
 * @return Smoothed output value
 */
inline double makeSimpleProfile(double output, double input, double slop)
{
    if (input > output) {
        return std::min(input, output + slop);
    } else if (input < output) {
        return std::max(input, output - slop);
    }
    return input;
}

/**
 * @brief Class for handling terminal input
 */
class KeyboardReader
{
public:
    KeyboardReader()
    {
        // Save original terminal settings
        tcgetattr(STDIN_FILENO, &original_settings_);
        
        // Set terminal to raw mode
        struct termios raw = original_settings_;
        raw.c_lflag &= ~(ICANON | ECHO);
        raw.c_cc[VMIN] = 0;
        raw.c_cc[VTIME] = 0;
        tcsetattr(STDIN_FILENO, TCSANOW, &raw);
    }

    ~KeyboardReader()
    {
        // Restore original terminal settings
        tcsetattr(STDIN_FILENO, TCSANOW, &original_settings_);
    }

    /**
     * @brief Read a single character from keyboard with timeout
     * @return Character read, or '\0' if timeout
     */
    char readKey()
    {
        fd_set read_fds;
        FD_ZERO(&read_fds);
        FD_SET(STDIN_FILENO, &read_fds);

        struct timeval timeout;
        timeout.tv_sec = 0;
        timeout.tv_usec = 100000; // 100ms timeout

        int result = select(STDIN_FILENO + 1, &read_fds, nullptr, nullptr, &timeout);
        
        if (result > 0) {
            char c;
            if (read(STDIN_FILENO, &c, 1) == 1) {
                return c;
            }
        }
        return '\0';
    }

private:
    struct termios original_settings_;
};

/**
 * @brief ROS2 Node for ANSCER keyboard teleoperation
 */
class AnscerTeleopNode : public rclcpp::Node
{
public:
    AnscerTeleopNode()
    : Node("anscer_teleop"),
      target_linear_vel_(0.0),
      target_angular_vel_(0.0),
      control_linear_vel_(0.0),
      control_angular_vel_(0.0),
      status_(0)
    {
        // Declare and get parameters
        this->declare_parameter<std::string>("model", "burger");
        this->get_parameter("model", robot_model_);

        // Create publisher
        cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
            "/joy/cmd_vel", 10);

        // Create timer for velocity smoothing and publishing
        timer_ = this->create_wall_timer(
            10ms, std::bind(&AnscerTeleopNode::timerCallback, this));

        RCLCPP_INFO(this->get_logger(), 
                    "ANSCER Teleop Node started with model: %s", 
                    robot_model_.c_str());

        std::cout << MSG << std::endl;
    }

    /**
     * @brief Process keyboard input
     * @param key Character input from keyboard
     */
    void processKey(char key)
    {
        switch (key) {
            case 'w':
                target_linear_vel_ = checkLinearLimitVelocity(
                    target_linear_vel_ + LIN_VEL_STEP_SIZE);
                status_++;
                printVels();
                break;

            case 'x':
                target_linear_vel_ = checkLinearLimitVelocity(
                    target_linear_vel_ - LIN_VEL_STEP_SIZE);
                status_++;
                printVels();
                break;

            case 'a':
                target_angular_vel_ = checkAngularLimitVelocity(
                    target_angular_vel_ + ANG_VEL_STEP_SIZE);
                status_++;
                printVels();
                break;

            case 'd':
                target_angular_vel_ = checkAngularLimitVelocity(
                    target_angular_vel_ - ANG_VEL_STEP_SIZE);
                status_++;
                printVels();
                break;

            case ' ':
            case 's':
                target_linear_vel_ = 0.0;
                control_linear_vel_ = 0.0;
                target_angular_vel_ = 0.0;
                control_angular_vel_ = 0.0;
                printVels();
                break;

            case '\x03': // CTRL-C
                rclcpp::shutdown();
                break;
        }

        if (status_ == 20) {
            std::cout << MSG << std::endl;
            status_ = 0;
        }
    }

    /**
     * @brief Stop the robot
     */
    void stop()
    {
        auto twist = geometry_msgs::msg::Twist();
        twist.linear.x = 0.0;
        twist.linear.y = 0.0;
        twist.linear.z = 0.0;
        twist.angular.x = 0.0;
        twist.angular.y = 0.0;
        twist.angular.z = 0.0;
        cmd_vel_pub_->publish(twist);
    }

private:
    /**
     * @brief Timer callback for velocity smoothing and publishing
     */
    void timerCallback()
    {
        // Apply velocity smoothing
        control_linear_vel_ = makeSimpleProfile(
            control_linear_vel_,
            target_linear_vel_,
            LIN_VEL_STEP_SIZE / 2.0);

        control_angular_vel_ = makeSimpleProfile(
            control_angular_vel_,
            target_angular_vel_,
            ANG_VEL_STEP_SIZE / 2.0);

        // Create and publish Twist message
        auto twist = geometry_msgs::msg::Twist();
        twist.linear.x = control_linear_vel_;
        twist.linear.y = 0.0;
        twist.linear.z = 0.0;
        twist.angular.x = 0.0;
        twist.angular.y = 0.0;
        twist.angular.z = control_angular_vel_;

        cmd_vel_pub_->publish(twist);
    }

    /**
     * @brief Check and constrain linear velocity based on robot model
     * @param vel Input velocity
     * @return Constrained velocity
     */
    double checkLinearLimitVelocity(double vel)
    {
        if (robot_model_ == "burger") {
            return constrain(vel, -BURGER_MAX_LIN_VEL, BURGER_MAX_LIN_VEL);
        } else if (robot_model_ == "waffle" || robot_model_ == "waffle_pi") {
            return constrain(vel, -WAFFLE_MAX_LIN_VEL, WAFFLE_MAX_LIN_VEL);
        }
        return constrain(vel, -BURGER_MAX_LIN_VEL, BURGER_MAX_LIN_VEL);
    }

    /**
     * @brief Check and constrain angular velocity based on robot model
     * @param vel Input velocity
     * @return Constrained velocity
     */
    double checkAngularLimitVelocity(double vel)
    {
        if (robot_model_ == "burger") {
            return constrain(vel, -BURGER_MAX_ANG_VEL, BURGER_MAX_ANG_VEL);
        } else if (robot_model_ == "waffle" || robot_model_ == "waffle_pi") {
            return constrain(vel, -WAFFLE_MAX_ANG_VEL, WAFFLE_MAX_ANG_VEL);
        }
        return constrain(vel, -BURGER_MAX_ANG_VEL, BURGER_MAX_ANG_VEL);
    }

    /**
     * @brief Print current velocity settings
     */
    void printVels() const
    {
        std::cout << "currently:\tlinear vel " << target_linear_vel_ 
                  << "\t angular vel " << target_angular_vel_ << std::endl;
    }

    // Member variables
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    std::string robot_model_;
    double target_linear_vel_;
    double target_angular_vel_;
    double control_linear_vel_;
    double control_angular_vel_;
    int status_;
};

/**
 * @brief Main function
 */
int main(int argc, char * argv[])
{
    // Initialize ROS2
    rclcpp::init(argc, argv);

    // Create node
    auto node = std::make_shared<AnscerTeleopNode>();

    // Create keyboard reader
    KeyboardReader keyboard;

    try {
        // Main loop
        while (rclcpp::ok()) {
            // Read keyboard input
            char key = keyboard.readKey();
            
            if (key != '\0') {
                node->processKey(key);
            }

            // Spin node to process callbacks
            rclcpp::spin_some(node);
        }
    } catch (const std::exception& e) {
        RCLCPP_ERROR(node->get_logger(), "Exception: %s", e.what());
    }

    // Stop the robot before exiting
    node->stop();

    // Shutdown ROS2
    rclcpp::shutdown();

    return 0;
}
