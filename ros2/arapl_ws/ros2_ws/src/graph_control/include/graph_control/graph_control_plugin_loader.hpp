#pragma once

#include <string>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <pluginlib/class_loader.hpp>
#include "graph_control/base_graph_control.hpp"

/**
 * @class GraphControlPluginLoader
 * @brief Manages dynamic loading of graph control plugins
 * 
 * This class provides a convenient interface for loading and managing
 * graph control plugins using the pluginlib framework in ROS2.
 */
class GraphControlPluginLoader
{
public:
  /**
   * @brief Constructor
   * @param node Shared pointer to the ROS2 node
   */
  explicit GraphControlPluginLoader(const rclcpp::Node::SharedPtr& node);

  /**
   * @brief Destructor
   */
  ~GraphControlPluginLoader() = default;

  /**
   * @brief Check if a plugin is currently loaded
   * 
   * @return true if a plugin is loaded, false otherwise
   */
  bool isGraphControlPluginLoaded() const;

  /**
   * @brief Load a graph control plugin by name
   * 
   * @param graph_control_plugin_name Fully qualified plugin class name
   * @return true if plugin loaded successfully, false otherwise
   */
  bool loadGraphControlPlugin(const std::string& graph_control_plugin_name);

  /**
   * @brief Get the loaded plugin instance
   * 
   * @return Shared pointer to the loaded plugin instance, nullptr if no plugin loaded
   */
  std::shared_ptr<graph_control::BaseGraphControl> getGraphControlInstance();

private:
  /// ROS2 node pointer
  rclcpp::Node::SharedPtr node_;
  
  /// Plugin loader instance
  std::unique_ptr<pluginlib::ClassLoader<graph_control::BaseGraphControl>> graph_control_loader_;
  
  /// Loaded plugin instance
  std::shared_ptr<graph_control::BaseGraphControl> graph_control_inst_;
  
  /// Flag indicating if a plugin is loaded
  bool is_plugin_loaded_;
};
