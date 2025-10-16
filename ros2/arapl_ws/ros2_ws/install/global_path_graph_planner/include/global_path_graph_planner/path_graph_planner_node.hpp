#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav_msgs/msg/path.hpp>
#include <graph_msgs/msg/graph.hpp>
#include <graph_msgs/srv/get_graph_plan.hpp>

#include <global_path_graph/global_path_graph.hpp>
#include <global_path_graph_planner/dijkstra_graph_planner.hpp>

#include <memory>
#include <string>

namespace global_path_graph_planner
{

class PathGraphPlannerNode : public rclcpp::Node
{
public:
  /**
   * @brief Constructor
   */
  explicit PathGraphPlannerNode(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());

  /**
   * @brief Destructor
   */
  ~PathGraphPlannerNode() = default;

private:
  /**
   * @brief Callback for graph topic subscription
   * @param graph_msg Received graph message
   */
  void graphCallback(const graph_msgs::msg::Graph::SharedPtr graph_msg);

  /**
   * @brief Service callback for graph plan requests
   * @param request Service request
   * @param response Service response
   */
  void getGraphPlanServiceCallback(
    const std::shared_ptr<graph_msgs::srv::GetGraphPlan::Request> request,
    std::shared_ptr<graph_msgs::srv::GetGraphPlan::Response> response);

  // Publishers
  rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr m_graph_plan_pub;

  // Subscribers
  rclcpp::Subscription<graph_msgs::msg::Graph>::SharedPtr m_graph_sub;

  // Services
  rclcpp::Service<graph_msgs::srv::GetGraphPlan>::SharedPtr m_get_graph_plan_srv;

  // Graph management
  bool m_is_graph_initialized{false};
  GlobalPathGraph m_gpg;
  DijkstraGraphPlanner m_planner;
  GlobalPathGraph::AdjacencySetMapPtr m_graph;

  // Parameters
  std::string m_map_frame;
};

} // namespace global_path_graph_planner
