#include "LowerLevelInterface.h"
#include <array>

LowerLevelInterface::LowerLevelInterface(std::shared_ptr<rclcpp::Node> node) : node_(node) {
    initializeParameters();
    
    p_ros_class_ = std::make_unique<RosClass>(node_);
    p_lower_level_computation_ = std::make_unique<LowerLevelComputations>(node_);
    p_client_ = std::make_unique<Client>(node_, m_controller_type_);
    p_high_level_controller_ = p_client_->getHighLevelController();
    
    m_last_time_ = m_current_time_ = Utilities::millis();
    
    RCLCPP_INFO(node_->get_logger(), "LowerLevelInterface Constructor called");
}

void LowerLevelInterface::initializeParameters() {
    // Declare parameters only if not already declared
    if (!node_->has_parameter("controller_type")) {
        node_->declare_parameter("controller_type", 1);
    }
    if (!node_->has_parameter("publish_tf")) {
        node_->declare_parameter("publish_tf", true);
    }
    
    m_controller_type_ = node_->get_parameter("controller_type").as_int();
    m_publish_tf_ = node_->get_parameter("publish_tf").as_bool();
    
    m_odom_.pose.pose.orientation.w = 1.0;
}

void LowerLevelInterface::authenticationProcess() {
    getMACAddress();
    if (m_mac_address_ == MACADDRESS) {
        RCLCPP_INFO(node_->get_logger(), "Authentication successful");
    } else {
        RCLCPP_FATAL(node_->get_logger(), "Authentication failed. Contact Vendor");
        exit(0);
    }
}

void LowerLevelInterface::getMACAddress() {
    constexpr int max_buffer = 256;
    std::array<char, max_buffer> buffer;
    std::string str = "cat /sys/class/net/eth0/address";
    
    FILE *stream = popen(str.c_str(), "r");
    if (stream) {
        while (!feof(stream)) {
            if (fgets(buffer.data(), max_buffer, stream) != nullptr) {
                m_mac_address_.append(buffer.data());
            }
        }
        if (!m_mac_address_.empty()) {
            m_mac_address_ = m_mac_address_.substr(0, m_mac_address_.length() - 1);
        }
        pclose(stream);
    }
}

void LowerLevelInterface::controlFlow() {
    m_current_time_ = Utilities::millis();
    m_delta_time_ = m_current_time_ - m_last_time_;
    
    geometry_msgs::msg::Twist cmdVel = p_ros_class_->getCommandVelocity();
    bool eStopStatus = p_ros_class_->getEStopStatus();
    
    if (eStopStatus) {
        resetCmdVelocity(cmdVel);
    }
    
    p_lower_level_computation_->initializeComputation(cmdVel, m_write_params_);
    p_ros_class_->getWriteParams(m_write_params_);
    
    // Write commands to motor controller
    p_high_level_controller_->writeCommands(m_write_params_);
    
    // Read encoder data from motor controller
    p_high_level_controller_->readCommands(m_read_params_);
    
    // Update odometry
    p_lower_level_computation_->updateOdometry(m_delta_time_, m_read_params_, m_odom_);
    
    // Publish odometry
    p_ros_class_->sendOdometry(m_odom_);
    p_ros_class_->sendReadParameters(m_read_params_);
    
    // Publish TF if enabled
    if (m_publish_tf_) {
        p_ros_class_->updateTF(m_odom_);
    }
    
    m_last_time_ = m_current_time_;
}

void LowerLevelInterface::resetCmdVelocity(geometry_msgs::msg::Twist &cmdVel) {
    cmdVel.linear.x = 0.0;
    cmdVel.angular.z = 0.0;
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    
    {
    auto node = std::make_shared<rclcpp::Node>("lower_level_controller");
    
    LowerLevelInterface lower_level_controller(node);
    
    rclcpp::Rate rate(30);  // 30 Hz
    
    while (rclcpp::ok()) {
        lower_level_controller.controlFlow();
        rclcpp::spin_some(node);
        rate.sleep();
    }
}
    
    rclcpp::shutdown();
    return 0;
}
