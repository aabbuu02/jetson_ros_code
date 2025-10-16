#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav_msgs/msg/path.hpp>
#include <graph_msgs/msg/graph.hpp>
#include <graph_msgs/msg/edge.hpp>

#include <global_path_graph/global_path_graph.hpp>
#include <graph_creator/graph_curves.hpp>

#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <memory>
#include <limits>
#include <cstdint>

namespace global_path_graph_planner
{

// Use namespace alias for convenience
using GlobalPathGraph = global_path_graph::GlobalPathGraph;

class DijkstraGraphPlanner
{
public:
  /**
   * @brief Constructor
   */
  DijkstraGraphPlanner();

  /**
   * @brief Destructor
   */
  ~DijkstraGraphPlanner() = default;

  /**
   * @brief Set the graph for planning
   * @param gpg Global path graph object
   * @return true if graph is valid and set successfully
   */
  bool setGraph(GlobalPathGraph& gpg);

  /**
   * @brief Run Dijkstra's algorithm to find shortest path
   * @param src_point_id Source vertex ID
   * @param dst_point_id Destination vertex ID
   * @param points_in_path Output vector of point IDs in path
   * @return true if path found successfully
   */
  bool dijkstraPlanner(const uint32_t& src_point_id, 
                       const uint32_t& dst_point_id,
                       std::vector<uint32_t>& points_in_path);

  /**
   * @brief Get point plan (list of vertex IDs) from graph
   * @param src_point_id Source vertex ID
   * @param dst_point_id Destination vertex ID
   * @param points_in_plan Output vector of point IDs
   * @return true if plan generated successfully
   */
  bool getPointPlanFromGraph(const uint32_t& src_point_id, 
                             const uint32_t& dst_point_id,
                             std::vector<uint32_t>& points_in_plan);

  /**
   * @brief Get full pose plan from graph
   * @param src_point_id Source vertex ID
   * @param dst_point_id Destination vertex ID
   * @param plan Output vector of PoseStamped messages
   * @param ignore_goal_orientation Whether to ignore goal orientation
   * @param ignore_path_orientation Whether to ignore path orientation
   * @return true if plan generated successfully
   */
  bool getPlanFromGraph(const uint32_t& src_point_id, 
                        const uint32_t& dst_point_id,
                        std::vector<geometry_msgs::msg::PoseStamped>& plan, 
                        bool ignore_goal_orientation = false,
                        bool ignore_path_orientation = true);

  /**
   * @brief Convert point plan to pose plan using edge information
   * @param point_plan Vector of point IDs
   * @param plan Output vector of PoseStamped messages
   * @param ignore_goal_orientation Whether to ignore goal orientation
   * @param ignore_path_orientation Whether to ignore path orientation
   * @return true if conversion successful
   */
  bool getPlanFromPoints(const std::vector<uint32_t>& point_plan, 
                         std::vector<geometry_msgs::msg::PoseStamped>& plan,
                         bool ignore_goal_orientation = false, 
                         bool ignore_path_orientation = true);

  /**
   * @brief Get points in current plan as a set
   * @param points_in_plan Output set of point IDs
   */
  void getPointsInPlan(std::unordered_set<uint32_t>& points_in_plan) const;

  /**
   * @brief Get points in current plan as a vector
   * @param points_in_plan Output vector of point IDs
   */
  void getPointsInPlan(std::vector<uint32_t>& points_in_plan) const;

  /**
   * @brief Get total distance of current plan
   * @return Plan distance in meters
   */
  double getPlanDistance() const;

  /**
   * @brief Print points in current plan to console
   */
  void printPointsInPlan() const;

  /**
   * @brief Enable or disable cost factor in planning
   * @param enable true to enable, false to disable
   */
  void enableCostFactor(bool enable);

  /**
   * @brief Check if cost factor is enabled
   * @return true if enabled
   */
  bool isCostFactorEnabled() const;

  /**
   * @brief Set pose spacing for path interpolation
   * @param spacing Distance between poses in meters
   */
  void setPoseSpacing(double spacing);

  /**
   * @brief Set resolution for curve discretization
   * @param resolution Resolution value
   */
  void setResolution(double resolution);

private:
  /**
   * @brief Internal structure for priority queue
   */
  struct PointCost
  {
    uint32_t point_id;
    double cost;

    PointCost(uint32_t pnt_id, double pnt_cost)
      : point_id(pnt_id), cost(pnt_cost)
    {}
  };

  /**
   * @brief Comparator for priority queue (min-heap)
   */
  struct PointCostCompare
  {
    bool operator()(const PointCost& lhs, const PointCost& rhs) const
    {
      return lhs.cost > rhs.cost; // Min-heap
    }
  };

  // Path interpolation parameters
  double m_pose_spacing{0.1};  // 10 cm spacing
  double m_resolution{1.0};

  // Planning settings
  bool m_enable_cost_factor{true};

  // Dijkstra algorithm data structures
  std::unordered_map<uint32_t, double> m_point_distance;
  std::unordered_map<uint32_t, uint32_t> m_previous_point;
  double m_plan_distance{0.0};

  // Graph data
  GlobalPathGraph m_gpg;
  GlobalPathGraph::AdjacencySetMapPtr m_graph;
  std::vector<uint32_t> m_points_in_plan_v;
};

} // namespace global_path_graph_planner
