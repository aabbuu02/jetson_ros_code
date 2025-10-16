#include <bitset>
#include "RoboteqController.h"

RoboteqController::RoboteqController(std::shared_ptr<rclcpp::Node> node)
    : node_(node)
{
    RCLCPP_INFO(node_->get_logger(), "RoboteqController Constructor called");
    initialize();
}

void RoboteqController::initialize()
{
    initializeParameters();
    
    int statusConnection = m_roboteqDevice.Connect(m_roboteqPort);
    
    if (statusConnection != RQ_SUCCESS)
    {
        std::cout << "Error connecting to device: " << statusConnection << "." << std::endl;
        RCLCPP_FATAL(node_->get_logger(), "Failed to connect to Roboteq device");
        exit(0);
    }
    else if (statusConnection == RQ_SUCCESS)
    {
        std::cout << "Roboteq device connected successfully" << std::endl;
        RCLCPP_INFO(node_->get_logger(), "Roboteq device connected successfully");
    }
}

void RoboteqController::initializeParameters()
{
   // node_->declare_parameter("roboteq_port", "/dev/roboteq_driver");
    m_roboteqPort = node_->get_parameter("roboteq_port").as_string();
}

void RoboteqController::writeCommands(writeParameters &writeParams)
{
    int leftMotorCommand = m_roboteqDevice.SetCommand(_MOTVEL, 1, writeParams.m_leftMotorCommand);
    int rightMotorCommand = m_roboteqDevice.SetCommand(_MOTVEL, 2, writeParams.m_rightMotorCommand);
    
    // Check for errors
    if(leftMotorCommand != RQ_SUCCESS)
    {
        RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000, 
                            "Failed to set left motor command: %d", leftMotorCommand);
    }
    if(rightMotorCommand != RQ_SUCCESS)
    {
        RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000,
                            "Failed to set right motor command: %d", rightMotorCommand);
    }
}

void RoboteqController::readCommands(readParameters &readParam)
{
    anscer_msgs::msg::MotorDiagnosticsArray motorDiagnosticsArray;
    int batteryVoltage = 0;
    int batteryCurrent = 0;
    
    int leftMotorRead = m_roboteqDevice.GetValue(_ABCNTR, 2, m_leftEncoderReading);
    int rightMotorRead = m_roboteqDevice.GetValue(_ABCNTR, 1, m_rightEncoderReading);
    
    if(leftMotorRead != RQ_SUCCESS || rightMotorRead != RQ_SUCCESS)
    {
        RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000,
                            "Failed to read encoder values");
    }
    
    RCLCPP_DEBUG_STREAM(node_->get_logger(), "LEFT " << m_leftEncoderReading << " RIGHT " << m_rightEncoderReading);
    
    int leftSpeed = m_roboteqDevice.GetValue(_ABSPEED, 2, m_leftSpeed);
    int rightSpeed = m_roboteqDevice.GetValue(_ABSPEED, 1, m_rightSpeed);
    
    if(leftSpeed != RQ_SUCCESS || rightSpeed != RQ_SUCCESS)
    {
        RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000,
                            "Failed to read speed values");
    }
    
    readMotorControllerFlags(motorDiagnosticsArray);
    readBatteryParameters(batteryVoltage, batteryCurrent);
    
    readParam.m_leftEncoder = m_leftEncoderReading;
    readParam.m_rightEncoder = m_rightEncoderReading;
    readParam.m_leftSpeed = m_leftSpeed;
    readParam.m_rightSpeed = m_rightSpeed;
    readParam.m_batteryVoltage = batteryVoltage;
    readParam.m_batteryCurrent = batteryCurrent;
    readParam.m_roboteqDiagnosticsFeedback = motorDiagnosticsArray;
}

void RoboteqController::setMotorFaultFlags(int setfaultFlags, 
                                            anscer_msgs::msg::MotorFaultFlags &motorFaultFlags)
{
    std::bitset<16> setFaultBits(setfaultFlags);
    motorFaultFlags.overheat = setFaultBits[0];
    motorFaultFlags.overvoltage = setFaultBits[1];
    motorFaultFlags.undervoltage = setFaultBits[2];
    motorFaultFlags.short_circuit = setFaultBits[3];
    motorFaultFlags.emergency_stop = setFaultBits[4];
    motorFaultFlags.motor_setup_fault = setFaultBits[5];
    motorFaultFlags.mosfet_failure = setFaultBits[6];
    motorFaultFlags.default_configuration = setFaultBits[7];
}

void RoboteqController::setMotorStatusFlags(int setStatusFlags, 
                                             anscer_msgs::msg::MotorStatusFlags &motorStatusFlags)
{
    std::bitset<16> setStatusBits(setStatusFlags);
    motorStatusFlags.serial_mode = setStatusBits[0];
    motorStatusFlags.pulse_mode = setStatusBits[1];
    motorStatusFlags.analog_mode = setStatusBits[2];
    motorStatusFlags.power_stage_off = setStatusBits[3];
    motorStatusFlags.stall_detected = setStatusBits[4];
    motorStatusFlags.at_limit = setStatusBits[5];
    motorStatusFlags.unused = setStatusBits[6];
    motorStatusFlags.micro_basic_script_running = setStatusBits[7];
    motorStatusFlags.motor_tuning_mode = setStatusBits[8];
}

void RoboteqController::readMotorControllerFlags(anscer_msgs::msg::MotorDiagnosticsArray &motorDiagnosticsArray)
{
    int rightFfRetVal = m_roboteqDevice.GetValue(_FF, 1, m_motorFaultFlags);
    int rightFsRetVal = m_roboteqDevice.GetValue(_FS, 1, m_motorStatusFlags);
    
    if(rightFfRetVal != RQ_SUCCESS || rightFsRetVal != RQ_SUCCESS)
    {
        RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000,
                            "Failed to read motor controller flags");
    }
    
    anscer_msgs::msg::MotorDiagnostics motorDiagnostics;
    motorDiagnostics.name = "motor_controller";
    
    setMotorFaultFlags(m_motorFaultFlags, motorDiagnostics.fault_flags);
    setMotorStatusFlags(m_motorStatusFlags, motorDiagnostics.status_flags);
    
    motorDiagnosticsArray.motor_diagnostics.push_back(motorDiagnostics);
}

void RoboteqController::readBatteryParameters(int &batteryVoltage, int &batteryCurrent)
{
    int voltage = m_roboteqDevice.GetValue(_VOLTS, 2, batteryVoltage);
    int current = m_roboteqDevice.GetValue(_BATAMPS, batteryCurrent);
    
    if(voltage != RQ_SUCCESS || current != RQ_SUCCESS)
    {
        RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000,
                            "Failed to read battery parameters");
    }
    
    batteryVoltage = batteryVoltage / 10;
}
