#ifndef WMS_DATA__XML_PARSER_HPP_
#define WMS_DATA__XML_PARSER_HPP_

#include <string>

namespace wms_data
{

/**
 * @brief Simple XML parser for SOAP responses
 */
class XmlParser
{
public:
  /**
   * @brief Extract content between XML tags
   * @param xml_str XML string
   * @param tag_name Tag name to extract
   * @return Content between tags
   */
  static std::string extract_tag_content(const std::string& xml_str, const std::string& tag_name);

  /**
   * @brief Create SOAP envelope
   * @param body_content Body content
   * @return Complete SOAP XML string
   */
  static std::string create_soap_envelope(const std::string& body_content);
};

} // namespace wms_data

#endif // WMS_DATA__XML_PARSER_HPP_
