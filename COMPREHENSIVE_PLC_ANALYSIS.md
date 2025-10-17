# ZEUS PLC Program Comprehensive Analysis

## 🎯 Executive Summary

Based on the analysis of the ZEUS PLC program PDFs, I've identified the complete robot control system architecture. This is a sophisticated automated storage and retrieval system (ASRS) with multiple motor controls, safety systems, and communication protocols.

## 📡 ROS-PLC Communication Protocol

### Modbus Register Mapping (ROS → PLC)

**Picking Operations:**
- `PICKING_TT_0_DEG_SELECTION_FROM_ROS` (Register 1) - Turntable 0° position
- `PICKING_TT_90_DEG_SELECTION_FROM_ROS` (Register 2) - Turntable 90° position  
- `PICKING_TT_180_DEG_SELECTION_FROM_ROS` (Register 3) - Turntable 180° position
- `PICKING_FLOOR1-9_CALL_READY_SIGNAL_FROM_ROS` (Registers 4-12) - Floor selection
- `PICKING_READY_SIGNAL_FROM_ROS` (Register 13) - **CRITICAL: Robot ready status**
- `PICKING_START_SIGNAL_FROM_ROS` (Register 14) - Start picking operation

**Dropping Operations:**
- `DROPPING_TT_0/90/180_DEG_SELECTION_FROM_ROS` (Registers 17-19) - Turntable positions
- `DROPPING_PICK_FLOOR1-9_CALL_READY_SIGNAL_FROM_ROS` (Registers 20-28) - Pick floor selection
- `DROPPING_PLACE_FLOOR1-9_CALL_READY_SIGNAL_FROM_ROS` (Registers 29-37) - Place floor selection
- `DROPPING_READY_SIGNAL_FROM_ROS` (Register 15) - **CRITICAL: Robot ready for dropping**
- `DROPPING_START_SIGNAL_FROM_ROS` (Register 16) - Start dropping operation

**System Control:**
- `ROBOT_RUNNING_FB_SIGNAL_FROM_ROS` (Register 41) - Robot running status
- `ALL_ACR_FAULT_TO_ROS` (Register 42) - All ACR faults
- `ALL_ACR_FAULT_RESET_TO_ROS` (Register 43) - Reset all faults
- `EMG_STOP_FAULT_TO_ROS` (Register 45) - Emergency stop
- `CHARGING_SIGNAL_FROM_ROS` (Register 71) - Charging control

**Motor Fault Monitoring:**
- `LIFTER_DRIVE_FAULT_TO_ROS` (Register 47)
- `TT_DRIVE_FAULT_TO_ROS` (Register 49) 
- `EXTRACTOR_DRIVE_FAULT_TO_ROS` (Register 51)
- `SWING_ARM_DRIVE_FAULT_TO_ROS` (Register 53)

**Sensor Status:**
- `LIFTER_HOME_SENSOR_INDICATION_TO_ROS` (Register 65)
- `TT_HOME_SENSOR_INDICATION_TO_ROS` (Register 67)
- `EXTRACTOR_HOME_SENSOR_INDICATION_TO_ROS` (Register 69)

## 🤖 Robot System Architecture

### Core Components

1. **LIFTER MOTOR** - Vertical movement control
   - Floor-based positioning (9 floors)
   - Home position detection
   - Modbus communication with drive

2. **EXTRACTOR MOTOR** - Horizontal extraction mechanism
   - Forward/backward movement
   - Load sensing and detection
   - Safety interlocks

3. **SWING ARM MOTOR** - Rotational positioning
   - 0° and 90° positions
   - Position sensors for feedback
   - Safety limits

4. **TT MOTOR (Turntable)** - Rotational base
   - 0°, 90°, 180° positions
   - Home position detection
   - Position feedback

### Automation Logic

**Picking Cycle States:**
1. `PICKING_CYCLE_READY_FOR_AUTO` - System ready check
2. `PICKING_AUTO_CYCLE_START` - Cycle initiation
3. Position selection and movement
4. Extraction and gripping
5. Lifting and verification
6. Completion and reset

**Dropping Cycle States:**
1. `DROPPING_CYCLE_READY_FOR_AUTO` - System ready check
2. `DROPPING_AUTO_CYCLE_START` - Cycle initiation
3. Position selection and movement
4. Lowering and releasing
5. Verification and completion
6. Reset for next operation

## 🚨 Safety Systems

### Critical Safety Conditions
- `AUTO_MODE_ON` - Must be enabled for operation
- `ACR_ALL_FAULT` - No faults present
- `EXTRACTOR_ZERO_POSITION` - Extractor at home
- `SWING_ARM_AT_OPEN_POS` - Swing arm in safe position
- `EXTRACTOR_AT_REV_POS` - Extractor in reverse position

### Emergency Systems
- Emergency stop functionality
- Fault detection and reporting
- Safety interlock systems
- Position verification

## 🔧 Motor Control Parameters

### LIFTER MOTOR
- **Communication**: Modbus TCP
- **Baud Rate**: 9600
- **Control**: Position-based floor selection
- **Safety**: Home position detection
- **Floors**: 9 levels (1-9)

### EXTRACTOR MOTOR  
- **Communication**: Modbus TCP
- **Control**: Forward/backward movement
- **Safety**: Load sensing, position limits
- **Feedback**: Home position sensor

### SWING ARM MOTOR
- **Positions**: 0°, 90°
- **Control**: Position-based
- **Safety**: Position sensors
- **Feedback**: Position verification

### TT MOTOR (Turntable)
- **Positions**: 0°, 90°, 180°
- **Control**: Position-based
- **Safety**: Home position detection
- **Feedback**: Position sensors

## 🎯 Key Findings for ROS2 Integration

### 1. **Robot Health Status (White LED)**
The robot shows healthy status (white LED) when:
- `PICKING_READY_SIGNAL_FROM_ROS` = TRUE (Register 13)
- `DROPPING_READY_SIGNAL_FROM_ROS` = TRUE (Register 15)
- `AUTO_MODE_ON` = TRUE
- `ACR_ALL_FAULT` = FALSE
- All safety conditions met

### 2. **Mission Status Control**
- **Ready State**: Set both PICKING_READY and DROPPING_READY signals
- **Mission Start**: Use PICKING_START or DROPPING_START signals
- **Floor Selection**: Use appropriate floor call signals (1-9)
- **Orientation**: Use TT position selection (0°, 90°, 180°)

### 3. **Safety Integration**
- Monitor all fault registers continuously
- Implement emergency stop handling
- Verify safety conditions before operations
- Handle fault reset procedures

### 4. **Motor Control Integration**
- Implement position-based control for all motors
- Monitor home position sensors
- Handle motor fault detection
- Implement safety interlocks

## 🔄 ROS2 Implementation Requirements

### Critical Modbus Commands to Implement

```cpp
// Robot Health Status
write_register(13, 1);  // PICKING_READY_SIGNAL_FROM_ROS
write_register(15, 1);  // DROPPING_READY_SIGNAL_FROM_ROS
write_register(41, 1);  // ROBOT_RUNNING_FB_SIGNAL_FROM_ROS

// Mission Control
write_register(14, 1);  // PICKING_START_SIGNAL_FROM_ROS
write_register(16, 1);  // DROPPING_START_SIGNAL_FROM_ROS

// Position Selection
write_register(1, 1);   // PICKING_TT_0_DEG_SELECTION
write_register(4, 1);   // PICKING_FLOOR1_CALL_READY
```

### State Machine Implementation
1. **IDLE** → Set ready signals, wait for mission
2. **READY** → Monitor safety conditions, show white LED
3. **POSITIONING** → Set floor and orientation
4. **EXECUTING** → Start operation, monitor progress
5. **COMPLETED** → Reset signals, return to IDLE
6. **ERROR** → Handle faults, reset system

### Safety Monitoring
- Continuous monitoring of fault registers
- Emergency stop handling
- Position verification
- Load sensing validation

## 🎯 Immediate Action Items

1. **Update ModbusController** with correct register mappings
2. **Implement robot health status** using ready signals
3. **Add motor control** for all 4 motor types
4. **Implement safety monitoring** for all fault conditions
5. **Create state machines** for picking and dropping operations
6. **Add position control** for floors and orientations

## 📊 Performance Optimization

- **Communication Frequency**: 30Hz for real-time control
- **Safety Monitoring**: Continuous fault checking
- **Position Accuracy**: Floor-level precision
- **Response Time**: <100ms for safety responses

This comprehensive analysis provides the complete foundation for implementing the ROS2 system to properly control the ZEUS PLC-based robot system.