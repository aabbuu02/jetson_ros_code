#include "LowerLevelComputations.h"

LowerLevelComputations::LowerLevelComputations(std::shared_ptr<rclcpp::Node> node) 
    : node_(node) {
    
    initializeParameters();
    
    debug_cmd_vel_pub_ = node_->create_publisher<geometry_msgs::msg::Twist>(
        m_debug_cmd_vel_topic_, 10);
    
    barcode_pose_sub_ = node_->create_subscription<anscer_msgs::msg::PGVPose>(
        m_barcode_topic_, 10,
        std::bind(&LowerLevelComputations::barcodeCallback, this, std::placeholders::_1));
    
    m_last_time_ = m_current_time_ = Utilities::millis();
    
    RCLCPP_INFO(node_->get_logger(), "LowerLevelComputations Constructor called");
}

void LowerLevelComputations::initializeParameters() {
    // Use has_parameter() to check before declaring
    if (!node_->has_parameter("robot.wheel_seperation")) {
        node_->declare_parameter("robot.wheel_seperation", 0.39);
    }
    if (!node_->has_parameter("robot.wheel_radius")) {
        node_->declare_parameter("robot.wheel_radius", 0.10);
    }
    if (!node_->has_parameter("robot.TPR")) {
        node_->declare_parameter("robot.TPR", 16384.0);
    }
    if (!node_->has_parameter("robot.linear_vel_limit")) {
        node_->declare_parameter("robot.linear_vel_limit", 2.0);
    }
    if (!node_->has_parameter("robot.angular_vel_limit")) {
        node_->declare_parameter("robot.angular_vel_limit", 1.0);
    }
    if (!node_->has_parameter("robot.gearRatio")) {
        node_->declare_parameter("robot.gearRatio", 9.0);
    }
    if (!node_->has_parameter("robot.linear_acc_limit")) {
        node_->declare_parameter("robot.linear_acc_limit", 0.1);
    }
    if (!node_->has_parameter("robot.linear_decc_limit")) {
        node_->declare_parameter("robot.linear_decc_limit", 0.1);
    }
    if (!node_->has_parameter("odom_frame")) {
        node_->declare_parameter("odom_frame", "odom_frame");
    }
    if (!node_->has_parameter("base_frame")) {
        node_->declare_parameter("base_frame", "base_footprint");
    }
    if (!node_->has_parameter("barcode_topic")) {
        node_->declare_parameter("barcode_topic", "barcode/global");
    }
    if (!node_->has_parameter("debug_cmd_topic")) {
        node_->declare_parameter("debug_cmd_topic", "debug/cmd_vel");
    }

    m_wheel_separation_ = node_->get_parameter("robot.wheel_seperation").as_double();
    m_wheel_radius_ = node_->get_parameter("robot.wheel_radius").as_double();
    m_tpr_ = node_->get_parameter("robot.TPR").as_double();
    m_linear_velocity_limit_ = node_->get_parameter("robot.linear_vel_limit").as_double();
    m_angular_velocity_limit_ = node_->get_parameter("robot.angular_vel_limit").as_double();
    m_gear_ratio_ = node_->get_parameter("robot.gearRatio").as_double();
    m_linear_acc_limit__m_s2_ = node_->get_parameter("robot.linear_acc_limit").as_double();
    m_linear_decc_limit__m_s2_ = node_->get_parameter("robot.linear_decc_limit").as_double();
    m_odom_frame_ = node_->get_parameter("odom_frame").as_string();
    m_base_frame_ = node_->get_parameter("base_frame").as_string();
    m_barcode_topic_ = node_->get_parameter("barcode_topic").as_string();
    m_debug_cmd_vel_topic_ = node_->get_parameter("debug_cmd_topic").as_string();
}

void LowerLevelComputations::barcodeCallback(const anscer_msgs::msg::PGVPose::SharedPtr msg) {
    m_pgv_global_pose_ = *msg;
    m_barcode_data_received_ = true;
}

void LowerLevelComputations::initializeComputation(
    const geometry_msgs::msg::Twist &cmdVel, writeParameters &writeParam) {
    
    m_meter_per_tick_ = (2 * M_PI * m_wheel_radius_) / (m_tpr_ * m_gear_ratio_);
    m_linear_velocity_ = cmdVel.linear.x;
    m_angular_velocity_ = cmdVel.angular.z;
    
    velocityLimiter(m_linear_velocity_, m_angular_velocity_);
    
    if ((std::fabs(cmdVel.linear.x) <= 0.001 && std::fabs(cmdVel.angular.z) <= 0.001)) {
        m_linear_velocity_ = 0.0;
        m_angular_velocity_ = 0.0;
    }
    
    auto cmd_msg = geometry_msgs::msg::Twist();
    cmd_msg.linear.x = m_linear_velocity_;
    cmd_msg.angular.z = m_angular_velocity_;
    debug_cmd_vel_pub_->publish(cmd_msg);
    
    motorDriveCommands(writeParam);
}

void LowerLevelComputations::velocityLimiter(double &linearVelocity, double &angularVelocity) {
    m_current_time_ = Utilities::millis();
    m_delta_time_ = m_current_time_ - m_last_time_;
    
    // Linear velocity smoothing
    if (linearVelocity > (m_last_linear_velocity_ + (m_linear_acc_limit__m_s2_ * m_delta_time_ * MILLI_SECONDS))) {
        linearVelocity = (m_last_linear_velocity_ + (m_linear_acc_limit__m_s2_ * m_delta_time_ * MILLI_SECONDS));
    } else if (linearVelocity < (m_last_linear_velocity_ - (m_linear_decc_limit__m_s2_ * m_delta_time_ * MILLI_SECONDS))) {
        linearVelocity = (m_last_linear_velocity_ - (m_linear_decc_limit__m_s2_ * m_delta_time_ * MILLI_SECONDS));
    }
    
    // Clamping linear velocity
    linearVelocity = std::clamp(linearVelocity, -m_linear_velocity_limit_, m_linear_velocity_limit_);
    
    // Clamping angular velocity
    angularVelocity = std::clamp(angularVelocity, -m_angular_velocity_limit_, m_angular_velocity_limit_);
    
    m_last_linear_velocity_ = linearVelocity;
    m_last_time_ = m_current_time_;
}

void LowerLevelComputations::motorDriveCommands(writeParameters &writeParam) {
    double leftSpeed = m_linear_velocity_ + m_angular_velocity_ * m_wheel_separation_ / 2.0;
    double rightSpeed = m_linear_velocity_ - m_angular_velocity_ * m_wheel_separation_ / 2.0;
    
    double leftRPM = 60 / (2 * M_PI * m_wheel_radius_) * leftSpeed;
    double rightRPM = 60 / (2 * M_PI * m_wheel_radius_) * rightSpeed;
    
    writeParam.m_leftDirection = (leftRPM < 0.0) ? CW : CCW;
    writeParam.m_rightDirection = (rightRPM < 0.0) ? CW : CCW;
    writeParam.m_leftMotorCommand = static_cast<int>(std::abs(leftRPM * m_gear_ratio_));
    writeParam.m_rightMotorCommand = static_cast<int>(std::abs(rightRPM * m_gear_ratio_));
}

void LowerLevelComputations::updateOdometry(
    uint32_t deltaTime, const readParameters &readParam, nav_msgs::msg::Odometry &odometryData) {
    
    int32_t rightEncoder = readParam.m_rightMotorEncoder;
    int32_t leftEncoder = readParam.m_leftMotorEncoder;
    
    processEncoderValues(leftEncoder, rightEncoder);
    
    if (deltaTime == 0) {
        return;
    }
    
    m_delta_left_wheel_ = m_last_diff_reading_[LEFT] * m_meter_per_tick_;
    m_delta_right_wheel_ = m_last_diff_reading_[RIGHT] * m_meter_per_tick_;
    
    if (std::isnan(m_delta_left_wheel_)) m_delta_left_wheel_ = 0.0;
    if (std::isnan(m_delta_right_wheel_)) m_delta_right_wheel_ = 0.0;
    
    double deltaTheta = (-m_delta_left_wheel_ + m_delta_right_wheel_) / m_wheel_separation_;
    double deltaS = (m_delta_right_wheel_ + m_delta_left_wheel_) / 2.0;
    
    double leftMotorRPM = (readParam.m_leftMotorSpeed) / m_gear_ratio_;
    double rightMotorRPM = (readParam.m_rightMotorSpeed) / m_gear_ratio_;
    
    double leftSpeed = leftMotorRPM * 2 * M_PI * m_wheel_radius_ / 60;
    double rightSpeed = rightMotorRPM * 2 * M_PI * m_wheel_radius_ / 60;
    
    double v = (leftSpeed + rightSpeed) / 2;
    double w = (leftSpeed - rightSpeed) / m_wheel_separation_;
    
    if (m_barcode_data_received_) {
        m_odom_pose_[0] = m_pgv_global_pose_.x;
        m_odom_pose_[1] = m_pgv_global_pose_.y;
        m_odom_pose_[2] = m_pgv_global_pose_.yaw;
    } else {
        m_odom_pose_[0] += deltaS * std::cos(m_odom_pose_[2] + (deltaTheta / 2.0));
        m_odom_pose_[1] += deltaS * std::sin(m_odom_pose_[2] + (deltaTheta / 2.0));
        m_odom_pose_[2] += deltaTheta;
    }
    
    m_odom_vel_[0] = v;
    m_odom_vel_[1] = 0.0;
    m_odom_vel_[2] = w;
    
    odometryData.header.stamp = node_->now();
    odometryData.header.frame_id = m_odom_frame_;
    odometryData.child_frame_id = m_base_frame_;
    odometryData.pose.pose.position.x = m_odom_pose_[0];
    odometryData.pose.pose.position.y = m_odom_pose_[1];
    odometryData.pose.pose.position.z = 0.0;
    
    tf2::Quaternion q;
    q.setRPY(0, 0, m_odom_pose_[2]);
    odometryData.pose.pose.orientation = tf2::toMsg(q);
    
    odometryData.twist.twist.linear.x = m_odom_vel_[0];
    odometryData.twist.twist.angular.z = m_odom_vel_[2];
    
    m_barcode_data_received_ = false;
}

void LowerLevelComputations::processEncoderValues(
    const int32_t &leftEncoder, const int32_t &rightEncoder) {
    
    if (!m_init_encoder_[LEFT]) {
        m_last_reading_[LEFT] = leftEncoder;
        m_last_diff_reading_[LEFT] = 0;
        m_init_encoder_[LEFT] = true;
    }
    m_last_diff_reading_[LEFT] = leftEncoder - m_last_reading_[LEFT];
    m_last_reading_[LEFT] = leftEncoder;
    
    if (!m_init_encoder_[RIGHT]) {
        m_last_reading_[RIGHT] = rightEncoder;
        m_last_diff_reading_[RIGHT] = 0;
        m_init_encoder_[RIGHT] = true;
    }
    m_last_diff_reading_[RIGHT] = rightEncoder - m_last_reading_[RIGHT];
    m_last_reading_[RIGHT] = rightEncoder;
}

double LowerLevelComputations::ticksToMeters(long ticks) {
    return (2 * M_PI * m_wheel_radius_ * ticks) / m_tpr_;
}
