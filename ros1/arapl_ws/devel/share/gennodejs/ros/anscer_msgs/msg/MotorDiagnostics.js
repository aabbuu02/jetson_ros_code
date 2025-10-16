// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let MotorFaultFlags = require('./MotorFaultFlags.js');
let MotorStatusFlags = require('./MotorStatusFlags.js');

//-----------------------------------------------------------

class MotorDiagnostics {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.fault_flags = null;
      this.status_flags = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('fault_flags')) {
        this.fault_flags = initObj.fault_flags
      }
      else {
        this.fault_flags = new MotorFaultFlags();
      }
      if (initObj.hasOwnProperty('status_flags')) {
        this.status_flags = initObj.status_flags
      }
      else {
        this.status_flags = new MotorStatusFlags();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorDiagnostics
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [fault_flags]
    bufferOffset = MotorFaultFlags.serialize(obj.fault_flags, buffer, bufferOffset);
    // Serialize message field [status_flags]
    bufferOffset = MotorStatusFlags.serialize(obj.status_flags, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorDiagnostics
    let len;
    let data = new MotorDiagnostics(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [fault_flags]
    data.fault_flags = MotorFaultFlags.deserialize(buffer, bufferOffset);
    // Deserialize message field [status_flags]
    data.status_flags = MotorStatusFlags.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.name);
    return length + 21;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MotorDiagnostics';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0632e6a21795b5a1cc88be69506a4af5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new MotorDiagnostics(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.fault_flags !== undefined) {
      resolved.fault_flags = MotorFaultFlags.Resolve(msg.fault_flags)
    }
    else {
      resolved.fault_flags = new MotorFaultFlags()
    }

    if (msg.status_flags !== undefined) {
      resolved.status_flags = MotorStatusFlags.Resolve(msg.status_flags)
    }
    else {
      resolved.status_flags = new MotorStatusFlags()
    }

    return resolved;
    }
};

module.exports = MotorDiagnostics;
