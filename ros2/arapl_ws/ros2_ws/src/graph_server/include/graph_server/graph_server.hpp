#pragma once

#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "graph_msgs/msg/graph.hpp"
#include "graph_msgs/msg/vertex.hpp"
#include "graph_msgs/msg/edge.hpp"
#include "graph_msgs/msg/graph_meta_data.hpp"
#include "graph_msgs/srv/load_graph.hpp"
#include "graph_msgs/srv/get_graph.hpp"

namespace graph_server
{

class GraphServer : public rclcpp::Node
{
public:
  explicit GraphServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  
  bool loadGraphFromFileAndPublish(const std::string &filename);

private:
  bool is_initialized_;
  graph_msgs::msg::Graph graph_msg_;
  rclcpp::Publisher<graph_msgs::msg::Graph>::SharedPtr graph_pub_;
  rclcpp::Service<graph_msgs::srv::LoadGraph>::SharedPtr load_graph_srv_;
  rclcpp::Service<graph_msgs::srv::GetGraph>::SharedPtr get_graph_srv_;

  void publishGraph(const graph_msgs::msg::Graph &graph);
  bool loadGraphFromFile(const std::string &filename, graph_msgs::msg::Graph &graph);
  std::string resolveGraphFilePath(const std::string &graph_url);

  void loadGraphServiceCallback(
    const std::shared_ptr<graph_msgs::srv::LoadGraph::Request> request,
    std::shared_ptr<graph_msgs::srv::LoadGraph::Response> response);

  void getGraphServiceCallback(
    const std::shared_ptr<graph_msgs::srv::GetGraph::Request> request,
    std::shared_ptr<graph_msgs::srv::GetGraph::Response> response);
};

}  // namespace graph_server
