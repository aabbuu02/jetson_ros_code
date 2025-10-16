#pragma once

#include <string>
#include <vector>

#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include <graph_msgs/msg/graph.hpp>

#include "graph_creator/directed_graph.hpp"
#include "graph_creator/graph_data_types.hpp"

namespace Graph::Utilities
{

void convertVertexToMsg(Graph::VertexPtr v_ptr, graph_msgs::msg::Vertex &vertex_msg);

void convertEdgeToMsg(Graph::EdgePtr e_ptr, graph_msgs::msg::Edge &edge_msg);

void convertFromMsgToVertex(const graph_msgs::msg::Vertex &vertex_msg, Graph::VertexPtr v_ptr);

void convertFromMsgToEdge(const graph_msgs::msg::Edge &edge_msg, Graph::EdgePtr e_ptr);

void convertFromGraphToMsg(Graph::DiGraph &di_graph, graph_msgs::msg::Graph &graph_msg);

void convertFromEdgeAndVertexListToMsg(const std::vector<Graph::Vertex> &vl, 
                                       const std::vector<Graph::Edge> &el, 
                                       graph_msgs::msg::Graph &graph_msg);

void convertFromMsgToEdgeAndVertexList(const graph_msgs::msg::Graph &graph_msg, 
                                       std::vector<Graph::Vertex> &vl, 
                                       std::vector<Graph::Edge> &el);

void createGraphMessage(Graph::DiGraph &di_graph, const std::string &graph_name, 
                        graph_msgs::msg::Graph &graph_msg);

}  // namespace Graph::Utilities
