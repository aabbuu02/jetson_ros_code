#ifndef LOWER_LEVEL_INTERFACE_H
#define LOWER_LEVEL_INTERFACE_H

#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "RosClass.h"
#include "LowerLevelComputations.h"
#include "Client.h"

#define MACADDRESS "48:b0:2d:76:08:98"

class LowerLevelInterface {
public:
    explicit LowerLevelInterface(std::shared_ptr<rclcpp::Node> node);
    ~LowerLevelInterface() = default;

    void controlFlow();

private:
    std::shared_ptr<rclcpp::Node> node_;

    void initializeParameters();
    void authenticationProcess();
    void getMACAddress();
    void resetCmdVelocity(geometry_msgs::msg::Twist &cmdVel);

    /* Member variables */
    int64_t m_current_time_, m_last_time_, m_delta_time_;
    int m_controller_type_ = 1;
    bool m_publish_tf_ = false;
    std::string m_mac_address_;
    
    nav_msgs::msg::Odometry m_odom_;
    writeParameters m_write_params_;
    readParameters m_read_params_;

    /* Class instances */
    std::unique_ptr<RosClass> p_ros_class_;
    std::unique_ptr<Client> p_client_;
    AHighLevelController *p_high_level_controller_;
    std::unique_ptr<LowerLevelComputations> p_lower_level_computation_;
};

#endif  // LOWER_LEVEL_INTERFACE_H
