#ifndef LOWER_LEVEL_COMPUTATIONS_H
#define LOWER_LEVEL_COMPUTATIONS_H

#include <memory>
#include <string>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "anscer_msgs/msg/pgv_pose.hpp"
#include "Utilities.h"

#define MILLI_SECONDS 0.001
#define LEFT 0
#define RIGHT 1
#define CW 0
#define CCW 1

class LowerLevelComputations {
public:
    explicit LowerLevelComputations(std::shared_ptr<rclcpp::Node> node);
    ~LowerLevelComputations() = default;

    void initializeComputation(const geometry_msgs::msg::Twist &cmdVel, writeParameters &writeParam);
    void updateOdometry(uint32_t deltaTime, const readParameters &readParam, nav_msgs::msg::Odometry &odometryData);

private:
    std::shared_ptr<rclcpp::Node> node_;

    rclcpp::Subscription<anscer_msgs::msg::PGVPose>::SharedPtr barcode_pose_sub_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr debug_cmd_vel_pub_;

    /* Member functions */
    void initializeParameters();
    void barcodeCallback(const anscer_msgs::msg::PGVPose::SharedPtr msg);
    void velocityLimiter(double &linearVel, double &angularVel);
    void motorDriveCommands(writeParameters &writeParam);
    void processEncoderValues(const int32_t &leftEncoder, const int32_t &rightEncoder);
    double ticksToMeters(long ticks);

    /* Member variables */
    int m_left_direction_ = 0;
    int m_right_direction_ = 0;
    int32_t m_last_reading_[2] = {0, 0};
    int32_t m_last_diff_reading_[2] = {0, 0};
    int64_t m_current_time_, m_last_time_, m_delta_time_;
    
    double m_last_linear_velocity_ = 0.0;
    double m_linear_acc_limit__m_s2_, m_linear_decc_limit__m_s2_;
    double m_wheel_separation_, m_wheel_radius_, m_gear_ratio_, m_tpr_;
    double m_linear_velocity_limit_, m_angular_velocity_limit_;
    double m_linear_velocity_, m_angular_velocity_;
    double m_odom_pose_[3] = {0.0, 0.0, 0.0};
    double m_odom_vel_[3] = {0.0, 0.0, 0.0};
    double m_delta_left_wheel_, m_delta_right_wheel_;
    double m_meter_per_tick_;
    
    bool m_init_encoder_[2] = {false, false};
    bool m_barcode_data_received_ = false;
    
    std::string m_odom_frame_, m_base_frame_, m_debug_cmd_vel_topic_;
    std::string m_barcode_topic_;
    
    anscer_msgs::msg::PGVPose m_pgv_global_pose_;
};

#endif  // LOWER_LEVEL_COMPUTATIONS_H
