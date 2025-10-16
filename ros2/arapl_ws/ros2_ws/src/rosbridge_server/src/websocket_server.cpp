#include "rosbridge_server/websocket_server.hpp"
#include <functional>

namespace rosbridge_server
{

RosbridgeWebSocketServer::RosbridgeWebSocketServer(
  rclcpp::Node::SharedPtr node,
  int port,
  const std::string& address)
: node_(node),
  port_(port),
  address_(address),
  client_id_seed_(0),
  clients_connected_(0),
  running_(false)
{
  // Set logging settings
  server_.set_access_channels(websocketpp::log::alevel::all);
  server_.clear_access_channels(websocketpp::log::alevel::frame_payload);

  // Initialize Asio
  server_.init_asio();

  // Set handlers
  server_.set_open_handler(
    std::bind(&RosbridgeWebSocketServer::on_open, this, std::placeholders::_1));
  
  server_.set_close_handler(
    std::bind(&RosbridgeWebSocketServer::on_close, this, std::placeholders::_1));
  
  server_.set_message_handler(
    std::bind(&RosbridgeWebSocketServer::on_message, this,
      std::placeholders::_1, std::placeholders::_2));

  // Set reuse address
  server_.set_reuse_addr(true);
}

RosbridgeWebSocketServer::~RosbridgeWebSocketServer()
{
  stop();
}

void RosbridgeWebSocketServer::start()
{
  try {
    // Listen on specified port
    if (address_.empty()) {
      server_.listen(port_);
    } else {
      server_.listen(address_, std::to_string(port_));
    }

    // Start accepting connections
    server_.start_accept();

    running_ = true;

    RCLCPP_INFO(node_->get_logger(),
      "Rosbridge WebSocket server started on port %d", port_);

    // Run server in separate thread
    server_thread_ = std::thread([this]() {
      server_.run();
    });

  } catch (const std::exception& e) {
    RCLCPP_ERROR(node_->get_logger(),
      "Failed to start WebSocket server: %s", e.what());
    throw;
  }
}

void RosbridgeWebSocketServer::stop()
{
  if (running_) {
    RCLCPP_INFO(node_->get_logger(), "Stopping Rosbridge WebSocket server...");
    
    running_ = false;
    server_.stop_listening();
    server_.stop();
    
    if (server_thread_.joinable()) {
      server_thread_.join();
    }
    
    connections_.clear();
    
    RCLCPP_INFO(node_->get_logger(), "Rosbridge WebSocket server stopped");
  }
}

void RosbridgeWebSocketServer::on_open(ConnectionHdl hdl)
{
  std::lock_guard<std::mutex> lock(connections_mutex_);
  
  client_id_seed_++;
  clients_connected_++;
  
  auto protocol = std::make_shared<RosbridgeProtocol>(node_, client_id_seed_);
  
  // Set callback for sending messages
  protocol->set_outgoing_callback([this, hdl](const std::string& message) {
    try {
      server_.send(hdl, message, websocketpp::frame::opcode::text);
    } catch (const std::exception& e) {
      RCLCPP_ERROR(node_->get_logger(), "Error sending message: %s", e.what());
    }
  });
  
  connections_[hdl.lock().get()] = protocol;
  
  RCLCPP_INFO(node_->get_logger(),
    "Client %d connected. Total clients: %d", client_id_seed_, clients_connected_);
}

void RosbridgeWebSocketServer::on_close(ConnectionHdl hdl)
{
  std::lock_guard<std::mutex> lock(connections_mutex_);
  
  auto it = connections_.find(hdl.lock().get());
  if (it != connections_.end()) {
    it->second->finish();
    connections_.erase(it);
    clients_connected_--;
    
    RCLCPP_INFO(node_->get_logger(),
      "Client disconnected. Total clients: %d", clients_connected_);
  }
}

void RosbridgeWebSocketServer::on_message(ConnectionHdl hdl, MessagePtr msg)
{
  std::lock_guard<std::mutex> lock(connections_mutex_);
  
  auto it = connections_.find(hdl.lock().get());
  if (it != connections_.end()) {
    try {
      it->second->incoming(msg->get_payload());
    } catch (const std::exception& e) {
      RCLCPP_ERROR(node_->get_logger(), "Error processing message: %s", e.what());
    }
  }
}

}  // namespace rosbridge_server
