#ifndef WMS_DATA__JSON_PARSER_HPP_
#define WMS_DATA__JSON_PARSER_HPP_

#include <string>
#include <vector>
#include <map>
#include <variant>

namespace wms_data
{

/**
 * @brief Simple JSON parser for WMS data
 */
class JsonParser
{
public:
  using JsonValue = std::variant<std::string, int, double, bool>;
  using JsonObject = std::map<std::string, JsonValue>;
  using JsonArray = std::vector<JsonObject>;

  /**
   * @brief Parse JSON array from string
   * @param json_str JSON string
   * @return Vector of JSON objects
   */
  static JsonArray parse_array(const std::string& json_str);

  /**
   * @brief Parse JSON object from string
   * @param json_str JSON string
   * @return JSON object map
   */
  static JsonObject parse_object(const std::string& json_str);

  /**
   * @brief Create JSON string from object
   * @param obj JSON object
   * @return JSON string
   */
  static std::string stringify(const JsonObject& obj);

  /**
   * @brief Get string value from JSON object
   */
  static std::string get_string(const JsonObject& obj, const std::string& key, const std::string& default_val = "");

  /**
   * @brief Get integer value from JSON object
   */
  static int get_int(const JsonObject& obj, const std::string& key, int default_val = 0);

  /**
   * @brief Get boolean value from JSON object
   */
  static bool get_bool(const JsonObject& obj, const std::string& key, bool default_val = false);
};

} // namespace wms_data

#endif // WMS_DATA__JSON_PARSER_HPP_
