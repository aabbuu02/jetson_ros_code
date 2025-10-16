#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <utility>
#include <functional>

#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_array.hpp>

namespace Graph
{

// Properties for vertices, edges and graph
using Properties = std::unordered_map<std::string, std::string>;
using PropertiesPtr = std::shared_ptr<Properties>;

struct Edge
{
    std::pair<uint32_t, uint32_t> edge_vertex_id;
    std::pair<std::string, std::string> edge_vertices_name; // Vertices that form this edge
    std::string edge_name;
    std::string edge_alias;
    double edge_length = 0.0;
    double edge_cost_factor = 1.0;
    uint8_t edge_type = 0;
    uint8_t edge_direction_type = 0;
    std::vector<std::string> control_poses_name; // Control pose marker name
    std::vector<geometry_msgs::msg::Pose> control_poses;
    bool is_bidirectional = false;
    std::string forward_direction_name, reverse_direction_name; // The edge direction marker name
    bool use_independent_orientation = false;
    std::string control_orientation_name; // Control orientation marker name
    geometry_msgs::msg::Pose control_orientation_pose;
    geometry_msgs::msg::PoseArray forward_edge_poses, backward_edge_poses;
    Properties edge_properties;

    Edge() = default;
    
    explicit Edge(const std::string &name) : edge_name(name) {}

    bool operator==(const Edge &other) const
    {
        return (this->edge_vertex_id.first == other.edge_vertex_id.first && 
                this->edge_vertex_id.second == other.edge_vertex_id.second);
    }
};

struct EdgeHashFunction
{
    size_t operator()(const Edge &e) const
    {
        return std::hash<std::string>()(e.edge_name);
    }
};

struct Vertex
{
    uint32_t vertex_id = 0;
    std::string vertex_name;
    std::string vertex_alias; // Will be empty on creation
    uint32_t vertex_type = 0;
    geometry_msgs::msg::Pose vertex_pose;
    bool ignore_orientation = false;
    Properties vertex_properties; // Will be empty on creation

    Vertex() = default;
    
    explicit Vertex(const std::string &name) : vertex_name(name) {}

    bool operator==(const Vertex &other) const
    {
        return this->vertex_id == other.vertex_id;
    }
};

struct VertexHashFunction
{
    size_t operator()(const Vertex &v) const
    {
        return std::hash<std::string>()(v.vertex_name);
    }
};

// Vertex and edge list
using VertexList = std::vector<Vertex>;
using EdgeList = std::vector<Edge>;

// Vertex and edge pointers
using VertexPtr = std::shared_ptr<Vertex>;
using EdgePtr = std::shared_ptr<Edge>;

// Graph vertices and edges maps
using VerticesMap = std::unordered_map<std::string, VertexPtr>;
using EdgesMap = std::unordered_map<std::string, EdgePtr>;

// Edge and vertex map pointers
using VerticesMapPtr = std::shared_ptr<VerticesMap>;
using EdgesMapPtr = std::shared_ptr<EdgesMap>;

// Graph vertex to edge dependencies
using EdgeDepSet = std::unordered_set<std::string>;
using VertexToEdgesDepMap = std::unordered_map<std::string, EdgeDepSet>;

// Graph edge dependencies
using VertexDepPair = std::pair<std::string, std::string>;
using EdgeToVerticesDepMap = std::unordered_map<std::string, VertexDepPair>;

// Graph miscellaneous dependencies
using MiscDepSet = std::unordered_set<std::string>;
using MiscDepMap = std::unordered_map<std::string, MiscDepSet>;

// Graph adjacency list
using AdjacencyVertexSet = std::unordered_set<std::string>;
using AdjacencyListMap = std::unordered_map<std::string, AdjacencyVertexSet>;

}  // namespace Graph
