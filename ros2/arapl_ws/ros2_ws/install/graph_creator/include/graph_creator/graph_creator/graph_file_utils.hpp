#pragma once

#include <string>
#include <ament_index_cpp/get_package_share_directory.hpp>

namespace Graph::File
{

// Converts a package relative path or absolute path to an absolute file path
bool getGraphFilePath(const std::string &in_file_path, std::string &out_file_path);

}  // namespace Graph::File
