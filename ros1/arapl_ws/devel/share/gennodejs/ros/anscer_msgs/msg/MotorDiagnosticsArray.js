// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let MotorDiagnostics = require('./MotorDiagnostics.js');

//-----------------------------------------------------------

class MotorDiagnosticsArray {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.motor_diagnostics = null;
    }
    else {
      if (initObj.hasOwnProperty('motor_diagnostics')) {
        this.motor_diagnostics = initObj.motor_diagnostics
      }
      else {
        this.motor_diagnostics = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorDiagnosticsArray
    // Serialize message field [motor_diagnostics]
    // Serialize the length for message field [motor_diagnostics]
    bufferOffset = _serializer.uint32(obj.motor_diagnostics.length, buffer, bufferOffset);
    obj.motor_diagnostics.forEach((val) => {
      bufferOffset = MotorDiagnostics.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorDiagnosticsArray
    let len;
    let data = new MotorDiagnosticsArray(null);
    // Deserialize message field [motor_diagnostics]
    // Deserialize array length for message field [motor_diagnostics]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.motor_diagnostics = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.motor_diagnostics[i] = MotorDiagnostics.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.motor_diagnostics.forEach((val) => {
      length += MotorDiagnostics.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MotorDiagnosticsArray';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e04d5a81a4ba18dbd66dc15d7fdf969a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    MotorDiagnostics[] motor_diagnostics
    
    ================================================================================
    MSG: anscer_msgs/MotorDiagnostics
    string name
    MotorFaultFlags fault_flags
    MotorStatusFlags status_flags
    
    ================================================================================
    MSG: anscer_msgs/MotorFaultFlags
    bool overheat
    bool overvoltage
    bool undervoltage
    bool short_circuit
    bool emergency_stop
    bool motor_setup_fault
    bool mosfet_failure
    bool default_configuration
    
    ================================================================================
    MSG: anscer_msgs/MotorStatusFlags
    bool serial_mode
    bool pulse_mode
    bool analog_mode
    bool power_stage_off
    bool stall_detected
    bool at_limit
    bool unused
    bool micro_basic_script_running
    bool motor_tuning_mode
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MotorDiagnosticsArray(null);
    if (msg.motor_diagnostics !== undefined) {
      resolved.motor_diagnostics = new Array(msg.motor_diagnostics.length);
      for (let i = 0; i < resolved.motor_diagnostics.length; ++i) {
        resolved.motor_diagnostics[i] = MotorDiagnostics.Resolve(msg.motor_diagnostics[i]);
      }
    }
    else {
      resolved.motor_diagnostics = []
    }

    return resolved;
    }
};

module.exports = MotorDiagnosticsArray;
