#pragma once

#include <string>
#include <memory>
#include <tinyxml.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/quaternion.hpp>

#include "graph_creator/directed_graph.hpp"

class GraphSaver
{
public:
    explicit GraphSaver(const std::string &graph_name);
    ~GraphSaver() = default;

    void convertGraph(Graph::DiGraph &di_graph);
    bool saveGraph(const std::string &file_path);
    bool saveGraph(const std::string &path, const std::string &filename);

private:
    std::string m_graph_name;
    TiXmlDocument m_document;
    TiXmlDeclaration* m_declaration;
    TiXmlElement* m_graphml;
    TiXmlElement* m_graph;

    TiXmlElement* createNode(const Graph::VertexPtr vertex);
    TiXmlElement* createEdge(const Graph::EdgePtr edge);
    TiXmlElement* addData(const std::string& key, const std::string &value);

    // TODO: Add key information that support default values
    // FIXME: This needs to support Graph Modelling Language (GML) as well as GraphML

    void quaternionToEulerYPR(
        const geometry_msgs::msg::Quaternion &quat_msg, 
        double &yaw, 
        double &pitch, 
        double &roll) const;
    
    void poseToString(const geometry_msgs::msg::Pose &pose, std::string &pose_str);
    void propertiesToString(const Graph::Properties &properties, std::string &properties_str);
};
