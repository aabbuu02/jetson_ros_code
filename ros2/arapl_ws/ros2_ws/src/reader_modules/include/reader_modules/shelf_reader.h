#ifndef SHELF_READER_H
#define SHELF_READER_H

#include <rclcpp/rclcpp.hpp>
#include <anscer_msgs/srv/shelf_reader.hpp>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <poll.h>
#include <cstring>
#include <string>
#include <memory>

class ShelfReader : public rclcpp::Node
{
public:
  ShelfReader();
  ~ShelfReader();

  struct sockaddr_in m_socketAddress;
  struct pollfd fd;

private:
  // Service server
  rclcpp::Service<anscer_msgs::srv::ShelfReader>::SharedPtr shelfSrvc_;

  // Member functions
  void initializeParameters();
  void initializeConnection();
  void stopReadData();
  std::string startReadData();
  void shelfLocation(
    const std::shared_ptr<anscer_msgs::srv::ShelfReader::Request> request,
    std::shared_ptr<anscer_msgs::srv::ShelfReader::Response> response);

  // Member variables
  int m_socket = 0;
  int m_clientFD;
  int m_portNumber;
  std::string m_ipAddress;
  
  const char* m_triggerOn = "||>TRIGGER ON\r\n";
  const char* m_triggerOff = "||>TRIGGER OFF\r\n";
};

#endif
