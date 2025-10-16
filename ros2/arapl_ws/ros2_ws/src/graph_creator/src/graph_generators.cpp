#include "graph_creator/graph_generators.hpp"
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include "graph_creator/graph_visuals.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <rclcpp/rclcpp.hpp>

GraphGenerator::GraphGenerator()
{
}

GraphGenerator::GraphGenerator(const graph_creator_msgs::msg::GraphGeneratorConfig &graph_gen_cfg_msg)
    : m_graph_gen_cfg_msg(graph_gen_cfg_msg)
{
}

bool GraphGenerator::generateVerticesAndEdgesList(Graph::VertexList &vl, Graph::EdgeList &el)
{
    return generateVerticesAndEdgesList(m_graph_gen_cfg_msg, vl, el);
}

bool GraphGenerator::generateVerticesAndEdgesList(
    const graph_creator_msgs::msg::GraphGeneratorConfig &graph_gen_cfg_msg,
    Graph::VertexList &vl, 
    Graph::EdgeList &el)
{
    if (graph_gen_cfg_msg.generation_type == 
        graph_creator_msgs::msg::GraphGeneratorConfig::GRAPH_GENERATION_TYPE_GRID)
    {
        RCLCPP_INFO(rclcpp::get_logger("graph_generator"), "Grid based graph generation requested");
        return generateGridVerticesAndEdgesList(graph_gen_cfg_msg, vl, el);
    }
    else if (graph_gen_cfg_msg.generation_type == 
             graph_creator_msgs::msg::GraphGeneratorConfig::GRAPH_GENERATION_TYPE_DXF)
    {
        RCLCPP_INFO(rclcpp::get_logger("graph_generator"), "DXF based graph generation requested");
        return m_dgg.generateVerticesAndEdgesListFromDxf(graph_gen_cfg_msg, vl, el);
    }
    
    RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), "Unknown graph generation type was specified");
    return false;
}

bool GraphGenerator::generateGridVerticesAndEdgesList(
    const graph_creator_msgs::msg::GraphGeneratorConfig &graph_gen_cfg_msg,
    Graph::VertexList &vl, 
    Graph::EdgeList &el)
{
    m_graph_gen_cfg_msg = graph_gen_cfg_msg;
    vl.clear();
    el.clear();
    
    // Set origin pose for vertex orientation transformation
    m_vot.setOriginPose(m_graph_gen_cfg_msg.start_pose);
    
    if (!checkGridGraphGeneratorConfig(graph_gen_cfg_msg))
        return false;
    
    // TODO: Reserve for vertex and edge list
    Graph::Vertex v;
    v.vertex_type = graph_msgs::msg::Vertex::NORMAL;
    
    if (m_graph_gen_cfg_msg.ignore_vertex_orientation)
        v.ignore_orientation = true;
    
    Graph::Edge e;
    e.edge_type = graph_gen_cfg_msg.edge_creation_type.type;
    e.edge_direction_type = graph_gen_cfg_msg.edge_direction_type.direction_type;
    
    // TODO: This will need to be changed when the edge direction type field is used for setting edge directionality
    if (e.edge_direction_type == graph_msgs::msg::Edge::BIDIRECTIONAL)
        e.is_bidirectional = true;
    else
        e.is_bidirectional = false;
    
    for (uint32_t i = 0; i < graph_gen_cfg_msg.columns; ++i)
    {
        for (uint32_t j = 0; j < graph_gen_cfg_msg.rows; ++j)
        {
            v.vertex_id++;
            v.vertex_name = Graph::Visuals::generateVertexMarkerName(v.vertex_id);
            v.vertex_pose.position.x = graph_gen_cfg_msg.start_pose.position.x + 
                                       (graph_gen_cfg_msg.column_spacing * i);
            v.vertex_pose.position.y = graph_gen_cfg_msg.start_pose.position.y + 
                                       (graph_gen_cfg_msg.row_spacing * j);
            vl.push_back(v);
            
            // Do not generate edges beyond the maximum row count
            if (j < graph_gen_cfg_msg.rows - 1)
            {
                e.edge_vertex_id.first = v.vertex_id;
                e.edge_vertex_id.second = v.vertex_id + 1;
                e.edge_vertices_name.first = v.vertex_name;
                e.edge_vertices_name.second = Graph::Visuals::generateVertexMarkerName(e.edge_vertex_id.second);
                e.edge_name = Graph::Visuals::generateEdgeMarkerName(e.edge_vertex_id.first, 
                                                                     e.edge_vertex_id.second);
                el.push_back(e);
            }
            
            // Do not generate edges beyond the maximum column count
            if (i < graph_gen_cfg_msg.columns - 1)
            {
                e.edge_vertex_id.first = v.vertex_id;
                e.edge_vertex_id.second = v.vertex_id + graph_gen_cfg_msg.rows;
                e.edge_vertices_name.first = Graph::Visuals::generateVertexMarkerName(v.vertex_id);
                e.edge_vertices_name.second = Graph::Visuals::generateVertexMarkerName(e.edge_vertex_id.second);
                e.edge_name = Graph::Visuals::generateEdgeMarkerName(e.edge_vertex_id.first, 
                                                                     e.edge_vertex_id.second);
                el.push_back(e);
            }
        }
    }
    
    // Apply vertex orientation transformation if needed
    if (!m_graph_gen_cfg_msg.ignore_vertex_orientation)
    {
        auto orientation_type = static_cast<Graph::Transform::VertexOrientationTransform::OrientationType>(
            static_cast<int>(m_graph_gen_cfg_msg.edge_creation_type.type));
        m_vot.transformVertexOrientation(vl, orientation_type);
    }
    
    return true;
}

bool GraphGenerator::checkGridGraphGeneratorConfig(
    const graph_creator_msgs::msg::GraphGeneratorConfig &config) const
{
    if (config.rows == 0 && config.columns == 0)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), 
                     "Number of rows and columns were set to 0. Needs to be at least 1 x 1");
        return false;
    }
    
    if (config.rows == 0)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), 
                     "Number of rows was set to 0. Needs to be at least 1");
        return false;
    }
    
    if (config.columns == 0)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), 
                     "Number of columns was set to 0. Needs to be at least 1");
        return false;
    }
    
    if (config.row_spacing <= 0.0 && config.column_spacing <= 0.0)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), 
                     "Row and column spacing were set to 0. Needs to be greater than 0 for both");
        return false;
    }
    
    if (config.row_spacing <= 0.0)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), 
                     "Row spacing was set to 0. Needs to be greater than 0");
        return false;
    }
    
    if (config.column_spacing <= 0.0)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_generator"), 
                     "Column spacing was set to 0. Needs to be greater than 0");
        return false;
    }
    
    return true;
}
