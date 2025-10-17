#include "rclcpp/rclcpp.hpp"
#include "LowerLevelInterface.h"
#include <signal.h>

// Global variable to store the node for signal handling
std::shared_ptr<rclcpp::Node> g_node = nullptr;

void signalHandler(int signal)
{
    if (g_node) {
        RCLCPP_INFO(g_node->get_logger(), "Received signal %d, shutting down gracefully...", signal);
        rclcpp::shutdown();
    }
}

int main(int argc, char **argv)
{
    printf("\n--- EXECUTING NEW ACR ROBOT CONTROLLER ---\n\n");

    // Set up signal handlers for graceful shutdown
    signal(SIGINT, signalHandler);
    signal(SIGTERM, signalHandler);

    rclcpp::init(argc, argv);
    {
    
    // Create node with NodeOptions to automatically declare parameters from YAML
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    
    auto node = std::make_shared<rclcpp::Node>(
        "acr_robot_controller",
        node_options
    );
    
    // Store node globally for signal handling
    g_node = node;
    
    RCLCPP_INFO(node->get_logger(), "Starting ACR Robot Controller Node");
    
    LowerLevelInterface lowerLevelInterface(node);
    
    rclcpp::Rate loop_rate(50); // 50 Hz control loop
    
    while(rclcpp::ok())
    {
        rclcpp::spin_some(node);
        lowerLevelInterface.controlFlow();
        loop_rate.sleep();
    }
    
    RCLCPP_INFO(node->get_logger(), "ACR Robot Controller shutting down...");
    }
    
    rclcpp::shutdown();
    return 0;
}

