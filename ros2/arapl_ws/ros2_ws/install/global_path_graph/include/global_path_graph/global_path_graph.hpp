#pragma once

#include <memory>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <iostream>
#include <cstdint>

#include <rclcpp/rclcpp.hpp>
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include <graph_msgs/msg/graph.hpp>

namespace global_path_graph
{

class GlobalPathGraph
{
public:
  // Hash and compare functions where the pair ordering does not matter i.e (1, 2) is equivalent to (2, 1)
  struct PairKeyUnorderedHash
  {
    size_t operator()(const std::pair<uint32_t, uint32_t> &p) const
    {
      return std::hash<uint32_t>()(p.first) + std::hash<uint32_t>()(p.second);
    }
  };

  struct PairKeyUnorderedCompare
  {
    bool operator()(const std::pair<uint32_t, uint32_t> &lhs, 
                   const std::pair<uint32_t, uint32_t> &rhs) const
    {
      return (lhs.first == rhs.first && lhs.second == rhs.second) ||
             (lhs.first == rhs.second && lhs.second == rhs.first);
    }
  };

  // Hash and compare functions where the pair order does matter i.e (1, 2) is not equivalent to (2, 1)
  struct PairKeyOrderedHash
  {
    size_t operator()(const std::pair<uint32_t, uint32_t> &p) const
    {
      return (static_cast<size_t>(p.first) << (sizeof(uint32_t) * 8)) | p.second;
    }
  };

  struct PairKeyOrderedCompare
  {
    bool operator()(const std::pair<uint32_t, uint32_t> &lhs, 
                   const std::pair<uint32_t, uint32_t> &rhs) const
    {
      return lhs.first == rhs.first && lhs.second == rhs.second;
    }
  };

  // Graph point and path pointers
  using PointPtr = std::shared_ptr<graph_msgs::msg::Vertex>;
  using PathPtr = std::shared_ptr<graph_msgs::msg::Edge>;

  // Graph point and path maps
  using PointsMap = std::unordered_map<uint32_t, PointPtr>;
  using PathsMap = std::unordered_map<
    std::pair<uint32_t, uint32_t>, 
    PathPtr, 
    PairKeyOrderedHash, 
    PairKeyOrderedCompare
  >;

  // Graph point and path maps pointers
  using PointMapPtr = std::shared_ptr<PointsMap>;
  using PathMapPtr = std::shared_ptr<PathsMap>;

  // Graph adjacency list using set and map
  using AdjacencyPointSet = std::unordered_set<uint32_t>;
  using AdjacencySetMap = std::unordered_map<uint32_t, AdjacencyPointSet>;

  // Graph adjacency list pointers
  using AdjacencyPointSetPtr = std::shared_ptr<AdjacencyPointSet>;
  using AdjacencySetMapPtr = std::shared_ptr<AdjacencySetMap>;

  // Constructor
  GlobalPathGraph();
  
  // Destructor
  ~GlobalPathGraph() = default;

  // Points
  bool addPoint(const uint32_t &point_id, const graph_msgs::msg::Vertex &point);
  bool deletePoint(const uint32_t &point_id);
  PointPtr getPointData(const uint32_t &point_id);

  // Paths
  bool addPath(const std::pair<uint32_t, uint32_t> &point_ids, 
               const graph_msgs::msg::Edge &path);
  bool deletePath(const std::pair<uint32_t, uint32_t> &point_ids);
  PathPtr getPathData(const std::pair<uint32_t, uint32_t> &point_ids);

  // Graph
  AdjacencySetMapPtr getGraphFromMsg(const graph_msgs::msg::Graph &graph);
  AdjacencySetMapPtr getGraph();
  void clear();
  bool isEmpty() const;

  // Debug
  void printPathGraph(bool verbose = false) const;
  void printAdditionalInfo() const;
  void printPoints() const;
  void printPaths() const;

private:
  // Graph data structures
  PointsMap m_points;
  PathsMap m_paths;
  AdjacencySetMap m_adjacency_sm;
};

}  // namespace global_path_graph
