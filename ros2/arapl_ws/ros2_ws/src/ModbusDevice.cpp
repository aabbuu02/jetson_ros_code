#include "ModbusDevice.h"
#include <iostream>
#include <cstring>
#include <errno.h>

ModbusDevice::~ModbusDevice() {
    if (m_modbusContext != nullptr) {
        modbus_close(m_modbusContext);
        modbus_free(m_modbusContext);
    }
}

void ModbusDevice::connectToDevice(const std::string& ipAddress, int port) {
    std::cout << "Creating Modbus TCP context for " << ipAddress << ":" << port << std::endl;
    
    m_modbusContext = modbus_new_tcp(ipAddress.c_str(), port);
    if (m_modbusContext == nullptr) {
        std::cerr << "Unable to create modbus context for " 
                  << ipAddress << ":" << port << std::endl;
        std::cerr << "Error: " << modbus_strerror(errno) << std::endl;
        return;
    }
    
    std::cout << "Modbus context created successfully, attempting connection..." << std::endl;
    
    if (modbus_connect(m_modbusContext) == -1) {
        std::cerr << "Connection failed to " << ipAddress << ":" << port << std::endl;
        std::cerr << "Error: " << modbus_strerror(errno) << std::endl;
        modbus_free(m_modbusContext);
        m_modbusContext = nullptr;
        return;
    }
    
    std::cout << "Modbus connection established to " << ipAddress << ":" << port << std::endl;
}

bool ModbusDevice::readData(int startAddress, int numberOfRegisters) {
    if (m_modbusContext == nullptr) {
        std::cerr << "Modbus context is null" << std::endl;
        return false;
    }
    
    // Use modbus_read_registers instead of modbus_read_holding_registers
    int rc = modbus_read_registers(m_modbusContext, startAddress, numberOfRegisters, m_readBuffer);
    
    if (rc == -1) {
        std::cerr << "Failed to read registers: " << modbus_strerror(errno) << std::endl;
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
        std::cerr << "Modbus context is null" << std::endl;
        return false;
    }
    
    int rc = modbus_write_registers(m_modbusContext, startAddress, numberOfRegisters, data);
    
    if (rc == -1) {
        std::cerr << "Failed to write registers: " << modbus_strerror(errno) << std::endl;
        return false;
    }
    
    return true;
}
