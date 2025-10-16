#pragma once

#include <string>
#include <cstdint>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

namespace graph_control
{

/**
 * @class BaseGraphControl
 * @brief Abstract base class for graph control plugins
 * 
 * This class defines the interface that all graph control plugins must implement.
 * Plugins can be dynamically loaded using the pluginlib framework.
 */
class BaseGraphControl
{
public:
  /**
   * @brief Virtual destructor
   */
  virtual ~BaseGraphControl() = default;

  /**
   * @brief Initialize the graph control plugin
   * 
   * This method is called once after the plugin is loaded and should perform
   * all necessary initialization including setting up ROS2 interfaces.
   * 
   * @param node Shared pointer to the ROS2 node for creating publishers, subscribers, etc.
   */
  virtual void initialize(const rclcpp::Node::SharedPtr& node) = 0;

  /**
   * @brief Send a navigation goal to a specific vertex
   * 
   * @param vertex_name Name of the target vertex
   * @param vertex_id Unique identifier of the vertex
   * @param vertex_pose Pose of the vertex in the map frame
   */
  virtual void sendGoal(
    const std::string& vertex_name,
    uint32_t vertex_id,
    const geometry_msgs::msg::Pose& vertex_pose) = 0;

  /**
   * @brief Cancel the current navigation goal
   */
  virtual void cancelGoal() = 0;

  /**
   * @brief Check if a goal is currently active
   * 
   * @return true if a goal is being processed, false otherwise
   */
  virtual bool isGoalActive() const = 0;

protected:
  /**
   * @brief Protected constructor to prevent direct instantiation
   */
  BaseGraphControl() = default;
};

} // namespace graph_control
