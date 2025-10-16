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

  // TODO: Implement actual GraphML parsing here
  // For now, create a simple placeholder implementation
  // You'll need to integrate with your graph_creator library properly
  
  RCLCPP_INFO(this->get_logger(), "Loading graph from: %s", filename.c_str());
  
  // Set header
  graph.header.frame_id = "map";
  graph.header.stamp = this->now();
  
  // Set metadata
  graph.meta_data.graph_name = fs::path(filename).stem().string();
  graph.meta_data.graph_type = graph_msgs::msg::GraphMetaData::UNDIRECTED;
  graph.meta_data.number_of_vertices = 0;
  graph.meta_data.number_of_edges = 0;
  
  RCLCPP_WARN(this->get_logger(), 
             "Graph parsing not fully implemented. Please integrate graph_creator properly.");
  
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
