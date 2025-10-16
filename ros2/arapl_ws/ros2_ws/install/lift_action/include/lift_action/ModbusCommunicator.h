#ifndef MODBUS_COMMUNICATOR_HPP
#define MODBUS_COMMUNICATOR_HPP

#include <rclcpp/rclcpp.hpp>
#include <modbus/modbus.h>
#include <iostream>
#include <string>
#include <memory>
#include <cerrno>
#include <cstring>

class ModbusCommunicator
{
public:
    ModbusCommunicator(std::shared_ptr<rclcpp::Node> node);
    ~ModbusCommunicator();
    
    uint16_t* readData(int numberOfRegisters);
    int readRegister(int registerNumber);
    int writeDataToRegister(int registorNumber, uint32_t data);
    int writeDataToRegisters(int registorNumber, char data[], int bytes);
    
    std::shared_ptr<rclcpp::Node> node_;

private:
    bool checkParameters();
    int readParameters();
    int initiateConnection();
    
    std::string m_ipAddress;
    int m_port;
    const char* m_ip;
    
    uint16_t p_readData[9];
    uint16_t m_registerData[1];
    uint16_t m_writeData;
    
    modbus_t* p_ptx;
    bool m_parameterExistanceFlag;
};

#endif // MODBUS_COMMUNICATOR_HPP
