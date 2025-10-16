#include "global_path_graph_planner/dijkstra_graph_planner.hpp"
#include <algorithm>

namespace global_path_graph_planner
{

DijkstraGraphPlanner::DijkstraGraphPlanner()
{
  // Constructor implementation
}

bool DijkstraGraphPlanner::setGraph(GlobalPathGraph& gpg)
{
  if (!gpg.getGraph())
  {
    RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"), 
                 "Invalid graph was passed to graph planner");
    return false;
  }

  if (gpg.isEmpty())
  {
    RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"), 
                 "An empty graph was passed to graph planner");
    return false;
  }

  m_gpg = gpg;
  m_graph = m_gpg.getGraph();
  return true;
}

bool DijkstraGraphPlanner::getPointPlanFromGraph(const uint32_t& src_point_id, 
                                                  const uint32_t& dst_point_id,
                                                  std::vector<uint32_t>& points_in_plan)
{
  points_in_plan.clear();
  m_points_in_plan_v.clear();

  if (!dijkstraPlanner(src_point_id, dst_point_id, m_points_in_plan_v))
  {
    return false;
  }

  printPointsInPlan();
  points_in_plan = m_points_in_plan_v;
  return true;
}

bool DijkstraGraphPlanner::getPlanFromGraph(const uint32_t& src_point_id, 
                                            const uint32_t& dst_point_id,
                                            std::vector<geometry_msgs::msg::PoseStamped>& plan, 
                                            bool ignore_goal_orientation,
                                            bool ignore_path_orientation)
{
  plan.clear();
  m_points_in_plan_v.clear();

  if (!dijkstraPlanner(src_point_id, dst_point_id, m_points_in_plan_v))
  {
    return false;
  }

  if (!getPlanFromPoints(m_points_in_plan_v, plan, ignore_goal_orientation, ignore_path_orientation))
  {
    return false;
  }

  printPointsInPlan();
  return true;
}

bool DijkstraGraphPlanner::getPlanFromPoints(const std::vector<uint32_t>& point_plan, 
                                             std::vector<geometry_msgs::msg::PoseStamped>& plan,
                                             bool ignore_goal_orientation, 
                                             bool ignore_path_orientation)
{
  GlobalPathGraph::PointPtr pnt_1_ptr, pnt_2_ptr;
  geometry_msgs::msg::PoseStamped pose_stamped_msg;
  m_plan_distance = 0.0;

  // Handle single point plan
  if (point_plan.size() == 1)
  {
    pnt_2_ptr = m_gpg.getPointData(point_plan.back());
    if (!pnt_2_ptr)
    {
      RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"),
                   "Point %u data was not found in the path graph", point_plan.back());
      return false;
    }

    pose_stamped_msg.header.frame_id = "map";
    pose_stamped_msg.header.stamp = rclcpp::Clock().now();
    pose_stamped_msg.pose = pnt_2_ptr->pose;
    plan.push_back(pose_stamped_msg);

    RCLCPP_INFO(rclcpp::get_logger("dijkstra_planner"),
                "Retrieved plan size (single point): %zu", plan.size());
    return true;
  }

  // Process multi-point plan
  pose_stamped_msg.header.frame_id = "map";

  for (size_t i = 0; i < point_plan.size() - 1; ++i)
  {
    // Create pair for getPathData - API expects std::pair
    std::pair<uint32_t, uint32_t> point_pair(point_plan[i], point_plan[i + 1]);
    GlobalPathGraph::PathPtr pth_ptr = m_gpg.getPathData(point_pair);

    if (!pth_ptr)
    {
      RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"),
                   "Path between source %u and target %u was not found in the path graph",
                   point_plan[i], point_plan[i + 1]);
      return false;
    }

    pnt_1_ptr = m_gpg.getPointData(pth_ptr->source_vertex_id);
    pnt_2_ptr = m_gpg.getPointData(pth_ptr->target_vertex_id);

    if (!pnt_1_ptr)
    {
      RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"),
                   "Source point %u was not found within the path graph",
                   pth_ptr->source_vertex_id);
      return false;
    }

    if (!pnt_2_ptr)
    {
      RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"),
                   "Destination point %u was not found within the path graph",
                   pth_ptr->target_vertex_id);
      return false;
    }

    double length = 0.0;
    std::vector<geometry_msgs::msg::Pose> eqd_poses;

    // Generate poses based on edge type
    switch (pth_ptr->type)
    {
      case graph_msgs::msg::Edge::STRAIGHT_LINE:
      {
        // Create input vector for line calculation
        std::vector<geometry_msgs::msg::Pose> line_poses;
        line_poses.push_back(pnt_1_ptr->pose);
        line_poses.push_back(pnt_2_ptr->pose);
        
        Graph::Curves::calculateEquiDistantPosesLine(
          line_poses, eqd_poses, length, m_pose_spacing);
        m_plan_distance += length;
        break;
      }

      case graph_msgs::msg::Edge::CUBIC_BEZIER:
      {
        if (pth_ptr->control_points.size() != 2)
        {
          RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"),
                       "Cannot construct Bezier curve without two control points");
          return false;
        }

        // Create input vector for Bezier calculation
        std::vector<geometry_msgs::msg::Pose> bezier_poses;
        bezier_poses.push_back(pnt_1_ptr->pose);
        bezier_poses.push_back(pth_ptr->control_points[0]);
        bezier_poses.push_back(pth_ptr->control_points[1]);
        bezier_poses.push_back(pnt_2_ptr->pose);

        Graph::Curves::calculateEquiDistantPosesBezier(
          bezier_poses, eqd_poses, length, m_pose_spacing, m_resolution);
        m_plan_distance += length;
        break;
      }

      default:
      {
        RCLCPP_ERROR(rclcpp::get_logger("dijkstra_planner"),
                     "Unknown graph edge type was provided");
        return false;
      }
    }

    // Add interpolated poses to plan
    for (const auto& pose : eqd_poses)
    {
      pose_stamped_msg.header.stamp = rclcpp::Clock().now();
      pose_stamped_msg.pose = pose;

      // Apply independent orientation if set
      if (pth_ptr->independent_orientation && !ignore_path_orientation)
      {
        pose_stamped_msg.pose.orientation = pth_ptr->control_orientation.orientation;
      }

      plan.push_back(pose_stamped_msg);
    }

    // Add destination pose with orientation if required
    if ((!pnt_2_ptr->ignore_orientation && !ignore_goal_orientation) || point_plan.size() == 1)
    {
      pose_stamped_msg.header.stamp = rclcpp::Clock().now();
      pose_stamped_msg.pose = pnt_2_ptr->pose;
      plan.push_back(pose_stamped_msg);
    }
  }

  RCLCPP_INFO(rclcpp::get_logger("dijkstra_planner"),
              "Retrieved plan size (Number of poses in plan): %zu", plan.size());
  RCLCPP_INFO(rclcpp::get_logger("dijkstra_planner"),
              "Plan distance: %.3f meters", m_plan_distance);

  return true;
}

void DijkstraGraphPlanner::getPointsInPlan(std::unordered_set<uint32_t>& points_in_plan) const
{
  points_in_plan.clear();
  for (const uint32_t& v_id : m_points_in_plan_v)
  {
    points_in_plan.insert(v_id);
  }
}

void DijkstraGraphPlanner::getPointsInPlan(std::vector<uint32_t>& points_in_plan) const
{
  points_in_plan = m_points_in_plan_v;
}

double DijkstraGraphPlanner::getPlanDistance() const
{
  return m_plan_distance;
}

bool DijkstraGraphPlanner::dijkstraPlanner(const uint32_t& src_point_id, 
                                           const uint32_t& dst_point_id,
                                           std::vector<uint32_t>& points_in_path)
{
  points_in_path.clear();

  auto logger = rclcpp::get_logger("dijkstra_planner");

  RCLCPP_INFO(logger, "Planning from source point %u to destination point %u",
              src_point_id, dst_point_id);

  // Handle same source and destination
  if (src_point_id == dst_point_id)
  {
    RCLCPP_INFO(logger, "Source and destination points are the same");
    points_in_path.push_back(dst_point_id);
    return true;
  }

  // Validate source and destination points exist in graph
  if (m_graph->find(src_point_id) == m_graph->end() && 
      m_graph->find(dst_point_id) == m_graph->end())
  {
    RCLCPP_ERROR(logger, "Source point %u and destination point %u not found in the graph",
                 src_point_id, dst_point_id);
    return false;
  }

  if (m_graph->find(src_point_id) == m_graph->end())
  {
    RCLCPP_ERROR(logger, "Source point %u not found in the graph", src_point_id);
    return false;
  }

  if (m_graph->find(dst_point_id) == m_graph->end())
  {
    RCLCPP_ERROR(logger, "Destination point %u not found in the graph", dst_point_id);
    return false;
  }

  if (m_graph->empty())
  {
    RCLCPP_ERROR(logger, "The current graph in graph planner is empty");
    return false;
  }

  // Initialize Dijkstra data structures
  m_point_distance.clear();
  m_previous_point.clear();
  m_point_distance.reserve(m_graph->size());
  m_previous_point.reserve(m_graph->size());

  // Initialize all distances to infinity, except source
  m_point_distance.emplace(src_point_id, 0.0);

  for (const auto& [vertex_id, _] : *m_graph)
  {
    if (vertex_id == src_point_id) continue;
    m_point_distance.emplace(vertex_id, std::numeric_limits<double>::max());
  }

  // Priority queue for Dijkstra's algorithm
  std::priority_queue<PointCost, std::vector<PointCost>, PointCostCompare> point_pq;
  point_pq.emplace(src_point_id, m_point_distance.at(src_point_id));

  // Main Dijkstra loop
  while (!point_pq.empty())
  {
    PointCost current_pc = point_pq.top();
    point_pq.pop();

    // Check if destination reached
    if (current_pc.point_id == dst_point_id)
    {
      RCLCPP_INFO(logger, "Found a path to destination point %u", dst_point_id);

      // Backtrack to reconstruct path
      uint32_t backtrack_point_id = dst_point_id;
      points_in_path.push_back(backtrack_point_id);

      while (backtrack_point_id != src_point_id)
      {
        backtrack_point_id = m_previous_point.at(backtrack_point_id);
        points_in_path.push_back(backtrack_point_id);
      }

      // Reverse to get path from source to destination
      std::reverse(points_in_path.begin(), points_in_path.end());

      RCLCPP_INFO(logger, "Path length: %zu points, Total distance: %.3f meters",
                  points_in_path.size(), m_point_distance.at(dst_point_id));
      return true;
    }

    // Skip if we've found a better path to this point already
    if (current_pc.cost > m_point_distance.at(current_pc.point_id))
    {
      continue;
    }

    // Check if current point exists in graph
    if (m_graph->find(current_pc.point_id) == m_graph->end())
    {
      RCLCPP_ERROR(logger, "The point %u is not present in the graph", current_pc.point_id);
      return false;
    }

    // Explore neighbors - use auto for the adjacency set type
    const auto& adjacency_set = m_graph->at(current_pc.point_id);

    RCLCPP_DEBUG(logger, "Currently exploring point with ID: %u", current_pc.point_id);

    for (const auto& neighbour_point_id : adjacency_set)
    {
      // Create pair for getPathData - API expects std::pair
      std::pair<uint32_t, uint32_t> point_pair(current_pc.point_id, neighbour_point_id);
      GlobalPathGraph::PathPtr path_ptr = m_gpg.getPathData(point_pair);

      if (!path_ptr)
      {
        RCLCPP_WARN(logger, "Path between %u and %u not found, skipping",
                    current_pc.point_id, neighbour_point_id);
        continue;
      }

      RCLCPP_DEBUG(logger, "Neighbour point: %u, Length: %.3f (Cost factor: %.3f)",
                   neighbour_point_id, path_ptr->length, path_ptr->cost_factor);

      // Apply cost factor if enabled
      double cost_factor = 1.0;
      if (m_enable_cost_factor)
      {
        if (path_ptr->cost_factor < 0.0)
        {
          RCLCPP_WARN(logger, "Cost factor cannot be less than zero");
          RCLCPP_WARN(logger, "Using a cost factor of 1 for path between current point %u and neighbour %u",
                      current_pc.point_id, neighbour_point_id);
        }
        else
        {
          cost_factor = path_ptr->cost_factor;
        }
      }

      // Calculate new distance
      double new_distance = m_point_distance.at(current_pc.point_id) + 
                           (path_ptr->length * cost_factor);

      // Update if shorter path found
      if (new_distance < m_point_distance.at(neighbour_point_id))
      {
        m_point_distance.at(neighbour_point_id) = new_distance;
        m_previous_point[neighbour_point_id] = current_pc.point_id;
        point_pq.emplace(neighbour_point_id, new_distance);

        RCLCPP_DEBUG(logger, "Neighbour point ID: %u, Updated distance: %.3f",
                     neighbour_point_id, new_distance);
      }
    }
  }

  RCLCPP_ERROR(logger, "Unable to find a path from source %u to destination %u",
               src_point_id, dst_point_id);
  return false;
}

void DijkstraGraphPlanner::printPointsInPlan() const
{
  auto logger = rclcpp::get_logger("dijkstra_planner");

  if (m_points_in_plan_v.empty())
  {
    RCLCPP_INFO(logger, "No points in plan");
    return;
  }

  std::stringstream ss;
  ss << "Points in plan: [";
  for (size_t i = 0; i < m_points_in_plan_v.size(); ++i)
  {
    ss << m_points_in_plan_v[i];
    if (i < m_points_in_plan_v.size() - 1)
    {
      ss << ", ";
    }
  }
  ss << "]";

  RCLCPP_INFO(logger, "%s", ss.str().c_str());
}

void DijkstraGraphPlanner::enableCostFactor(bool enable)
{
  m_enable_cost_factor = enable;
  RCLCPP_INFO(rclcpp::get_logger("dijkstra_planner"),
              "Cost factor %s", enable ? "enabled" : "disabled");
}

bool DijkstraGraphPlanner::isCostFactorEnabled() const
{
  return m_enable_cost_factor;
}

void DijkstraGraphPlanner::setPoseSpacing(double spacing)
{
  if (spacing > 0.0)
  {
    m_pose_spacing = spacing;
    RCLCPP_INFO(rclcpp::get_logger("dijkstra_planner"),
                "Pose spacing set to %.3f meters", m_pose_spacing);
  }
  else
  {
    RCLCPP_WARN(rclcpp::get_logger("dijkstra_planner"),
                "Invalid pose spacing value: %.3f. Must be positive.", spacing);
  }
}

void DijkstraGraphPlanner::setResolution(double resolution)
{
  if (resolution > 0.0)
  {
    m_resolution = resolution;
    RCLCPP_INFO(rclcpp::get_logger("dijkstra_planner"),
                "Resolution set to %.3f", m_resolution);
  }
  else
  {
    RCLCPP_WARN(rclcpp::get_logger("dijkstra_planner"),
                "Invalid resolution value: %.3f. Must be positive.", resolution);
  }
}

} // namespace global_path_graph_planner
