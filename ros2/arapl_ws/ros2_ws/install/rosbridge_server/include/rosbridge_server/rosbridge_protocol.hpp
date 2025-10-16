#ifndef ROSBRIDGE_SERVER__ROSBRIDGE_PROTOCOL_HPP_
#define ROSBRIDGE_SERVER__ROSBRIDGE_PROTOCOL_HPP_

#include <memory>
#include <string>
#include <unordered_map>
#include <mutex>
#include <functional>

#include <rclcpp/rclcpp.hpp>
#include <nlohmann/json.hpp>

namespace rosbridge_server
{

using json = nlohmann::json;

/**
 * @brief Handles rosbridge protocol for a single client connection
 */
class RosbridgeProtocol
{
public:
  using SendCallback = std::function<void(const std::string&)>;

  /**
   * @brief Constructor
   * @param node Shared pointer to ROS2 node
   * @param client_id Unique client identifier
   */
  RosbridgeProtocol(rclcpp::Node::SharedPtr node, int client_id);

  /**
   * @brief Destructor
   */
  ~RosbridgeProtocol();

  /**
   * @brief Process incoming JSON message from client
   * @param message_string JSON string
   */
  void incoming(const std::string& message_string);

  /**
   * @brief Set callback for outgoing messages
   * @param callback Function to call when sending messages
   */
  void set_outgoing_callback(SendCallback callback);

  /**
   * @brief Clean up resources
   */
  void finish();

private:
  // Message handlers
  void handle_advertise(const json& msg);
  void handle_unadvertise(const json& msg);
  void handle_publish(const json& msg);
  void handle_subscribe(const json& msg);
  void handle_unsubscribe(const json& msg);
  void handle_call_service(const json& msg);
  void handle_advertise_service(const json& msg);
  void handle_unadvertise_service(const json& msg);

  // Helper methods
  void send_error(const std::string& error_msg, const std::string& id = "");
  void send(const json& message);

  // Member variables
  rclcpp::Node::SharedPtr node_;
  int client_id_;
  SendCallback outgoing_callback_;
  std::mutex mutex_;

  // Storage for publishers and subscribers
  struct PublisherInfo {
    rclcpp::GenericPublisher::SharedPtr publisher;
    std::string type;
  };

  struct SubscriberInfo {
    rclcpp::GenericSubscription::SharedPtr subscription;
    std::string type;
    int throttle_rate;
    std::chrono::steady_clock::time_point last_publish;
  };

  std::unordered_map<std::string, PublisherInfo> publishers_;
  std::unordered_map<std::string, SubscriberInfo> subscribers_;
};

}  // namespace rosbridge_server

#endif  // ROSBRIDGE_SERVER__ROSBRIDGE_PROTOCOL_HPP_
