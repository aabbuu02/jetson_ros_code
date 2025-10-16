#ifndef ROSBRIDGE_SERVER__WEBSOCKET_SERVER_HPP_
#define ROSBRIDGE_SERVER__WEBSOCKET_SERVER_HPP_

#include <memory>
#include <thread>
#include <unordered_map>
#include <mutex>

#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/server.hpp>
#include <rclcpp/rclcpp.hpp>

#include "rosbridge_server/rosbridge_protocol.hpp"

namespace rosbridge_server
{

using WebsocketServer = websocketpp::server<websocketpp::config::asio>;
using ConnectionHdl = websocketpp::connection_hdl;
using MessagePtr = WebsocketServer::message_ptr;

/**
 * @brief WebSocket server for rosbridge protocol
 */
class RosbridgeWebSocketServer
{
public:
  /**
   * @brief Constructor
   * @param node ROS2 node
   * @param port WebSocket port
   * @param address Bind address
   */
  RosbridgeWebSocketServer(
    rclcpp::Node::SharedPtr node,
    int port,
    const std::string& address = "");

  /**
   * @brief Destructor
   */
  ~RosbridgeWebSocketServer();

  /**
   * @brief Start the WebSocket server
   */
  void start();

  /**
   * @brief Stop the WebSocket server
   */
  void stop();

private:
  // WebSocket event handlers
  void on_open(ConnectionHdl hdl);
  void on_close(ConnectionHdl hdl);
  void on_message(ConnectionHdl hdl, MessagePtr msg);

  // Member variables
  rclcpp::Node::SharedPtr node_;
  int port_;
  std::string address_;
  
  WebsocketServer server_;
  std::thread server_thread_;
  
  std::mutex connections_mutex_;
  std::unordered_map<void*, std::shared_ptr<RosbridgeProtocol>> connections_;
  
  int client_id_seed_;
  int clients_connected_;
  
  bool running_;
};

}  // namespace rosbridge_server

#endif  // ROSBRIDGE_SERVER__WEBSOCKET_SERVER_HPP_
