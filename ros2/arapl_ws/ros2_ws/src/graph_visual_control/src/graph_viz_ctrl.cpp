#include "graph_visual_control/graph_viz_ctrl.hpp"

#include <chrono>
#include <functional>
#include <cmath>

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

GraphVizCtrl::GraphVizCtrl(const rclcpp::NodeOptions & options)
: Node("graph_visual_control", options)
{
  // Declare and get parameters
  this->declare_parameter("pose_spacing", 0.1);
  this->declare_parameter("resolution", 1.0);
  this->declare_parameter("graph_control", "");
  
  m_pose_spacing = this->get_parameter("pose_spacing").as_double();
  m_resolution = this->get_parameter("resolution").as_double();

  // Initialize TF2
  tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

  // Initialize interactive marker server
  m_graph_marker_server = std::make_unique<interactive_markers::InteractiveMarkerServer>(
    "graph_visual_control_marker_server",
    this->get_node_base_interface(),
    this->get_node_clock_interface(),
    this->get_node_logging_interface(),
    this->get_node_topics_interface(),
    this->get_node_services_interface()
  );

  // Initialize action client
  nav_to_pose_client_ = rclcpp_action::create_client<NavigateToPose>(
    this,
    "navigate_to_pose"
  );

  // Subscribers
  m_graph_sub = this->create_subscription<graph_msgs::msg::Graph>(
    "graph",
    10,
    std::bind(&GraphVizCtrl::graphCallback, this, _1)
  );

  // Initialize menus
  m_vert_menu_handler = std::make_unique<interactive_markers::MenuHandler>();
  m_edge_menu_handler = std::make_unique<interactive_markers::MenuHandler>();
  
  initVertexMenu();
  initEdgeMenu();
  initialize();

  RCLCPP_INFO(this->get_logger(), "Graph Visual Control Node initialized (standalone mode)");
  RCLCPP_WARN(this->get_logger(), 
    "Running with stub graph implementations - full functionality requires graph packages");
}

void GraphVizCtrl::initialize()
{
  std::string graph_control = this->get_parameter("graph_control").as_string();
  
  if (graph_control.empty()) {
    RCLCPP_WARN(this->get_logger(), "No graph control plugin provided");
    return;
  }

  if (m_gcpl.loadGraphControlPlugin(graph_control)) {
    m_graph_control_instance = m_gcpl.getGraphControlInstance();
    if (m_graph_control_instance) {
      m_graph_control_instance->initialize();
      RCLCPP_INFO(this->get_logger(), "Graph control plugin loaded: %s", graph_control.c_str());
    }
  } else {
    RCLCPP_WARN(this->get_logger(), 
      "Graph control plugin loading not available - running in standalone mode");
  }
}

void GraphVizCtrl::graphCallback(const std::shared_ptr<graph_msgs::msg::Graph> graph_msg)
{
  RCLCPP_INFO(this->get_logger(), "New graph received for visual control");
  
  m_vertex_map.clear();
  m_edge_map.clear();
  m_graph_marker_server->clear();
  m_graph_marker_server->applyChanges();

  std::vector<GraphUtil::Vertex> vl;
  std::vector<GraphUtil::Edge> el;
  
  // Convert graph message to vertices and edges
  GraphUtil::Utilities::convertFromMsgToEdgeAndVertexList(*graph_msg, vl, el);

  RCLCPP_INFO(this->get_logger(), "Received graph message information");
  RCLCPP_INFO(this->get_logger(), "Number of vertices: %zu", vl.size());
  RCLCPP_INFO(this->get_logger(), "Number of edges: %zu", el.size());

  // Add vertices
  for (const auto & v : vl) {
    if (!addInteractiveVertexMarker(v)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to add vertex marker: %s", v.vertex_name.c_str());
    }
  }

  // Add edges
  for (auto & e : el) {
    if (!addInteractiveEdgeMarker(e)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to add edge marker: %s", e.edge_name.c_str());
    }
  }

  m_graph_marker_server->applyChanges();
  RCLCPP_INFO(this->get_logger(), "Graph visualization updated successfully");
}

void GraphVizCtrl::initVertexMenu()
{
  m_vert_menu_handler->insert(
    "Send Graph Navigation Goal",
    std::bind(&GraphVizCtrl::sendGraphNavigationGoalMenuCallback, this, _1)
  );

  m_vert_menu_handler->insert(
    "Cancel Graph Navigation Goal",
    std::bind(&GraphVizCtrl::cancelGraphNavigationGoalMenuCallback, this, _1)
  );

  m_vert_menu_handler->insert(
    "Send Navigation Goal",
    std::bind(&GraphVizCtrl::sendNavigationGoalMenuCallback, this, _1)
  );

  m_vert_menu_handler->insert(
    "Cancel Navigation Goals",
    std::bind(&GraphVizCtrl::cancelNavigationGoalsMenuCallback, this, _1)
  );

  m_vert_menu_handler->insert(
    "Cancel All Goals",
    std::bind(&GraphVizCtrl::cancelAllGoalsMenuCallback, this, _1)
  );
}

void GraphVizCtrl::initEdgeMenu()
{
  // Edge menu can be extended with edge-specific operations
}

void GraphVizCtrl::sendGraphNavigationGoalMenuCallback(
  const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback)
{
  RCLCPP_INFO(this->get_logger(), "Sending graph navigation goal to vertex: %s", 
    feedback->marker_name.c_str());
  sendGraphNavigationGoal(feedback->marker_name);
}

void GraphVizCtrl::cancelGraphNavigationGoalMenuCallback(
  [[maybe_unused]] const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback)
{
  RCLCPP_INFO(this->get_logger(), "Cancelling all graph navigation goals");
  cancelGraphNavigationGoal();
}

void GraphVizCtrl::sendNavigationGoalMenuCallback(
  const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback)
{
  RCLCPP_INFO(this->get_logger(), "Sending navigation goal");
  sendNavigationGoal(feedback->pose);
}

void GraphVizCtrl::cancelNavigationGoalsMenuCallback(
  [[maybe_unused]] const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback)
{
  RCLCPP_INFO(this->get_logger(), "Cancelling all navigation goals");
  cancelNavigationGoal();
}

void GraphVizCtrl::cancelAllGoalsMenuCallback(
  [[maybe_unused]] const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback)
{
  RCLCPP_INFO(this->get_logger(), "Cancelling all goals");
  cancelGraphNavigationGoal();
  cancelNavigationGoal();
}

bool GraphVizCtrl::addInteractiveVertexMarker(const GraphUtil::Vertex & v)
{
  if (m_vertex_map.find(v.vertex_name) != m_vertex_map.end()) {
    RCLCPP_ERROR(this->get_logger(), "Multiple copies of vertex with name %s found", 
      v.vertex_name.c_str());
    return false;
  }

  m_vertex_map.insert({v.vertex_name, std::make_shared<GraphUtil::Vertex>(v)});

  auto vertex_int_marker = GraphUtil::Visuals::makeInteractiveVertexMarker(
    v.vertex_id, v.vertex_pose);

  visualization_msgs::msg::Marker vertex_marker;
  if (!v.ignore_orientation) {
    vertex_marker = GraphUtil::Visuals::makeVertexOrientationArrowMarker();
  } else {
    vertex_marker = GraphUtil::Visuals::makeVertexSphereMarker();
  }

  GraphUtil::Visuals::makeButtonControl(vertex_int_marker, vertex_marker);

  m_graph_marker_server->insert(vertex_int_marker);
  m_vert_menu_handler->apply(*m_graph_marker_server, vertex_int_marker.name);

  return true;
}

bool GraphVizCtrl::addInteractiveEdgeMarker(GraphUtil::Edge & e)
{
  if (m_edge_map.find(e.edge_name) != m_edge_map.end()) {
    RCLCPP_ERROR(this->get_logger(), "Multiple copies of edge with name %s found", 
      e.edge_name.c_str());
    return false;
  }

  m_edge_map.insert({e.edge_name, std::make_shared<GraphUtil::Edge>(e)});

  std::string start_vertex_name = GraphUtil::Visuals::generateVertexMarkerName(e.edge_vertex_id.first);
  std::string end_vertex_name = GraphUtil::Visuals::generateVertexMarkerName(e.edge_vertex_id.second);

  if (m_vertex_map.find(start_vertex_name) == m_vertex_map.end() || 
      m_vertex_map.find(end_vertex_name) == m_vertex_map.end()) {
    RCLCPP_ERROR(this->get_logger(), 
      "Could not find start vertex %s or end vertex %s for edge %s",
      start_vertex_name.c_str(), end_vertex_name.c_str(), e.edge_name.c_str());
    return false;
  }

  auto v1_ptr = m_vertex_map.at(start_vertex_name);
  auto v2_ptr = m_vertex_map.at(end_vertex_name);

  double length = 0.0;
  std::vector<geometry_msgs::msg::Pose> out_poses;

  switch (e.edge_type) {
    case graph_msgs::msg::Edge::STRAIGHT_LINE: {
      GraphUtil::Curves::calculateEquiDistantPosesLine(
        {v1_ptr->vertex_pose, v2_ptr->vertex_pose}, 
        out_poses, length, 0.1);
      break;
    }

    case graph_msgs::msg::Edge::CUBIC_BEZIER: {
      if (e.control_poses.size() < 2) {
        RCLCPP_ERROR(this->get_logger(), 
          "The control point count for cubic Bezier curve is less than 2");
        return false;
      }

      GraphUtil::Curves::calculateEquiDistantPosesBezier(
        {v1_ptr->vertex_pose, e.control_poses.front(), 
         e.control_poses.back(), v2_ptr->vertex_pose},
        out_poses, length, m_pose_spacing, m_resolution);
      break;
    }

    default: {
      RCLCPP_ERROR(this->get_logger(), "Could not create edge %s due to unknown edge type", 
        e.edge_name.c_str());
      return false;
    }
  }

  e.length = length;

  auto edge_marker = GraphUtil::Visuals::makeEdgeLineStripMarker(e.edge_id, out_poses);
  auto edge_int_marker = GraphUtil::Visuals::makeInteractiveEdgeMarker(e.edge_id, out_poses);
  GraphUtil::Visuals::makeButtonControl(edge_int_marker, edge_marker);

  m_graph_marker_server->insert(edge_int_marker);
  m_edge_menu_handler->apply(*m_graph_marker_server, edge_int_marker.name);

  return true;
}

void GraphVizCtrl::addInteractiveDirectionMarker(
  const std::string & direction_name,
  [[maybe_unused]] const geometry_msgs::msg::Pose & pose,
  [[maybe_unused]] int16_t marker_type)
{
  // Stub implementation
  RCLCPP_DEBUG(this->get_logger(), "Adding direction marker: %s", direction_name.c_str());
}

void GraphVizCtrl::addInteractiveOrientationMarker(
  const std::string & orientation_name,
  [[maybe_unused]] const geometry_msgs::msg::Pose & pose)
{
  // Stub implementation
  RCLCPP_DEBUG(this->get_logger(), "Adding orientation marker: %s", orientation_name.c_str());
}

void GraphVizCtrl::sendGraphNavigationGoal(const std::string & vertex_name)
{
  if (!m_gcpl.isGraphControlPluginLoaded()) {
    RCLCPP_WARN(this->get_logger(), 
      "Cannot send graph goal - no graph control plugin loaded");
    return;
  }

  if (!m_graph_control_instance) {
    RCLCPP_ERROR(this->get_logger(), "Graph control instance is not valid");
    return;
  }

  if (m_vertex_map.find(vertex_name) == m_vertex_map.end()) {
    RCLCPP_ERROR(this->get_logger(), "Vertex %s not found in vertex map", vertex_name.c_str());
    return;
  }

  auto v_ptr = m_vertex_map.at(vertex_name);
  m_graph_control_instance->sendGoal(vertex_name, v_ptr->vertex_id, v_ptr->vertex_pose);
}

void GraphVizCtrl::cancelGraphNavigationGoal()
{
  if (!m_gcpl.isGraphControlPluginLoaded()) {
    RCLCPP_WARN(this->get_logger(), 
      "Cannot cancel graph goal - no graph control plugin loaded");
    return;
  }

  if (!m_graph_control_instance) {
    RCLCPP_ERROR(this->get_logger(), "Graph control instance is not valid");
    return;
  }

  m_graph_control_instance->cancelGoal();
}

void GraphVizCtrl::sendNavigationGoal(const geometry_msgs::msg::Pose & goal_pose)
{
  if (!nav_to_pose_client_->wait_for_action_server(std::chrono::seconds(5))) {
    RCLCPP_WARN(this->get_logger(), 
      "Cannot send navigation goal - action server not available");
    return;
  }

  auto goal_msg = NavigateToPose::Goal();
  goal_msg.pose.header.frame_id = "map";
  goal_msg.pose.header.stamp = this->now();
  goal_msg.pose.pose = goal_pose;

  auto send_goal_options = rclcpp_action::Client<NavigateToPose>::SendGoalOptions();
  send_goal_options.goal_response_callback = 
    std::bind(&GraphVizCtrl::goalResponseCallback, this, _1);
  send_goal_options.feedback_callback = 
    std::bind(&GraphVizCtrl::feedbackCallback, this, _1, _2);
  send_goal_options.result_callback = 
    std::bind(&GraphVizCtrl::resultCallback, this, _1);

  RCLCPP_INFO(this->get_logger(), "Sending navigation goal");
  nav_to_pose_client_->async_send_goal(goal_msg, send_goal_options);
}

void GraphVizCtrl::cancelNavigationGoal()
{
  if (!nav_to_pose_client_->wait_for_action_server(std::chrono::seconds(1))) {
    RCLCPP_WARN(this->get_logger(), "Cannot cancel goals - server not connected");
    return;
  }

  RCLCPP_INFO(this->get_logger(), "Cancelling all navigation goals");
  nav_to_pose_client_->async_cancel_all_goals();
}

void GraphVizCtrl::goalResponseCallback(const GoalHandleNavigate::SharedPtr & goal_handle)
{
  if (!goal_handle) {
    RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
  } else {
    RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
  }
}

void GraphVizCtrl::feedbackCallback(
  [[maybe_unused]] GoalHandleNavigate::SharedPtr goal_handle,
  [[maybe_unused]] const std::shared_ptr<const NavigateToPose::Feedback> feedback)
{
  // Process feedback if needed - currently unused
}

void GraphVizCtrl::resultCallback(const GoalHandleNavigate::WrappedResult & result)
{
  switch (result.code) {
    case rclcpp_action::ResultCode::SUCCEEDED:
      RCLCPP_INFO(this->get_logger(), "Navigation goal succeeded!");
      break;
    case rclcpp_action::ResultCode::ABORTED:
      RCLCPP_ERROR(this->get_logger(), "Navigation goal was aborted");
      break;
    case rclcpp_action::ResultCode::CANCELED:
      RCLCPP_WARN(this->get_logger(), "Navigation goal was canceled");
      break;
    default:
      RCLCPP_ERROR(this->get_logger(), "Unknown result code");
      break;
  }
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<GraphVizCtrl>();
  
  rclcpp::spin(node);
  rclcpp::shutdown();
  
  return EXIT_SUCCESS;
}

