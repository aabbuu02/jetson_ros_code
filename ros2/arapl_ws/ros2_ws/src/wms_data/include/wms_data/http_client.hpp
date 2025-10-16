#ifndef WMS_DATA__HTTP_CLIENT_HPP_
#define WMS_DATA__HTTP_CLIENT_HPP_

#include <string>
#include <map>
#include <memory>
#include <functional>

namespace wms_data
{

/**
 * @brief HTTP Client for REST API and SOAP/XML communication
 */
class HttpClient
{
public:
  HttpClient();
  ~HttpClient();

  /**
   * @brief Perform HTTP GET request
   * @param url Target URL
   * @param response Output response string
   * @return true if successful
   */
  bool get(const std::string& url, std::string& response);

  /**
   * @brief Perform HTTP POST request with JSON payload
   * @param url Target URL
   * @param json_payload JSON string payload
   * @param response Output response string
   * @return true if successful
   */
  bool post_json(const std::string& url, const std::string& json_payload, std::string& response);

  /**
   * @brief Perform HTTP POST request with XML/SOAP payload
   * @param url Target URL
   * @param xml_payload XML/SOAP string payload
   * @param response Output response string
   * @return true if successful
   */
  bool post_xml(const std::string& url, const std::string& xml_payload, std::string& response);

  /**
   * @brief Set timeout for HTTP requests
   * @param timeout_seconds Timeout in seconds
   */
  void set_timeout(long timeout_seconds);

private:
  struct Impl;
  std::unique_ptr<Impl> impl_;
  
  static size_t write_callback(void* contents, size_t size, size_t nmemb, void* userp);
};

} // namespace wms_data

#endif // WMS_DATA__HTTP_CLIENT_HPP_
