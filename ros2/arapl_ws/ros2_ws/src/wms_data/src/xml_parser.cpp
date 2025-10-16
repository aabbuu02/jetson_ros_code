#include "wms_data/xml_parser.hpp"

namespace wms_data
{

std::string XmlParser::extract_tag_content(const std::string& xml_str, const std::string& tag_name)
{
  std::string start_tag = "<" + tag_name + ">";
  std::string end_tag = "</" + tag_name + ">";
  
  size_t start_pos = xml_str.find(start_tag);
  if (start_pos == std::string::npos) {
    return "";
  }
  
  size_t content_start = start_pos + start_tag.length();
  size_t end_pos = xml_str.find(end_tag, content_start);
  
  if (end_pos == std::string::npos) {
    return "";
  }
  
  return xml_str.substr(content_start, end_pos - content_start);
}

std::string XmlParser::create_soap_envelope(const std::string& body_content)
{
  return 
    R"(<?xml version="1.0" encoding="utf-8"?>)"
    R"(<soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" )"
    R"(xmlns:xsd="http://www.w3.org/2001/XMLSchema" )"
    R"(xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">)"
    R"(<soap:Body>)" + body_content + R"(</soap:Body>)"
    R"(</soap:Envelope>)";
}

} // namespace wms_data
