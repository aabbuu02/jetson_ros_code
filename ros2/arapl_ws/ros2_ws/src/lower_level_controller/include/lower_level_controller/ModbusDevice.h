#ifndef MODBUSDEVICE_H
#define MODBUSDEVICE_H

#include <string>
#include <vector>
#include <bitset>
#include <modbus/modbus.h>

#define READREGISTERNUMBER 100
#define WRITEREGISTERNUMBER 100

class ModbusDevice {
public:
    ModbusDevice() = default;
    ~ModbusDevice();
    
    void connectToDevice(const std::string& ipAddress, int port);
    bool reconnect();
    bool isConnected() const { return m_modbusContext != nullptr; }
    bool readData(int startAddress, int numberOfRegisters);
    bool writeData(int startAddress, int numberOfRegisters, uint16_t* data);
    
    std::vector<std::bitset<16>> m_registerData;

private:
    modbus_t* m_modbusContext = nullptr;
    uint16_t m_readBuffer[READREGISTERNUMBER];
    std::string m_ipAddress;
    int m_port;
};

#endif // MODBUSDEVICE_H

