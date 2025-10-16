#ifndef ROSBRIDGE_SERVER__ROS_MESSAGE_HANDLER_HPP_
#define ROSBRIDGE_SERVER__ROS_MESSAGE_HANDLER_HPP_

#include <string>
#include <memory>
#include <nlohmann/json.hpp>
#include <rclcpp/rclcpp.hpp>

namespace rosbridge_server
{

using json = nlohmann::json;

/**
 * @brief Helper class for ROS message conversion
 */
class RosMessageHandler
{
public:
  /**
   * @brief Convert JSON to ROS message
   * @param json_msg JSON message
   * @param msg_type ROS message type
   * @param msg_data Output serialized message data
   * @return true if successful
   */
  static bool json_to_ros_message(
    const json& json_msg,
    const std::string& msg_type,
    std::shared_ptr<rclcpp::SerializedMessage>& msg_data);

  /**
   * @brief Convert ROS message to JSON
   * @param msg_data Serialized ROS message
   * @param msg_type ROS message type
   * @param json_msg Output JSON message
   * @return true if successful
   */
  static bool ros_message_to_json(
    const std::shared_ptr<rclcpp::SerializedMessage>& msg_data,
    const std::string& msg_type,
    json& json_msg);

  /**
   * @brief Get message type from topic
   * @param node ROS2 node
   * @param topic_name Topic name
   * @return Message type string
   */
  static std::string get_topic_type(
    rclcpp::Node::SharedPtr node,
    const std::string& topic_name);
};

}  // namespace rosbridge_server

#endif  // ROSBRIDGE_SERVER__ROS_MESSAGE_HANDLER_HPP_
