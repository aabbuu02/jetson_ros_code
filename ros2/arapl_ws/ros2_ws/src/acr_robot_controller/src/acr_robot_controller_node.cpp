#include "rclcpp/rclcpp.hpp"
#include "LowerLevelInterface.h"

int main(int argc, char **argv)
{

    printf("\n--- EXECUTING NEW ACR ROBOT CONTROLLER ---\n\n"); // <-- ADD THIS LINE

    rclcpp::init(argc, argv);
    {
    
    // Create node with NodeOptions to automatically declare parameters from YAML
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    
    auto node = std::make_shared<rclcpp::Node>(
        "acr_robot_controller",
        node_options
    );
    
    RCLCPP_INFO(node->get_logger(), "Starting ACR Robot Controller Node");
    
    LowerLevelInterface lowerLevelInterface(node);
    
    rclcpp::Rate loop_rate(50); // 50 Hz control loop
    
    while(rclcpp::ok())
    {
        rclcpp::spin_some(node);
        lowerLevelInterface.controlFlow();
        loop_rate.sleep();
    }
}
    
    rclcpp::shutdown();
    return 0;
}

