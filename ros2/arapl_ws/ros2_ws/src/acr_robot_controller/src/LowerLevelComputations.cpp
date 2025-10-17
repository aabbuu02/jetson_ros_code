#include "LowerLevelComputations.h"

LowerLevelComputations::LowerLevelComputations(std::shared_ptr<rclcpp::Node> node)
    : node_(node)
{
    RCLCPP_INFO(node_->get_logger(), "LowerLevelComputations Constructor called");
    initializeParameters();
    
    barcodePoseSub = node_->create_subscription<anscer_msgs::msg::PGVPose>(
        m_barcodeGlobalTopic, 1,
        std::bind(&LowerLevelComputations::barcodeCallback, this, std::placeholders::_1));
    
    debugCmdVelPub = node_->create_publisher<geometry_msgs::msg::Twist>(
        m_debugCmdVelTopic, 1);
}

LowerLevelComputations::~LowerLevelComputations()
{
}

void LowerLevelComputations::initializeParameters()
{
    // Remove ALL declare_parameter calls - parameters already auto-declared
    // node_->declare_parameter("robot.wheel_seperation", 0.39);
    // node_->declare_parameter("robot.wheel_radius", 0.10);
    // node_->declare_parameter("robot.TPR", 16384.0);
    // node_->declare_parameter("robot.linear_vel_limit", 2.0);
    // node_->declare_parameter("robot.angular_vel_limit", 1.0);
    // node_->declare_parameter("robot.gearRatio", 9.0);
    // node_->declare_parameter("robot.odom_frame", "odom_frame");
    // node_->declare_parameter("robot.base_frame", "base_footprint");
    // node_->declare_parameter("robot.barcode_global_topic", "barcode/global");
    // node_->declare_parameter("robot.debug_cmd_topic", "debug/cmd_vel");
    
    // Only get parameters (they're already declared by automatically_declare_parameters_from_overrides)
    m_wheelSeperation = node_->get_parameter("robot.wheel_seperation").as_double();
    m_wheelRadius = node_->get_parameter("robot.wheel_radius").as_double();
    m_TPR = node_->get_parameter("robot.TPR").as_double();
    m_linearVelocityLimit = node_->get_parameter("robot.linear_vel_limit").as_double();
    m_angularVelocityLimit = node_->get_parameter("robot.angular_vel_limit").as_double();
    m_gearRatio = node_->get_parameter("robot.gearRatio").as_double();
    m_odomFrame = node_->get_parameter("robot.odom_frame").as_string();
    m_baseFrame = node_->get_parameter("robot.base_frame").as_string();
    m_barcodeGlobalTopic = node_->get_parameter("robot.barcode_global_topic").as_string();
    m_debugCmdVelTopic = node_->get_parameter("robot.debug_cmd_topic").as_string();
}

void LowerLevelComputations::velocityLimiter(double &linearVel, double &angularVel)
{
    if(linearVel > m_linearVelocityLimit)
        linearVel = m_linearVelocityLimit;
    else if(linearVel < -m_linearVelocityLimit)
        linearVel = -m_linearVelocityLimit;
    
    if(angularVel > m_angularVelocityLimit)
        angularVel = m_angularVelocityLimit;
    else if(angularVel < -m_angularVelocityLimit)
        angularVel = -m_angularVelocityLimit;
}

void LowerLevelComputations::initializeComputation(const geometry_msgs::msg::Twist &cmdVel, 
                                                    writeParameters &writeParam)
{
    double linearVel = cmdVel.linear.x;
    double angularVel = cmdVel.angular.z;
    
    velocityLimiter(linearVel, angularVel);
    
    geometry_msgs::msg::Twist debugCmdVel;
    debugCmdVel.linear.x = linearVel;
    debugCmdVel.angular.z = angularVel;
    debugCmdVelPub->publish(debugCmdVel);
    
    double leftVelocity = (2.0 * linearVel - angularVel * m_wheelSeperation) / (2.0 * m_wheelRadius);
    double rightVelocity = (2.0 * linearVel + angularVel * m_wheelSeperation) / (2.0 * m_wheelRadius);
    
    double leftRPM = (leftVelocity * 60.0) / (2.0 * M_PI);
    double rightRPM = (rightVelocity * 60.0) / (2.0 * M_PI);
    
    motorDriveCommands(writeParam, static_cast<int>(leftRPM), static_cast<int>(rightRPM));
}

void LowerLevelComputations::motorDriveCommands(writeParameters &writeParam, 
                                                int leftRPM, int rightRPM)
{
    writeParam.m_leftMotorCommand = leftRPM;
    writeParam.m_rightMotorCommand = rightRPM;
    
    if(leftRPM >= 0)
        writeParam.m_leftDirection = CCW;
    else
        writeParam.m_leftDirection = CW;
    
    if(rightRPM >= 0)
        writeParam.m_rightDirection = CCW;
    else
        writeParam.m_rightDirection = CW;
}

void LowerLevelComputations::barcodeCallback(const anscer_msgs::msg::PGVPose::SharedPtr msg)
{
    // PGVPose has fields: float32 x, float32 y, float32 yaw, int16 id
    m_xPosition = msg->x;
    m_yPosition = msg->y;
    m_theta = msg->yaw;
    
    m_firstTime = true;
    RCLCPP_INFO(node_->get_logger(), "Barcode pose updated: x=%.3f, y=%.3f, yaw=%.3f, id=%d", 
                m_xPosition, m_yPosition, m_theta, msg->id);
}

void LowerLevelComputations::updateOdometry(uint32_t deltaTime, const readParameters &readParam,
                                            nav_msgs::msg::Odometry &odometryData)
{
    computeOdometry(deltaTime, readParam, odometryData);
}

void LowerLevelComputations::computeOdometry(uint32_t deltaTime, const readParameters &readParam,
                                             nav_msgs::msg::Odometry &odom)
{
    int leftEncoder = readParam.m_leftEncoder;
    int rightEncoder = readParam.m_rightEncoder;
    
    if(m_firstTime)
    {
        m_leftEncoderPrev = leftEncoder;
        m_rightEncoderPrev = rightEncoder;
        m_firstTime = false;
        return;
    }
    
    int deltaLeftEncoder = leftEncoder - m_leftEncoderPrev;
    int deltaRightEncoder = rightEncoder - m_rightEncoderPrev;
    
    m_leftEncoderPrev = leftEncoder;
    m_rightEncoderPrev = rightEncoder;
    
    double leftDistance = (2.0 * M_PI * m_wheelRadius * deltaLeftEncoder) / m_TPR;
    double rightDistance = (2.0 * M_PI * m_wheelRadius * deltaRightEncoder) / m_TPR;
    
    double deltaDistance = (leftDistance + rightDistance) / 2.0;
    double deltaTheta = (rightDistance - leftDistance) / m_wheelSeperation;
    
    m_xPosition += deltaDistance * cos(m_theta + deltaTheta / 2.0);
    m_yPosition += deltaDistance * sin(m_theta + deltaTheta / 2.0);
    m_theta += deltaTheta;
    
    // Normalize theta to [-pi, pi]
    while(m_theta > M_PI) m_theta -= 2.0 * M_PI;
    while(m_theta < -M_PI) m_theta += 2.0 * M_PI;
    
    double deltaTimeSec = deltaTime / 1000.0;
    double linearVel = (deltaTimeSec > 0) ? deltaDistance / deltaTimeSec : 0.0;
    double angularVel = (deltaTimeSec > 0) ? deltaTheta / deltaTimeSec : 0.0;
    
    // Log velocity like ROS1
    RCLCPP_WARN(node_->get_logger(), "v : %f w: %f", linearVel, angularVel);
    
    // Create quaternion from yaw
    tf2::Quaternion q;
    q.setRPY(0, 0, m_theta);
    
    // Use system time for consistent time source
    odom.header.stamp = rclcpp::Time(Utilities::millis() * 1000000, RCL_SYSTEM_TIME);
    odom.header.frame_id = m_odomFrame;
    odom.child_frame_id = m_baseFrame;
    
    odom.pose.pose.position.x = m_xPosition;
    odom.pose.pose.position.y = m_yPosition;
    odom.pose.pose.position.z = 0.0;
    odom.pose.pose.orientation.x = q.x();
    odom.pose.pose.orientation.y = q.y();
    odom.pose.pose.orientation.z = q.z();
    odom.pose.pose.orientation.w = q.w();
    
    odom.twist.twist.linear.x = linearVel;
    odom.twist.twist.linear.y = 0.0;
    odom.twist.twist.angular.z = angularVel;
}
