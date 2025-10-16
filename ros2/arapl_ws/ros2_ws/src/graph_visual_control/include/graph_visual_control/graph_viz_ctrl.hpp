#pragma once

#include <memory>
#include <string>
#include <map>
#include <vector>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "graph_msgs/msg/graph.hpp"
#include "graph_msgs/msg/edge.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/quaternion.hpp"
#include "nav_msgs/msg/path.hpp"
#include "visualization_msgs/msg/interactive_marker.hpp"
#include "visualization_msgs/msg/interactive_marker_feedback.hpp"
#include "visualization_msgs/msg/marker.hpp"

#include "interactive_markers/interactive_marker_server.hpp"
#include "interactive_markers/menu_handler.hpp"

#include "nav2_msgs/action/navigate_to_pose.hpp"

#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"

// Stub definitions for graph types when dependencies are not available
namespace GraphUtil {
  
  struct Vertex {
    std::string vertex_name;
    int vertex_id;
    geometry_msgs::msg::Pose vertex_pose;
    bool ignore_orientation{false};
  };
  
  struct Edge {
    std::string edge_name;
    int edge_id;
    std::pair<int, int> edge_vertex_id;
    int edge_type{0};
    std::vector<geometry_msgs::msg::Pose> control_poses;
    double length{0.0};
    
    // Edge type constants
    static constexpr int STRAIGHT_LINE = 0;
    static constexpr int CUBIC_BEZIER = 1;
  };
  
  using VerticesMap = std::map<std::string, std::shared_ptr<Vertex>>;
  using EdgesMap = std::map<std::string, std::shared_ptr<Edge>>;
  
  // Stub utilities
  namespace Utilities {
    template<typename GraphMsg>
    static void convertFromMsgToEdgeAndVertexList(
      [[maybe_unused]] const GraphMsg& msg,
      [[maybe_unused]] std::vector<Vertex>& vertices,
      [[maybe_unused]] std::vector<Edge>& edges) {
      // Stub implementation - will be replaced when graph_creator is available
    }
  }
  
  // Stub visuals
  namespace Visuals {
    static std::string generateVertexMarkerName(int id) {
      return "vertex_" + std::to_string(id);
    }
    
    static std::string generateEdgeMarkerName(int id) {
      return "edge_" + std::to_string(id);
    }
    
    static visualization_msgs::msg::InteractiveMarker makeInteractiveVertexMarker(
      int id, const geometry_msgs::msg::Pose& pose) {
      visualization_msgs::msg::InteractiveMarker marker;
      marker.header.frame_id = "map";
      marker.name = generateVertexMarkerName(id);
      marker.pose = pose;
      marker.scale = 1.0;
      return marker;
    }
    
    static visualization_msgs::msg::InteractiveMarker makeInteractiveEdgeMarker(
      int id, const std::vector<geometry_msgs::msg::Pose>& poses) {
      visualization_msgs::msg::InteractiveMarker marker;
      marker.header.frame_id = "map";
      marker.name = generateEdgeMarkerName(id);
      if (!poses.empty()) {
        marker.pose = poses[0];
      }
      marker.scale = 1.0;
      return marker;
    }
    
    static visualization_msgs::msg::Marker makeVertexSphereMarker() {
      visualization_msgs::msg::Marker marker;
      marker.type = visualization_msgs::msg::Marker::SPHERE;
      marker.scale.x = 0.3;
      marker.scale.y = 0.3;
      marker.scale.z = 0.3;
      marker.color.r = 0.0;
      marker.color.g = 1.0;
      marker.color.b = 0.0;
      marker.color.a = 0.8;
      return marker;
    }
    
    static visualization_msgs::msg::Marker makeVertexOrientationArrowMarker() {
      visualization_msgs::msg::Marker marker;
      marker.type = visualization_msgs::msg::Marker::ARROW;
      marker.scale.x = 0.5;
      marker.scale.y = 0.1;
      marker.scale.z = 0.1;
      marker.color.r = 0.0;
      marker.color.g = 1.0;
      marker.color.b = 0.0;
      marker.color.a = 0.8;
      return marker;
    }
    
    static visualization_msgs::msg::Marker makeEdgeLineStripMarker(
      [[maybe_unused]] int id, 
      const std::vector<geometry_msgs::msg::Pose>& poses) {
      visualization_msgs::msg::Marker marker;
      marker.type = visualization_msgs::msg::Marker::LINE_STRIP;
      marker.scale.x = 0.05;
      marker.color.r = 0.0;
      marker.color.g = 0.0;
      marker.color.b = 1.0;
      marker.color.a = 0.8;
      
      for (const auto& pose : poses) {
        marker.points.push_back(pose.position);
      }
      return marker;
    }
    
    static void makeButtonControl(
      visualization_msgs::msg::InteractiveMarker& int_marker,
      const visualization_msgs::msg::Marker& marker) {
      visualization_msgs::msg::InteractiveMarkerControl control;
      control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::BUTTON;
      control.always_visible = true;
      control.markers.push_back(marker);
      int_marker.controls.push_back(control);
    }
  }
  
  // Stub curves
  namespace Curves {
    static void calculateEquiDistantPosesLine(
      const std::vector<geometry_msgs::msg::Pose>& input_poses,
      std::vector<geometry_msgs::msg::Pose>& output_poses,
      double& length,
      [[maybe_unused]] double spacing) {
      // Simple stub - just copy input to output
      output_poses = input_poses;
      
      if (input_poses.size() >= 2) {
        auto& p1 = input_poses[0].position;
        auto& p2 = input_poses[1].position;
        double dx = p2.x - p1.x;
        double dy = p2.y - p1.y;
        double dz = p2.z - p1.z;
        length = std::sqrt(dx*dx + dy*dy + dz*dz);
      } else {
        length = 0.0;
      }
    }
    
    static void calculateEquiDistantPosesBezier(
      const std::vector<geometry_msgs::msg::Pose>& control_poses,
      std::vector<geometry_msgs::msg::Pose>& output_poses,
      double& length,
      [[maybe_unused]] double pose_spacing,
      [[maybe_unused]] double resolution) {
      // Simple stub - interpolate linearly between first and last
      if (control_poses.size() >= 2) {
        output_poses.clear();
        output_poses.push_back(control_poses.front());
        output_poses.push_back(control_poses.back());
        
        auto& p1 = control_poses.front().position;
        auto& p2 = control_poses.back().position;
        double dx = p2.x - p1.x;
        double dy = p2.y - p1.y;
        double dz = p2.z - p1.z;
        length = std::sqrt(dx*dx + dy*dy + dz*dz);
      } else {
        length = 0.0;
      }
    }
  }
}

// Stub graph control
class GraphControl {
public:
  virtual ~GraphControl() = default;
  virtual void initialize() {}
  virtual void sendGoal([[maybe_unused]] const std::string& name, 
                        [[maybe_unused]] int id, 
                        [[maybe_unused]] const geometry_msgs::msg::Pose& pose) {}
  virtual void cancelGoal() {}
};

class GraphControlPluginLoader {
public:
  bool loadGraphControlPlugin([[maybe_unused]] const std::string& plugin) { return false; }
  bool isGraphControlPluginLoaded() const { return false; }
  std::shared_ptr<GraphControl> getGraphControlInstance() { return nullptr; }
};

// Stub graph message
//namespace graph_msgs {
//  namespace msg {
//    struct Graph {
//      // Stub - empty for now
//    };
//    
//    struct Edge {
//      static constexpr int STRAIGHT_LINE = 0;
//      static constexpr int CUBIC_BEZIER = 1;
//    };
//  }
//}

class GraphVizCtrl : public rclcpp::Node
{
public:
  explicit GraphVizCtrl(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  ~GraphVizCtrl() = default;

private:
  // Vertex and edge maps
  GraphUtil::VerticesMap m_vertex_map;
  GraphUtil::EdgesMap m_edge_map;

  // Curve properties
  double m_pose_spacing;
  double m_resolution;

  // Subscribers
  rclcpp::Subscription<graph_msgs::msg::Graph>::SharedPtr m_graph_sub;
  void graphCallback(const std::shared_ptr<graph_msgs::msg::Graph> graph_msg);

  // Action client for navigation
  using NavigateToPose = nav2_msgs::action::NavigateToPose;
  using GoalHandleNavigate = rclcpp_action::ClientGoalHandle<NavigateToPose>;
  
  rclcpp_action::Client<NavigateToPose>::SharedPtr nav_to_pose_client_;

  // Graph control plugin loader
  GraphControlPluginLoader m_gcpl;
  std::shared_ptr<GraphControl> m_graph_control_instance;

  void initialize();

  // Menu handlers
  std::unique_ptr<interactive_markers::MenuHandler> m_vert_menu_handler;
  void initVertexMenu();

  std::unique_ptr<interactive_markers::MenuHandler> m_edge_menu_handler;
  void initEdgeMenu();

  // Menu callbacks
  void sendGraphNavigationGoalMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback);
  
  void cancelGraphNavigationGoalMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback);
  
  void sendNavigationGoalMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback);
  
  void cancelNavigationGoalsMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback);
  
  void cancelAllGoalsMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr & feedback);

  // Interactive markers for visualization and control
  std::unique_ptr<interactive_markers::InteractiveMarkerServer> m_graph_marker_server;

  // For vertices
  bool addInteractiveVertexMarker(const GraphUtil::Vertex & v);

  // For edges
  bool addInteractiveEdgeMarker(GraphUtil::Edge & e);
  
  void addInteractiveDirectionMarker(
    const std::string & direction_name,
    const geometry_msgs::msg::Pose & pose,
    int16_t marker_type);
  
  void addInteractiveOrientationMarker(
    const std::string & orientation_name,
    const geometry_msgs::msg::Pose & pose);

  // For graph based goals
  void sendGraphNavigationGoal(const std::string & vertex_name);
  void cancelGraphNavigationGoal();

  // For navigation goals
  void sendNavigationGoal(const geometry_msgs::msg::Pose & goal_pose);
  void cancelNavigationGoal();

  // Action client callbacks
  void goalResponseCallback(const GoalHandleNavigate::SharedPtr & goal_handle);
  void feedbackCallback(
    GoalHandleNavigate::SharedPtr,
    const std::shared_ptr<const NavigateToPose::Feedback> feedback);
  void resultCallback(const GoalHandleNavigate::WrappedResult & result);

  // TF2 buffer and listener
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};

