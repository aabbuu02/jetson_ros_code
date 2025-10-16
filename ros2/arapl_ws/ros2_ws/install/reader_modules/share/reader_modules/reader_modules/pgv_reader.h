#ifndef PGV_READER_H
#define PGV_READER_H

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <anscer_msgs/msg/pgv_pose.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <angles/angles.h>

#include <libserial/SerialPort.h>
#include <libserial/SerialStream.h>

#include <memory>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <vector>
#include <unistd.h>
#include <chrono>

struct BarcodeInfo
{
  double barcodeToMapX;
  double barcodeToMapY;
};

class PGVReader : public rclcpp::Node
{
public:
  PGVReader();
  ~PGVReader();

private:
  // Publishers
  rclcpp::Publisher<anscer_msgs::msg::PGVPose>::SharedPtr localPosePub_;
  rclcpp::Publisher<anscer_msgs::msg::PGVPose>::SharedPtr globalPosePub_;
  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr nodeMarkerPub_;
  
  // Timers
  rclcpp::TimerBase::SharedPtr dataTimer_;
  rclcpp::TimerBase::SharedPtr reconnectTimer_;

  // Member functions
  void dataReadCallback();
  void reconnectCallback();
  void initializeParameters();
  bool initializeConnection();
  bool reconnectSerial();
  void closeConnection();
  void sendTypeToScan();
  void sendRequestToScan();
  void mapVisualization();
  void readBarCodeInfoFromCSV();
  std::string convertToString(char *a, int size);
  bool isSerialHealthy();

  // Member variables - Connection Management
  bool m_serialConnected;
  int m_consecutiveErrors;
  int m_maxConsecutiveErrors;
  int m_checksumErrors;
  int m_readTimeouts;
  int m_reconnectAttempts;
  int m_maxReconnectAttempts;
  double m_reconnectDelay;
  std::chrono::steady_clock::time_point m_lastSuccessfulRead;
  
  // Member variables - Device Parameters
  int m_baudRate;
  int m_tagId;
  double m_angleOffset;
  double m_scaleX, m_scaleY;
  double m_loopRate;
  bool m_checkSumState;
  bool m_scanDetected;
  double m_pgvLocalX, m_pgvLocalY, m_pgvLocalAngle;
  double m_pgvGlobalX, m_pgvGlobalY, m_pgvGlobalAngle;
  
  std::string m_portName;
  std::string m_packagePath;
  std::string m_csvFileName;
  std::string m_barcodeLocalTopic;
  std::string m_barcodeGlobalTopic;
  
  std::unordered_map<int, BarcodeInfo> m_barCodeMap;
  std::shared_ptr<LibSerial::SerialPort> p_serialPort;
  visualization_msgs::msg::MarkerArray m_markerArray;
};

#endif
