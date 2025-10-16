#include "wms_data/http_client.hpp"
#include <curl/curl.h>
#include <stdexcept>

namespace wms_data
{

struct HttpClient::Impl
{
  CURL* curl_handle;
  long timeout_seconds;

  Impl() : curl_handle(nullptr), timeout_seconds(10)
  {
    curl_handle = curl_easy_init();
    if (!curl_handle) {
      throw std::runtime_error("Failed to initialize CURL");
    }
  }

  ~Impl()
  {
    if (curl_handle) {
      curl_easy_cleanup(curl_handle);
    }
  }
};

HttpClient::HttpClient()
: impl_(std::make_unique<Impl>())
{
}

HttpClient::~HttpClient() = default;

size_t HttpClient::write_callback(void* contents, size_t size, size_t nmemb, void* userp)
{
  size_t total_size = size * nmemb;
  std::string* response = static_cast<std::string*>(userp);
  response->append(static_cast<char*>(contents), total_size);
  return total_size;
}

bool HttpClient::get(const std::string& url, std::string& response)
{
  if (!impl_->curl_handle) {
    return false;
  }

  response.clear();

  curl_easy_setopt(impl_->curl_handle, CURLOPT_URL, url.c_str());
  curl_easy_setopt(impl_->curl_handle, CURLOPT_WRITEFUNCTION, write_callback);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_WRITEDATA, &response);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_TIMEOUT, impl_->timeout_seconds);

  CURLcode res = curl_easy_perform(impl_->curl_handle);

  return (res == CURLE_OK);
}

bool HttpClient::post_json(const std::string& url, const std::string& json_payload, std::string& response)
{
  if (!impl_->curl_handle) {
    return false;
  }

  response.clear();

  struct curl_slist* headers = nullptr;
  headers = curl_slist_append(headers, "Content-Type: application/json");

  curl_easy_setopt(impl_->curl_handle, CURLOPT_URL, url.c_str());
  curl_easy_setopt(impl_->curl_handle, CURLOPT_POST, 1L);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_POSTFIELDS, json_payload.c_str());
  curl_easy_setopt(impl_->curl_handle, CURLOPT_HTTPHEADER, headers);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_WRITEFUNCTION, write_callback);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_WRITEDATA, &response);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_TIMEOUT, impl_->timeout_seconds);

  CURLcode res = curl_easy_perform(impl_->curl_handle);

  curl_slist_free_all(headers);

  return (res == CURLE_OK);
}

bool HttpClient::post_xml(const std::string& url, const std::string& xml_payload, std::string& response)
{
  if (!impl_->curl_handle) {
    return false;
  }

  response.clear();

  struct curl_slist* headers = nullptr;
  headers = curl_slist_append(headers, "Content-Type: text/xml; charset=utf-8");

  curl_easy_setopt(impl_->curl_handle, CURLOPT_URL, url.c_str());
  curl_easy_setopt(impl_->curl_handle, CURLOPT_POST, 1L);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_POSTFIELDS, xml_payload.c_str());
  curl_easy_setopt(impl_->curl_handle, CURLOPT_HTTPHEADER, headers);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_WRITEFUNCTION, write_callback);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_WRITEDATA, &response);
  curl_easy_setopt(impl_->curl_handle, CURLOPT_TIMEOUT, impl_->timeout_seconds);

  CURLcode res = curl_easy_perform(impl_->curl_handle);

  curl_slist_free_all(headers);

  return (res == CURLE_OK);
}

void HttpClient::set_timeout(long timeout_seconds)
{
  impl_->timeout_seconds = timeout_seconds;
}

} // namespace wms_data
