#include <memory>
#include <rclcpp/rclcpp.hpp>
#include "rosbridge_server/websocket_server.hpp"

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<rclcpp::Node>("rosbridge_websocket");

  // Declare and get parameters
  node->declare_parameter<int>("port", 9090);
  node->declare_parameter<std::string>("address", "");
  node->declare_parameter<bool>("ssl", false);
  node->declare_parameter<std::string>("certfile", "");
  node->declare_parameter<std::string>("keyfile", "");
  node->declare_parameter<int>("max_message_size", 10000000);

  int port = node->get_parameter("port").as_int();
  std::string address = node->get_parameter("address").as_string();
  bool use_ssl = node->get_parameter("ssl").as_bool();

  RCLCPP_INFO(node->get_logger(), "Rosbridge WebSocket server initializing...");

  if (use_ssl) {
    RCLCPP_ERROR(node->get_logger(), "SSL not yet implemented");
    return 1;
  }

  try {
    auto server = std::make_shared<rosbridge_server::RosbridgeWebSocketServer>(
      node, port, address);
    
    server->start();

    // Spin the node
    rclcpp::spin(node);

    server->stop();

  } catch (const std::exception& e) {
    RCLCPP_ERROR(node->get_logger(), "Error: %s", e.what());
    return 1;
  }

  rclcpp::shutdown();
  return 0;
}
