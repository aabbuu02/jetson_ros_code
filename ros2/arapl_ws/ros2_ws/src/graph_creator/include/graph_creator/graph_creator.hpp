#pragma once

#include <memory>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <mutex>
#include <functional>
#include <cmath>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/time.hpp>

#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_array.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/quaternion.hpp>

#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/color_rgba.hpp>

#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <visualization_msgs/msg/interactive_marker.hpp>
#include <visualization_msgs/msg/interactive_marker_feedback.hpp>

#include <interactive_markers/interactive_marker_server.hpp>
#include <interactive_markers/menu_handler.hpp>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include <graph_msgs/msg/graph.hpp>
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>

#include <graph_creator_msgs/msg/graph_creator_config.hpp>
#include <graph_creator_msgs/msg/graph_creator_state.hpp>
#include <graph_creator_msgs/msg/selected_graph_elements.hpp>
#include <graph_creator_msgs/msg/graph_generator_config.hpp>

#include <graph_creator_msgs/srv/save_graph.hpp>
#include <graph_creator_msgs/srv/load_graph.hpp>
#include <graph_creator_msgs/srv/generate_graph.hpp>
#include <graph_creator_msgs/srv/set_graph_creator_mode.hpp>
#include <graph_creator_msgs/srv/set_edge_creation_type.hpp>
#include <graph_creator_msgs/srv/set_edge_direction_type.hpp>
#include <graph_creator_msgs/srv/get_graph_creator_state.hpp>
#include <graph_creator_msgs/srv/set_snap_pose.hpp>

#include <graph_creator_msgs/srv/set_bool.hpp>

#include "graph_creator/directed_graph.hpp"
#include "graph_creator/graph_curves.hpp"
#include "graph_creator/graph_colors.hpp"
#include "graph_creator/graph_visuals.hpp"
#include "graph_creator/graph_saver.hpp"
#include "graph_creator/graph_loader.hpp"
#include "graph_creator/graph_utils.hpp"
#include "graph_creator/graph_file_utils.hpp"
#include "graph_creator/graph_generators.hpp"

class GraphCreator : public rclcpp::Node
{
public:
    GraphCreator();
    ~GraphCreator();
    
    void initializeRobotPose();

private:
    // Messages
    geometry_msgs::msg::PoseArray m_fwd_pose_arr_msg, m_bck_pose_arr_msg;
    geometry_msgs::msg::TransformStamped m_map_base_link_tf_msg;
    geometry_msgs::msg::Pose m_robot_pose_msg;
    graph_creator_msgs::msg::GraphCreatorState m_gc_state_msg;
    graph_creator_msgs::msg::GraphCreatorConfig m_gc_config_msg;
    
    // Publishers
    rclcpp::Publisher<graph_msgs::msg::Graph>::SharedPtr m_graph_pub;
    rclcpp::Publisher<graph_msgs::msg::Vertex>::SharedPtr m_cur_vertex_pub;
    rclcpp::Publisher<graph_msgs::msg::Edge>::SharedPtr m_cur_edge_pub;
    rclcpp::Publisher<graph_creator_msgs::msg::GraphCreatorState>::SharedPtr m_cur_gc_state_pub;
    rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr m_fwd_pose_arr_pub;
    rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr m_bck_pose_arr_pub;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr m_marker_pub;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr m_marker_arr_pub;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_debug_pub;
    
    // Subscribers
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr m_vertex_create_sub;
    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr m_robot_pose_sub;
    rclcpp::Subscription<graph_msgs::msg::Vertex>::SharedPtr m_vertex_updates_sub;
    rclcpp::Subscription<graph_msgs::msg::Edge>::SharedPtr m_edge_updates_sub;
    rclcpp::Subscription<graph_creator_msgs::msg::SelectedGraphElements>::SharedPtr m_selected_graph_elem_sub;
    rclcpp::Subscription<graph_creator_msgs::msg::GraphCreatorConfig>::SharedPtr m_gc_config_sub;
    
    // Subscriber callbacks
    void vertexCreateCallback(const geometry_msgs::msg::PoseStamped::SharedPtr pose_msg);
    void robotPoseCallback(const geometry_msgs::msg::Pose::SharedPtr pose_msg);
    void vertexUpdatesCallback(const graph_msgs::msg::Vertex::SharedPtr vertex_msg);
    void edgeUpdatesCallback(const graph_msgs::msg::Edge::SharedPtr edge_msg);
    void selectedGraphElementCallback(const graph_creator_msgs::msg::SelectedGraphElements::SharedPtr sel_msg);
    void graphCreatorConfigCallback(const graph_creator_msgs::msg::GraphCreatorConfig::SharedPtr msg);
    
    // Service servers
    rclcpp::Service<graph_creator_msgs::srv::LoadGraph>::SharedPtr m_load_graph_srv;
    rclcpp::Service<graph_creator_msgs::srv::SaveGraph>::SharedPtr m_save_graph_srv;
    rclcpp::Service<graph_creator_msgs::srv::SetGraphCreatorMode>::SharedPtr m_set_gc_mode_srv;
    rclcpp::Service<graph_creator_msgs::srv::SetEdgeCreationType>::SharedPtr m_set_ec_type_srv;
    rclcpp::Service<graph_creator_msgs::srv::SetEdgeDirectionType>::SharedPtr m_set_ed_type_srv;
    rclcpp::Service<graph_creator_msgs::srv::SetBool>::SharedPtr m_set_verts_locked_srv;
    rclcpp::Service<graph_creator_msgs::srv::SetBool>::SharedPtr m_set_edges_locked_srv;
    rclcpp::Service<graph_creator_msgs::srv::GetGraphCreatorState>::SharedPtr m_get_gc_state_srv;
    rclcpp::Service<graph_creator_msgs::srv::GenerateGraph>::SharedPtr m_gen_graph_srv;
    rclcpp::Service<graph_creator_msgs::srv::SetSnapPose>::SharedPtr m_set_snap_pose_srv;
    
    // Service server callbacks
    void loadGraphFileServiceCallback(
        const std::shared_ptr<graph_creator_msgs::srv::LoadGraph::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::LoadGraph::Response> response);
    
    void saveGraphFileServiceCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SaveGraph::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SaveGraph::Response> response);
    
    void setGraphCreatorModeCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode::Response> response);
    
    void setEdgeCreationTypeCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SetEdgeCreationType::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SetEdgeCreationType::Response> response);
    
    void setEdgeDirectionCreationTypeCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType::Response> response);
    
    void setVerticesLockedCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SetBool::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SetBool::Response> response);

    void setEdgesLockedCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SetBool::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SetBool::Response> response);
    
    void getGraphCreatorStateCallback(
        const std::shared_ptr<graph_creator_msgs::srv::GetGraphCreatorState::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::GetGraphCreatorState::Response> response);
    
    void generateGraphCallback(
        const std::shared_ptr<graph_creator_msgs::srv::GenerateGraph::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::GenerateGraph::Response> response);
    
    void setSnapPoseConfigCallback(
        const std::shared_ptr<graph_creator_msgs::srv::SetSnapPose::Request> request,
        std::shared_ptr<graph_creator_msgs::srv::SetSnapPose::Response> response);
    
    // Timers
    rclcpp::TimerBase::SharedPtr m_publish_graph_timer;
    void publishGraphTimerCallback();
    
    // Time
    rclcpp::Time m_prev_robot_pose_time;
    
    // TF2
    std::shared_ptr<tf2_ros::Buffer> m_tf_buffer;
    std::shared_ptr<tf2_ros::TransformListener> m_tf_listener;
    bool m_enable_base_link_tf_br = false;
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> m_map_base_link_br;
    void mapBaseLinkTfBroadcast(const geometry_msgs::msg::Pose &pose_msg);
    
    // Graph saving and loading
    std::string m_cur_graph_filename = "point_path_graph";
    std::string m_cur_graph_path = "point_path_graph";
    std::string m_cur_graph_name = "";
    std::string m_cur_graph_type = "";
    
    // Graph
    Graph::DiGraph m_graph;
    std::mutex m_graph_mutex;
    
    // Graph utilities
    std::shared_ptr<GraphSaver> m_graph_saver;
    std::shared_ptr<GraphLoader> m_graph_loader;
    std::shared_ptr<GraphGenerator> m_graph_generator;
    
    // Graph state
    std::string m_graph_name;
    std::string m_graph_frame_id;
    std::string m_robot_base_frame_id;
    uint32_t m_vertex_counter = 0;
    bool m_is_graph_loaded = false;
    bool m_auto_publish_graph = false;
    double m_publish_graph_rate = 1.0;
    
    // Graph modes
    enum GraphCreateMode
    {
        CREATE_VERTICES = 0,
        CREATE_EDGES = 1
    };
    int m_current_graph_mode = CREATE_VERTICES;
    
    // Graph edge curve types
    enum CurveTypes
    {
        STRAIGHT_LINE = 0,
        CUBIC_BEZIER = 1
    };
    
    // Graph edge direction types
    enum DirectionTypes
    {
        FORWARD = 0,
        REVERSE = 1,
        BIDIRECTIONAL = 2
    };
    
    std::unordered_map<int, std::string> curve_name_map = {
        {STRAIGHT_LINE, "straight line"},
        {CUBIC_BEZIER, "cubic bezier"}
    };
    
    // Graph vertex properties
    uint8_t m_current_vertex_type = graph_msgs::msg::Vertex::NORMAL;
    bool m_vertex_ignore_orientation = false;
    
    // Graph edge curve properties
    uint8_t m_current_curve_type = STRAIGHT_LINE;
    bool m_edge_is_bidirectional = false;
    double m_pose_spacing = 0.1;
    double m_resolution = 1.0;
    double m_vertex_sphere_scale = 0.1;
    double m_vertex_arrow_scale = 0.15;
    double m_control_pose_scale = 0.08;
    double m_edge_pose_spacing = 0.1;
    double m_bezier_resolution = 0.01;
    
    // Vertex variables
    bool m_is_vertices_locked = false;
    uint32_t m_vertex_id_counter = 0;
    std::string m_prev_selected_vertex = "";
    bool m_is_robot_pose_received = false;
    
    // Edge variables
    bool m_is_edges_locked = false;
    uint32_t m_control_id_counter = 0;
    std::string m_prev_selected_edge = "";
    bool m_is_creating_edge = false;
    std::string m_temp_start_vertex_name;
    std::string m_temp_end_vertex_name;
    
    // Snap pose variables
    bool m_enable_vertex_snap = false;
    bool m_enable_edge_snap = false;
    bool m_enable_position_snap = false;
    bool m_enable_orientation_snap = false;
    double m_position_snap_grid_size = 1.0;
    double m_orientation_snap_angle = M_PI / 2;
    
    // Selection variables for edge creation
    std::vector<std::string> m_selected_edge_vertices;
    
    // Graph element selection for color change
    struct MarkerColor
    {
        std::string marker_name = "";
        std_msgs::msg::ColorRGBA color;
        
        MarkerColor() = default;
        MarkerColor(const std::string &mn, const std_msgs::msg::ColorRGBA &c)
            : marker_name(mn), color(c) {}
    };
    
    std::deque<MarkerColor> m_sel_mkr_clr_queue;
    
    void stashMarkerColor(const visualization_msgs::msg::InteractiveMarker &int_marker);
    void applyStashedMarkerColors();
    void clearStashedMarkersColors();
    
    // Selection for graph manipulation
    std::unordered_set<std::string> m_sel_grp_vertices_set;
    std::unordered_set<std::string> m_sel_grp_edges_set;
    
    void selectVerticesOnly();
    void deselectVerticesOnly();
    void clearVertexSelections();
    void selectEdgesOnly();
    void deselectEdgesOnly();
    void clearEdgeSelections();
    void selectAllVerticesAndEdges();
    void deselectAllVerticesAndEdges();
    void clearAllVertexAndEdgeSelections();
    void resetEdgesAndVerticesSelections();
    
    // Interactive marker server
    std::shared_ptr<interactive_markers::InteractiveMarkerServer> m_int_marker_server;
    
    // Menu handlers
    interactive_markers::MenuHandler m_vert_menu_handler;
    interactive_markers::MenuHandler m_edge_menu_handler;
    
    interactive_markers::MenuHandler::EntryHandle m_vert_mode_handle, m_vert_ornt_ign_handle;
    interactive_markers::MenuHandler::EntryHandle m_create_vertices_handle, m_create_edges_handle;
    interactive_markers::MenuHandler::EntryHandle m_edge_type_handle, m_edge_dir_type_handle;
    interactive_markers::MenuHandler::EntryHandle m_edge_type_sl_handle, m_edge_type_cb_handle;
    interactive_markers::MenuHandler::EntryHandle m_edge_dir_fwd_handle, m_edge_dir_bi_handle;
    
    std::vector<interactive_markers::MenuHandler::EntryHandle> m_default_vert_entry_handles;
    std::vector<interactive_markers::MenuHandler::EntryHandle> m_select_vert_entry_handles;
    std::vector<interactive_markers::MenuHandler::EntryHandle> m_default_edge_entry_handles;
    std::vector<interactive_markers::MenuHandler::EntryHandle> m_select_edge_entry_handles;
    
    void initVertexMenu();
    void initEdgeMenu();
    
    // Vertex menu callbacks
    void vertexMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void vertexModeCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void vertexOrientationMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void vertexOrientationChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void vertexSelectionMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void deleteVerticesMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void verticesOrientationChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void vertexPoseToRobotPoseMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void hideDefaultVertexMenu(bool hide);
    void hideSelectionVertexMenu(bool hide);
    
    // Edge menu callbacks
    void edgeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeTypeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeDirectionTypeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeTypeChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeDirectionChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeSelectionMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void deleteEdgesMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeTypesChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeDirectionsChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeOrientationsChangeMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void hideDefaultEdgeMenu(bool hide);
    void hideSelectionEdgeMenu(bool hide);
    
    // Interactive marker feedback callbacks
    void vertexMarkerFeedbackCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeMarkerFeedbackCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void controlPoseMarkerFeedbackCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void controlOrientationMarkerFeedbackCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void edgeDirectionMarkerFeedbackCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    
    // Vertex operations
    bool addVertex(const geometry_msgs::msg::Pose &pose, const std::string &vertex_type = "");
    bool deleteVertex(const std::string &vertex_name);
    bool updateVertexPose(const std::string &vertex_name, const geometry_msgs::msg::Pose &pose);
    void updateVertexMarker(const std::string &vertex_name);
    void createVertexMarker(const std::string &vertex_name);
    void removeVertexMarker(const std::string &vertex_name);
    void addVertexWithMarker(int vertex_id, const geometry_msgs::msg::Pose &pose);
    void deleteVertexWithMarker(const std::string &vertex_name);
    void deleteVerticesWithMarkers(const std::unordered_set<std::string> &vertex_names);
    void changeVertexOrientationWithMarker(const std::string &vertex_name, bool ignore_orientation);
    void changeVerticesOrientationWithMarkers(const std::unordered_set<std::string> &vertex_names, bool ignore_orientations);
    bool createVertexAndMarker(const Graph::Vertex &vertex);
    
    // Edge operations
    bool addEdge(const std::string &src_vertex, const std::string &dst_vertex, uint8_t edge_type = 0);
    bool deleteEdge(const std::string &edge_name);
    bool updateEdge(const std::string &edge_name);
    void updateEdgeMarkers(const std::string &edge_name);
    void createEdgeMarkers(const std::string &edge_name);
    void removeEdgeMarkers(const std::string &edge_name);
    void calculateEdgePoses(const std::string &edge_name);
    bool createEdgeWithMarker(Graph::Edge &edge);
    void makeInteractiveEdgeMarker(const std::string &edge_name, const std::vector<geometry_msgs::msg::Pose> &poses);
    void addEdgeWithMarkers(const std::vector<std::string> &selected_vertices, uint8_t edge_type);
    void deleteEdgeWithMarkers(const std::string &edge_name);
    void deleteEdgesWithMarkers(const std::unordered_set<std::string> &edge_names);
    void changeEdgeTypeWithMarkers(const std::string &edge_name, uint8_t edge_type);
    void changeEdgeTypesWithMarkers(const std::unordered_set<std::string> &edge_names, uint8_t edge_type);
    void changeEdgeDirectionWithMarkers(const std::string &edge_name, bool is_bidirectional);
    void changeEdgeDirectionsWithMarkers(const std::unordered_set<std::string> &edge_names, bool is_bidirectional);
    
    // Control pose operations
    bool addControlPose(const std::string &edge_name, const geometry_msgs::msg::Pose &pose);
    bool deleteControlPose(const std::string &edge_name, const std::string &control_pose_name);
    bool updateControlPose(const std::string &control_pose_name, const geometry_msgs::msg::Pose &pose);
    void createControlPoseMarker(const std::string &edge_name, const std::string &control_pose_name);
    void removeControlPoseMarker(const std::string &control_pose_name);
    void makeInteractiveControlPoseMarker(const std::string &control_pose_name, const geometry_msgs::msg::Pose &pose);
    void clearControlPoseMarkersForEdge(const std::string &edge_name);
    void readdControlPoseMarkersForEdge(const std::string &edge_name);
    
    // Control orientation operations
    void makeInteractiveControlOrientMarker(const std::string &control_orient_name, const geometry_msgs::msg::Pose &pose);
    void addControlOrientMarkerToEdge(const std::string &edge_name);
    void addControlOrientMarkerToEdges(const std::unordered_set<std::string> &edge_names);
    void deleteControlOrientMarkerFromEdge(const std::string &edge_name);
    void deleteControlOrientMarkerFromEdges(const std::unordered_set<std::string> &edge_names);
    void clearControlOrientMarkersForEdge(const std::string &edge_name);
    void readdControlOrientMarkerForEdge(const std::string &edge_name);
    
    // Edge direction markers
    void makeInteractiveEdgeDirectionMarkers(const std::string &edge_name, const geometry_msgs::msg::Pose &pose, int16_t marker_type);
    
    // Graph operations
    void clearGraph();
    void reset();
    void publishGraph();
    bool loadGraphFromFile(const std::string &file_path);
    bool saveGraphToFile(const std::string &file_path);
    bool saveGraphToFile(const std::string &graph_name, const std::string &file_path);
    bool generateGraph(const graph_creator_msgs::msg::GraphGeneratorConfig &config);
    bool createGraphWithInteractiveMarkers(Graph::VertexList &vl, Graph::EdgeList &el);
    void publishAllPosesInGraph();
    
    // Utility functions
    std::string generateVertexName(uint32_t id);
    std::string generateEdgeName(const std::string &src, const std::string &dst);
    bool getRobotPose(geometry_msgs::msg::Pose &robot_pose);
    void updateGraphConfiguration(const graph_creator_msgs::msg::GraphCreatorConfig &config);
    
    // Snap functions
    geometry_msgs::msg::Point snapPosition(const geometry_msgs::msg::Point &position, double snap_grid = 1.0) const;
    geometry_msgs::msg::Quaternion snapOrientation(const geometry_msgs::msg::Quaternion &orientation, double snap_angle = M_PI / 2.0) const;
    bool applyVertexPositionSnap(const geometry_msgs::msg::Point &in_position, geometry_msgs::msg::Point &out_position);
    bool applyVertexOrientationSnap(const geometry_msgs::msg::Quaternion &in_orientation, geometry_msgs::msg::Quaternion &out_orientation);
    bool applyEdgeElementPositionSnap(const geometry_msgs::msg::Point &in_position, geometry_msgs::msg::Point &out_position);
    bool applyEdgeElementOrientationSnap(const geometry_msgs::msg::Quaternion &in_orientation, geometry_msgs::msg::Quaternion &out_orientation);
    
    // Update functions
    bool updateVertexAndMarker(const std::string &vertex_name, const geometry_msgs::msg::Pose &vertex_pose);
    bool updateEdgeAndMarkers(const std::string &edge_element_name, const geometry_msgs::msg::Pose &edge_element_pose);
    void updateInteractiveMarkerPoses(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    
    // Lock functions
    void lockAllVertices(bool lock);
    void lockAllEdges(bool lock);
    
    // User interaction handlers
    void processInteractiveMarkerFeedback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void onMouseUp(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void onMouseDown(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void onButtonClick(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    
    // Menu callbacks
    void saveGraphMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void loadGraphMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void setGraphMenuCallback(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback);
    void vertexMenuCallback(const std::string &vertex_name, const std::string &menu_entry);
    void edgeMenuCallback(const std::string &edge_name, const std::string &menu_entry);
    
    // Current element publishers
    void publishCurrentGraphVertex(const std::string &vertex_name);
    void publishCurrentGraphEdge(const std::string &edge_name);
    void publishCurrentGraphCreatorState();
};
