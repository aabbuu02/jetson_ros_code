#pragma once

#include <string>
#include <memory>
#include <unordered_map>

#include "graph_creator/graph_data_types.hpp"

namespace Graph
{

class DiGraph
{
public:
    DiGraph();
    ~DiGraph() = default;

    // Graph operations
    bool isEmpty() const;
    void clear();

    // Vertex operations
    void addVertex(const std::string &name, const Vertex &v = Vertex());
    bool deleteVertex(const std::string &name);
    bool getVertexToEdgeDependency(const std::string &vertex_name, EdgeDepSet &eds) const;
    bool isVertex(const std::string &vertex_name) const;
    VertexPtr getVertexData(const std::string &vertex_name) const;
    VerticesMapPtr getVertices() const;

    // Edge operations
    bool addEdge(const std::string &edge_name, const std::string &src_vertex_name, 
                 const std::string &dst_vertex_name, const Edge &e = Edge());
    bool deleteEdge(const std::string &edge_name);
    bool getEdgeToVertexDependency(const std::string &edge_name, VertexDepPair &vdp) const;
    bool isEdge(const std::string &edge_name) const;
    EdgePtr getEdgeData(const std::string &edge_name) const;
    EdgesMapPtr getEdges() const;

    // Adjacency list operations
    bool getAdjacencyList(AdjacencyListMap &adj_list) const;
    bool getAdjacencyList(const std::string &vertex_name, AdjacencyVertexSet &avs) const;

    // Miscellaneous operations
    void addMiscDep(const std::string &key, const std::string &value);
    bool deleteMiscDep(const std::string &key);
    bool deleteMiscDep(const std::string &key, const std::string &value);
    bool getMiscDep(const std::string &key, MiscDepSet &mds) const;
    bool isMiscDep(const std::string &key) const;

    // Graph properties
    void setGraphName(const std::string &name);
    std::string getGraphName() const;
    void setGraphFrameId(const std::string &frame_id);
    std::string getGraphFrameId() const;

private:
    std::string m_graph_name;
    std::string m_graph_frame_id;
    
    VerticesMapPtr m_vertices_map;
    EdgesMapPtr m_edges_map;
    
    std::shared_ptr<VertexToEdgesDepMap> m_vertex_to_edges_dep_map;
    std::shared_ptr<EdgeToVerticesDepMap> m_edge_to_vertices_dep_map;
    std::shared_ptr<MiscDepMap> m_misc_dep_map;

    // Helper functions
    bool updateVertexToEdgeDependency(const std::string &vertex_name, const std::string &edge_name);
    bool updateEdgeToVertexDependency(const std::string &edge_name, const std::string &src_vertex, 
                                      const std::string &dst_vertex);
    bool removeVertexToEdgeDependency(const std::string &vertex_name, const std::string &edge_name);
    bool removeEdgeToVertexDependency(const std::string &edge_name);
};

}  // namespace Graph
