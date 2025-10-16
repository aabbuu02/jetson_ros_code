#include "wms_data/json_parser.hpp"
#include <sstream>
#include <algorithm>
#include <cctype>

namespace wms_data
{

// Simple JSON parser implementation
JsonParser::JsonArray JsonParser::parse_array(const std::string& json_str)
{
  JsonArray result;
  
  // Find array boundaries
  size_t start = json_str.find('[');
  size_t end = json_str.rfind(']');
  
  if (start == std::string::npos || end == std::string::npos) {
    return result;
  }

  // Simple object extraction (assumes well-formed JSON)
  size_t pos = start + 1;
  while (pos < end) {
    size_t obj_start = json_str.find('{', pos);
    if (obj_start == std::string::npos || obj_start >= end) break;
    
    size_t obj_end = json_str.find('}', obj_start);
    if (obj_end == std::string::npos || obj_end >= end) break;
    
    std::string obj_str = json_str.substr(obj_start, obj_end - obj_start + 1);
    result.push_back(parse_object(obj_str));
    
    pos = obj_end + 1;
  }
  
  return result;
}

JsonParser::JsonObject JsonParser::parse_object(const std::string& json_str)
{
  JsonObject result;
  
  // Simple key-value extraction
  size_t pos = 0;
  while (pos < json_str.length()) {
    size_t key_start = json_str.find('"', pos);
    if (key_start == std::string::npos) break;
    
    size_t key_end = json_str.find('"', key_start + 1);
    if (key_end == std::string::npos) break;
    
    std::string key = json_str.substr(key_start + 1, key_end - key_start - 1);
    
    size_t colon = json_str.find(':', key_end);
    if (colon == std::string::npos) break;
    
    // Find value
    size_t val_start = colon + 1;
    while (val_start < json_str.length() && std::isspace(json_str[val_start])) {
      val_start++;
    }
    
    if (val_start >= json_str.length()) break;
    
    // Parse value based on type
    if (json_str[val_start] == '"') {
      // String value
      size_t val_end = json_str.find('"', val_start + 1);
      if (val_end != std::string::npos) {
        result[key] = json_str.substr(val_start + 1, val_end - val_start - 1);
        pos = val_end + 1;
      }
    } else {
      // Number or boolean
      size_t val_end = json_str.find_first_of(",}", val_start);
      if (val_end != std::string::npos) {
        std::string val_str = json_str.substr(val_start, val_end - val_start);
        
        // Trim whitespace
        val_str.erase(0, val_str.find_first_not_of(" \t\n\r"));
        val_str.erase(val_str.find_last_not_of(" \t\n\r") + 1);
        
        if (val_str == "true") {
          result[key] = true;
        } else if (val_str == "false") {
          result[key] = false;
        } else if (val_str.find('.') != std::string::npos) {
          result[key] = std::stod(val_str);
        } else {
          result[key] = std::stoi(val_str);
        }
        pos = val_end;
      }
    }
  }
  
  return result;
}

std::string JsonParser::stringify(const JsonObject& obj)
{
  std::ostringstream oss;
  oss << "{";
  
  bool first = true;
  for (const auto& [key, value] : obj) {
    if (!first) oss << ",";
    first = false;
    
    oss << "\"" << key << "\":";
    
    if (std::holds_alternative<std::string>(value)) {
      oss << "\"" << std::get<std::string>(value) << "\"";
    } else if (std::holds_alternative<int>(value)) {
      oss << std::get<int>(value);
    } else if (std::holds_alternative<double>(value)) {
      oss << std::get<double>(value);
    } else if (std::holds_alternative<bool>(value)) {
      oss << (std::get<bool>(value) ? "true" : "false");
    }
  }
  
  oss << "}";
  return oss.str();
}

std::string JsonParser::get_string(const JsonObject& obj, const std::string& key, const std::string& default_val)
{
  auto it = obj.find(key);
  if (it != obj.end() && std::holds_alternative<std::string>(it->second)) {
    return std::get<std::string>(it->second);
  }
  return default_val;
}

int JsonParser::get_int(const JsonObject& obj, const std::string& key, int default_val)
{
  auto it = obj.find(key);
  if (it != obj.end() && std::holds_alternative<int>(it->second)) {
    return std::get<int>(it->second);
  }
  return default_val;
}

bool JsonParser::get_bool(const JsonObject& obj, const std::string& key, bool default_val)
{
  auto it = obj.find(key);
  if (it != obj.end() && std::holds_alternative<bool>(it->second)) {
    return std::get<bool>(it->second);
  }
  return default_val;
}

} // namespace wms_data
