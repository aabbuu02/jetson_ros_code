#include "graph_creator/graph_utils.hpp"
#include "graph_msgs/msg/graph.hpp"
#include "rclcpp/rclcpp.hpp"

namespace Graph::Utilities
{

void convertVertexToMsg(Graph::VertexPtr v_ptr, graph_msgs::msg::Vertex &vertex_msg)
{
    vertex_msg.id = v_ptr->vertex_id;
    vertex_msg.name = v_ptr->vertex_name;
    vertex_msg.alias = v_ptr->vertex_alias;
    vertex_msg.type = v_ptr->vertex_type;
    vertex_msg.ignore_orientation = v_ptr->ignore_orientation;
    vertex_msg.pose = v_ptr->vertex_pose;
    
    vertex_msg.properties.clear();
    for (const auto &[key, value] : v_ptr->vertex_properties)
    {
        graph_msgs::msg::Property p_msg;
        p_msg.key = key;
        p_msg.value = value;
        vertex_msg.properties.push_back(p_msg);
    }
}

void convertEdgeToMsg(Graph::EdgePtr e_ptr, graph_msgs::msg::Edge &edge_msg)
{
    edge_msg.name = e_ptr->edge_name;
    edge_msg.alias = e_ptr->edge_alias;
    edge_msg.type = e_ptr->edge_type;
    edge_msg.edge_direction_type = graph_msgs::msg::Edge::FORWARD; // FIXME: This should not be hard coded
    edge_msg.creation_type = graph_msgs::msg::Edge::CREATED;
    edge_msg.source_vertex_id = e_ptr->edge_vertex_id.first;
    edge_msg.target_vertex_id = e_ptr->edge_vertex_id.second;
    edge_msg.length = e_ptr->edge_length;
    edge_msg.cost_factor = e_ptr->edge_cost_factor;
    edge_msg.bidirectional = e_ptr->is_bidirectional;
    edge_msg.independent_orientation = e_ptr->use_independent_orientation;
    edge_msg.control_points = e_ptr->control_poses;
    edge_msg.control_orientation = e_ptr->control_orientation_pose;
    
    edge_msg.properties.clear();
    for (const auto &[key, value] : e_ptr->edge_properties)
    {
        graph_msgs::msg::Property p_msg;
        p_msg.key = key;
        p_msg.value = value;
        edge_msg.properties.push_back(p_msg);
    }
}

void convertFromMsgToVertex(const graph_msgs::msg::Vertex &vertex_msg, Graph::VertexPtr v_ptr)
{
    v_ptr->vertex_id = vertex_msg.id;
    v_ptr->vertex_name = vertex_msg.name;
    v_ptr->vertex_alias = vertex_msg.alias;
    v_ptr->vertex_type = vertex_msg.type;
    v_ptr->ignore_orientation = vertex_msg.ignore_orientation;
    v_ptr->vertex_pose = vertex_msg.pose;
    
    v_ptr->vertex_properties.clear();
    for (const auto &p : vertex_msg.properties)
    {
        v_ptr->vertex_properties.emplace(p.key, p.value);
    }
}

void convertFromMsgToEdge(const graph_msgs::msg::Edge &edge_msg, Graph::EdgePtr e_ptr)
{
    e_ptr->edge_name = edge_msg.name;
    e_ptr->edge_alias = edge_msg.alias;
    e_ptr->edge_type = edge_msg.type;
    e_ptr->edge_direction_type = edge_msg.edge_direction_type;
    e_ptr->edge_vertex_id.first = edge_msg.source_vertex_id;
    e_ptr->edge_vertex_id.second = edge_msg.target_vertex_id;
    e_ptr->edge_length = edge_msg.length;
    e_ptr->edge_cost_factor = edge_msg.cost_factor;
    e_ptr->is_bidirectional = edge_msg.bidirectional;
    e_ptr->use_independent_orientation = edge_msg.independent_orientation;
    e_ptr->control_poses = edge_msg.control_points;
    e_ptr->control_orientation_pose = edge_msg.control_orientation;
    
    e_ptr->edge_properties.clear();
    for (const auto &p : edge_msg.properties)
    {
        e_ptr->edge_properties.emplace(p.key, p.value);
    }
}

void convertFromGraphToMsg(Graph::DiGraph &di_graph, graph_msgs::msg::Graph &graph_msg)
{
    // Clear just in case
    graph_msg.vertices.clear();
    graph_msg.edges.clear();
    
    // Get vertices and edges
    Graph::VerticesMapPtr vm_ptr = di_graph.getVertices();
    Graph::EdgesMapPtr em_ptr = di_graph.getEdges();
    
    // For vertices
    for (const auto &[name, vertex_ptr] : *vm_ptr)
    {
        graph_msgs::msg::Vertex v_msg;
        convertVertexToMsg(vertex_ptr, v_msg);
        graph_msg.vertices.push_back(v_msg);
    }
    
    // For edges
    for (const auto &[name, edge_ptr] : *em_ptr)
    {
        graph_msgs::msg::Edge e_msg;
        convertEdgeToMsg(edge_ptr, e_msg);
        graph_msg.edges.push_back(e_msg);
        
        // FIXME: Bidirectional edges with forward and reverse pose preservation
        if (!e_msg.bidirectional)
            continue;
        
        graph_msgs::msg::Edge e_rev_msg = e_msg;
        e_rev_msg.name = "e" + std::to_string(e_msg.target_vertex_id) + 
                        std::to_string(e_msg.source_vertex_id);
        e_rev_msg.source_vertex_id = e_msg.target_vertex_id;
        e_rev_msg.target_vertex_id = e_msg.source_vertex_id;
        e_rev_msg.edge_direction_type = graph_msgs::msg::Edge::REVERSE;
        e_rev_msg.creation_type = graph_msgs::msg::Edge::GENERATED;
        std::reverse(e_rev_msg.control_points.begin(), e_rev_msg.control_points.end());
        graph_msg.edges.push_back(e_rev_msg);
    }
}

void convertFromEdgeAndVertexListToMsg(
    const std::vector<Graph::Vertex> &vl, 
    const std::vector<Graph::Edge> &el, 
    graph_msgs::msg::Graph &graph_msg)
{
    // Clear just in case
    graph_msg.vertices.clear();
    graph_msg.edges.clear();
    
    for (const auto &v : vl)
    {
        graph_msgs::msg::Vertex v_msg;
        convertVertexToMsg(std::make_shared<Graph::Vertex>(v), v_msg);
        graph_msg.vertices.push_back(v_msg);
    }
    
    for (const auto &e : el)
    {
        graph_msgs::msg::Edge e_msg;
        convertEdgeToMsg(std::make_shared<Graph::Edge>(e), e_msg);
        graph_msg.edges.push_back(e_msg);
        
        // FIXME: Bidirectional edges handling
        if (!e_msg.bidirectional)
            continue;
        
        graph_msgs::msg::Edge e_rev_msg = e_msg;
        e_rev_msg.name = "e" + std::to_string(e_msg.target_vertex_id) + 
                        std::to_string(e_msg.source_vertex_id);
        e_rev_msg.source_vertex_id = e_msg.target_vertex_id;
        e_rev_msg.target_vertex_id = e_msg.source_vertex_id;
        e_rev_msg.edge_direction_type = graph_msgs::msg::Edge::REVERSE;
        e_rev_msg.creation_type = graph_msgs::msg::Edge::GENERATED;
        std::reverse(e_rev_msg.control_points.begin(), e_rev_msg.control_points.end());
        graph_msg.edges.push_back(e_rev_msg);
    }
}

void convertFromMsgToEdgeAndVertexList(
    const graph_msgs::msg::Graph &graph_msg, 
    std::vector<Graph::Vertex> &vl, 
    std::vector<Graph::Edge> &el)
{
    // Clear the lists just in case
    vl.clear();
    el.clear();
    
    for (const auto &v_msg : graph_msg.vertices)
    {
        Graph::VertexPtr v_ptr = std::make_shared<Graph::Vertex>();
        convertFromMsgToVertex(v_msg, v_ptr);
        vl.push_back(*v_ptr);
    }
    
    for (const auto &e_msg : graph_msg.edges)
    {
        // FIXME: Skip generated edges due to data structure limitations
        if (e_msg.creation_type == graph_msgs::msg::Edge::GENERATED)
            continue;
        
        Graph::EdgePtr e_ptr = std::make_shared<Graph::Edge>();
        convertFromMsgToEdge(e_msg, e_ptr);
        el.push_back(*e_ptr);
    }
}

void createGraphMessage(
    Graph::DiGraph &di_graph, 
    const std::string &graph_name, 
    graph_msgs::msg::Graph &graph_msg)
{
    auto now = rclcpp::Clock().now();
    
    graph_msg.header.frame_id = "map";
    graph_msg.header.stamp = now;
    
    graph_msg.meta_data.header.frame_id = "";
    graph_msg.meta_data.header.stamp = now;
    graph_msg.meta_data.graph_name = graph_name;
    graph_msg.meta_data.graph_type = graph_msgs::msg::GraphMetaData::DIRECTED;
    
    convertFromGraphToMsg(di_graph, graph_msg);
    
    graph_msg.meta_data.number_of_vertices = static_cast<uint32_t>(graph_msg.vertices.size());
    graph_msg.meta_data.number_of_edges = static_cast<uint32_t>(graph_msg.edges.size());
}

}  // namespace Graph::Utilities
