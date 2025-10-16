#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <tinyxml.h>
#include <geometry_msgs/msg/pose.hpp>

#include "graph_creator/graph_data_types.hpp"

class GraphLoader
{
public:
    GraphLoader();
    ~GraphLoader() = default;

    bool loadGraph(const std::string& file_path);
    bool loadGraph(const std::string& path, const std::string &filename);
    bool getVerticesAndEdges(Graph::VertexList &vl, Graph::EdgeList &el);
    
    void getGraphName(std::string &graph_name) const;
    void getGraphType(std::string &graph_type) const;
    int getVerticesCount() const;
    int getEdgesCount() const;
    void getGraphGenerationOrder(std::string &order) const;
    
    void printVertices(const Graph::VertexList &vl) const;
    void printEdges(const Graph::EdgeList &el) const;

private:
    using ParseDataMap = std::unordered_map<std::string, std::string>;
    
    ParseDataMap m_vert_parse_map, m_edge_parse_map;
    TiXmlDocument m_document;
    
    std::string m_graph_name;
    std::string m_graph_type;
    int m_no_of_nodes = 0;
    int m_no_of_edges = 0;
    std::string m_graph_gen_order;

    bool parseVertexInformation(TiXmlElement* e_node, Graph::Vertex &v);
    bool parseEdgeInformation(TiXmlElement* e_edge, Graph::Edge &e);
    
    void stringToPose(const std::string &pose_str, geometry_msgs::msg::Pose &pose);
    void stringToPoses(const std::string &poses_str, std::vector<geometry_msgs::msg::Pose> &poses);
    void stringToProperties(const std::string &properties_str, Graph::Properties &properties);
    
    bool checkDataKey(const ParseDataMap &parse_data_map, const std::string &check_key) const;
};
