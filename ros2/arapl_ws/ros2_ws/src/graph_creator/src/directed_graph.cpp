#include "graph_creator/directed_graph.hpp"
#include <rclcpp/rclcpp.hpp>
#include <sstream>

namespace Graph
{

DiGraph::DiGraph()
    : m_graph_name(""),
      m_graph_frame_id("map")
{
    m_vertices_map = std::make_shared<VerticesMap>();
    m_edges_map = std::make_shared<EdgesMap>();
    m_vertex_to_edges_dep_map = std::make_shared<VertexToEdgesDepMap>();
    m_edge_to_vertices_dep_map = std::make_shared<EdgeToVerticesDepMap>();
    m_misc_dep_map = std::make_shared<MiscDepMap>();
}

bool DiGraph::isEmpty() const
{
    return m_vertices_map->empty();
}

void DiGraph::clear()
{
    m_vertices_map->clear();
    m_edges_map->clear();
    m_vertex_to_edges_dep_map->clear();
    m_edge_to_vertices_dep_map->clear();
    m_misc_dep_map->clear();
}

void DiGraph::addVertex(const std::string &name, const Vertex &v)
{
    if (m_vertices_map->find(name) == m_vertices_map->end())
    {
        // Create vertex with the provided name
        Vertex new_vertex = v;
        new_vertex.vertex_name = name;
        
        // Adding to vertex tracking map
        m_vertices_map->emplace(name, std::make_shared<Vertex>(new_vertex));
        
        // Adding to vertex to edges dependency map
        EdgeDepSet es_dep;
        m_vertex_to_edges_dep_map->emplace(name, es_dep);
        
        RCLCPP_INFO(rclcpp::get_logger("directed_graph"), "Added vertex: %s", name.c_str());
    }
    else
    {
        RCLCPP_WARN(rclcpp::get_logger("directed_graph"), 
                    "Vertex '%s' already exists", name.c_str());
    }
}

bool DiGraph::deleteVertex(const std::string &name)
{
    if (m_vertices_map->find(name) == m_vertices_map->end())
    {
        RCLCPP_WARN(rclcpp::get_logger("directed_graph"), 
                    "Vertex '%s' does not exist", name.c_str());
        return false;
    }

    // Get edges dependent on this vertex
    EdgeDepSet es_dep = m_vertex_to_edges_dep_map->at(name);
    
    // Delete all edges connected to this vertex
    for (const auto &edge_name : es_dep)
    {
        VertexDepPair v_dep = m_edge_to_vertices_dep_map->at(edge_name);
        
        // Remove edge dependency from connecting vertices
        if (v_dep.first != name)
        {
            m_vertex_to_edges_dep_map->find(v_dep.first)->second.erase(edge_name);
        }
        if (v_dep.second != name)
        {
            m_vertex_to_edges_dep_map->find(v_dep.second)->second.erase(edge_name);
        }
        
        m_edges_map->erase(edge_name);
        m_edge_to_vertices_dep_map->erase(edge_name);
        m_misc_dep_map->erase(edge_name);
    }
    
    // Remove vertex
    m_vertex_to_edges_dep_map->erase(name);
    m_misc_dep_map->erase(name);
    m_vertices_map->erase(name);
    
    RCLCPP_INFO(rclcpp::get_logger("directed_graph"), "Deleted vertex: %s", name.c_str());
    return true;
}

bool DiGraph::getVertexToEdgeDependency(const std::string &vertex_name, EdgeDepSet &eds) const
{
    if (m_vertex_to_edges_dep_map->find(vertex_name) != m_vertex_to_edges_dep_map->end())
    {
        eds = m_vertex_to_edges_dep_map->at(vertex_name);
        return true;
    }
    return false;
}

bool DiGraph::isVertex(const std::string &vertex_name) const
{
    return m_vertices_map->find(vertex_name) != m_vertices_map->end();
}

VertexPtr DiGraph::getVertexData(const std::string &vertex_name) const
{
    if (isVertex(vertex_name))
    {
        return m_vertices_map->at(vertex_name);
    }
    return nullptr;
}

VerticesMapPtr DiGraph::getVertices() const
{
    return m_vertices_map;
}

bool DiGraph::addEdge(const std::string &edge_name, const std::string &src_vertex_name, 
                     const std::string &dst_vertex_name, const Edge &e)
{
    // Check if both vertices exist
    if (!isVertex(src_vertex_name))
    {
        RCLCPP_WARN(rclcpp::get_logger("directed_graph"), 
                    "Source vertex '%s' does not exist", src_vertex_name.c_str());
        return false;
    }
    
    if (!isVertex(dst_vertex_name))
    {
        RCLCPP_WARN(rclcpp::get_logger("directed_graph"), 
                    "Destination vertex '%s' does not exist", dst_vertex_name.c_str());
        return false;
    }

    // Check if edge already exists
    if (m_edges_map->find(edge_name) != m_edges_map->end())
    {
        RCLCPP_WARN(rclcpp::get_logger("directed_graph"), 
                    "Edge '%s' already exists", edge_name.c_str());
        return false;
    }

    // Create edge with provided data
    Edge new_edge = e;
    new_edge.edge_name = edge_name;
    new_edge.edge_vertices_name = std::make_pair(src_vertex_name, dst_vertex_name);
    
    // Get vertex IDs
    uint32_t src_id = m_vertices_map->at(src_vertex_name)->vertex_id;
    uint32_t dst_id = m_vertices_map->at(dst_vertex_name)->vertex_id;
    new_edge.edge_vertex_id = std::make_pair(src_id, dst_id);
    
    // Add to edge tracking map
    m_edges_map->emplace(edge_name, std::make_shared<Edge>(new_edge));
    
    // Update vertex to edge dependencies
    m_vertex_to_edges_dep_map->find(src_vertex_name)->second.insert(edge_name);
    m_vertex_to_edges_dep_map->find(dst_vertex_name)->second.insert(edge_name);
    
    // Add to edge to vertices dependency map
    m_edge_to_vertices_dep_map->emplace(edge_name, std::make_pair(src_vertex_name, dst_vertex_name));
    
    RCLCPP_INFO(rclcpp::get_logger("directed_graph"), 
                "Edge between vertex '%s' and '%s' created with name: %s", 
                src_vertex_name.c_str(), dst_vertex_name.c_str(), edge_name.c_str());
    return true;
}

bool DiGraph::deleteEdge(const std::string &edge_name)
{
    if (m_edges_map->find(edge_name) == m_edges_map->end())
    {
        RCLCPP_WARN(rclcpp::get_logger("directed_graph"), 
                    "Edge '%s' does not exist", edge_name.c_str());
        return false;
    }

    // Get vertices connected to this edge
    VertexDepPair v_dep = m_edge_to_vertices_dep_map->at(edge_name);
    
    // Remove edge from vertex dependencies
    m_vertex_to_edges_dep_map->find(v_dep.first)->second.erase(edge_name);
    m_vertex_to_edges_dep_map->find(v_dep.second)->second.erase(edge_name);
    
    // Remove edge
    m_edges_map->erase(edge_name);
    m_edge_to_vertices_dep_map->erase(edge_name);
    m_misc_dep_map->erase(edge_name);
    
    RCLCPP_INFO(rclcpp::get_logger("directed_graph"), "Deleted edge: %s", edge_name.c_str());
    return true;
}

bool DiGraph::getEdgeToVertexDependency(const std::string &edge_name, VertexDepPair &vdp) const
{
    if (m_edge_to_vertices_dep_map->find(edge_name) != m_edge_to_vertices_dep_map->end())
    {
        vdp = m_edge_to_vertices_dep_map->at(edge_name);
        return true;
    }
    return false;
}

bool DiGraph::isEdge(const std::string &edge_name) const
{
    return m_edges_map->find(edge_name) != m_edges_map->end();
}

EdgePtr DiGraph::getEdgeData(const std::string &edge_name) const
{
    if (isEdge(edge_name))
    {
        return m_edges_map->at(edge_name);
    }
    return nullptr;
}

EdgesMapPtr DiGraph::getEdges() const
{
    return m_edges_map;
}

bool DiGraph::getAdjacencyList(AdjacencyListMap &adj_list) const
{
    adj_list.clear();
    
    for (const auto &[edge_name, edge_ptr] : *m_edges_map)
    {
        const auto &src = edge_ptr->edge_vertices_name.first;
        const auto &dst = edge_ptr->edge_vertices_name.second;
        
        adj_list[src].insert(dst);
        
        if (edge_ptr->is_bidirectional)
        {
            adj_list[dst].insert(src);
        }
    }
    
    return !adj_list.empty();
}

bool DiGraph::getAdjacencyList(const std::string &vertex_name, AdjacencyVertexSet &avs) const
{
    avs.clear();
    
    EdgeDepSet eds;
    if (!getVertexToEdgeDependency(vertex_name, eds))
    {
        return false;
    }
    
    for (const auto &edge_name : eds)
    {
        auto edge_ptr = m_edges_map->at(edge_name);
        const auto &src = edge_ptr->edge_vertices_name.first;
        const auto &dst = edge_ptr->edge_vertices_name.second;
        
        if (src == vertex_name)
        {
            avs.insert(dst);
        }
        
        if (edge_ptr->is_bidirectional && dst == vertex_name)
        {
            avs.insert(src);
        }
    }
    
    return !avs.empty();
}

void DiGraph::addMiscDep(const std::string &key, const std::string &value)
{
    if (m_misc_dep_map->find(key) != m_misc_dep_map->end())
    {
        m_misc_dep_map->at(key).insert(value);
    }
    else
    {
        MiscDepSet mds;
        mds.insert(value);
        m_misc_dep_map->emplace(key, mds);
    }
}

bool DiGraph::deleteMiscDep(const std::string &key)
{
    if (m_misc_dep_map->find(key) != m_misc_dep_map->end())
    {
        m_misc_dep_map->erase(key);
        return true;
    }
    return false;
}

bool DiGraph::deleteMiscDep(const std::string &key, const std::string &value)
{
    if (m_misc_dep_map->find(key) != m_misc_dep_map->end())
    {
        m_misc_dep_map->at(key).erase(value);
        return true;
    }
    return false;
}

bool DiGraph::getMiscDep(const std::string &key, MiscDepSet &mds) const
{
    if (m_misc_dep_map->find(key) != m_misc_dep_map->end())
    {
        mds = m_misc_dep_map->at(key);
        return true;
    }
    return false;
}

bool DiGraph::isMiscDep(const std::string &key) const
{
    return m_misc_dep_map->find(key) != m_misc_dep_map->end();
}

void DiGraph::setGraphName(const std::string &name)
{
    m_graph_name = name;
}

std::string DiGraph::getGraphName() const
{
    return m_graph_name;
}

void DiGraph::setGraphFrameId(const std::string &frame_id)
{
    m_graph_frame_id = frame_id;
}

std::string DiGraph::getGraphFrameId() const
{
    return m_graph_frame_id;
}

}  // namespace Graph
