#include "graph_creator/dxf_graph_generator.hpp"
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include "graph_creator/graph_visuals.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <rclcpp/rclcpp.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <filesystem>
#include <cmath>

DxfGraphGenerator::DxfGraphGenerator()
    : m_vertex_rtree(bgi::quadratic<16>())
{
}

DxfGraphGenerator::DxfGraphGenerator(const graph_creator_msgs::msg::GraphGeneratorConfig &config)
    : m_vertex_rtree(bgi::quadratic<16>()), m_config(config)
{
}

bool DxfGraphGenerator::getDxfFilePath(const std::string &in_file_path, std::string &out_file_path)
{
    // TODO: An extension check needs to be done
    out_file_path = "";
    
    if (in_file_path.empty())
    {
        RCLCPP_ERROR(rclcpp::get_logger("dxf_graph_generator"), "The DXF file path provided is empty");
        return false;
    }
    
    std::filesystem::path graph_file_path(in_file_path);
    
    if (!graph_file_path.is_absolute())
    {
        std::string package_name = graph_file_path.begin()->string();
        RCLCPP_INFO(rclcpp::get_logger("dxf_graph_generator"), 
                    "Retrieving path relative to package: %s", package_name.c_str());
        
        try
        {
            std::string package_path = ament_index_cpp::get_package_share_directory(package_name);
            
            std::filesystem::path relative_path;
            auto it = graph_file_path.begin();
            ++it; // Skip package name
            
            for (; it != graph_file_path.end(); ++it)
            {
                relative_path /= *it;
            }
            
            std::filesystem::path full_path = std::filesystem::path(package_path) / relative_path;
            
            if (std::filesystem::exists(full_path))
            {
                out_file_path = full_path.string();
                RCLCPP_INFO(rclcpp::get_logger("dxf_graph_generator"), 
                           "DXF file path: %s", out_file_path.c_str());
                return true;
            }
            else
            {
                RCLCPP_ERROR(rclcpp::get_logger("dxf_graph_generator"), 
                            "DXF file does not exist at path: %s", full_path.string().c_str());
                return false;
            }
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(rclcpp::get_logger("dxf_graph_generator"), 
                        "Failed to find package '%s': %s", package_name.c_str(), e.what());
            return false;
        }
    }
    else
    {
        if (std::filesystem::exists(graph_file_path))
        {
            out_file_path = graph_file_path.string();
            RCLCPP_INFO(rclcpp::get_logger("dxf_graph_generator"), 
                       "DXF file path: %s", out_file_path.c_str());
            return true;
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("dxf_graph_generator"), 
                        "DXF file does not exist at path: %s", graph_file_path.string().c_str());
            return false;
        }
    }
}

bool DxfGraphGenerator::loadDxfFile()
{
    std::string file_path;
    if (!getDxfFilePath(m_config.dxf_file_path, file_path))
        return false;
    
    return m_dxf.in(file_path, this);
}

bool DxfGraphGenerator::loadDxfFile(const std::string &file_path)
{
    m_config.dxf_file_path = file_path;
    return loadDxfFile();
}

bool DxfGraphGenerator::generateVerticesAndEdgesListFromDxf(Graph::VertexList &vl, Graph::EdgeList &el)
{
    return generateVerticesAndEdgesListFromDxf(m_config, vl, el);
}

bool DxfGraphGenerator::generateVerticesAndEdgesListFromDxf(
    const graph_creator_msgs::msg::GraphGeneratorConfig &config, 
    Graph::VertexList &vl, 
    Graph::EdgeList &el)
{
    m_config = config;
    m_vl.clear();
    m_el.clear();
    m_vertex_map.clear();
    m_edge_set.clear();
    m_vertex_counter = 0;
    
    // Set origin pose for vertex orientation transformation
    m_vot.setOriginPose(m_config.start_pose);
    
    if (!checkDxfGraphGeneratorConfig(config))
        return false;
    
    if (!loadDxfFile())
        return false;
    
    vl = m_vl;
    el = m_el;
    
    // Apply vertex orientation transformation if needed
    if (!m_config.ignore_vertex_orientation)
    {
        auto orientation_type = static_cast<Graph::Transform::VertexOrientationTransform::OrientationType>(
            m_config.edge_creation_type.type);
        m_vot.transformVertexOrientation(vl, orientation_type);
    }
    
    RCLCPP_INFO(rclcpp::get_logger("dxf_graph_generator"), 
                "Generated %zu vertices and %zu edges from DXF", vl.size(), el.size());
    
    return true;
}

bool DxfGraphGenerator::checkDxfGraphGeneratorConfig(
    const graph_creator_msgs::msg::GraphGeneratorConfig &config) const
{
    if (config.dxf_file_path.empty())
    {
        RCLCPP_ERROR(rclcpp::get_logger("dxf_graph_generator"), "DXF file path is empty");
        return false;
    }
    
    return true;
}

void DxfGraphGenerator::createVertexTreeQueryBox(
    const geometry_msgs::msg::Pose &pose, 
    double box_size_x, 
    double box_size_y, 
    VertexBox &query_box)
{
    VertexPoint min_corner(pose.position.x - box_size_x, pose.position.y - box_size_y);
    VertexPoint max_corner(pose.position.x + box_size_x, pose.position.y + box_size_y);
    query_box = VertexBox(min_corner, max_corner);
}

bool DxfGraphGenerator::addVertexFromPose(
    const geometry_msgs::msg::Pose &p, 
    const geometry_msgs::msg::Pose &p1, 
    const geometry_msgs::msg::Pose &p2, 
    Graph::Vertex &v)
{
    VertexBox query_box;
    createVertexTreeQueryBox(p, m_box_size_x, m_box_size_y, query_box);
    
    m_nearest_vertex_point.clear();
    m_vertex_rtree.query(bgi::intersects(query_box), std::back_inserter(m_nearest_vertex_point));
    
    if (m_nearest_vertex_point.empty())
    {
        // Add new vertex
        m_vertex_counter++;
        v.vertex_id = m_vertex_counter;
        v.vertex_name = Graph::Visuals::generateVertexMarkerName(v.vertex_id);
        v.vertex_type = graph_msgs::msg::Vertex::NORMAL;
        v.vertex_pose = p;
        
        if (m_config.ignore_vertex_orientation)
            v.ignore_orientation = true;
        else
            computeVertexOrientationForLine(p1, p2, v.vertex_pose.orientation);
        
        m_vl.push_back(v);
        m_vertex_map.emplace(v.vertex_name, v.vertex_id);
        
        // Add to R-tree
        VertexPoint vp(p.position.x, p.position.y);
        m_vertex_rtree.insert(std::make_pair(vp, v.vertex_id));
        
        return true;
    }
    else
    {
        // Vertex already exists
        v.vertex_id = m_nearest_vertex_point.front().second;
        v.vertex_name = Graph::Visuals::generateVertexMarkerName(v.vertex_id);
        return false;
    }
}

void DxfGraphGenerator::computeVertexOrientationForLine(
    const geometry_msgs::msg::Pose &p1, 
    const geometry_msgs::msg::Pose &p2, 
    geometry_msgs::msg::Quaternion &q) const
{
    double dx = p2.position.x - p1.position.x;
    double dy = p2.position.y - p1.position.y;
    double yaw = std::atan2(dy, dx);
    
    tf2::Quaternion quat;
    quat.setRPY(0.0, 0.0, yaw);
    q = tf2::toMsg(quat.normalize());
}

bool DxfGraphGenerator::addEdgeForLine(
    const geometry_msgs::msg::Pose &p1, 
    const geometry_msgs::msg::Pose &p2)
{
    Graph::Vertex v1, v2;
    addVertexFromPose(p1, p1, p2, v1);
    addVertexFromPose(p2, p1, p2, v2);
    
    std::string edge_name = Graph::Visuals::generateEdgeMarkerName(v1.vertex_id, v2.vertex_id);
    
    if (m_edge_set.find(edge_name) != m_edge_set.end())
    {
        RCLCPP_DEBUG(rclcpp::get_logger("dxf_graph_generator"), 
                    "Edge %s already exists", edge_name.c_str());
        return false;
    }
    
    Graph::Edge e;
    e.edge_name = edge_name;
    e.edge_vertex_id = std::make_pair(v1.vertex_id, v2.vertex_id);
    e.edge_vertices_name = std::make_pair(v1.vertex_name, v2.vertex_name);
    e.edge_type = m_config.edge_creation_type.type;
    e.edge_direction_type = m_config.edge_direction_type.direction_type;
    
    if (e.edge_direction_type == graph_msgs::msg::Edge::BIDIRECTIONAL)
        e.is_bidirectional = true;
    
    m_el.push_back(e);
    m_edge_set.insert(edge_name);
    
    return true;
}

// DXF callback overrides
void DxfGraphGenerator::addPoint(const DL_PointData &data)
{
    // Points can be added as single vertices if needed
    geometry_msgs::msg::Pose pose;
    pose.position.x = data.x;
    pose.position.y = data.y;
    pose.position.z = data.z;
    
    Graph::Vertex v;
    addVertexFromPose(pose, pose, pose, v);
}

void DxfGraphGenerator::addLine(const DL_LineData &data)
{
    geometry_msgs::msg::Pose p1, p2;
    p1.position.x = data.x1;
    p1.position.y = data.y1;
    p1.position.z = data.z1;
    
    p2.position.x = data.x2;
    p2.position.y = data.y2;
    p2.position.z = data.z2;
    
    addEdgeForLine(p1, p2);
}


void DxfGraphGenerator::addPolyline(const DL_PolylineData &data)
{
    (void)data;  // Suppress unused parameter warning
    // Polyline handling - store state and process in subsequent vertex additions
}

void DxfGraphGenerator::addSpline(const DL_SplineData &data)
{
    (void)data;
    RCLCPP_WARN(rclcpp::get_logger("dxf_graph_generator"), 
                "Spline entities are not yet fully supported");
}

void DxfGraphGenerator::addControlPoint(const DL_ControlPointData &data)
{
    (void)data;
    // Control point handling for splines/curves
}

void DxfGraphGenerator::addKnot(const DL_KnotData &data)
{
    (void)data;
    // Knot handling for splines
}

void DxfGraphGenerator::addDimAlign(const DL_DimensionData &dd, const DL_DimAlignedData &dad)
{
    (void)dd;
    (void)dad;
    // Dimension handling (not typically used for graph generation)
}

void DxfGraphGenerator::addDimLinear(const DL_DimensionData &dd, const DL_DimLinearData &dld)
{
    (void)dd;
    (void)dld;
    // Linear dimension handling
}

void DxfGraphGenerator::addDimRadial(const DL_DimensionData &dd, const DL_DimRadialData &drd)
{
    (void)dd;
    (void)drd;
    // Radial dimension handling
}

void DxfGraphGenerator::addDimDiametric(const DL_DimensionData &dd, const DL_DimDiametricData &ddd)
{
    (void)dd;
    (void)ddd;
    // Diametric dimension handling
}

void DxfGraphGenerator::addDimAngular(const DL_DimensionData &dd, const DL_DimAngular3PData &dad)
{
    (void)dd;
    (void)dad;
    // Angular dimension handling
}

void DxfGraphGenerator::addDimAngular3P(const DL_DimensionData &dd, const DL_DimAngular3PData &dad)
{
    (void)dd;
    (void)dad;
    // 3-point angular dimension handling
}
