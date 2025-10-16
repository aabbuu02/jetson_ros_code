#include "graph_control/graph_control_plugin_loader.hpp"

GraphControlPluginLoader::GraphControlPluginLoader(const rclcpp::Node::SharedPtr& node)
: node_(node),
  graph_control_loader_(nullptr),
  graph_control_inst_(nullptr),
  is_plugin_loaded_(false)
{
  try {
    graph_control_loader_ = std::make_unique<pluginlib::ClassLoader<graph_control::BaseGraphControl>>(
      "graph_control",
      "graph_control::BaseGraphControl"
    );
    
    RCLCPP_INFO(node_->get_logger(), "Graph control plugin loader initialized successfully");
  }
  catch (pluginlib::PluginlibException& ex) {
    RCLCPP_ERROR(node_->get_logger(), 
      "Failed to initialize plugin loader: %s", ex.what());
  }
}

bool GraphControlPluginLoader::isGraphControlPluginLoaded() const
{
  return is_plugin_loaded_;
}

bool GraphControlPluginLoader::loadGraphControlPlugin(const std::string& graph_control_plugin_name)
{
  is_plugin_loaded_ = false;
  
  if (!graph_control_loader_) {
    RCLCPP_ERROR(node_->get_logger(), 
      "Plugin loader not initialized. Cannot load plugin: %s", 
      graph_control_plugin_name.c_str());
    return false;
  }

  try {
    // Create plugin instance
    graph_control_inst_ = graph_control_loader_->createSharedInstance(graph_control_plugin_name);
    
    if (!graph_control_inst_) {
      RCLCPP_ERROR(node_->get_logger(), 
        "Failed to create instance of plugin: %s", 
        graph_control_plugin_name.c_str());
      return false;
    }

    // Initialize the plugin
    graph_control_inst_->initialize(node_);
    
    is_plugin_loaded_ = true;
    RCLCPP_INFO(node_->get_logger(), 
      "Successfully loaded graph control plugin: %s", 
      graph_control_plugin_name.c_str());
    
    return true;
  }
  catch (pluginlib::PluginlibException& ex) {
    RCLCPP_ERROR(node_->get_logger(), 
      "Cannot load '%s' plugin. Exception: %s", 
      graph_control_plugin_name.c_str(), 
      ex.what());
    
    graph_control_inst_.reset();
    return false;
  }
}

std::shared_ptr<graph_control::BaseGraphControl> 
GraphControlPluginLoader::getGraphControlInstance()
{
  if (!is_plugin_loaded_) {
    RCLCPP_WARN(node_->get_logger(), 
      "Attempting to get plugin instance, but no plugin is loaded");
  }
  
  return graph_control_inst_;
}
