#include "graph_creator/graph_creator.hpp"
#include <cmath>
#include <algorithm>

// ============================================================================
// CONSTRUCTOR & DESTRUCTOR
// ============================================================================

GraphCreator::GraphCreator()
    : Node("graph_creator"),
      m_graph_name("default_graph"),
      m_graph_frame_id("map"),
      m_robot_base_frame_id("base_link"),
      m_auto_publish_graph(false),
      m_publish_graph_rate(1.0)
{
    // Declare and get parameters
    this->declare_parameter("graph_name", "default_graph");
    this->declare_parameter("graph_frame_id", "map");
    this->declare_parameter("robot_base_frame_id", "base_link");
    this->declare_parameter("auto_publish_graph", false);
    this->declare_parameter("publish_graph_rate", 1.0);
    this->declare_parameter("vertex_sphere_scale", 0.1);
    this->declare_parameter("vertex_arrow_scale", 0.15);
    this->declare_parameter("control_pose_scale", 0.08);
    this->declare_parameter("edge_pose_spacing", 0.1);
    this->declare_parameter("bezier_resolution", 0.01);
    this->declare_parameter("enable_base_link_tf_br", false);
    
    this->get_parameter("graph_name", m_graph_name);
    this->get_parameter("graph_frame_id", m_graph_frame_id);
    this->get_parameter("robot_base_frame_id", m_robot_base_frame_id);
    this->get_parameter("auto_publish_graph", m_auto_publish_graph);
    this->get_parameter("publish_graph_rate", m_publish_graph_rate);
    this->get_parameter("vertex_sphere_scale", m_vertex_sphere_scale);
    this->get_parameter("vertex_arrow_scale", m_vertex_arrow_scale);
    this->get_parameter("control_pose_scale", m_control_pose_scale);
    this->get_parameter("edge_pose_spacing", m_edge_pose_spacing);
    this->get_parameter("bezier_resolution", m_bezier_resolution);
    this->get_parameter("enable_base_link_tf_br", m_enable_base_link_tf_br);
    
    // Initialize TF2
    m_tf_buffer = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    m_tf_listener = std::make_shared<tf2_ros::TransformListener>(*m_tf_buffer);
    
    if (m_enable_base_link_tf_br)
    {
        m_map_base_link_br = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    }
    
    // Initialize Interactive Marker Server
    m_int_marker_server = std::make_shared<interactive_markers::InteractiveMarkerServer>(
        "graph_creator_markers", shared_from_this());
    
    // Publishers
    m_graph_pub = this->create_publisher<graph_msgs::msg::Graph>("graph", 1);
    m_cur_vertex_pub = this->create_publisher<graph_msgs::msg::Vertex>(
        "graph_creator/current_vertex", 10);
    m_cur_edge_pub = this->create_publisher<graph_msgs::msg::Edge>(
        "graph_creator/current_edge", 10);
    m_cur_gc_state_pub = this->create_publisher<graph_creator_msgs::msg::GraphCreatorState>(
        "graph_creator/current_state", 10);
    m_fwd_pose_arr_pub = this->create_publisher<geometry_msgs::msg::PoseArray>(
        "graph_creator/forward_poses", 10);
    m_bck_pose_arr_pub = this->create_publisher<geometry_msgs::msg::PoseArray>(
        "graph_creator/backward_poses", 10);
    m_marker_pub = this->create_publisher<visualization_msgs::msg::Marker>(
        "graph_creator/markers", 10);
    m_marker_arr_pub = this->create_publisher<visualization_msgs::msg::MarkerArray>(
        "graph_creator/marker_array", 10);
    m_debug_pub = this->create_publisher<std_msgs::msg::String>("graph_creator/debug", 10);
    
    // Subscribers
    m_vertex_create_sub = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "add_vertex_pose", 10,
        std::bind(&GraphCreator::vertexCreateCallback, this, std::placeholders::_1));
    
    m_robot_pose_sub = this->create_subscription<geometry_msgs::msg::Pose>(
        "robot_pose", 10,
        std::bind(&GraphCreator::robotPoseCallback, this, std::placeholders::_1));
    
    m_vertex_updates_sub = this->create_subscription<graph_msgs::msg::Vertex>(
        "graph_creator/updates/vertex", 10,
        std::bind(&GraphCreator::vertexUpdatesCallback, this, std::placeholders::_1));
    
    m_edge_updates_sub = this->create_subscription<graph_msgs::msg::Edge>(
        "graph_creator/updates/edge", 10,
        std::bind(&GraphCreator::edgeUpdatesCallback, this, std::placeholders::_1));
    
    m_selected_graph_elem_sub = this->create_subscription<graph_creator_msgs::msg::SelectedGraphElements>(
        "graph_creator/selected_graph_elements", 10,
        std::bind(&GraphCreator::selectedGraphElementCallback, this, std::placeholders::_1));
    
    m_gc_config_sub = this->create_subscription<graph_creator_msgs::msg::GraphCreatorConfig>(
        "graph_creator/config", 10,
        std::bind(&GraphCreator::graphCreatorConfigCallback, this, std::placeholders::_1));
    
    // Services
    m_save_graph_srv = this->create_service<graph_creator_msgs::srv::SaveGraph>(
        "graph_creator/save_graph",
        std::bind(&GraphCreator::saveGraphFileServiceCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_load_graph_srv = this->create_service<graph_creator_msgs::srv::LoadGraph>(
        "graph_creator/load_graph",
        std::bind(&GraphCreator::loadGraphFileServiceCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_gen_graph_srv = this->create_service<graph_creator_msgs::srv::GenerateGraph>(
        "graph_creator/generate_graph",
        std::bind(&GraphCreator::generateGraphCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_set_gc_mode_srv = this->create_service<graph_creator_msgs::srv::SetGraphCreatorMode>(
        "graph_creator/set_mode",
        std::bind(&GraphCreator::setGraphCreatorModeCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_set_ec_type_srv = this->create_service<graph_creator_msgs::srv::SetEdgeCreationType>(
        "graph_creator/set_edge_creation_type",
        std::bind(&GraphCreator::setEdgeCreationTypeCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_set_ed_type_srv = this->create_service<graph_creator_msgs::srv::SetEdgeDirectionType>(
        "graph_creator/set_edge_direction_type",
        std::bind(&GraphCreator::setEdgeDirectionCreationTypeCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_set_verts_locked_srv = this->create_service<graph_creator_msgs::srv::SetBool>(
        "graph_creator/set_vertices_locked",
        std::bind(&GraphCreator::setVerticesLockedCallback, this, 
                std::placeholders::_1, std::placeholders::_2));

    m_set_edges_locked_srv = this->create_service<graph_creator_msgs::srv::SetBool>(
        "graph_creator/set_edges_locked",
        std::bind(&GraphCreator::setEdgesLockedCallback, this, 
                std::placeholders::_1, std::placeholders::_2));
    
    m_get_gc_state_srv = this->create_service<graph_creator_msgs::srv::GetGraphCreatorState>(
        "graph_creator/get_state",
        std::bind(&GraphCreator::getGraphCreatorStateCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    m_set_snap_pose_srv = this->create_service<graph_creator_msgs::srv::SetSnapPose>(
        "graph_creator/set_snap_pose",
        std::bind(&GraphCreator::setSnapPoseConfigCallback, this, 
                  std::placeholders::_1, std::placeholders::_2));
    
    // Initialize utility classes
    m_graph_saver = std::make_shared<GraphSaver>(m_graph_name);
    m_graph_loader = std::make_shared<GraphLoader>();
    m_graph_generator = std::make_shared<GraphGenerator>();
    
    // Initialize graph
    m_graph.setGraphName(m_graph_name);
    m_graph.setGraphFrameId(m_graph_frame_id);
    
    // Initialize menus
    initVertexMenu();
    initEdgeMenu();
    
    // Timer for auto-publishing graph
    if (m_auto_publish_graph)
    {
        m_publish_graph_timer = this->create_wall_timer(
            std::chrono::duration<double>(1.0 / m_publish_graph_rate),
            std::bind(&GraphCreator::publishGraphTimerCallback, this));
    }
    
    // Initialize robot pose
    initializeRobotPose();
    
    RCLCPP_INFO(this->get_logger(), "Graph Creator initialized successfully");
    RCLCPP_INFO(this->get_logger(), "Graph name: %s", m_graph_name.c_str());
    RCLCPP_INFO(this->get_logger(), "Graph frame: %s", m_graph_frame_id.c_str());
}

GraphCreator::~GraphCreator()
{
    if (m_int_marker_server)
    {
        m_int_marker_server->clear();
        m_int_marker_server->applyChanges();
    }
}

void GraphCreator::initializeRobotPose()
{
    geometry_msgs::msg::Pose initial_pose;
    initial_pose.position.x = 0.0;
    initial_pose.position.y = 0.0;
    initial_pose.position.z = 0.0;
    initial_pose.orientation.w = 1.0;
    m_robot_pose_msg = initial_pose;
    
    RCLCPP_INFO(this->get_logger(), "Robot pose initialized to origin");
}

// ============================================================================
// MENU INITIALIZATION
// ============================================================================

void GraphCreator::initVertexMenu()
{
    m_vert_mode_handle = m_vert_menu_handler.insert("Mode");
    m_create_vertices_handle = m_vert_menu_handler.insert(m_vert_mode_handle, "Create Vertices",
        std::bind(&GraphCreator::vertexModeCallback, this, std::placeholders::_1));
    m_create_edges_handle = m_vert_menu_handler.insert(m_vert_mode_handle, "Create Edges",
        std::bind(&GraphCreator::vertexModeCallback, this, std::placeholders::_1));
    
    m_vert_ornt_ign_handle = m_vert_menu_handler.insert("Ignore Orientation",
        std::bind(&GraphCreator::vertexOrientationMenuCallback, this, std::placeholders::_1));
    
    m_default_vert_entry_handles.push_back(
        m_vert_menu_handler.insert("Change Orientation",
            std::bind(&GraphCreator::vertexOrientationChangeMenuCallback, this, std::placeholders::_1)));
    
    m_default_vert_entry_handles.push_back(
        m_vert_menu_handler.insert("Set to Robot Pose",
            std::bind(&GraphCreator::vertexPoseToRobotPoseMenuCallback, this, std::placeholders::_1)));
    
    m_select_vert_entry_handles.push_back(
        m_vert_menu_handler.insert("Select",
            std::bind(&GraphCreator::vertexSelectionMenuCallback, this, std::placeholders::_1)));
    
    m_select_vert_entry_handles.push_back(
        m_vert_menu_handler.insert("Delete Selection",
            std::bind(&GraphCreator::deleteVerticesMenuCallback, this, std::placeholders::_1)));
    
    m_select_vert_entry_handles.push_back(
        m_vert_menu_handler.insert("Change Orientations",
            std::bind(&GraphCreator::verticesOrientationChangeMenuCallback, this, std::placeholders::_1)));
    
    hideSelectionVertexMenu(true);
}

void GraphCreator::initEdgeMenu()
{
    m_edge_type_handle = m_vert_menu_handler.insert("Edge Type");
    m_edge_type_sl_handle = m_vert_menu_handler.insert(m_edge_type_handle, "Straight Line",
        std::bind(&GraphCreator::edgeTypeMenuCallback, this, std::placeholders::_1));
    m_edge_type_cb_handle = m_vert_menu_handler.insert(m_edge_type_handle, "Cubic Bezier",
        std::bind(&GraphCreator::edgeTypeMenuCallback, this, std::placeholders::_1));
    
    m_edge_dir_type_handle = m_vert_menu_handler.insert("Edge Direction");
    m_edge_dir_fwd_handle = m_vert_menu_handler.insert(m_edge_dir_type_handle, "Forward",
        std::bind(&GraphCreator::edgeDirectionTypeMenuCallback, this, std::placeholders::_1));
    m_edge_dir_bi_handle = m_vert_menu_handler.insert(m_edge_dir_type_handle, "Bidirectional",
        std::bind(&GraphCreator::edgeDirectionTypeMenuCallback, this, std::placeholders::_1));
    
    m_default_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Change Type",
            std::bind(&GraphCreator::edgeTypeChangeMenuCallback, this, std::placeholders::_1)));
    
    m_default_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Change Direction",
            std::bind(&GraphCreator::edgeDirectionChangeMenuCallback, this, std::placeholders::_1)));
    
    m_select_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Select",
            std::bind(&GraphCreator::edgeSelectionMenuCallback, this, std::placeholders::_1)));
    
    m_select_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Delete Selection",
            std::bind(&GraphCreator::deleteEdgesMenuCallback, this, std::placeholders::_1)));
    
    m_select_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Change Types",
            std::bind(&GraphCreator::edgeTypesChangeMenuCallback, this, std::placeholders::_1)));
    
    m_select_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Change Directions",
            std::bind(&GraphCreator::edgeDirectionsChangeMenuCallback, this, std::placeholders::_1)));
    
    m_select_edge_entry_handles.push_back(
        m_edge_menu_handler.insert("Change Orientations",
            std::bind(&GraphCreator::edgeOrientationsChangeMenuCallback, this, std::placeholders::_1)));
    
    hideSelectionEdgeMenu(true);
}

void GraphCreator::hideDefaultVertexMenu(bool hide)
{
    for (const auto &handle : m_default_vert_entry_handles)
    {
        m_vert_menu_handler.setVisible(handle, !hide);
    }
}

void GraphCreator::hideSelectionVertexMenu(bool hide)
{
    for (const auto &handle : m_select_vert_entry_handles)
    {
        m_vert_menu_handler.setVisible(handle, !hide);
    }
}

void GraphCreator::hideDefaultEdgeMenu(bool hide)
{
    for (const auto &handle : m_default_edge_entry_handles)
    {
        m_edge_menu_handler.setVisible(handle, !hide);
    }
}

void GraphCreator::hideSelectionEdgeMenu(bool hide)
{
    for (const auto &handle : m_select_edge_entry_handles)
    {
        m_edge_menu_handler.setVisible(handle, !hide);
    }
}

// ============================================================================
// SUBSCRIBER CALLBACKS
// ============================================================================

void GraphCreator::vertexCreateCallback(const geometry_msgs::msg::PoseStamped::SharedPtr pose_msg)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    addVertex(pose_msg->pose);
}

void GraphCreator::robotPoseCallback(const geometry_msgs::msg::Pose::SharedPtr pose_msg)
{
    m_robot_pose_msg = *pose_msg;
    m_is_robot_pose_received = true;
    m_prev_robot_pose_time = this->now();
    
    if (m_enable_base_link_tf_br)
    {
        mapBaseLinkTfBroadcast(*pose_msg);
    }
}

void GraphCreator::vertexUpdatesCallback(const graph_msgs::msg::Vertex::SharedPtr vertex_msg)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (m_graph.isVertex(vertex_msg->name))
    {
        auto vertex_ptr = m_graph.getVertexData(vertex_msg->name);
        vertex_ptr->vertex_pose = vertex_msg->pose;
        vertex_ptr->ignore_orientation = vertex_msg->ignore_orientation;
        updateVertexMarker(vertex_msg->name);
    }
}

void GraphCreator::edgeUpdatesCallback(const graph_msgs::msg::Edge::SharedPtr edge_msg)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (m_graph.isEdge(edge_msg->name))
    {
        auto edge_ptr = m_graph.getEdgeData(edge_msg->name);
        edge_ptr->edge_type = edge_msg->type;
        edge_ptr->is_bidirectional = edge_msg->bidirectional;
        calculateEdgePoses(edge_msg->name);
        updateEdgeMarkers(edge_msg->name);
    }
}

void GraphCreator::selectedGraphElementCallback(
    const graph_creator_msgs::msg::SelectedGraphElements::SharedPtr sel_msg)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_sel_grp_vertices_set.clear();
    m_sel_grp_edges_set.clear();
    
    for (const auto &v_name : sel_msg->all_vertices)
    {
        m_sel_grp_vertices_set.insert(v_name);
    }

    for (const auto &e_name : sel_msg->all_edges)
    {
        m_sel_grp_edges_set.insert(e_name);
    }   
}

void GraphCreator::graphCreatorConfigCallback(
    const graph_creator_msgs::msg::GraphCreatorConfig::SharedPtr msg)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    updateGraphConfiguration(*msg);
}

// ============================================================================
// SERVICE CALLBACKS
// ============================================================================

void GraphCreator::loadGraphFileServiceCallback(
    const std::shared_ptr<graph_creator_msgs::srv::LoadGraph::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::LoadGraph::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    RCLCPP_INFO(this->get_logger(), "Load graph service called");
    
    if (loadGraphFromFile(request->file_path))
    {
        response->success = true;
        response->message = "Graph loaded successfully from: " + request->file_path;
        RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
    }
    else
    {
        response->success = false;
        response->message = "Failed to load graph from: " + request->file_path;
        RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
    }
}

void GraphCreator::saveGraphFileServiceCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SaveGraph::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SaveGraph::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    RCLCPP_INFO(this->get_logger(), "Save graph service called");
    
    std::string file_path;
    if (Graph::File::getGraphFilePath(request->file_path, file_path))
    {
        m_graph_saver->convertGraph(m_graph);
        
        if (m_graph_saver->saveGraph(file_path))
        {
            response->success = true;
            response->message = "Graph saved successfully to: " + file_path;
            RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
        }
        else
        {
            response->success = false;
            response->message = "Failed to save graph to: " + file_path;
            RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
        }
    }
    else
    {
        response->success = false;
        response->message = "Invalid file path provided";
        RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
    }
}

void GraphCreator::generateGraphCallback(
    const std::shared_ptr<graph_creator_msgs::srv::GenerateGraph::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::GenerateGraph::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    RCLCPP_INFO(this->get_logger(), "Generate graph service called");
    
    if (generateGraph(request->generator_config))
    {
        response->success = true;
        response->message = "Graph generated successfully";
        RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
    }
    else
    {
        response->success = false;
        response->message = "Failed to generate graph";
        RCLCPP_ERROR(this->get_logger(), "%s", response->message.c_str());
    }
}

void GraphCreator::setGraphCreatorModeCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_current_graph_mode = request->graph_mode.mode;
    response->success = true;
    
    if (m_current_graph_mode == CREATE_VERTICES)
    {
        response->message = "Mode set to CREATE_VERTICES";
    }
    else if (m_current_graph_mode == CREATE_EDGES)
    {
        response->message = "Mode set to CREATE_EDGES";
    }
    
    RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
    publishCurrentGraphCreatorState();
}

void GraphCreator::setEdgeCreationTypeCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SetEdgeCreationType::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeCreationType::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_current_curve_type = request->edge_creation_type.type;
    response->success = true;
    response->message = "Edge creation type set to: " + curve_name_map[m_current_curve_type];
    
    RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
    publishCurrentGraphCreatorState();
}

void GraphCreator::setEdgeDirectionCreationTypeCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    uint8_t direction = request->edge_direction_creation_type.direction_type;
    
    if (direction == graph_msgs::msg::Edge::BIDIRECTIONAL)
    {
        m_edge_is_bidirectional = true;
        response->message = "Edge direction type set to BIDIRECTIONAL";
    }
    else
    {
        m_edge_is_bidirectional = false;
        response->message = "Edge direction type set to FORWARD";
    }
    
    response->success = true;
    RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
    publishCurrentGraphCreatorState();
}

void GraphCreator::setVerticesLockedCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SetBool::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SetBool::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_is_vertices_locked = request->data;
    lockAllVertices(m_is_vertices_locked);
    
    response->success = true;
    response->message = m_is_vertices_locked ? "Vertices locked" : "Vertices unlocked";
    
    RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
}

void GraphCreator::setEdgesLockedCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SetBool::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SetBool::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_is_edges_locked = request->data;
    lockAllEdges(m_is_edges_locked);
    
    response->success = true;
    response->message = m_is_edges_locked ? "Edges locked" : "Edges unlocked";
    
    RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
}

void GraphCreator::getGraphCreatorStateCallback(
    const std::shared_ptr<graph_creator_msgs::srv::GetGraphCreatorState::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::GetGraphCreatorState::Response> response)
{
    (void)request;  // Unused
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    response->state = m_gc_state_msg;
    response->success = true;
}

void GraphCreator::setSnapPoseConfigCallback(
    const std::shared_ptr<graph_creator_msgs::srv::SetSnapPose::Request> request,
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose::Response> response)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_enable_vertex_snap = request->enable_vertex_snap_mode;
    m_enable_edge_snap = request->enable_edge_snap_mode;
    m_enable_position_snap = request->enable_position_snap_mode;
    m_enable_orientation_snap = request->enable_orientation_snap_mode;
    m_position_snap_grid_size = request->position_grid_size;
    m_orientation_snap_angle = request->orientation_angle;
    
    response->success = true;
    response->message = "Snap pose configuration updated";
    
    RCLCPP_INFO(this->get_logger(), "%s", response->message.c_str());
}

// ============================================================================
// TIMER CALLBACKS
// ============================================================================

void GraphCreator::publishGraphTimerCallback()
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    publishGraph();
}

// ============================================================================
// TF BROADCAST
// ============================================================================

void GraphCreator::mapBaseLinkTfBroadcast(const geometry_msgs::msg::Pose &pose_msg)
{
    geometry_msgs::msg::TransformStamped transform;
    transform.header.stamp = this->now();
    transform.header.frame_id = m_graph_frame_id;
    transform.child_frame_id = m_robot_base_frame_id;
    
    transform.transform.translation.x = pose_msg.position.x;
    transform.transform.translation.y = pose_msg.position.y;
    transform.transform.translation.z = pose_msg.position.z;
    transform.transform.rotation = pose_msg.orientation;
    
    m_map_base_link_br->sendTransform(transform);
}

// ============================================================================
// INTERACTIVE MARKER FEEDBACK CALLBACKS
// ============================================================================

void GraphCreator::vertexMarkerFeedbackCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::POSE_UPDATE)
    {
        updateVertexPose(feedback->marker_name, feedback->pose);
    }
    else if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::MENU_SELECT)
    {
        // Menu selection handled by menu handler
    }
    else if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::MOUSE_DOWN)
    {
        onMouseDown(feedback);
    }
    else if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::MOUSE_UP)
    {
        onMouseUp(feedback);
    }
}

void GraphCreator::edgeMarkerFeedbackCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::MENU_SELECT)
    {
        // Menu selection handled by menu handler
    }
    else if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::BUTTON_CLICK)
    {
        onButtonClick(feedback);
    }
}

void GraphCreator::controlPoseMarkerFeedbackCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::POSE_UPDATE)
    {
        updateControlPose(feedback->marker_name, feedback->pose);
    }
}

void GraphCreator::controlOrientationMarkerFeedbackCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::POSE_UPDATE)
    {
        std::string edge_name = feedback->marker_name.substr(2); // Remove "co" prefix
        
        if (m_graph.isEdge(edge_name))
        {
            auto edge_ptr = m_graph.getEdgeData(edge_name);
            edge_ptr->control_orientation_pose = feedback->pose;
            updateEdgeMarkers(edge_name);
        }
    }
}

void GraphCreator::edgeDirectionMarkerFeedbackCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    if (feedback->event_type == visualization_msgs::msg::InteractiveMarkerFeedback::BUTTON_CLICK)
    {
        RCLCPP_INFO(this->get_logger(), "Edge direction marker clicked: %s", 
                    feedback->marker_name.c_str());
    }
}

void GraphCreator::onMouseDown(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (m_current_graph_mode == CREATE_EDGES)
    {
        m_selected_edge_vertices.push_back(feedback->marker_name);
        
        if (m_selected_edge_vertices.size() == 2)
        {
            addEdge(m_selected_edge_vertices[0], m_selected_edge_vertices[1], m_current_curve_type);
            m_selected_edge_vertices.clear();
        }
    }
}

void GraphCreator::onMouseUp(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress unused parameter warning

    // Handle mouse up events
}

void GraphCreator::onButtonClick(const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    RCLCPP_INFO(this->get_logger(), "Edge button clicked: %s", feedback->marker_name.c_str());
    publishCurrentGraphEdge(feedback->marker_name);
}

// ============================================================================
// VERTEX OPERATIONS
// ============================================================================

bool GraphCreator::addVertex(const geometry_msgs::msg::Pose &pose, const std::string &vertex_type)
{
    (void)vertex_type;  // Suppress warning
    m_vertex_counter++;
    
    Graph::Vertex v;
    v.vertex_id = m_vertex_counter;
    v.vertex_name = generateVertexName(m_vertex_counter);
    v.vertex_pose = pose;
    v.vertex_type = m_current_vertex_type;
    v.ignore_orientation = m_vertex_ignore_orientation;
    
    if (m_enable_vertex_snap && m_enable_position_snap)
    {
        applyVertexPositionSnap(pose.position, v.vertex_pose.position);
    }
    
    if (m_enable_vertex_snap && m_enable_orientation_snap)
    {
        applyVertexOrientationSnap(pose.orientation, v.vertex_pose.orientation);
    }
    
    m_graph.addVertex(v.vertex_name, v);
    createVertexMarker(v.vertex_name);
    
    RCLCPP_INFO(this->get_logger(), "Added vertex: %s (ID: %u)", 
                v.vertex_name.c_str(), v.vertex_id);
    
    publishCurrentGraphVertex(v.vertex_name);
    return true;
}

bool GraphCreator::deleteVertex(const std::string &vertex_name)
{
    if (!m_graph.isVertex(vertex_name))
    {
        RCLCPP_WARN(this->get_logger(), "Vertex %s does not exist", vertex_name.c_str());
        return false;
    }
    
    Graph::EdgeDepSet edges;
    if (m_graph.getVertexToEdgeDependency(vertex_name, edges))
    {
        for (const auto &edge_name : edges)
        {
            removeEdgeMarkers(edge_name);
        }
    }
    
    removeVertexMarker(vertex_name);
    m_graph.deleteVertex(vertex_name);
    
    RCLCPP_INFO(this->get_logger(), "Deleted vertex: %s", vertex_name.c_str());
    return true;
}

void GraphCreator::deleteVerticesWithMarkers(const std::unordered_set<std::string> &vertex_names)
{
    for (const auto &v_name : vertex_names)
    {
        deleteVertex(v_name);
    }
}

bool GraphCreator::updateVertexPose(const std::string &vertex_name, 
                                    const geometry_msgs::msg::Pose &pose)
{
    if (!m_graph.isVertex(vertex_name))
        return false;
    
    auto vertex_ptr = m_graph.getVertexData(vertex_name);
    vertex_ptr->vertex_pose = pose;
    
    Graph::EdgeDepSet edges;
    if (m_graph.getVertexToEdgeDependency(vertex_name, edges))
    {
        for (const auto &edge_name : edges)
        {
            calculateEdgePoses(edge_name);
            updateEdgeMarkers(edge_name);
        }
    }
    
    return true;
}

void GraphCreator::createVertexMarker(const std::string &vertex_name)
{
    auto vertex_ptr = m_graph.getVertexData(vertex_name);
    if (!vertex_ptr)
        return;
    
    auto int_marker = Graph::Visuals::makeInteractiveVertexMarker(
        vertex_ptr->vertex_id, vertex_ptr->vertex_pose);
    
    if (vertex_ptr->ignore_orientation)
    {
        Graph::Visuals::makeVertexSphereControls(int_marker);
    }
    else
    {
        Graph::Visuals::makeVertexArrowControls(int_marker);
    }
    
    m_int_marker_server->insert(int_marker);
    m_int_marker_server->setCallback(int_marker.name,
        std::bind(&GraphCreator::vertexMarkerFeedbackCallback, this, std::placeholders::_1));
    
    m_vert_menu_handler.apply(*m_int_marker_server, int_marker.name);
    m_int_marker_server->applyChanges();
}

void GraphCreator::updateVertexMarker(const std::string &vertex_name)
{
    removeVertexMarker(vertex_name);
    createVertexMarker(vertex_name);
}

void GraphCreator::removeVertexMarker(const std::string &vertex_name)
{
    m_int_marker_server->erase(vertex_name);
    m_int_marker_server->applyChanges();
}

void GraphCreator::changeVertexOrientationWithMarker(const std::string &vertex_name, 
                                                     bool ignore_orientation)
{
    if (!m_graph.isVertex(vertex_name))
        return;
    
    auto vertex_ptr = m_graph.getVertexData(vertex_name);
    vertex_ptr->ignore_orientation = ignore_orientation;
    updateVertexMarker(vertex_name);
}

void GraphCreator::changeVerticesOrientationWithMarkers(
    const std::unordered_set<std::string> &vertex_names, 
    bool ignore_orientations)
{
    for (const auto &v_name : vertex_names)
    {
        changeVertexOrientationWithMarker(v_name, ignore_orientations);
    }
}

// ============================================================================
// EDGE OPERATIONS
// ============================================================================

bool GraphCreator::addEdge(const std::string &src_vertex, const std::string &dst_vertex, 
                          uint8_t edge_type)
{
    if (!m_graph.isVertex(src_vertex) || !m_graph.isVertex(dst_vertex))
    {
        RCLCPP_ERROR(this->get_logger(), "Cannot create edge: vertices do not exist");
        return false;
    }
    
    std::string edge_name = generateEdgeName(src_vertex, dst_vertex);
    
    if (m_graph.isEdge(edge_name))
    {
        RCLCPP_WARN(this->get_logger(), "Edge %s already exists", edge_name.c_str());
        return false;
    }
    
    Graph::Edge e;
    e.edge_name = edge_name;
    e.edge_type = edge_type;
    e.edge_direction_type = graph_msgs::msg::Edge::FORWARD;
    e.is_bidirectional = m_edge_is_bidirectional;
    e.edge_vertex_id = std::make_pair(
        m_graph.getVertexData(src_vertex)->vertex_id,
        m_graph.getVertexData(dst_vertex)->vertex_id);
    e.edge_vertices_name = std::make_pair(src_vertex, dst_vertex);
    
    if (m_graph.addEdge(edge_name, src_vertex, dst_vertex, e))
    {
        calculateEdgePoses(edge_name);
        createEdgeMarkers(edge_name);
        
        RCLCPP_INFO(this->get_logger(), "Added edge: %s", edge_name.c_str());
        publishCurrentGraphEdge(edge_name);
        return true;
    }
    
    return false;
}

bool GraphCreator::deleteEdge(const std::string &edge_name)
{
    if (!m_graph.isEdge(edge_name))
    {
        RCLCPP_WARN(this->get_logger(), "Edge %s does not exist", edge_name.c_str());
        return false;
    }
    
    removeEdgeMarkers(edge_name);
    m_graph.deleteEdge(edge_name);
    
    RCLCPP_INFO(this->get_logger(), "Deleted edge: %s", edge_name.c_str());
    return true;
}

void GraphCreator::deleteEdgesWithMarkers(const std::unordered_set<std::string> &edge_names)
{
    for (const auto &e_name : edge_names)
    {
        deleteEdge(e_name);
    }
}

void GraphCreator::calculateEdgePoses(const std::string &edge_name)
{
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    if (!edge_ptr)
        return;
    
    Graph::VertexDepPair vertex_pair;
    if (!m_graph.getEdgeToVertexDependency(edge_name, vertex_pair))
        return;
    
    auto src_vertex = m_graph.getVertexData(vertex_pair.first);
    auto dst_vertex = m_graph.getVertexData(vertex_pair.second);
    
    if (!src_vertex || !dst_vertex)
        return;
    
    std::vector<geometry_msgs::msg::Pose> anchor_poses = {
        src_vertex->vertex_pose, 
        dst_vertex->vertex_pose
    };
    
    edge_ptr->forward_edge_poses.poses.clear();
    
    if (edge_ptr->edge_type == graph_msgs::msg::Edge::STRAIGHT_LINE)
    {
        Graph::Curves::calculateEquiDistantPosesLine(
            anchor_poses, 
            edge_ptr->forward_edge_poses.poses,
            edge_ptr->edge_length,
            m_edge_pose_spacing);
    }
    else if (edge_ptr->edge_type == graph_msgs::msg::Edge::CUBIC_BEZIER)
    {
        if (edge_ptr->control_poses.empty())
        {
            std::vector<geometry_msgs::msg::Pose> in_poses, control_poses;
            Graph::Curves::calculateControlPosesForBezier(anchor_poses, in_poses, control_poses);
            edge_ptr->control_poses = control_poses;
        }
        
        std::vector<geometry_msgs::msg::Pose> bezier_in_poses = {
            src_vertex->vertex_pose,
            edge_ptr->control_poses[0],
            edge_ptr->control_poses[1],
            dst_vertex->vertex_pose
        };
        
        Graph::Curves::calculateEquiDistantPosesBezier(
            bezier_in_poses,
            edge_ptr->forward_edge_poses.poses,
            edge_ptr->edge_length,
            m_edge_pose_spacing,
            m_bezier_resolution);
    }
    
    edge_ptr->forward_edge_poses.header.frame_id = m_graph_frame_id;
    edge_ptr->forward_edge_poses.header.stamp = this->now();
    
    if (edge_ptr->is_bidirectional)
    {
        edge_ptr->backward_edge_poses.poses = edge_ptr->forward_edge_poses.poses;
        std::reverse(edge_ptr->backward_edge_poses.poses.begin(), 
                    edge_ptr->backward_edge_poses.poses.end());
        edge_ptr->backward_edge_poses.header = edge_ptr->forward_edge_poses.header;
    }
}

void GraphCreator::createEdgeMarkers(const std::string &edge_name)
{
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    if (!edge_ptr)
        return;
    
    auto int_marker = Graph::Visuals::makeInteractiveEdgeMarker(edge_name);
    int_marker.pose = edge_ptr->forward_edge_poses.poses.front();
    
    Graph::Visuals::makeEdgePointControls(int_marker, edge_ptr->forward_edge_poses.poses);
    
    m_int_marker_server->insert(int_marker);
    m_int_marker_server->setCallback(int_marker.name,
        std::bind(&GraphCreator::edgeMarkerFeedbackCallback, this, std::placeholders::_1));
    
    m_edge_menu_handler.apply(*m_int_marker_server, int_marker.name);
    
    if (edge_ptr->edge_type == graph_msgs::msg::Edge::CUBIC_BEZIER)
    {
        for (size_t i = 0; i < edge_ptr->control_poses.size(); ++i)
        {
            std::string cp_name = Graph::Visuals::generateControlPoseMarkerName(
                static_cast<int>(i), edge_name);
            createControlPoseMarker(edge_name, cp_name);
        }
    }
    
    m_int_marker_server->applyChanges();
}

void GraphCreator::updateEdgeMarkers(const std::string &edge_name)
{
    removeEdgeMarkers(edge_name);
    createEdgeMarkers(edge_name);
}

void GraphCreator::removeEdgeMarkers(const std::string &edge_name)
{
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    
    m_int_marker_server->erase(edge_name);
    
    if (edge_ptr && edge_ptr->edge_type == graph_msgs::msg::Edge::CUBIC_BEZIER)
    {
        for (size_t i = 0; i < edge_ptr->control_poses.size(); ++i)
        {
            std::string cp_name = Graph::Visuals::generateControlPoseMarkerName(
                static_cast<int>(i), edge_name);
            m_int_marker_server->erase(cp_name);
        }
    }
    
    m_int_marker_server->applyChanges();
}

void GraphCreator::changeEdgeTypeWithMarkers(const std::string &edge_name, uint8_t edge_type)
{
    if (!m_graph.isEdge(edge_name))
        return;
    
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    edge_ptr->edge_type = edge_type;
    
    calculateEdgePoses(edge_name);
    updateEdgeMarkers(edge_name);
}

void GraphCreator::changeEdgeTypesWithMarkers(const std::unordered_set<std::string> &edge_names, 
                                              uint8_t edge_type)
{
    for (const auto &e_name : edge_names)
    {
        changeEdgeTypeWithMarkers(e_name, edge_type);
    }
}

void GraphCreator::changeEdgeDirectionWithMarkers(const std::string &edge_name, 
                                                  bool is_bidirectional)
{
    if (!m_graph.isEdge(edge_name))
        return;
    
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    edge_ptr->is_bidirectional = is_bidirectional;
    
    calculateEdgePoses(edge_name);
    updateEdgeMarkers(edge_name);
}

void GraphCreator::changeEdgeDirectionsWithMarkers(const std::unordered_set<std::string> &edge_names, 
                                                   bool is_bidirectional)
{
    for (const auto &e_name : edge_names)
    {
        changeEdgeDirectionWithMarkers(e_name, is_bidirectional);
    }
}

// ============================================================================
// CONTROL POSE OPERATIONS
// ============================================================================

bool GraphCreator::addControlPose(const std::string &edge_name, const geometry_msgs::msg::Pose &pose)
{
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    if (!edge_ptr)
        return false;
    
    edge_ptr->control_poses.push_back(pose);
    
    int cp_id = static_cast<int>(edge_ptr->control_poses.size()) - 1;
    std::string cp_name = Graph::Visuals::generateControlPoseMarkerName(cp_id, edge_name);
    createControlPoseMarker(edge_name, cp_name);
    
    calculateEdgePoses(edge_name);
    updateEdgeMarkers(edge_name);
    
    return true;
}

bool GraphCreator::updateControlPose(const std::string &control_pose_name, 
                                     const geometry_msgs::msg::Pose &pose)
{
    size_t edge_name_start = control_pose_name.find_first_not_of("0123456789c");
    if (edge_name_start == std::string::npos)
        return false;
    
    std::string edge_name = control_pose_name.substr(edge_name_start);
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    if (!edge_ptr)
        return false;
    
    std::string index_str = control_pose_name.substr(1, edge_name_start - 1);
    int index = std::stoi(index_str);
    
    if (index >= 0 && index < static_cast<int>(edge_ptr->control_poses.size()))
    {
        edge_ptr->control_poses[index] = pose;
        calculateEdgePoses(edge_name);
        updateEdgeMarkers(edge_name);
        return true;
    }
    
    return false;
}

void GraphCreator::createControlPoseMarker(const std::string &edge_name, 
                                          const std::string &control_pose_name)
{
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    if (!edge_ptr)
        return;
    
    std::string index_str = control_pose_name.substr(1, control_pose_name.find('e') - 1);
    int index = std::stoi(index_str);
    
    if (index >= 0 && index < static_cast<int>(edge_ptr->control_poses.size()))
    {
        auto int_marker = Graph::Visuals::makeInteractiveControlPoseMarker(
            control_pose_name, edge_ptr->control_poses[index]);
        
        Graph::Visuals::makeControlPoseControls(int_marker);
        
        m_int_marker_server->insert(int_marker);
        m_int_marker_server->setCallback(int_marker.name,
            std::bind(&GraphCreator::controlPoseMarkerFeedbackCallback, this, std::placeholders::_1));
        m_int_marker_server->applyChanges();
    }
}

void GraphCreator::removeControlPoseMarker(const std::string &control_pose_name)
{
    m_int_marker_server->erase(control_pose_name);
    m_int_marker_server->applyChanges();
}

// ============================================================================
// GRAPH OPERATIONS
// ============================================================================

void GraphCreator::clearGraph()
{
    std::lock_guard<std::mutex> lock(m_graph_mutex);
    
    m_int_marker_server->clear();
    m_int_marker_server->applyChanges();
    
    m_graph.clear();
    m_vertex_counter = 0;
    m_is_graph_loaded = false;
    
    RCLCPP_INFO(this->get_logger(), "Graph cleared");
}

void GraphCreator::publishGraph()
{
    graph_msgs::msg::Graph graph_msg;
    Graph::Utilities::createGraphMessage(m_graph, m_graph_name, graph_msg);
    m_graph_pub->publish(graph_msg);
    
    RCLCPP_DEBUG(this->get_logger(), "Published graph with %zu vertices and %zu edges",
                graph_msg.vertices.size(), graph_msg.edges.size());
}

bool GraphCreator::loadGraphFromFile(const std::string &file_path)
{
    std::string full_path;
    if (!Graph::File::getGraphFilePath(file_path, full_path))
    {
        RCLCPP_ERROR(this->get_logger(), "Invalid file path: %s", file_path.c_str());
        return false;
    }
    
    if (!m_graph_loader->loadGraph(full_path))
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to load graph from: %s", full_path.c_str());
        return false;
    }
    
    clearGraph();
    
    Graph::VertexList vl;
    Graph::EdgeList el;
    
    if (!m_graph_loader->getVerticesAndEdges(vl, el))
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to parse graph data");
        return false;
    }
    
    for (const auto &v : vl)
    {
        m_graph.addVertex(v.vertex_name, v);
        createVertexMarker(v.vertex_name);
        m_vertex_counter = std::max(m_vertex_counter, v.vertex_id);
    }
    
    for (const auto &e : el)
    {
        Graph::VertexDepPair vdp(e.edge_vertices_name.first, e.edge_vertices_name.second);
        m_graph.addEdge(e.edge_name, vdp.first, vdp.second, e);
        calculateEdgePoses(e.edge_name);
        createEdgeMarkers(e.edge_name);
    }
    
    m_is_graph_loaded = true;
    
    RCLCPP_INFO(this->get_logger(), "Loaded graph with %zu vertices and %zu edges from: %s",
                vl.size(), el.size(), full_path.c_str());
    
    return true;
}

bool GraphCreator::saveGraphToFile(const std::string &file_path)
{
    std::string full_path;
    if (!Graph::File::getGraphFilePath(file_path, full_path))
    {
        RCLCPP_ERROR(this->get_logger(), "Invalid file path: %s", file_path.c_str());
        return false;
    }
    
    m_graph_saver->convertGraph(m_graph);
    
    if (!m_graph_saver->saveGraph(full_path))
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to save graph to: %s", full_path.c_str());
        return false;
    }
    
    RCLCPP_INFO(this->get_logger(), "Saved graph to: %s", full_path.c_str());
    return true;
}

bool GraphCreator::generateGraph(const graph_creator_msgs::msg::GraphGeneratorConfig &config)
{
    Graph::VertexList vl;
    Graph::EdgeList el;
    
    if (!m_graph_generator->generateVerticesAndEdgesList(config, vl, el))
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to generate graph");
        return false;
    }
    
    clearGraph();
    
    for (auto &v : vl)
    {
        m_vertex_counter++;
        v.vertex_id = m_vertex_counter;
        v.vertex_name = generateVertexName(m_vertex_counter);
        
        m_graph.addVertex(v.vertex_name, v);
        createVertexMarker(v.vertex_name);
    }
    
    for (const auto &e : el)
    {
        std::string edge_name = generateEdgeName(e.edge_vertices_name.first, e.edge_vertices_name.second);
        
        m_graph.addEdge(edge_name, e.edge_vertices_name.first, e.edge_vertices_name.second, e);
        calculateEdgePoses(edge_name);
        createEdgeMarkers(edge_name);
    }
    
    RCLCPP_INFO(this->get_logger(), "Generated graph with %zu vertices and %zu edges",
                vl.size(), el.size());
    
    return true;
}

void GraphCreator::lockAllVertices(bool lock)
{
    auto vertices = m_graph.getVertices();
    for (const auto &[name, vertex] : *vertices)
    {
        if (lock)
        {
            m_int_marker_server->erase(name);
        }
        else
        {
            createVertexMarker(name);
        }
    }
    m_int_marker_server->applyChanges();
}

void GraphCreator::lockAllEdges(bool lock)
{
    auto edges = m_graph.getEdges();
    for (const auto &[name, edge] : *edges)
    {
        if (lock)
        {
            removeEdgeMarkers(name);
        }
        else
        {
            createEdgeMarkers(name);
        }
    }
}

// ============================================================================
// MENU CALLBACKS
// ============================================================================

void GraphCreator::vertexModeCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (feedback->menu_entry_id == m_create_vertices_handle)
    {
        m_current_graph_mode = CREATE_VERTICES;
        RCLCPP_INFO(this->get_logger(), "Mode: CREATE_VERTICES");
    }
    else if (feedback->menu_entry_id == m_create_edges_handle)
    {
        m_current_graph_mode = CREATE_EDGES;
        RCLCPP_INFO(this->get_logger(), "Mode: CREATE_EDGES");
    }
    
    publishCurrentGraphCreatorState();
}

void GraphCreator::vertexOrientationMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (!m_graph.isVertex(feedback->marker_name))
        return;
    
    auto vertex_ptr = m_graph.getVertexData(feedback->marker_name);
    vertex_ptr->ignore_orientation = !vertex_ptr->ignore_orientation;
    
    updateVertexMarker(feedback->marker_name);
    
    RCLCPP_INFO(this->get_logger(), "Vertex %s ignore_orientation: %s",
                feedback->marker_name.c_str(), 
                vertex_ptr->ignore_orientation ? "true" : "false");
}

void GraphCreator::vertexOrientationChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (!m_graph.isVertex(feedback->marker_name))
        return;
    
    auto vertex_ptr = m_graph.getVertexData(feedback->marker_name);
    vertex_ptr->ignore_orientation = !vertex_ptr->ignore_orientation;
    updateVertexMarker(feedback->marker_name);
}

void GraphCreator::vertexSelectionMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (m_sel_grp_vertices_set.find(feedback->marker_name) != m_sel_grp_vertices_set.end())
    {
        m_sel_grp_vertices_set.erase(feedback->marker_name);
        RCLCPP_INFO(this->get_logger(), "Deselected vertex: %s", feedback->marker_name.c_str());
    }
    else
    {
        m_sel_grp_vertices_set.insert(feedback->marker_name);
        RCLCPP_INFO(this->get_logger(), "Selected vertex: %s", feedback->marker_name.c_str());
    }
}

void GraphCreator::deleteVerticesMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress warning
    deleteVerticesWithMarkers(m_sel_grp_vertices_set);
    m_sel_grp_vertices_set.clear();
}

void GraphCreator::verticesOrientationChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress warning
    changeVerticesOrientationWithMarkers(m_sel_grp_vertices_set, true);
}

void GraphCreator::vertexPoseToRobotPoseMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (m_is_robot_pose_received)
    {
        updateVertexPose(feedback->marker_name, m_robot_pose_msg);
        updateVertexMarker(feedback->marker_name);
        RCLCPP_INFO(this->get_logger(), "Set vertex %s to robot pose", feedback->marker_name.c_str());
    }
    else
    {
        RCLCPP_WARN(this->get_logger(), "Robot pose not received yet");
    }
}

void GraphCreator::edgeTypeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (feedback->menu_entry_id == m_edge_type_sl_handle)
    {
        m_current_curve_type = STRAIGHT_LINE;
        RCLCPP_INFO(this->get_logger(), "Edge type: STRAIGHT_LINE");
    }
    else if (feedback->menu_entry_id == m_edge_type_cb_handle)
    {
        m_current_curve_type = CUBIC_BEZIER;
        RCLCPP_INFO(this->get_logger(), "Edge type: CUBIC_BEZIER");
    }
    
    publishCurrentGraphCreatorState();
}

void GraphCreator::edgeDirectionTypeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (feedback->menu_entry_id == m_edge_dir_fwd_handle)
    {
        m_edge_is_bidirectional = false;
        RCLCPP_INFO(this->get_logger(), "Edge direction: FORWARD");
    }
    else if (feedback->menu_entry_id == m_edge_dir_bi_handle)
    {
        m_edge_is_bidirectional = true;
        RCLCPP_INFO(this->get_logger(), "Edge direction: BIDIRECTIONAL");
    }
    
    publishCurrentGraphCreatorState();
}

void GraphCreator::edgeTypeChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (!m_graph.isEdge(feedback->marker_name))
        return;
    
    auto edge_ptr = m_graph.getEdgeData(feedback->marker_name);
    edge_ptr->edge_type = (edge_ptr->edge_type == STRAIGHT_LINE) ? CUBIC_BEZIER : STRAIGHT_LINE;
    
    calculateEdgePoses(feedback->marker_name);
    updateEdgeMarkers(feedback->marker_name);
}

void GraphCreator::edgeDirectionChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (!m_graph.isEdge(feedback->marker_name))
        return;
    
    auto edge_ptr = m_graph.getEdgeData(feedback->marker_name);
    edge_ptr->is_bidirectional = !edge_ptr->is_bidirectional;
    
    calculateEdgePoses(feedback->marker_name);
    updateEdgeMarkers(feedback->marker_name);
}

void GraphCreator::edgeSelectionMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    if (m_sel_grp_edges_set.find(feedback->marker_name) != m_sel_grp_edges_set.end())
    {
        m_sel_grp_edges_set.erase(feedback->marker_name);
        RCLCPP_INFO(this->get_logger(), "Deselected edge: %s", feedback->marker_name.c_str());
    }
    else
    {
        m_sel_grp_edges_set.insert(feedback->marker_name);
        RCLCPP_INFO(this->get_logger(), "Selected edge: %s", feedback->marker_name.c_str());
    }
}

void GraphCreator::deleteEdgesMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress warning
    deleteEdgesWithMarkers(m_sel_grp_edges_set);
    m_sel_grp_edges_set.clear();
}

void GraphCreator::edgeTypesChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress warning
    changeEdgeTypesWithMarkers(m_sel_grp_edges_set, CUBIC_BEZIER);
}

void GraphCreator::edgeDirectionsChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress warning
    changeEdgeDirectionsWithMarkers(m_sel_grp_edges_set, true);
}

void GraphCreator::edgeOrientationsChangeMenuCallback(
    const visualization_msgs::msg::InteractiveMarkerFeedback::ConstSharedPtr &feedback)
{
    (void)feedback;  // Suppress warning
    // Implementation for changing edge orientations
    RCLCPP_INFO(this->get_logger(), "Edge orientations change requested");
}

// ============================================================================
// UTILITY FUNCTIONS
// ============================================================================

std::string GraphCreator::generateVertexName(uint32_t id)
{
    return Graph::Visuals::generateVertexMarkerName(static_cast<int>(id));
}

std::string GraphCreator::generateEdgeName(const std::string &src, const std::string &dst)
{
    int src_id = std::stoi(src.substr(1));
    int dst_id = std::stoi(dst.substr(1));
    return Graph::Visuals::generateEdgeMarkerName(src_id, dst_id);
}

bool GraphCreator::getRobotPose(geometry_msgs::msg::Pose &robot_pose)
{
    try
    {
        auto transform = m_tf_buffer->lookupTransform(
            m_graph_frame_id, m_robot_base_frame_id, tf2::TimePointZero);
        
        robot_pose.position.x = transform.transform.translation.x;
        robot_pose.position.y = transform.transform.translation.y;
        robot_pose.position.z = transform.transform.translation.z;
        robot_pose.orientation = transform.transform.rotation;
        
        m_robot_pose_msg = robot_pose;
        return true;
    }
    catch (const tf2::TransformException &ex)
    {
        RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 5000,
                            "Could not get robot pose: %s", ex.what());
        return false;
    }
}

void GraphCreator::updateGraphConfiguration(const graph_creator_msgs::msg::GraphCreatorConfig &config)
{
    m_gc_config_msg = config;
    
    m_vertex_sphere_scale = config.vertex_sphere_scale;
    m_vertex_arrow_scale = config.vertex_arrow_scale;
    m_edge_pose_spacing = config.edge_pose_spacing;
    m_bezier_resolution = config.bezier_resolution;
    
    RCLCPP_INFO(this->get_logger(), "Graph configuration updated");
}

void GraphCreator::publishCurrentGraphVertex(const std::string &vertex_name)
{
    if (!m_graph.isVertex(vertex_name))
        return;
    
    auto vertex_ptr = m_graph.getVertexData(vertex_name);
    
    graph_msgs::msg::Vertex v_msg;
    v_msg.id = vertex_ptr->vertex_id;
    v_msg.name = vertex_ptr->vertex_name;
    v_msg.alias = vertex_ptr->vertex_alias;
    v_msg.type = vertex_ptr->vertex_type;
    v_msg.pose = vertex_ptr->vertex_pose;
    v_msg.ignore_orientation = vertex_ptr->ignore_orientation;
    
    m_cur_vertex_pub->publish(v_msg);
}

void GraphCreator::publishCurrentGraphEdge(const std::string &edge_name)
{
    if (!m_graph.isEdge(edge_name))
        return;
    
    auto edge_ptr = m_graph.getEdgeData(edge_name);
    
    graph_msgs::msg::Edge e_msg;
    e_msg.name = edge_ptr->edge_name;
    e_msg.type = edge_ptr->edge_type;
    e_msg.source_vertex_id = edge_ptr->edge_vertex_id.first;
    e_msg.target_vertex_id = edge_ptr->edge_vertex_id.second;
    e_msg.bidirectional = edge_ptr->is_bidirectional;
    
    m_cur_edge_pub->publish(e_msg);
}

void GraphCreator::publishCurrentGraphCreatorState()
{
    m_gc_state_msg.graph_mode = m_current_graph_mode;
    m_gc_state_msg.current_edge_type = m_current_curve_type;
    m_gc_state_msg.edge_is_bidirectional = m_edge_is_bidirectional;
    m_gc_state_msg.all_vertices_locked = m_is_vertices_locked;
    m_gc_state_msg.all_edges_locked = m_is_edges_locked;
    
    m_cur_gc_state_pub->publish(m_gc_state_msg);
}

geometry_msgs::msg::Point GraphCreator::snapPosition(const geometry_msgs::msg::Point &position, 
                                                      double snap_grid) const
{
    geometry_msgs::msg::Point snapped;
    snapped.x = std::round(position.x / snap_grid) * snap_grid;
    snapped.y = std::round(position.y / snap_grid) * snap_grid;
    snapped.z = std::round(position.z / snap_grid) * snap_grid;
    return snapped;
}

geometry_msgs::msg::Quaternion GraphCreator::snapOrientation(
    const geometry_msgs::msg::Quaternion &orientation, 
    double snap_angle) const
{
    tf2::Quaternion q;
    tf2::fromMsg(orientation, q);
    
    double roll, pitch, yaw;
    tf2::Matrix3x3(q).getRPY(roll, pitch, yaw);
    
    yaw = std::round(yaw / snap_angle) * snap_angle;
    
    q.setRPY(roll, pitch, yaw);
    return tf2::toMsg(q.normalize());
}

bool GraphCreator::applyVertexPositionSnap(const geometry_msgs::msg::Point &in_position, 
                                           geometry_msgs::msg::Point &out_position)
{
    if (m_enable_position_snap)
    {
        out_position = snapPosition(in_position, m_position_snap_grid_size);
        return true;
    }
    out_position = in_position;
    return false;
}

bool GraphCreator::applyVertexOrientationSnap(const geometry_msgs::msg::Quaternion &in_orientation, 
                                              geometry_msgs::msg::Quaternion &out_orientation)
{
    if (m_enable_orientation_snap)
    {
        out_orientation = snapOrientation(in_orientation, m_orientation_snap_angle);
        return true;
    }
    out_orientation = in_orientation;
    return false;
}

// ============================================================================
// MAIN FUNCTION
// ============================================================================

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<GraphCreator>();
    
    RCLCPP_INFO(node->get_logger(), "Graph Creator node started");
    
    rclcpp::spin(node);
    
    rclcpp::shutdown();
    return 0;
}
