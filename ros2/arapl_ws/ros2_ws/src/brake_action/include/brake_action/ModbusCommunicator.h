#ifndef BRAKE_ACTION__MODBUS_COMMUNICATOR_H_
#define BRAKE_ACTION__MODBUS_COMMUNICATOR_H_

#include <rclcpp/rclcpp.hpp>
#include <modbus/modbus.h>
#include <memory>
#include <string>
#include <cerrno>

namespace brake_action
{

class ModbusCommunicator : public rclcpp::Node
{
public:
  explicit ModbusCommunicator(const std::string& node_name = "modbus_communicator");
  ~ModbusCommunicator();

  // Delete copy constructor and assignment operator
  ModbusCommunicator(const ModbusCommunicator&) = delete;
  ModbusCommunicator& operator=(const ModbusCommunicator&) = delete;

  /**
   * @brief Write data to Modbus register
   * @param register_number Target register number
   * @param data Data value to write
   * @return true if write successful, false otherwise
   */
  bool writeDataToRegister(int register_number, uint16_t data);

  /**
   * @brief Check if Modbus connection is established
   * @return true if connected, false otherwise
   */
  bool isConnected() const { return is_connected_; }

private:
  /**
   * @brief Declare and read all parameters
   */
  void initializeParameters();

  /**
   * @brief Validate that all required parameters are set
   * @return true if all parameters valid, false otherwise
   */
  bool validateParameters();

  /**
   * @brief Establish Modbus TCP connection
   * @return true if connection successful, false otherwise
   */
  bool initiateConnection();

  /**
   * @brief Close Modbus connection safely
   */
  void closeConnection();

  // Parameters
  std::string ip_address_;
  int port_;

  // Modbus context
  modbus_t* modbus_ctx_;
  bool is_connected_;
};

}  // namespace brake_action

#endif  // BRAKE_ACTION__MODBUS_COMMUNICATOR_H_
