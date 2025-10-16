#include "global_path_graph/global_path_graph.hpp"

namespace global_path_graph
{

GlobalPathGraph::GlobalPathGraph()
{
  RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), "GlobalPathGraph initialized");
}

bool GlobalPathGraph::addPoint(const uint32_t &point_id, const graph_msgs::msg::Vertex &point)
{
  if (m_adjacency_sm.find(point_id) == m_adjacency_sm.end())
  {
    // Adding point to tracking map
    m_points.emplace(point_id, std::make_shared<graph_msgs::msg::Vertex>(point));
    
    // Adding point to the graph
    AdjacencyPointSet ps;
    m_adjacency_sm.emplace(point_id, ps);
    
    RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), 
                "Added point with ID: %u", point_id);
    return true;
  }
  
  RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
              "Point with ID %u already exists", point_id);
  return false;
}

bool GlobalPathGraph::deletePoint(const uint32_t &point_id)
{
  if (m_adjacency_sm.find(point_id) != m_adjacency_sm.end())
  {
    // Delete point from point tracking map
    m_points.erase(point_id);
    
    // Delete point from the graph
    m_adjacency_sm.erase(point_id);
    
    // Remove all paths associated with this point
    for (auto it = m_paths.begin(); it != m_paths.end();)
    {
      if (it->first.first == point_id || it->first.second == point_id)
      {
        it = m_paths.erase(it);
      }
      else
      {
        ++it;
      }
    }
    
    // Remove references from other vertices
    for (auto &entry : m_adjacency_sm)
    {
      entry.second.erase(point_id);
    }
    
    RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), 
                "Point with ID %u deleted", point_id);
    return true;
  }
  
  RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
              "Point with ID %u does not exist", point_id);
  return false;
}

GlobalPathGraph::PointPtr GlobalPathGraph::getPointData(const uint32_t &point_id)
{
  if (m_points.find(point_id) != m_points.end())
  {
    return m_points.at(point_id);
  }
  return PointPtr(nullptr);
}

bool GlobalPathGraph::addPath(const std::pair<uint32_t, uint32_t> &point_ids, 
                              const graph_msgs::msg::Edge &path)
{
  // Check if both points exist
  if (m_adjacency_sm.find(point_ids.first) == m_adjacency_sm.end() || 
      m_adjacency_sm.find(point_ids.second) == m_adjacency_sm.end())
  {
    RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
                "Source point %u or destination point %u does not exist", 
                point_ids.first, point_ids.second);
    return false;
  }
  
  // Adding path to paths tracking map
  m_paths.emplace(point_ids, std::make_shared<graph_msgs::msg::Edge>(path));
  
  // Adding path to the graph adjacency list
  if (m_adjacency_sm.at(point_ids.first).find(point_ids.second) == 
      m_adjacency_sm.at(point_ids.first).end())
  {
    m_adjacency_sm.at(point_ids.first).insert(point_ids.second);
    
    RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), 
                "Added path between point %u --> %u", 
                point_ids.first, point_ids.second);
    return true;
  }
  
  RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
              "Path between point %u --> %u already exists", 
              point_ids.first, point_ids.second);
  return false;
}

bool GlobalPathGraph::deletePath(const std::pair<uint32_t, uint32_t> &point_ids)
{
  // Check if both points exist
  if (m_adjacency_sm.find(point_ids.first) == m_adjacency_sm.end() || 
      m_adjacency_sm.find(point_ids.second) == m_adjacency_sm.end())
  {
    RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
                "Source point %u or destination point %u does not exist", 
                point_ids.first, point_ids.second);
    return false;
  }
  
  // Delete path from paths tracking map
  m_paths.erase(point_ids);
  
  // Delete path from the adjacency list
  m_adjacency_sm.at(point_ids.first).erase(point_ids.second);
  
  RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), 
              "Deleted path between point %u --> %u", 
              point_ids.first, point_ids.second);
  return true;
}

GlobalPathGraph::PathPtr GlobalPathGraph::getPathData(
  const std::pair<uint32_t, uint32_t> &point_ids)
{
  if (m_paths.find(point_ids) != m_paths.end())
  {
    return m_paths.at(point_ids);
  }
  return PathPtr(nullptr);
}

GlobalPathGraph::AdjacencySetMapPtr GlobalPathGraph::getGraphFromMsg(
  const graph_msgs::msg::Graph &graph)
{
  // Clear the entire graph just in case along with point and paths
  clear();
  
  // Add all vertices
  for (const auto &v_msg : graph.vertices)
  {
    if (!addPoint(v_msg.id, v_msg))
    {
      RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
                  "Point with ID %u could not be added", v_msg.id);
    }
  }
  
  // Add all edges - CORRECTED: using source_vertex_id and target_vertex_id
  for (const auto &e_msg : graph.edges)
  {
    std::pair<uint32_t, uint32_t> point_pair(e_msg.source_vertex_id, e_msg.target_vertex_id);
    if (!addPath(point_pair, e_msg))
    {
      RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), 
                  "Path between %u --> %u could not be added", 
                  e_msg.source_vertex_id, e_msg.target_vertex_id);
    }
  }
  
  return std::make_shared<AdjacencySetMap>(m_adjacency_sm);
}

GlobalPathGraph::AdjacencySetMapPtr GlobalPathGraph::getGraph()
{
  return std::make_shared<AdjacencySetMap>(m_adjacency_sm);
}

void GlobalPathGraph::clear()
{
  m_points.clear();
  m_paths.clear();
  m_adjacency_sm.clear();
  RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), "Graph cleared");
}

bool GlobalPathGraph::isEmpty() const
{
  return m_adjacency_sm.empty();
}

void GlobalPathGraph::printPathGraph(bool verbose) const
{
  if (m_adjacency_sm.empty())
  {
    RCLCPP_WARN(rclcpp::get_logger("global_path_graph"), "Path graph is empty");
    if (!verbose) return;
  }
  
  if (!m_adjacency_sm.empty())
  {
    RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), "Path graph:");
    std::cout << "\n";
    
    for (const auto &entry : m_adjacency_sm)
    {
      std::cout << "[ " << entry.first << " ] --> [ ";
      for (const uint32_t point_id : entry.second)
      {
        std::cout << point_id << " ";
      }
      std::cout << "]\n";
    }
    std::cout << "\n";
  }
}

void GlobalPathGraph::printAdditionalInfo() const
{
  RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), 
              "Total points: %zu, Total paths: %zu", 
              m_points.size(), m_paths.size());
}

void GlobalPathGraph::printPoints() const
{
  RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), "Points in graph:");
  std::cout << "\n";
  for (const auto &entry : m_points)
  {
    std::cout << "Point ID: " << entry.first << "\n";
  }
  std::cout << "\n";
}

void GlobalPathGraph::printPaths() const
{
  RCLCPP_INFO(rclcpp::get_logger("global_path_graph"), "Paths in graph:");
  std::cout << "\n";
  for (const auto &entry : m_paths)
  {
    std::cout << entry.first.first << " --> " << entry.first.second << "\n";
  }
  std::cout << "\n";
}

}  // namespace global_path_graph
