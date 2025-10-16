#pragma once

#include <string>
#include <vector>
#include <graph_creator_msgs/msg/graph_generator_config.hpp>

#include "graph_creator/graph_data_types.hpp"
#include "graph_creator/graph_transformers.hpp"
#include "graph_creator/dxf_graph_generator.hpp"
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include "graph_creator/graph_visuals.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>


class GraphGenerator
{
public:
    GraphGenerator();
    explicit GraphGenerator(const graph_creator_msgs::msg::GraphGeneratorConfig &graph_gen_cfg_msg);
    ~GraphGenerator() = default;

    bool generateVerticesAndEdgesList(Graph::VertexList &vl, Graph::EdgeList &el);
    
    bool generateVerticesAndEdgesList(
        const graph_creator_msgs::msg::GraphGeneratorConfig &graph_gen_cfg_msg,
        Graph::VertexList &vl, 
        Graph::EdgeList &el);

    bool generateGridVerticesAndEdgesList(
        const graph_creator_msgs::msg::GraphGeneratorConfig &graph_gen_cfg_msg,
        Graph::VertexList &vl, 
        Graph::EdgeList &el);

    bool checkGridGraphGeneratorConfig(
        const graph_creator_msgs::msg::GraphGeneratorConfig &config) const;

private:
    Graph::Transform::VertexOrientationTransform m_vot;
    graph_creator_msgs::msg::GraphGeneratorConfig m_graph_gen_cfg_msg;
    DxfGraphGenerator m_dgg;
};
