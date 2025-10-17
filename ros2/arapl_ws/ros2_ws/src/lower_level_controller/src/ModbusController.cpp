#include "ModbusController.h"

// Add this at the top to define LEFT constant
#define LEFT 0
#define RIGHT 1

ModbusController::ModbusController(std::shared_ptr<rclcpp::Node> node) : node_(node) {
    RCLCPP_INFO(node_->get_logger(), "ModbusController Constructor called");
    
    power_service_ = node_->create_client<std_srvs::srv::Trigger>("power_control/master/agx/poweroff");
    lifter_feedback_pub_ = node_->create_publisher<wms_data::msg::Feedback>("lifterFeedback", 10);

    dist_sub_ = node_->create_subscription<std_msgs::msg::Float32>(
        "disatance_to_goal", 10,
        std::bind(&ModbusController::distGoalCallback, this, std::placeholders::_1));
    
    charge_sub_ = node_->create_subscription<std_msgs::msg::Int32>(
        "charge_battery", 10,
        std::bind(&ModbusController::chargeCallback, this, std::placeholders::_1));
    
    initialize();
}

void ModbusController::initialize() {
    initializeParameters();
    
    // Add this logging
    RCLCPP_INFO_STREAM(node_->get_logger(),
        "Attempting Modbus connection to " << m_ip_address_ << ":" << m_modbus_port_);
    
    m_modbus_device_.connectToDevice(m_ip_address_, m_modbus_port_);
    
    // Check if connection was successful
    if (!m_modbus_device_.isConnected()) {
        RCLCPP_ERROR(node_->get_logger(), 
            "Failed to establish Modbus connection! Check device and network.");
    } else {
        RCLCPP_INFO(node_->get_logger(), "Modbus connection initialized successfully");
        
        // Initialize robot in ready state
        initializeRobotReadyState();
    }
}

void ModbusController::distGoalCallback(const std_msgs::msg::Float32::SharedPtr distMsg) {
    m_homing_distance_ = (distMsg->data > 1.8f) ? 1 : 0;
}

void ModbusController::chargeCallback(const std_msgs::msg::Int32::SharedPtr msg) {
    m_charge_number_ = (msg->data == 0) ? 0 : 1;
    RCLCPP_ERROR_STREAM(node_->get_logger(), "Charge callback " << m_charge_number_);
}

void ModbusController::initializeParameters() {
    // Declare all parameters with existence checks
    if (!node_->has_parameter("ip_address")) {
        node_->declare_parameter("ip_address", "192.168.1.125");
    }
    
    if (!node_->has_parameter("port")) {
        node_->declare_parameter("port", 502);
    }
    
    // Modbus read parameters
    if (!node_->has_parameter("modbus_read.time_stamp_current")) {
        node_->declare_parameter("modbus_read.time_stamp_current", 0);
    }
    
    if (!node_->has_parameter("modbus_read.left_motor_speed")) {
        node_->declare_parameter("modbus_read.left_motor_speed", 2);
    }
    
    if (!node_->has_parameter("modbus_read.right_motor_speed")) {
        node_->declare_parameter("modbus_read.right_motor_speed", 3);
    }
    
    if (!node_->has_parameter("modbus_read.left_motor_encoder")) {
        node_->declare_parameter("modbus_read.left_motor_encoder", 4);
    }
    
    if (!node_->has_parameter("modbus_read.right_motor_encoder")) {
        node_->declare_parameter("modbus_read.right_motor_encoder", 6);
    }
    
    if (!node_->has_parameter("modbus_read.battery_voltage")) {
        node_->declare_parameter("modbus_read.battery_voltage", 9);
    }
    
    if (!node_->has_parameter("modbus_read.battery_percentage")) {
        node_->declare_parameter("modbus_read.battery_percentage", 10);
    }
    
    if (!node_->has_parameter("modbus_read.power_off")) {
        node_->declare_parameter("modbus_read.power_off", 11);
    }
    
    if (!node_->has_parameter("modbus_read.mission_feedback")) {
        node_->declare_parameter("modbus_read.mission_feedback", 17);
    }
    
    if (!node_->has_parameter("modbus_read.buffer_feedback")) {
        node_->declare_parameter("modbus_read.buffer_feedback", 18);
    }
    
    if (!node_->has_parameter("modbus_read.bot_shelfno")) {
        node_->declare_parameter("modbus_read.bot_shelfno", 67);
    }
    
    if (!node_->has_parameter("modbus_read.emergency_feedback")) {
        node_->declare_parameter("modbus_read.emergency_feedback", 17);
    }
    
    // Modbus write parameters
    if (!node_->has_parameter("modbus_write.time_stamp_update")) {
        node_->declare_parameter("modbus_write.time_stamp_update", 100);
    }
    
    if (!node_->has_parameter("modbus_write.left_motor_command")) {
        node_->declare_parameter("modbus_write.left_motor_command", 102);
    }
    
    if (!node_->has_parameter("modbus_write.right_motor_command")) {
        node_->declare_parameter("modbus_write.right_motor_command", 103);
    }
    
    if (!node_->has_parameter("modbus_write.pick_location")) {
        node_->declare_parameter("modbus_write.pick_location", 115);
    }
    
    if (!node_->has_parameter("modbus_write.pick_orientation")) {
        node_->declare_parameter("modbus_write.pick_orientation", 114);
    }
    
    if (!node_->has_parameter("modbus_write.drop_location")) {
        node_->declare_parameter("modbus_write.drop_location", 117);
    }
    
    if (!node_->has_parameter("modbus_write.drop_orientation")) {
        node_->declare_parameter("modbus_write.drop_orientation", 116);
    }
    
    if (!node_->has_parameter("modbus_write.mission_confirmation")) {
        node_->declare_parameter("modbus_write.mission_confirmation", 105);
    }
    
    if (!node_->has_parameter("modbus_write.tast_command")) {
        node_->declare_parameter("modbus_write.tast_command", 142);
    }
    
    if (!node_->has_parameter("modbus_write.homing_commmand")) {
        node_->declare_parameter("modbus_write.homing_commmand", 143);
    }
    
    if (!node_->has_parameter("modbus_write.charge_pin")) {
        node_->declare_parameter("modbus_write.charge_pin", 145);
    }
    
    if (!node_->has_parameter("modbus_write.brake_command")) {
        node_->declare_parameter("modbus_write.brake_command", 144);
    }
    
    // PLC Control Registers (from ZEUS PLC analysis)
    if (!node_->has_parameter("modbus_write.picking_ready_signal")) {
        node_->declare_parameter("modbus_write.picking_ready_signal", 13);
    }
    if (!node_->has_parameter("modbus_write.picking_start_signal")) {
        node_->declare_parameter("modbus_write.picking_start_signal", 14);
    }
    if (!node_->has_parameter("modbus_write.dropping_ready_signal")) {
        node_->declare_parameter("modbus_write.dropping_ready_signal", 15);
    }
    if (!node_->has_parameter("modbus_write.dropping_start_signal")) {
        node_->declare_parameter("modbus_write.dropping_start_signal", 16);
    }
    if (!node_->has_parameter("modbus_write.robot_running_signal")) {
        node_->declare_parameter("modbus_write.robot_running_signal", 41);
    }
    if (!node_->has_parameter("modbus_write.all_acr_fault_reset")) {
        node_->declare_parameter("modbus_write.all_acr_fault_reset", 43);
    }
    if (!node_->has_parameter("modbus_write.charging_signal")) {
        node_->declare_parameter("modbus_write.charging_signal", 71);
    }
    
    // Position Control Registers
    if (!node_->has_parameter("modbus_write.picking_tt_0_deg")) {
        node_->declare_parameter("modbus_write.picking_tt_0_deg", 1);
    }
    if (!node_->has_parameter("modbus_write.picking_tt_90_deg")) {
        node_->declare_parameter("modbus_write.picking_tt_90_deg", 2);
    }
    if (!node_->has_parameter("modbus_write.picking_tt_180_deg")) {
        node_->declare_parameter("modbus_write.picking_tt_180_deg", 3);
    }
    
    // Floor Selection Registers
    if (!node_->has_parameter("modbus_write.picking_floor1")) {
        node_->declare_parameter("modbus_write.picking_floor1", 4);
    }
    if (!node_->has_parameter("modbus_write.picking_floor2")) {
        node_->declare_parameter("modbus_write.picking_floor2", 5);
    }
    if (!node_->has_parameter("modbus_write.picking_floor3")) {
        node_->declare_parameter("modbus_write.picking_floor3", 6);
    }
    if (!node_->has_parameter("modbus_write.picking_floor4")) {
        node_->declare_parameter("modbus_write.picking_floor4", 7);
    }
    if (!node_->has_parameter("modbus_write.picking_floor5")) {
        node_->declare_parameter("modbus_write.picking_floor5", 8);
    }
    if (!node_->has_parameter("modbus_write.picking_floor6")) {
        node_->declare_parameter("modbus_write.picking_floor6", 9);
    }
    if (!node_->has_parameter("modbus_write.picking_floor7")) {
        node_->declare_parameter("modbus_write.picking_floor7", 10);
    }
    if (!node_->has_parameter("modbus_write.picking_floor8")) {
        node_->declare_parameter("modbus_write.picking_floor8", 11);
    }
    if (!node_->has_parameter("modbus_write.picking_floor9")) {
        node_->declare_parameter("modbus_write.picking_floor9", 12);
    }
    
    // Get parameters
    m_ip_address_ = node_->get_parameter("ip_address").as_string();
    m_modbus_port_ = node_->get_parameter("port").as_int();
    m_time_stamp_current_reg_ = node_->get_parameter("modbus_read.time_stamp_current").as_int();
    m_left_motor_speed_pin_ = node_->get_parameter("modbus_read.left_motor_speed").as_int();
    m_right_motor_speed_pin_ = node_->get_parameter("modbus_read.right_motor_speed").as_int();
    m_left_motor_encoder_pin_ = node_->get_parameter("modbus_read.left_motor_encoder").as_int();
    m_right_motor_encoder_pin_ = node_->get_parameter("modbus_read.right_motor_encoder").as_int();
    m_battery_voltage_pin_ = node_->get_parameter("modbus_read.battery_voltage").as_int();
    m_battery_percentage_pin_ = node_->get_parameter("modbus_read.battery_percentage").as_int();
    m_power_off_pin_ = node_->get_parameter("modbus_read.power_off").as_int();
    m_mission_feedback_pin_ = node_->get_parameter("modbus_read.mission_feedback").as_int();
    m_buffer_feedback_pin_ = node_->get_parameter("modbus_read.buffer_feedback").as_int();
    m_bot_shelf_pin_ = node_->get_parameter("modbus_read.bot_shelfno").as_int();
    m_emergency_feedback_pin_ = node_->get_parameter("modbus_read.emergency_feedback").as_int();
    m_time_stamp_update_reg_ = node_->get_parameter("modbus_write.time_stamp_update").as_int();
    m_left_motor_command_pin_ = node_->get_parameter("modbus_write.left_motor_command").as_int();
    m_right_motor_command_pin_ = node_->get_parameter("modbus_write.right_motor_command").as_int();
    m_pick_location_command_pin_ = node_->get_parameter("modbus_write.pick_location").as_int();
    m_pick_orientation_command_pin_ = node_->get_parameter("modbus_write.pick_orientation").as_int();
    m_drop_location_command_pin_ = node_->get_parameter("modbus_write.drop_location").as_int();
    m_drop_orientation_command_pin_ = node_->get_parameter("modbus_write.drop_orientation").as_int();
    m_mission_confirmation_command_pin_ = node_->get_parameter("modbus_write.mission_confirmation").as_int();
    m_mission_task_pin_ = node_->get_parameter("modbus_write.tast_command").as_int();
    m_homing_distance_pin_ = node_->get_parameter("modbus_write.homing_commmand").as_int();
    m_charge_pin_ = node_->get_parameter("modbus_write.charge_pin").as_int();
    m_brake_cmd_pin_ = node_->get_parameter("modbus_write.brake_command").as_int();
    
    // Get PLC Control Register parameters
    m_picking_ready_signal_pin_ = node_->get_parameter("modbus_write.picking_ready_signal").as_int();
    m_picking_start_signal_pin_ = node_->get_parameter("modbus_write.picking_start_signal").as_int();
    m_dropping_ready_signal_pin_ = node_->get_parameter("modbus_write.dropping_ready_signal").as_int();
    m_dropping_start_signal_pin_ = node_->get_parameter("modbus_write.dropping_start_signal").as_int();
    m_robot_running_signal_pin_ = node_->get_parameter("modbus_write.robot_running_signal").as_int();
    m_all_acr_fault_reset_pin_ = node_->get_parameter("modbus_write.all_acr_fault_reset").as_int();
    m_charging_signal_pin_ = node_->get_parameter("modbus_write.charging_signal").as_int();
    
    // Get Position Control Register parameters
    m_picking_tt_0_deg_pin_ = node_->get_parameter("modbus_write.picking_tt_0_deg").as_int();
    m_picking_tt_90_deg_pin_ = node_->get_parameter("modbus_write.picking_tt_90_deg").as_int();
    m_picking_tt_180_deg_pin_ = node_->get_parameter("modbus_write.picking_tt_180_deg").as_int();
    
    // Get Floor Selection Register parameters
    m_picking_floor1_pin_ = node_->get_parameter("modbus_write.picking_floor1").as_int();
    m_picking_floor2_pin_ = node_->get_parameter("modbus_write.picking_floor2").as_int();
    m_picking_floor3_pin_ = node_->get_parameter("modbus_write.picking_floor3").as_int();
    m_picking_floor4_pin_ = node_->get_parameter("modbus_write.picking_floor4").as_int();
    m_picking_floor5_pin_ = node_->get_parameter("modbus_write.picking_floor5").as_int();
    m_picking_floor6_pin_ = node_->get_parameter("modbus_write.picking_floor6").as_int();
    m_picking_floor7_pin_ = node_->get_parameter("modbus_write.picking_floor7").as_int();
    m_picking_floor8_pin_ = node_->get_parameter("modbus_write.picking_floor8").as_int();
    m_picking_floor9_pin_ = node_->get_parameter("modbus_write.picking_floor9").as_int();
}

uint32_t ModbusController::convertDoubleInt(uint16_t low, uint16_t high) {
    return (static_cast<uint32_t>(high) << 16) | (static_cast<uint32_t>(low) & 0xFFFF);
}

void ModbusController::writeCommands(writeParameters &writeParams) {
    // Check connection status before writing
    if (!m_modbus_device_.isConnected()) {
        RCLCPP_ERROR_THROTTLE(node_->get_logger(), *node_->get_clock(), 5000,
            "Modbus not connected - cannot write commands");
        return;
    }
    
    write_reg_data_[m_time_stamp_update_reg_ - STARTINGINDEX] = writeParams.m_updatedTimeStamp >> 16;
    write_reg_data_[(m_time_stamp_update_reg_ + 1) - STARTINGINDEX] = writeParams.m_updatedTimeStamp & 0xFFFF;
    write_reg_data_[m_homing_distance_pin_ - STARTINGINDEX] = m_homing_distance_;
    
    bool stopCondition = ((writeParams.m_leftMotorCommand == 0) && (writeParams.m_rightMotorCommand == 0));
    lift_action::msg::LiftAction lifterCommand = writeParams.m_lifterData;
    
    if (!stopCondition) {
        int leftDirection = (writeParams.m_leftDirection == 0) ? -1 : 1;
        int rightDirection = (writeParams.m_rightDirection == 0) ? -1 : 1;
        write_reg_data_[m_left_motor_command_pin_ - STARTINGINDEX] = (writeParams.m_leftMotorCommand * leftDirection) / 2;
        write_reg_data_[m_right_motor_command_pin_ - STARTINGINDEX] = (writeParams.m_rightMotorCommand * rightDirection) / 2;
    } else {
        write_reg_data_[m_left_motor_command_pin_ - STARTINGINDEX] = 0;
        write_reg_data_[m_right_motor_command_pin_ - STARTINGINDEX] = 0;
    }
    
    // Brake activation
    write_reg_data_[m_brake_cmd_pin_ - STARTINGINDEX] = lifterCommand.reached ? 1 : 0;
    write_reg_data_[m_charge_pin_ - STARTINGINDEX] = m_charge_number_;
    
    // Mission handling logic
    feedback_msg_.unique_id = lifterCommand.unique_id;
    feedback_msg_.action = lifterCommand.action;
    
    RCLCPP_INFO_STREAM(node_->get_logger(), "Mission END : " << m_mission_completed_ <<
        " Mission updated : " << m_mission_updated_ <<
        " Top module initiated : " << m_top_module_initiated_);
    
    if ((m_buffer_feedback_ > 0 || m_mission_completed_) && m_top_module_initiated_) {
        RCLCPP_WARN(node_->get_logger(), "Mission completed!");
        if (lifterCommand.action == ACR_PICKCOMMAND) {
            feedback_msg_.acr_shelf = m_buffer_feedback_;
        }
        feedback_msg_.status = true;
        m_top_module_initiated_ = false;
        m_last_id_ = lifterCommand.unique_id;
    }
    
    bool initiateTopModule = (lifterCommand.reached && (m_last_id_ != lifterCommand.unique_id));
    
    if (m_last_id_ != lifterCommand.unique_id) {
        feedback_msg_.status = false;
        feedback_msg_.acr_shelf = 0;
    }
    
    if (initiateTopModule) {
        m_top_module_initiated_ = true;
        if (lifterCommand.action == ACR_PICKCOMMAND) {
            write_reg_data_[m_pick_location_command_pin_ - STARTINGINDEX] = lifterCommand.shelf;
            write_reg_data_[m_pick_orientation_command_pin_ - STARTINGINDEX] =
                ((lifterCommand.rack % 2 == 0) ? LEFT_ORIENTATION : RIGHT_ORIENTATION);
            write_reg_data_[m_drop_location_command_pin_ - STARTINGINDEX] = m_buffer_feedback_;
            write_reg_data_[m_drop_orientation_command_pin_ - STARTINGINDEX] = ACR_ORIENTATION;
            write_reg_data_[m_mission_confirmation_command_pin_ - STARTINGINDEX] = !m_mission_updated_;
            write_reg_data_[m_mission_task_pin_ - STARTINGINDEX] = m_mission_updated_ ? 0 : 1;
            
            RCLCPP_INFO_STREAM(node_->get_logger(), "Pick command shelf: " << static_cast<int>(lifterCommand.shelf) <<
                " rack: " << static_cast<int>(lifterCommand.rack) <<
                " Buffer feedback: " << m_buffer_feedback_);
        } else {
            write_reg_data_[m_pick_location_command_pin_ - STARTINGINDEX] = m_buffer_feedback_;
            write_reg_data_[m_pick_orientation_command_pin_ - STARTINGINDEX] = ACR_ORIENTATION;
            write_reg_data_[m_drop_location_command_pin_ - STARTINGINDEX] = lifterCommand.shelf;
            write_reg_data_[m_drop_orientation_command_pin_ - STARTINGINDEX] =
                ((lifterCommand.rack % 2 == 0) ? LEFT_ORIENTATION : RIGHT_ORIENTATION);
            write_reg_data_[m_mission_confirmation_command_pin_ - STARTINGINDEX] = !m_mission_updated_;
            write_reg_data_[m_mission_task_pin_ - STARTINGINDEX] = m_mission_updated_ ? 0 : 2;
            
            RCLCPP_INFO_STREAM(node_->get_logger(), "Drop command shelf: " << static_cast<int>(lifterCommand.shelf) <<
                " rack: " << static_cast<int>(lifterCommand.rack) <<
                " Buffer feedback: " << m_buffer_feedback_);
        }
    } else {
        RCLCPP_DEBUG(node_->get_logger(), "Robot in moving state: resetting values");
    }
    
    lifter_feedback_pub_->publish(feedback_msg_);
    
    // Write to modbus
    if (!m_modbus_device_.writeData(STARTINGINDEX, WRITEREGISTERNUMBER, write_reg_data_)) {
        RCLCPP_ERROR_THROTTLE(node_->get_logger(), *node_->get_clock(), 5000,
            "Failed to write modbus data");
    }
}

void ModbusController::readCommands(readParameters &readParam) {
    // Check connection status before reading
    if (!m_modbus_device_.isConnected()) {
        RCLCPP_ERROR_THROTTLE(node_->get_logger(), *node_->get_clock(), 5000,
            "Modbus not connected to %s:%d", m_ip_address_.c_str(), m_modbus_port_);
        return;
    }
    
    if (!m_modbus_device_.readData(0, READREGISTERNUMBER)) {
        RCLCPP_ERROR_THROTTLE(node_->get_logger(), *node_->get_clock(), 5000,
            "Failed to read modbus data");
        return;
    }
    
    // Read encoder values
    uint16_t leftEncoderLow = m_modbus_device_.m_registerData[m_left_motor_encoder_pin_].to_ulong();
    uint16_t leftEncoderHigh = m_modbus_device_.m_registerData[m_left_motor_encoder_pin_ + 1].to_ulong();
    readParam.m_leftMotorEncoder = convertDoubleInt(leftEncoderLow, leftEncoderHigh);
    
    uint16_t rightEncoderLow = m_modbus_device_.m_registerData[m_right_motor_encoder_pin_].to_ulong();
    uint16_t rightEncoderHigh = m_modbus_device_.m_registerData[m_right_motor_encoder_pin_ + 1].to_ulong();
    readParam.m_rightMotorEncoder = convertDoubleInt(rightEncoderLow, rightEncoderHigh);
    
    // Read motor speeds
    readParam.m_leftMotorSpeed = static_cast<int>(m_modbus_device_.m_registerData[m_left_motor_speed_pin_].to_ulong());
    readParam.m_rightMotorSpeed = static_cast<int>(m_modbus_device_.m_registerData[m_right_motor_speed_pin_].to_ulong());
    
    // Read bot shelf number
    m_bot_shelf_no_ = m_modbus_device_.m_registerData[m_bot_shelf_pin_].to_ulong();
    readParam.m_botShelfNo = m_bot_shelf_no_;
    
    // Read mission feedback
    std::bitset<16> missionFeedback = m_modbus_device_.m_registerData[m_mission_feedback_pin_];
    m_mission_updated_ = missionFeedback[8];
    m_mission_completed_ = missionFeedback[9];
    m_buffer_feedback_ = m_modbus_device_.m_registerData[m_buffer_feedback_pin_].to_ulong();
    
    // Log confirmation feedback like ROS1
    RCLCPP_INFO_STREAM(node_->get_logger(), "Confirmation f/b :  " << m_mission_updated_ << 
        "  Mission status :  " << m_mission_completed_ << "   Top_module :" << m_top_module_initiated_);
    
    RCLCPP_DEBUG_STREAM(node_->get_logger(), "Left Encoder: " << readParam.m_leftMotorEncoder <<
        " Right Encoder: " << readParam.m_rightMotorEncoder);
}

void ModbusController::initializeRobotReadyState() {
    RCLCPP_INFO(node_->get_logger(), "Initializing robot in ready state...");
    
    // Set initial values for robot ready state
    m_mission_completed_ = true;  // Robot is ready
    m_mission_updated_ = false;   // No mission in progress
    m_top_module_initiated_ = false;  // No top module active
    m_buffer_feedback_ = 0;       // No buffer feedback
    m_charge_number_ = 0;         // Not charging
    m_homing_distance_ = 0;       // Not homing
    
    // Initialize write register data
    std::fill(write_reg_data_, write_reg_data_ + WRITEREGISTERNUMBER, 0);
    
    // CRITICAL: Set robot ready signals for white LED (healthy status)
    // These are the key registers that control the robot's health LED
    write_reg_data_[m_picking_ready_signal_pin_ - STARTINGINDEX] = 1;    // Register 13
    write_reg_data_[m_dropping_ready_signal_pin_ - STARTINGINDEX] = 1;   // Register 15
    write_reg_data_[m_robot_running_signal_pin_ - STARTINGINDEX] = 1;    // Register 41
    
    // Set mission confirmation to indicate robot is ready
    write_reg_data_[m_mission_confirmation_command_pin_ - STARTINGINDEX] = 1;
    write_reg_data_[m_mission_task_pin_ - STARTINGINDEX] = 0;  // No task
    
    // Write initial state to PLC
    if (m_modbus_device_.writeData(STARTINGINDEX, WRITEREGISTERNUMBER, write_reg_data_)) {
        RCLCPP_INFO(node_->get_logger(), "Robot initialized in ready state - White LED should be on");
        RCLCPP_INFO(node_->get_logger(), "PICKING_READY=1, DROPPING_READY=1, ROBOT_RUNNING=1");
    } else {
        RCLCPP_ERROR(node_->get_logger(), "Failed to initialize robot ready state");
    }
}

int32_t ModbusController::readEncoder(int encoder_num) {
    return (encoder_num == LEFT) ? m_prev_left_encoder_ : m_prev_right_encoder_;
}

void ModbusController::writeMotorControl(writeParameters &writeParams) {
    writeCommands(writeParams);
}

void ModbusController::readEncoderValues(readParameters &readParam) {
    readCommands(readParam);
}

