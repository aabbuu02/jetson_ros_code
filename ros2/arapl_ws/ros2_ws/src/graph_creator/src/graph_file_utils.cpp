#include "graph_creator/graph_file_utils.hpp"

#include <filesystem>
#include <rclcpp/rclcpp.hpp>

namespace Graph::File
{

/**
 * @brief Get the graph file path using either absolute path or a relative package.
 * For absolute paths, this function checks whether it is a valid absolute path else
 * a full absolute path with respect to a package is retrieved.
 * 
 * Usage examples are provided below
 * For absolute path: /path/to/graph.graphml
 * For relative path: package_name/path/to/graph.graphml
 * 
 * @param in_file_path The input file path either absolute or relative to a package
 * @param out_file_path The absolute path to graph file
 * @return true If path was retrieved successfully
 * @return false If an invalid absolute or relative path was given
 */
bool getGraphFilePath(const std::string &in_file_path, std::string &out_file_path)
{
    // TODO: An extension check needs to be done
    out_file_path = "";
    
    if (in_file_path.empty())
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_file_utils"), "The file path provided is empty");
        return false;
    }

    std::filesystem::path graph_file_path(in_file_path);
    
    if (!graph_file_path.is_absolute())
    {
        // Extract package name (first component of the path)
        std::string package_name = graph_file_path.begin()->string();
        RCLCPP_INFO(rclcpp::get_logger("graph_file_utils"), 
                    "Retrieving path relative to package: %s", package_name.c_str());

        try
        {
            // Get package share directory using ament_index_cpp
            std::string package_path = ament_index_cpp::get_package_share_directory(package_name);
            
            // Build relative path from package
            std::filesystem::path relative_path;
            auto it = graph_file_path.begin();
            ++it; // Skip package name
            
            for (; it != graph_file_path.end(); ++it)
            {
                relative_path /= *it;
            }
            
            std::filesystem::path full_path = std::filesystem::path(package_path) / relative_path;
            
            if (std::filesystem::exists(full_path))
            {
                out_file_path = full_path.string();
                RCLCPP_INFO(rclcpp::get_logger("graph_file_utils"), 
                           "Graph file path: %s", out_file_path.c_str());
                return true;
            }
            else
            {
                RCLCPP_ERROR(rclcpp::get_logger("graph_file_utils"), 
                            "Graph file does not exist at path: %s", full_path.string().c_str());
                return false;
            }
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(rclcpp::get_logger("graph_file_utils"), 
                        "Failed to find package '%s': %s", package_name.c_str(), e.what());
            return false;
        }
    }
    else
    {
        // Absolute path provided
        if (std::filesystem::exists(graph_file_path))
        {
            out_file_path = graph_file_path.string();
            RCLCPP_INFO(rclcpp::get_logger("graph_file_utils"), 
                       "Graph file path: %s", out_file_path.c_str());
            return true;
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("graph_file_utils"), 
                        "Graph file does not exist at path: %s", graph_file_path.string().c_str());
            return false;
        }
    }
}

}  // namespace Graph::File
