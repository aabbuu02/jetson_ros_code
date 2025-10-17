#include "graph_server/graph_server.hpp"
#include <fstream>
#include <sstream>
#include <filesystem>

namespace fs = std::filesystem;

namespace graph_server
{

GraphServer::GraphServer(const rclcpp::NodeOptions & options)
: Node("graph_server", options), is_initialized_(false)
{
  RCLCPP_INFO(this->get_logger(), "Initializing Graph Server");

  // Declare parameter and retrieve value
  this->declare_parameter<std::string>("graph_file", "");
  std::string graph_file_param;
  this->get_parameter("graph_file", graph_file_param);

  // Create publisher with transient_local QoS for latched behavior
  auto qos = rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable();
  graph_pub_ = this->create_publisher<graph_msgs::msg::Graph>("graph", qos);

  // Create service servers
  load_graph_srv_ = this->create_service<graph_msgs::srv::LoadGraph>(
    "load_graph",
    std::bind(&GraphServer::loadGraphServiceCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  get_graph_srv_ = this->create_service<graph_msgs::srv::GetGraph>(
    "get_graph",
    std::bind(&GraphServer::getGraphServiceCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  // Check if graph_file parameter was provided and load the graph
  if (!graph_file_param.empty())
  {
    RCLCPP_INFO(this->get_logger(), "Graph file parameter: %s", graph_file_param.c_str());

    // Resolve and attempt to load the graph from the parameter value
    std::string final_file_path = resolveGraphFilePath(graph_file_param);
    if (!final_file_path.empty())
    {
        if (!loadGraphFromFileAndPublish(final_file_path))
        {
            RCLCPP_WARN(this->get_logger(), "Failed to load graph from parameter file: %s", final_file_path.c_str());
        }
    } else {
        RCLCPP_ERROR(this->get_logger(), "Could not resolve graph file path from parameter: %s", graph_file_param.c_str());
    }
  } else {
    // Original warning logic for no graph file provided
    RCLCPP_WARN(this->get_logger(), "No 'graph_file' parameter provided — waiting for service request.");
  }


  RCLCPP_INFO(this->get_logger(), "Graph Server initialized successfully");
}

std::string GraphServer::resolveGraphFilePath(const std::string &graph_url)
{
  // If it's already an absolute path and exists, return it
  if (fs::exists(graph_url))
  {
    return graph_url;
  }

  // Try to resolve package:// URLs
  if (graph_url.find("package://") == 0)
  {
    RCLCPP_ERROR(this->get_logger(), 
                "package:// URLs not yet supported. Use absolute paths or $(find ...) syntax");
    return "";
  }

  // Check if file exists relative to current directory
  fs::path relative_path = fs::current_path() / graph_url;
  if (fs::exists(relative_path))
  {
    return relative_path.string();
  }

  RCLCPP_ERROR(this->get_logger(), "Cannot resolve graph file path: %s", graph_url.c_str());
  return "";
}

bool GraphServer::loadGraphFromFile(const std::string &filename, graph_msgs::msg::Graph &graph)
{
  // Check if file exists
  if (!fs::exists(filename))
  {
    RCLCPP_ERROR(this->get_logger(), "Graph file does not exist: %s", filename.c_str());
    return false;
  }

  // Basic GraphML parsing implementation
  RCLCPP_INFO(this->get_logger(), "Loading graph from: %s", filename.c_str());
  
  // Set header
  graph.header.frame_id = "map";
  graph.header.stamp = this->now();
  
  // Set metadata
  graph.meta_data.graph_name = fs::path(filename).stem().string();
  graph.meta_data.graph_type = graph_msgs::msg::GraphMetaData::DIRECTED;
  
  std::ifstream file(filename);
  if (!file.is_open())
  {
    RCLCPP_ERROR(this->get_logger(), "Could not open graph file: %s", filename.c_str());
    return false;
  }
  
  std::string line;
  std::vector<graph_msgs::msg::Node> nodes;
  std::vector<graph_msgs::msg::Edge> edges;
  
  while (std::getline(file, line))
  {
    // Parse nodes
    if (line.find("<node id=") != std::string::npos)
    {
      // Extract node ID
      size_t start = line.find("id=\"") + 4;
      size_t end = line.find("\"", start);
      if (start != std::string::npos && end != std::string::npos)
      {
        std::string node_id = line.substr(start, end - start);
        
        // Look for pose data
        std::getline(file, line); // name
        std::getline(file, line); // alias
        std::getline(file, line); // type
        std::getline(file, line); // ignore.orientation
        std::getline(file, line); // pose
        
        if (line.find("pose>") != std::string::npos)
        {
          size_t pose_start = line.find("pose>") + 5;
          size_t pose_end = line.find("</data>", pose_start);
          if (pose_start != std::string::npos && pose_end != std::string::npos)
          {
            std::string pose_str = line.substr(pose_start, pose_end - pose_start);
            std::istringstream pose_stream(pose_str);
            
            graph_msgs::msg::Node node;
            node.id = std::stoi(node_id);
            
            // Parse pose: x y z qx qy qz qw
            double x, y, z, qx, qy, qz, qw;
            if (pose_stream >> x >> y >> z >> qx >> qy >> qz >> qw)
            {
              node.pose.position.x = x;
              node.pose.position.y = y;
              node.pose.position.z = z;
              node.pose.orientation.x = qx;
              node.pose.orientation.y = qy;
              node.pose.orientation.z = qz;
              node.pose.orientation.w = qw;
            }
            
            nodes.push_back(node);
          }
        }
      }
    }
    
    // Parse edges
    if (line.find("<edge source=") != std::string::npos)
    {
      size_t source_start = line.find("source=\"") + 8;
      size_t source_end = line.find("\"", source_start);
      size_t target_start = line.find("target=\"") + 8;
      size_t target_end = line.find("\"", target_start);
      
      if (source_start != std::string::npos && source_end != std::string::npos &&
          target_start != std::string::npos && target_end != std::string::npos)
      {
        graph_msgs::msg::Edge edge;
        edge.source = std::stoi(line.substr(source_start, source_end - source_start));
        edge.target = std::stoi(line.substr(target_start, target_end - target_start));
        edge.weight = 1.0; // Default weight
        edges.push_back(edge);
      }
    }
  }
  
  file.close();
  
  // Set the parsed data
  graph.nodes = nodes;
  graph.edges = edges;
  graph.meta_data.number_of_vertices = nodes.size();
  graph.meta_data.number_of_edges = edges.size();
  
  RCLCPP_INFO(this->get_logger(), "Successfully parsed graph with %zu nodes and %zu edges", 
              nodes.size(), edges.size());
  
  return true;
}

bool GraphServer::loadGraphFromFileAndPublish(const std::string &filename)
{
  RCLCPP_INFO(this->get_logger(), "Loading graph from file: %s", filename.c_str());

  if (!loadGraphFromFile(filename, graph_msg_))
  {
    RCLCPP_ERROR(this->get_logger(), "Failed to load graph from file: %s", filename.c_str());
    return false;
  }

  publishGraph(graph_msg_);
  is_initialized_ = true;

  RCLCPP_INFO(this->get_logger(), "Graph loaded and published successfully");
  return true;
}

void GraphServer::publishGraph(const graph_msgs::msg::Graph &graph)
{
  graph_pub_->publish(graph);
  RCLCPP_INFO(this->get_logger(), "Graph published: %zu vertices, %zu edges",
              graph.vertices.size(), graph.edges.size());
}

void GraphServer::loadGraphServiceCallback(
  const std::shared_ptr<graph_msgs::srv::LoadGraph::Request> request,
  std::shared_ptr<graph_msgs::srv::LoadGraph::Response> response)
{
  RCLCPP_INFO(this->get_logger(), "Load graph service called");

  if (request->graph_url.empty())
  {
    RCLCPP_ERROR(this->get_logger(), "The graph file URL is empty");
    response->result = graph_msgs::srv::LoadGraph::Response::RESULT_INVALID_GRAPH_FILE_PATH;
    return;
  }

  std::string final_file_path = resolveGraphFilePath(request->graph_url);
  
  if (final_file_path.empty())
  {
    RCLCPP_ERROR(this->get_logger(), "The graph file path is not valid");
    response->result = graph_msgs::srv::LoadGraph::Response::RESULT_INVALID_GRAPH_FILE_PATH;
    return;
  }

  RCLCPP_INFO(this->get_logger(), "Resolved graph file path: %s", final_file_path.c_str());

  if (!loadGraphFromFileAndPublish(final_file_path))
  {
    RCLCPP_ERROR(this->get_logger(), "Failed to load graph");
    response->result = graph_msgs::srv::LoadGraph::Response::RESULT_GRAPH_DOES_NOT_EXIST;
    return;
  }

  response->graph = graph_msg_;
  response->result = graph_msgs::srv::LoadGraph::Response::RESULT_SUCCESS;
}

void GraphServer::getGraphServiceCallback(
  const std::shared_ptr<graph_msgs::srv::GetGraph::Request> request,
  std::shared_ptr<graph_msgs::srv::GetGraph::Response> response)
{
  (void)request;
  RCLCPP_INFO(this->get_logger(), "Get graph service called");

  response->graph = graph_msg_;

  if (is_initialized_)
  {
    response->result = graph_msgs::srv::GetGraph::Response::RESULT_GRAPH_VALID;
  }
  else
  {
    response->result = graph_msgs::srv::GetGraph::Response::RESULT_GRAPH_INVALID;
  }
}

}  // namespace graph_server

// int main(int argc, char **argv)
// {
//   rclcpp::init(argc, argv);
//   auto node = std::make_shared<graph_server::GraphServer>();

//   if (argc > 1)
//   {
//     if (argc > 2)
//     {
//       RCLCPP_ERROR(node->get_logger(), "Too many arguments");
//       RCLCPP_ERROR(node->get_logger(), "Usage: ros2 run graph_server graph_server [graph_file]");
//       rclcpp::shutdown();
//       return EXIT_FAILURE;
//     }

//     std::string graph_file(argv[1]);
//     RCLCPP_INFO(node->get_logger(), "Graph file argument: %s", graph_file.c_str());

//     if (!node->loadGraphFromFileAndPublish(graph_file))
//     {
//       RCLCPP_WARN(node->get_logger(), "Failed to load graph at startup");
//     }
//   }
//   else
//   {
//     RCLCPP_INFO(node->get_logger(), "No graph file provided at startup");
//   }

//   RCLCPP_INFO(node->get_logger(), "Graph Server running...");
//   rclcpp::spin(node);
//   rclcpp::shutdown();
//   return EXIT_SUCCESS;
// }

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<graph_server::GraphServer>();

  // Remove the old command-line argument loading logic.
  // The graph is now loaded in the constructor if the parameter is set.

  RCLCPP_INFO(node->get_logger(), "Graph Server running...");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return EXIT_SUCCESS;
}
