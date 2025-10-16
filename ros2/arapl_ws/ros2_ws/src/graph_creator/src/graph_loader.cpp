#include "graph_creator/graph_loader.hpp"
#include <rclcpp/rclcpp.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <sstream>
#include <iostream>

GraphLoader::GraphLoader()
{
}

bool GraphLoader::loadGraph(const std::string& file_path)
{
    TiXmlDocument document(file_path);
    if (!document.LoadFile())
        return false;
    
    m_document = document;
    // TODO: Parse basic graph information here itself
    return true;
}

bool GraphLoader::loadGraph(const std::string& path, const std::string &filename)
{
    return loadGraph(path + filename);
}

bool GraphLoader::getVerticesAndEdges(Graph::VertexList &vl, Graph::EdgeList &el)
{
    // TODO: Move to GML (Graph Modelling Language) which uses YAML like format
    // Clear the lists just in case
    vl.clear();
    el.clear();
    
    TiXmlHandle h_document(&m_document);
    TiXmlElement* e_graphml;
    TiXmlHandle h_root(0);
    
    // GraphML
    e_graphml = h_document.FirstChildElement().Element();
    if (!e_graphml)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), "Could not find root GraphML element");
        return false;
    }
    
    h_root = TiXmlHandle(e_graphml);
    
    // Graph
    TiXmlElement* e_graph = h_root.FirstChild("graph").Element();
    e_graph->QueryStringAttribute("id", &m_graph_name);
    e_graph->QueryStringAttribute("edgedefault", &m_graph_type);
    e_graph->QueryIntAttribute("parse.nodes", &m_no_of_nodes);
    e_graph->QueryIntAttribute("parse.edges", &m_no_of_edges);
    e_graph->QueryStringAttribute("parse.order", &m_graph_gen_order);
    
    // TODO: Graph name and type should be accessible before attempting to parse the GraphML file
    RCLCPP_INFO(rclcpp::get_logger("graph_loader"), "Graph name: %s", m_graph_name.c_str());
    RCLCPP_INFO(rclcpp::get_logger("graph_loader"), "Graph type: %s", m_graph_type.c_str());
    RCLCPP_INFO(rclcpp::get_logger("graph_loader"), "Number of nodes: %d", m_no_of_nodes);
    RCLCPP_INFO(rclcpp::get_logger("graph_loader"), "Number of edges: %d", m_no_of_edges);
    RCLCPP_INFO(rclcpp::get_logger("graph_loader"), "Graph generation order: %s", m_graph_gen_order.c_str());
    
    TiXmlElement* e_ne = e_graph->FirstChildElement();
    for (; e_ne; e_ne = e_ne->NextSiblingElement())
    {
        if (e_ne->ValueStr() == "node")
        {
            Graph::Vertex v;
            if (!parseVertexInformation(e_ne, v))
            {
                RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), "Invalid node provided");
                return false;
            }
            vl.push_back(v);
        }
        else if (e_ne->ValueStr() == "edge")
        {
            Graph::Edge e;
            if (!parseEdgeInformation(e_ne, e))
            {
                RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), "Invalid edge provided");
                return false;
            }
            el.push_back(e);
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                        "Unknown or unsupported tag: %s", e_ne->ValueStr().c_str());
        }
    }
    
    return true;
}

bool GraphLoader::parseVertexInformation(TiXmlElement* e_node, Graph::Vertex &v)
{
    e_node->QueryUnsignedAttribute("id", &v.vertex_id);
    
    TiXmlElement* e_data = e_node->FirstChildElement();
    m_vert_parse_map.clear();
    
    for (; e_data; e_data = e_data->NextSiblingElement())
    {
        std::string key;
        e_data->QueryStringAttribute("key", &key);
        
        if (m_vert_parse_map.find(key) != m_vert_parse_map.end())
        {
            RCLCPP_INFO(rclcpp::get_logger("graph_loader"), 
                       "Multiple keys of '%s' found. Overwriting...", key.c_str());
        }
        
        if (e_data->GetText())
            m_vert_parse_map.emplace(key, e_data->GetText());
        else
            m_vert_parse_map.emplace(key, "");
    }
    
    if (!checkDataKey(m_vert_parse_map, "name"))
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                    "Field name was not found for node with ID %u", v.vertex_id);
        return false;
    }
    v.vertex_name = m_vert_parse_map.at("name");
    
    if (checkDataKey(m_vert_parse_map, "alias"))
        v.vertex_alias = m_vert_parse_map.at("alias");
    else
        RCLCPP_WARN(rclcpp::get_logger("graph_loader"), 
                   "Field alias for vertex with ID %u was not found. Leaving empty...", v.vertex_id);
    
    if (checkDataKey(m_vert_parse_map, "type"))
    {
        std::stringstream ss;
        ss.str(m_vert_parse_map.at("type"));
        ss >> v.vertex_type;
    }
    else
    {
        RCLCPP_WARN(rclcpp::get_logger("graph_loader"), 
                   "Field type for vertex with ID %u was not found. Setting to 0", v.vertex_id);
        v.vertex_type = 0;
    }
    
    if (checkDataKey(m_vert_parse_map, "ignore.orientation"))
    {
        if (m_vert_parse_map.at("ignore.orientation").size() > 0)
        {
            std::stringstream ss;
            ss.str(m_vert_parse_map.at("ignore.orientation"));
            ss >> std::boolalpha >> v.ignore_orientation;
        }
        else
        {
            RCLCPP_WARN(rclcpp::get_logger("graph_loader"), 
                       "Vertex ignore orientation data could not be retrieved");
        }
    }
    else
    {
        RCLCPP_WARN(rclcpp::get_logger("graph_loader"), 
                   "Field ignore orientation for vertex with ID %u was not found", v.vertex_id);
    }
    
    if (checkDataKey(m_vert_parse_map, "pose"))
    {
        stringToPose(m_vert_parse_map.at("pose"), v.vertex_pose);
    }
    else
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                    "Field pose for vertex with ID %u was not found", v.vertex_id);
        return false;
    }
    
    if (checkDataKey(m_vert_parse_map, "properties"))
    {
        stringToProperties(m_vert_parse_map.at("properties"), v.vertex_properties);
    }
    
    return true;
}

bool GraphLoader::parseEdgeInformation(TiXmlElement* e_edge, Graph::Edge &e)
{
    e_edge->QueryUnsignedAttribute("source", &e.edge_vertex_id.first);
    e_edge->QueryUnsignedAttribute("target", &e.edge_vertex_id.second);
    
    TiXmlElement* e_data = e_edge->FirstChildElement();
    m_edge_parse_map.clear();
    
    for (; e_data; e_data = e_data->NextSiblingElement())
    {
        std::string key;
        e_data->QueryStringAttribute("key", &key);
        
        if (m_edge_parse_map.find(key) != m_edge_parse_map.end())
        {
            RCLCPP_INFO(rclcpp::get_logger("graph_loader"), 
                       "Multiple keys of '%s' found. Overwriting...", key.c_str());
        }
        
        if (e_data->GetText())
            m_edge_parse_map.emplace(key, e_data->GetText());
        else
            m_edge_parse_map.emplace(key, "");
    }
    
    if (!checkDataKey(m_edge_parse_map, "name"))
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                    "Field name was not found for edge from %u to %u", 
                    e.edge_vertex_id.first, e.edge_vertex_id.second);
        return false;
    }
    e.edge_name = m_edge_parse_map.at("name");
    
    if (checkDataKey(m_edge_parse_map, "alias"))
        e.edge_alias = m_edge_parse_map.at("alias");
    
    if (checkDataKey(m_edge_parse_map, "source.vertex.name"))
        e.edge_vertices_name.first = m_edge_parse_map.at("source.vertex.name");
    
    if (checkDataKey(m_edge_parse_map, "target.vertex.name"))
        e.edge_vertices_name.second = m_edge_parse_map.at("target.vertex.name");
    
    if (checkDataKey(m_edge_parse_map, "type"))
    {
        std::stringstream ss;
        ss.str(m_edge_parse_map.at("type"));
        ss >> e.edge_type;
    }
    
    if (checkDataKey(m_edge_parse_map, "direction.type"))
    {
        std::stringstream ss;
        ss.str(m_edge_parse_map.at("direction.type"));
        ss >> e.edge_direction_type;
    }
    
    if (checkDataKey(m_edge_parse_map, "length"))
    {
        std::stringstream ss;
        ss.str(m_edge_parse_map.at("length"));
        ss >> e.edge_length;
    }
    
    if (checkDataKey(m_edge_parse_map, "cost.factor"))
    {
        std::stringstream ss;
        ss.str(m_edge_parse_map.at("cost.factor"));
        ss >> e.edge_cost_factor;
    }
    
    if (checkDataKey(m_edge_parse_map, "bidirectional"))
    {
        if (m_edge_parse_map.at("bidirectional").size() > 0)
        {
            std::stringstream ss;
            ss.str(m_edge_parse_map.at("bidirectional"));
            ss >> std::boolalpha >> e.is_bidirectional;
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                        "Edge bidirectionality data could not be retrieved");
            return false;
        }
    }
    
    int no_of_control_points = 0;
    if (!checkDataKey(m_edge_parse_map, "control.points.size"))
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                    "Field control.points.size was not found for edge from %u to %u", 
                    e.edge_vertex_id.first, e.edge_vertex_id.second);
        return false;
    }
    else
    {
        std::stringstream ss;
        ss.str(m_edge_parse_map.at("control.points.size"));
        ss >> no_of_control_points;
    }
    
    if (no_of_control_points > 0)
    {
        if (!checkDataKey(m_edge_parse_map, "control.points.pose"))
        {
            RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                        "Field control.points.pose was not found for edge from %u to %u", 
                        e.edge_vertex_id.first, e.edge_vertex_id.second);
            return false;
        }
        stringToPoses(m_edge_parse_map.at("control.points.pose"), e.control_poses);
    }
    
    if (checkDataKey(m_edge_parse_map, "use.independent.orientation"))
    {
        if (m_edge_parse_map.at("use.independent.orientation").size() > 0)
        {
            std::stringstream ss;
            ss.str(m_edge_parse_map.at("use.independent.orientation"));
            ss >> std::boolalpha >> e.use_independent_orientation;
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                        "Edge independent orientation data could not be retrieved");
            return false;
        }
    }
    
    if (!checkDataKey(m_edge_parse_map, "control.edge.orientation.pose"))
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_loader"), 
                    "Field control.edge.orientation.pose was not found for edge from %u to %u", 
                    e.edge_vertex_id.first, e.edge_vertex_id.second);
        return false;
    }
    stringToPose(m_edge_parse_map.at("control.edge.orientation.pose"), e.control_orientation_pose);
    
    if (checkDataKey(m_edge_parse_map, "properties"))
    {
        stringToProperties(m_edge_parse_map.at("properties"), e.edge_properties);
    }
    
    return true;
}

void GraphLoader::stringToPose(const std::string &pose_str, geometry_msgs::msg::Pose &pose)
{
    std::stringstream ss(pose_str);
    double x, y, z, roll, pitch, yaw;
    ss >> x >> y >> z >> roll >> pitch >> yaw;
    
    pose.position.x = x;
    pose.position.y = y;
    pose.position.z = z;
    
    tf2::Quaternion q;
    q.setRPY(roll, pitch, yaw);
    pose.orientation = tf2::toMsg(q.normalize());
}

void GraphLoader::stringToPoses(const std::string &poses_str, std::vector<geometry_msgs::msg::Pose> &poses)
{
    std::stringstream ss(poses_str);
    poses.clear();
    double x, y, z, roll, pitch, yaw;
    
    while (ss >> x >> y >> z >> roll >> pitch >> yaw)
    {
        geometry_msgs::msg::Pose pose;
        pose.position.x = x;
        pose.position.y = y;
        pose.position.z = z;
        
        tf2::Quaternion q;
        q.setRPY(roll, pitch, yaw);
        pose.orientation = tf2::toMsg(q.normalize());
        poses.push_back(pose);
    }
}

void GraphLoader::stringToProperties(const std::string &properties_str, Graph::Properties &properties)
{
    std::stringstream ss(properties_str);
    properties.clear();
    std::string key, value;
    
    while (ss >> key >> value)
    {
        properties.emplace(key, value);
    }
}

bool GraphLoader::checkDataKey(const ParseDataMap &parse_data_map, const std::string &check_key) const
{
    return parse_data_map.find(check_key) != parse_data_map.end();
}

void GraphLoader::getGraphName(std::string &graph_name) const
{
    graph_name = m_graph_name;
}

void GraphLoader::getGraphType(std::string &graph_type) const
{
    graph_type = m_graph_type;
}

int GraphLoader::getVerticesCount() const
{
    return m_no_of_nodes;
}

int GraphLoader::getEdgesCount() const
{
    return m_no_of_edges;
}

void GraphLoader::getGraphGenerationOrder(std::string &order) const
{
    order = m_graph_gen_order;
}

void GraphLoader::printVertices(const Graph::VertexList &vl) const
{
    std::cout << "\nVertices\n\n";
    int i = 1;
    for (const Graph::Vertex &v : vl)
    {
        std::cout << "---Vertex (" << i << ")---\n";
        std::cout << "ID => " << v.vertex_id << "\n";
        std::cout << "Name => " << v.vertex_name << "\n";
        std::cout << "Alias => " << v.vertex_alias << "\n";
        i++;
    }
}

void GraphLoader::printEdges(const Graph::EdgeList &el) const
{
    std::cout << "\nEdges\n\n";
    int i = 1;
    for (const Graph::Edge &e : el)
    {
        std::cout << "---Edge (" << i << ")---\n";
        std::cout << "Name => " << e.edge_name << "\n";
        std::cout << "Alias => " << e.edge_alias << "\n";
        std::cout << "Source => " << e.edge_vertex_id.first << "\n";
        std::cout << "Target => " << e.edge_vertex_id.second << "\n";
        i++;
    }
}
