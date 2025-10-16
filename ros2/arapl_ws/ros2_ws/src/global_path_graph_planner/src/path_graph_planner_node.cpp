#include "global_path_graph_planner/path_graph_planner_node.hpp"

namespace global_path_graph_planner
{

PathGraphPlannerNode::PathGraphPlannerNode(const rclcpp::NodeOptions& options)
  : Node("path_graph_planner_node", options)
{
  // Declare and get parameters
  this->declare_parameter<std::string>("map_frame", "map");
  m_map_frame = this->get_parameter("map_frame").as_string();

  RCLCPP_INFO(this->get_logger(), "Initializing Path Graph Planner Node");
  RCLCPP_INFO(this->get_logger(), "Map frame: %s", m_map_frame.c_str());

  // Publishers - QoS profile with reliability and durability
  rclcpp::QoS qos_profile(10);
  qos_profile.reliability(rclcpp::ReliabilityPolicy::Reliable);
  qos_profile.durability(rclcpp::DurabilityPolicy::TransientLocal);

  m_graph_plan_pub = this->create_publisher<nav_msgs::msg::Path>(
    "graph_plan", qos_profile);

  // Subscribers
  m_graph_sub = this->create_subscription<graph_msgs::msg::Graph>(
    "graph", 
    qos_profile,
    std::bind(&PathGraphPlannerNode::graphCallback, this, std::placeholders::_1));

  // Service servers
  m_get_graph_plan_srv = this->create_service<graph_msgs::srv::GetGraphPlan>(
    "make_graph_plan",
    std::bind(&PathGraphPlannerNode::getGraphPlanServiceCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  RCLCPP_INFO(this->get_logger(), "Path Graph Planner Node initialized successfully");
}

void PathGraphPlannerNode::graphCallback(const graph_msgs::msg::Graph::SharedPtr graph_msg)
{
  RCLCPP_INFO(this->get_logger(), "Received graph message");

  m_graph = m_gpg.getGraphFromMsg(*graph_msg);

  if (!m_graph)
  {
    RCLCPP_WARN(this->get_logger(), "Path graph planner received an invalid graph");
    m_is_graph_initialized = false;
    return;
  }

  if (m_graph->empty())
  {
    RCLCPP_WARN(this->get_logger(), "Path graph planner received an empty graph");
    m_is_graph_initialized = false;
    return;
  }

  RCLCPP_INFO(this->get_logger(), "Path graph planner received a valid graph");
  m_gpg.printPathGraph(true);

  if (!m_planner.setGraph(m_gpg))
  {
    RCLCPP_WARN(this->get_logger(), "Setting graph in planner failed");
    m_is_graph_initialized = false;
    return;
  }

  m_is_graph_initialized = true;
  RCLCPP_INFO(this->get_logger(), "Graph successfully set in planner");
}

void PathGraphPlannerNode::getGraphPlanServiceCallback(
  const std::shared_ptr<graph_msgs::srv::GetGraphPlan::Request> request,
  std::shared_ptr<graph_msgs::srv::GetGraphPlan::Response> response)
{
  RCLCPP_INFO(this->get_logger(), "Get plan from graph service called");
  RCLCPP_INFO(this->get_logger(), 
              "Plan requested from source vertex %u to destination vertex %u",
              request->source_id, request->target_id);

  // Check if graph is initialized
  if (!m_is_graph_initialized)
  {
    response->success = false;
    response->message = "Graph is not initialized. Please provide a valid graph first.";
    RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
    return;
  }

  // Plan generation
  std::vector<geometry_msgs::msg::PoseStamped> retrieved_graph_plan;
  std::vector<uint32_t> retrieved_vertices_in_plan;

  bool plan_success = m_planner.getPlanFromGraph(
    request->source_id, 
    request->target_id, 
    retrieved_graph_plan,
    request->ignore_goal_orientation, 
    request->ignore_path_orientation);

  if (!plan_success)
  {
    response->success = false;
    response->message = "Retrieving plan from graph failed. No path found between vertices.";
    RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
    return;
  }

  // Get point plan
  m_planner.getPointsInPlan(retrieved_vertices_in_plan);
  RCLCPP_INFO(this->get_logger(), 
              "Retrieved point plan size: %zu", retrieved_vertices_in_plan.size());

  // Convert to Path message
  nav_msgs::msg::Path path_msg;
  path_msg.header.frame_id = m_map_frame;
  path_msg.header.stamp = this->now();
  path_msg.poses = retrieved_graph_plan;

  // Publish plan
  m_graph_plan_pub->publish(path_msg);
  RCLCPP_INFO(this->get_logger(), "Published graph plan with %zu poses", path_msg.poses.size());

  // Convert vertex IDs to Vertex messages for response
  response->vertices_in_plan.clear();
  response->vertices_in_plan.reserve(retrieved_vertices_in_plan.size());
  
  for (const auto& vertex_id : retrieved_vertices_in_plan)
  {
    // Get vertex data from graph
    auto vertex_ptr = m_gpg.getPointData(vertex_id);
    if (vertex_ptr)
    {
      graph_msgs::msg::Vertex vertex_msg;
      vertex_msg.id = vertex_id;
      vertex_msg.pose = vertex_ptr->pose;
      vertex_msg.ignore_orientation = vertex_ptr->ignore_orientation;
      response->vertices_in_plan.push_back(vertex_msg);
    }
    else
    {
      // If vertex data not found, create basic vertex with ID only
      graph_msgs::msg::Vertex vertex_msg;
      vertex_msg.id = vertex_id;
      response->vertices_in_plan.push_back(vertex_msg);
    }
  }

  // Prepare response
  response->success = true;
  response->message = "Successfully generated and published graph plan";
  response->plan = path_msg;
  response->plan_distance = m_planner.getPlanDistance();

  RCLCPP_INFO(this->get_logger(), 
              "Service call completed successfully. Plan distance: %.3f meters",
              response->plan_distance);
}

} // namespace global_path_graph_planner

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<global_path_graph_planner::PathGraphPlannerNode>();
  
  RCLCPP_INFO(node->get_logger(), "Path Graph Planner Node spinning...");
  rclcpp::spin(node);
  
  rclcpp::shutdown();
  return 0;
}
