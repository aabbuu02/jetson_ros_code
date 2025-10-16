// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class MotorStatusFlags {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.serial_mode = null;
      this.pulse_mode = null;
      this.analog_mode = null;
      this.power_stage_off = null;
      this.stall_detected = null;
      this.at_limit = null;
      this.unused = null;
      this.micro_basic_script_running = null;
      this.motor_tuning_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('serial_mode')) {
        this.serial_mode = initObj.serial_mode
      }
      else {
        this.serial_mode = false;
      }
      if (initObj.hasOwnProperty('pulse_mode')) {
        this.pulse_mode = initObj.pulse_mode
      }
      else {
        this.pulse_mode = false;
      }
      if (initObj.hasOwnProperty('analog_mode')) {
        this.analog_mode = initObj.analog_mode
      }
      else {
        this.analog_mode = false;
      }
      if (initObj.hasOwnProperty('power_stage_off')) {
        this.power_stage_off = initObj.power_stage_off
      }
      else {
        this.power_stage_off = false;
      }
      if (initObj.hasOwnProperty('stall_detected')) {
        this.stall_detected = initObj.stall_detected
      }
      else {
        this.stall_detected = false;
      }
      if (initObj.hasOwnProperty('at_limit')) {
        this.at_limit = initObj.at_limit
      }
      else {
        this.at_limit = false;
      }
      if (initObj.hasOwnProperty('unused')) {
        this.unused = initObj.unused
      }
      else {
        this.unused = false;
      }
      if (initObj.hasOwnProperty('micro_basic_script_running')) {
        this.micro_basic_script_running = initObj.micro_basic_script_running
      }
      else {
        this.micro_basic_script_running = false;
      }
      if (initObj.hasOwnProperty('motor_tuning_mode')) {
        this.motor_tuning_mode = initObj.motor_tuning_mode
      }
      else {
        this.motor_tuning_mode = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorStatusFlags
    // Serialize message field [serial_mode]
    bufferOffset = _serializer.bool(obj.serial_mode, buffer, bufferOffset);
    // Serialize message field [pulse_mode]
    bufferOffset = _serializer.bool(obj.pulse_mode, buffer, bufferOffset);
    // Serialize message field [analog_mode]
    bufferOffset = _serializer.bool(obj.analog_mode, buffer, bufferOffset);
    // Serialize message field [power_stage_off]
    bufferOffset = _serializer.bool(obj.power_stage_off, buffer, bufferOffset);
    // Serialize message field [stall_detected]
    bufferOffset = _serializer.bool(obj.stall_detected, buffer, bufferOffset);
    // Serialize message field [at_limit]
    bufferOffset = _serializer.bool(obj.at_limit, buffer, bufferOffset);
    // Serialize message field [unused]
    bufferOffset = _serializer.bool(obj.unused, buffer, bufferOffset);
    // Serialize message field [micro_basic_script_running]
    bufferOffset = _serializer.bool(obj.micro_basic_script_running, buffer, bufferOffset);
    // Serialize message field [motor_tuning_mode]
    bufferOffset = _serializer.bool(obj.motor_tuning_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorStatusFlags
    let len;
    let data = new MotorStatusFlags(null);
    // Deserialize message field [serial_mode]
    data.serial_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [pulse_mode]
    data.pulse_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [analog_mode]
    data.analog_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [power_stage_off]
    data.power_stage_off = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [stall_detected]
    data.stall_detected = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [at_limit]
    data.at_limit = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [unused]
    data.unused = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [micro_basic_script_running]
    data.micro_basic_script_running = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [motor_tuning_mode]
    data.motor_tuning_mode = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MotorStatusFlags';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4d1ef401a01f21abeee2855174e79d1f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new MotorStatusFlags(null);
    if (msg.serial_mode !== undefined) {
      resolved.serial_mode = msg.serial_mode;
    }
    else {
      resolved.serial_mode = false
    }

    if (msg.pulse_mode !== undefined) {
      resolved.pulse_mode = msg.pulse_mode;
    }
    else {
      resolved.pulse_mode = false
    }

    if (msg.analog_mode !== undefined) {
      resolved.analog_mode = msg.analog_mode;
    }
    else {
      resolved.analog_mode = false
    }

    if (msg.power_stage_off !== undefined) {
      resolved.power_stage_off = msg.power_stage_off;
    }
    else {
      resolved.power_stage_off = false
    }

    if (msg.stall_detected !== undefined) {
      resolved.stall_detected = msg.stall_detected;
    }
    else {
      resolved.stall_detected = false
    }

    if (msg.at_limit !== undefined) {
      resolved.at_limit = msg.at_limit;
    }
    else {
      resolved.at_limit = false
    }

    if (msg.unused !== undefined) {
      resolved.unused = msg.unused;
    }
    else {
      resolved.unused = false
    }

    if (msg.micro_basic_script_running !== undefined) {
      resolved.micro_basic_script_running = msg.micro_basic_script_running;
    }
    else {
      resolved.micro_basic_script_running = false
    }

    if (msg.motor_tuning_mode !== undefined) {
      resolved.motor_tuning_mode = msg.motor_tuning_mode;
    }
    else {
      resolved.motor_tuning_mode = false
    }

    return resolved;
    }
};

module.exports = MotorStatusFlags;
