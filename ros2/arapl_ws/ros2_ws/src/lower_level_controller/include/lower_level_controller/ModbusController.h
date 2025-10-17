#ifndef MODBUS_CONTROLLER_H
#define MODBUS_CONTROLLER_H

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "AHighLevelController.h"
#include "ModbusDevice.h"
#include "std_msgs/msg/int8.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/int32.hpp"
#include "std_msgs/msg/float32.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "anscer_msgs/msg/feedback.hpp"
#include "anscer_msgs/msg/pgv_pose.hpp"
#include "wms_data/msg/feedback.hpp"

#define ACR_DROPCOMMAND 0
#define ACR_PICKCOMMAND 1
#define LEFT_ORIENTATION 1
#define ACR_ORIENTATION 2
#define RIGHT_ORIENTATION 3
#define ROBOT_POWEROFF 2

class ModbusController : public AHighLevelController {
public:
    explicit ModbusController(std::shared_ptr<rclcpp::Node> node);
    virtual ~ModbusController() = default;

    void writeCommands(writeParameters &writeParams) override;
    void readCommands(readParameters &readParam) override;
    int32_t readEncoder(int encoder_num);
    void writeMotorControl(writeParameters &writeParams);
    void readEncoderValues(readParameters &readParam);

private:
    std::shared_ptr<rclcpp::Node> node_;

    rclcpp::Publisher<wms_data::msg::Feedback>::SharedPtr lifter_feedback_pub_;
    rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr power_service_;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr dist_sub_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr charge_sub_;

    /* Member Functions */
    void initialize();
    void initializeParameters();
    void initializeRobotReadyState();
    uint32_t convertDoubleInt(uint16_t low, uint16_t high);
    void distGoalCallback(const std_msgs::msg::Float32::SharedPtr distMsg);
    void chargeCallback(const std_msgs::msg::Int32::SharedPtr msg);

    /* Member variables */
    int m_modbus_port_;
    int m_buffer_feedback_;
    int m_power_off_pin_, m_brake_cmd_pin_;
    int m_left_motor_speed_pin_, m_right_motor_speed_pin_;
    int m_left_motor_encoder_pin_, m_right_motor_encoder_pin_;
    int m_left_motor_command_pin_, m_right_motor_command_pin_;
    int m_pick_location_command_pin_, m_pick_orientation_command_pin_;
    int m_drop_location_command_pin_, m_drop_orientation_command_pin_;
    int m_battery_voltage_pin_, m_battery_percentage_pin_;
    int m_time_stamp_current_reg_, m_time_stamp_update_reg_;
    int m_emergency_feedback_pin_;
    int m_mission_feedback_pin_, m_mission_confirmation_command_pin_;
    int m_mission_task_pin_, m_homing_distance_pin_;
    int m_buffer_feedback_pin_;
    int m_bot_shelf_pin_;
    int m_charge_pin_;
    
    // PLC Control Registers (from ZEUS PLC analysis)
    int m_picking_ready_signal_pin_;
    int m_picking_start_signal_pin_;
    int m_dropping_ready_signal_pin_;
    int m_dropping_start_signal_pin_;
    int m_robot_running_signal_pin_;
    int m_all_acr_fault_reset_pin_;
    int m_charging_signal_pin_;
    
    // Position Control Registers
    int m_picking_tt_0_deg_pin_;
    int m_picking_tt_90_deg_pin_;
    int m_picking_tt_180_deg_pin_;
    
    // Floor Selection Registers
    int m_picking_floor1_pin_;
    int m_picking_floor2_pin_;
    int m_picking_floor3_pin_;
    int m_picking_floor4_pin_;
    int m_picking_floor5_pin_;
    int m_picking_floor6_pin_;
    int m_picking_floor7_pin_;
    int m_picking_floor8_pin_;
    int m_picking_floor9_pin_;
    
    bool m_charge_ = false;
    int m_charge_number_ = 0;
    int32_t m_prev_left_encoder_ = 0;
    int32_t m_prev_right_encoder_ = 0;
    bool m_power_off_initiated_ = false;
    bool m_is_bin_retracted_ = true;
    bool m_mission_updated_ = false;
    bool m_mission_completed_ = false;
    bool m_top_module_initiated_ = false;
    
    wms_data::msg::Feedback feedback_msg_;
    uint16_t m_bot_shelf_no_ = 0;
    uint16_t m_homing_distance_ = 0;
    std::string m_last_id_ = "";
    std::string m_ip_address_;
    
    uint16_t write_reg_data_[WRITEREGISTERNUMBER] = {0};
    ModbusDevice m_modbus_device_;
};

#endif  // MODBUS_CONTROLLER_H
