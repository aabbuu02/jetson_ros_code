#include "tag_monitor/tag_monitor.hpp"
#include <rclcpp/rclcpp.hpp>
#include <memory>

int main(int argc, char** argv)
{
    // Initialize ROS2
    rclcpp::init(argc, argv);

    // Create and spin the node
    auto node = std::make_shared<TagMonitor>();
    
    RCLCPP_INFO(node->get_logger(), "Tag Monitor node started");

    // Spin the node
    rclcpp::spin(node);

    // Shutdown
    rclcpp::shutdown();
    
    return EXIT_SUCCESS;
}
