#include "ModbusDevice.h"
#include <iostream>
#include <cstring>
#include <errno.h>
#include <unistd.h>

ModbusDevice::~ModbusDevice() {
    if (m_modbusContext != nullptr) {
        modbus_close(m_modbusContext);
        modbus_free(m_modbusContext);
    }
}

void ModbusDevice::connectToDevice(const std::string& ipAddress, int port) {
    // Store connection parameters for reconnection
    m_ipAddress = ipAddress;
    m_port = port;
    
    std::cout << "Creating Modbus TCP context for " << ipAddress << ":" << port << std::endl;
    
    m_modbusContext = modbus_new_tcp(ipAddress.c_str(), port);
    if (m_modbusContext == nullptr) {
        std::cerr << "Unable to create modbus context for "
                  << ipAddress << ":" << port << std::endl;
        std::cerr << "Error: " << modbus_strerror(errno) << std::endl;
        return;
    }
    
    std::cout << "Modbus context created successfully" << std::endl;
    
    // CRITICAL: Set timeouts BEFORE connecting
    struct timeval response_timeout;
    response_timeout.tv_sec = 10;   // 10 seconds timeout
    response_timeout.tv_usec = 0;
    
    struct timeval byte_timeout;
    byte_timeout.tv_sec = 10;
    byte_timeout.tv_usec = 0;
    
    if (modbus_set_response_timeout(m_modbusContext, response_timeout.tv_sec, response_timeout.tv_usec) == -1) {
        std::cerr << "Failed to set response timeout: " << modbus_strerror(errno) << std::endl;
    }
    
    if (modbus_set_byte_timeout(m_modbusContext, byte_timeout.tv_sec, byte_timeout.tv_usec) == -1) {
        std::cerr << "Failed to set byte timeout: " << modbus_strerror(errno) << std::endl;
    }
    
    // Enable debug mode temporarily (can be removed in production)
    // modbus_set_debug(m_modbusContext, TRUE);
    
    std::cout << "Attempting connection to " << ipAddress << ":" << port 
              << " (timeout: " << response_timeout.tv_sec << "s)..." << std::endl;
    
    if (modbus_connect(m_modbusContext) == -1) {
        std::cerr << "Connection failed to " << ipAddress << ":" << port << std::endl;
        std::cerr << "Error: " << modbus_strerror(errno) 
                  << " (errno: " << errno << ")" << std::endl;
        modbus_free(m_modbusContext);
        m_modbusContext = nullptr;
        return;
    }
    
    // Small delay to ensure connection is stable
    usleep(100000);  // 100ms
    
    // Disable debug mode after successful connection
    // modbus_set_debug(m_modbusContext, FALSE);
    
    std::cout << "✓ Modbus connection established to " << ipAddress << ":" << port << std::endl;
}

bool ModbusDevice::reconnect() {
    std::cout << "Attempting to reconnect to Modbus device..." << std::endl;
    
    if (m_modbusContext != nullptr) {
        modbus_close(m_modbusContext);
        modbus_free(m_modbusContext);
        m_modbusContext = nullptr;
    }
    
    connectToDevice(m_ipAddress, m_port);
    return isConnected();
}

bool ModbusDevice::readData(int startAddress, int numberOfRegisters) {
    if (m_modbusContext == nullptr) {
        std::cerr << "Modbus context is null - not connected" << std::endl;
        return false;
    }
    
    // Use modbus_read_registers instead of modbus_read_holding_registers
    int rc = modbus_read_registers(m_modbusContext, startAddress, numberOfRegisters, m_readBuffer);
    if (rc == -1) {
        std::cerr << "Failed to read registers from address " << startAddress 
                  << ": " << modbus_strerror(errno) << std::endl;
        return false;
    }
    
    m_registerData.clear();
    for (int i = 0; i < numberOfRegisters; ++i) {
        m_registerData.push_back(std::bitset<16>(m_readBuffer[i]));
    }
    
    return true;
}

bool ModbusDevice::writeData(int startAddress, int numberOfRegisters, uint16_t *data) {
    if (m_modbusContext == nullptr) {
        std::cerr << "Modbus context is null - not connected" << std::endl;
        return false;
    }
    
    int rc = modbus_write_registers(m_modbusContext, startAddress, numberOfRegisters, data);
    if (rc == -1) {
        std::cerr << "Failed to write registers to address " << startAddress 
                  << ": " << modbus_strerror(errno) << std::endl;
        return false;
    }
    
    return true;
}

