#ifndef UTILITIES_H
#define UTILITIES_H

#include <chrono>
#include <cmath>
#include <memory>
#include <string>
#include <vector>
#include <bitset>
#include "std_msgs/msg/int8.hpp"
#include "anscer_msgs/msg/motor_diagnostics.hpp"
#include "anscer_msgs/msg/motor_diagnostics_array.hpp"
#include "lift_action/msg/lift_action.hpp"
#include "wms_data/msg/feedback.hpp"

constexpr int MODBUS_DEVICE = 1;
constexpr int MODBUS_ROBOTEQ_DEVICE = 2;
constexpr int ODRIVE_DEVICE = 3;
constexpr int RAINBOW_DEVICE = 4;

struct readParameters {
    int m_currentTimeStamp = 0;
    int m_leftMotorSpeed = 0;
    int m_rightMotorSpeed = 0;
    int m_leftDirection = 0;
    int m_rightDirection = 0;
    int32_t m_leftMotorEncoder = 0;
    int32_t m_rightMotorEncoder = 0;
    int32_t m_botShelfNo = 0;
    double m_batteryVoltage = 0.0;
    double m_batteryPercentage = 0.0;
    bool m_emergencyFeedback = false;
};

struct writeParameters {
    int m_updatedTimeStamp = 0;
    int m_leftMotorCommand = 0;
    int m_rightMotorCommand = 0;
    int m_leftDirection = 0;
    int m_rightDirection = 0;
    int m_heartBeat = 0;
    lift_action::msg::LiftAction m_lifterData;
    int m_controllerMode = 0;
};

namespace Utilities {
    /**
     * @brief Computes time in milliseconds
     * @returns time in millis based on system clock
     */
    inline int64_t millis() {
        int64_t ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::high_resolution_clock::now().time_since_epoch()
        ).count();
        return ms;
    }
}

#endif  // UTILITIES_H
