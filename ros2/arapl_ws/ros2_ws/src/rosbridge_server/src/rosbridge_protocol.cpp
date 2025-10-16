#include "rosbridge_server/rosbridge_protocol.hpp"
#include "rosbridge_server/ros_message_handler.hpp"
#include <rosidl_typesupport_cpp/message_type_support.hpp>
#include <rosidl_typesupport_introspection_cpp/message_introspection.hpp>

namespace rosbridge_server
{

RosbridgeProtocol::RosbridgeProtocol(rclcpp::Node::SharedPtr node, int client_id)
: node_(node), client_id_(client_id)
{
  RCLCPP_INFO(node_->get_logger(), "Protocol handler initialized for client %d", client_id_);
}

RosbridgeProtocol::~RosbridgeProtocol()
{
  finish();
}

void RosbridgeProtocol::set_outgoing_callback(SendCallback callback)
{
  outgoing_callback_ = callback;
}

void RosbridgeProtocol::incoming(const std::string& message_string)
{
  try {
    json msg = json::parse(message_string);
    
    if (!msg.contains("op")) {
      send_error("Missing 'op' field in message");
      return;
    }

    std::string op = msg["op"];
    std::string id = msg.contains("id") ? msg["id"].get<std::string>() : "";

    // Route to appropriate handler
    if (op == "advertise") {
      handle_advertise(msg);
    } else if (op == "unadvertise") {
      handle_unadvertise(msg);
    } else if (op == "publish") {
      handle_publish(msg);
    } else if (op == "subscribe") {
      handle_subscribe(msg);
    } else if (op == "unsubscribe") {
      handle_unsubscribe(msg);
    } else if (op == "call_service") {
      handle_call_service(msg);
    } else if (op == "advertise_service") {
      handle_advertise_service(msg);
    } else if (op == "unadvertise_service") {
      handle_unadvertise_service(msg);
    } else {
      send_error("Unknown operation: " + op, id);
    }

  } catch (const json::parse_error& e) {
    send_error(std::string("Invalid JSON: ") + e.what());
  } catch (const std::exception& e) {
    RCLCPP_ERROR(node_->get_logger(), "Error processing message: %s", e.what());
    send_error(std::string("Error: ") + e.what());
  }
}

void RosbridgeProtocol::handle_advertise(const json& msg)
{
  if (!msg.contains("topic") || !msg.contains("type")) {
    send_error("Advertise requires 'topic' and 'type'");
    return;
  }

  std::string topic = msg["topic"];
  std::string type = msg["type"];

  std::lock_guard<std::mutex> lock(mutex_);

  if (publishers_.find(topic) != publishers_.end()) {
    RCLCPP_WARN(node_->get_logger(), "Topic %s already advertised", topic.c_str());
    return;
  }

  try {
    auto qos = rclcpp::QoS(10);
    auto publisher = node_->create_generic_publisher(topic, type, qos);
    
    publishers_[topic] = PublisherInfo{publisher, type};
    
    RCLCPP_INFO(node_->get_logger(), "Advertised topic: %s [%s]", topic.c_str(), type.c_str());
  } catch (const std::exception& e) {
    send_error(std::string("Failed to advertise ") + topic + ": " + e.what());
  }
}

void RosbridgeProtocol::handle_unadvertise(const json& msg)
{
  if (!msg.contains("topic")) {
    send_error("Unadvertise requires 'topic'");
    return;
  }

  std::string topic = msg["topic"];
  
  std::lock_guard<std::mutex> lock(mutex_);
  
  auto it = publishers_.find(topic);
  if (it != publishers_.end()) {
    publishers_.erase(it);
    RCLCPP_INFO(node_->get_logger(), "Unadvertised topic: %s", topic.c_str());
  }
}

void RosbridgeProtocol::handle_publish(const json& msg)
{
  if (!msg.contains("topic") || !msg.contains("msg")) {
    send_error("Publish requires 'topic' and 'msg'");
    return;
  }

  std::string topic = msg["topic"];
  const json& msg_data = msg["msg"];

  std::lock_guard<std::mutex> lock(mutex_);

  // Auto-advertise if not already advertised
  if (publishers_.find(topic) == publishers_.end()) {
    if (msg.contains("type")) {
      std::string type = msg["type"];
      auto qos = rclcpp::QoS(10);
      auto publisher = node_->create_generic_publisher(topic, type, qos);
      publishers_[topic] = PublisherInfo{publisher, type};
    } else {
      send_error("Topic " + topic + " not advertised and no type provided");
      return;
    }
  }

  try {
    auto& pub_info = publishers_[topic];
    
    // Convert JSON to ROS message
    std::shared_ptr<rclcpp::SerializedMessage> serialized_msg;
    if (RosMessageHandler::json_to_ros_message(msg_data, pub_info.type, serialized_msg)) {
      pub_info.publisher->publish(*serialized_msg);
    } else {
      send_error("Failed to convert message for topic " + topic);
    }
  } catch (const std::exception& e) {
    send_error(std::string("Failed to publish to ") + topic + ": " + e.what());
  }
}

void RosbridgeProtocol::handle_subscribe(const json& msg)
{
  if (!msg.contains("topic") || !msg.contains("type")) {
    send_error("Subscribe requires 'topic' and 'type'");
    return;
  }

  std::string topic = msg["topic"];
  std::string type = msg["type"];
  int throttle_rate = msg.contains("throttle_rate") ? msg["throttle_rate"].get<int>() : 0;

  std::lock_guard<std::mutex> lock(mutex_);

  if (subscribers_.find(topic) != subscribers_.end()) {
    RCLCPP_WARN(node_->get_logger(), "Already subscribed to %s", topic.c_str());
    return;
  }

  try {
    auto qos = rclcpp::QoS(10);
    
    // Create subscription callback
    auto callback = [this, topic, type](std::shared_ptr<rclcpp::SerializedMessage> msg_ptr) {
      // Check throttle rate
      auto& sub_info = subscribers_[topic];
      auto now = std::chrono::steady_clock::now();
      
      if (sub_info.throttle_rate > 0) {
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
          now - sub_info.last_publish).count();
        
        if (elapsed < sub_info.throttle_rate) {
          return;
        }
      }
      
      sub_info.last_publish = now;

      // Convert ROS message to JSON
      json json_msg;
      if (RosMessageHandler::ros_message_to_json(msg_ptr, type, json_msg)) {
        json outgoing_msg;
        outgoing_msg["op"] = "publish";
        outgoing_msg["topic"] = topic;
        outgoing_msg["msg"] = json_msg;
        send(outgoing_msg);
      }
    };

    auto subscription = node_->create_generic_subscription(
      topic, type, qos, callback);

    subscribers_[topic] = SubscriberInfo{
      subscription,
      type,
      throttle_rate,
      std::chrono::steady_clock::now()
    };

    RCLCPP_INFO(node_->get_logger(), "Subscribed to topic: %s [%s]", topic.c_str(), type.c_str());
  } catch (const std::exception& e) {
    send_error(std::string("Failed to subscribe to ") + topic + ": " + e.what());
  }
}

void RosbridgeProtocol::handle_unsubscribe(const json& msg)
{
  if (!msg.contains("topic")) {
    send_error("Unsubscribe requires 'topic'");
    return;
  }

  std::string topic = msg["topic"];
  
  std::lock_guard<std::mutex> lock(mutex_);
  
  auto it = subscribers_.find(topic);
  if (it != subscribers_.end()) {
    subscribers_.erase(it);
    RCLCPP_INFO(node_->get_logger(), "Unsubscribed from topic: %s", topic.c_str());
  }
}

void RosbridgeProtocol::handle_call_service(const json& msg)
{
  // Service calls are not supported in this simplified implementation
  // because ROS2 does not have a fully generic service client API in all distributions
  (void)msg;  // Mark parameter as unused
  
  std::string id = msg.contains("id") ? msg["id"].get<std::string>() : "";
  send_error("Service calls not yet implemented in this version", id);
  
  RCLCPP_WARN(node_->get_logger(), 
    "Service call attempted but not supported. "
    "Generic service clients require ROS2 Rolling or specific implementation per service type.");
}

void RosbridgeProtocol::handle_advertise_service(const json& msg)
{
  (void)msg;  // Mark parameter as unused
  send_error("Service advertising not yet implemented");
}

void RosbridgeProtocol::handle_unadvertise_service(const json& msg)
{
  (void)msg;  // Mark parameter as unused
  send_error("Service unadvertising not yet implemented");
}

void RosbridgeProtocol::send_error(const std::string& error_msg, const std::string& id)
{
  json error;
  error["op"] = "set_level";
  error["level"] = "error";
  error["msg"] = error_msg;
  
  if (!id.empty()) {
    error["id"] = id;
  }
  
  send(error);
}

void RosbridgeProtocol::send(const json& message)
{
  if (outgoing_callback_) {
    try {
      std::string json_str = message.dump();
      outgoing_callback_(json_str);
    } catch (const std::exception& e) {
      RCLCPP_ERROR(node_->get_logger(), "Error sending message: %s", e.what());
    }
  }
}

void RosbridgeProtocol::finish()
{
  std::lock_guard<std::mutex> lock(mutex_);
  
  publishers_.clear();
  subscribers_.clear();
  
  RCLCPP_INFO(node_->get_logger(), "Protocol handler finished for client %d", client_id_);
}

}  // namespace rosbridge_server
