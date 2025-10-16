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

class MotorFaultFlags {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.overheat = null;
      this.overvoltage = null;
      this.undervoltage = null;
      this.short_circuit = null;
      this.emergency_stop = null;
      this.motor_setup_fault = null;
      this.mosfet_failure = null;
      this.default_configuration = null;
    }
    else {
      if (initObj.hasOwnProperty('overheat')) {
        this.overheat = initObj.overheat
      }
      else {
        this.overheat = false;
      }
      if (initObj.hasOwnProperty('overvoltage')) {
        this.overvoltage = initObj.overvoltage
      }
      else {
        this.overvoltage = false;
      }
      if (initObj.hasOwnProperty('undervoltage')) {
        this.undervoltage = initObj.undervoltage
      }
      else {
        this.undervoltage = false;
      }
      if (initObj.hasOwnProperty('short_circuit')) {
        this.short_circuit = initObj.short_circuit
      }
      else {
        this.short_circuit = false;
      }
      if (initObj.hasOwnProperty('emergency_stop')) {
        this.emergency_stop = initObj.emergency_stop
      }
      else {
        this.emergency_stop = false;
      }
      if (initObj.hasOwnProperty('motor_setup_fault')) {
        this.motor_setup_fault = initObj.motor_setup_fault
      }
      else {
        this.motor_setup_fault = false;
      }
      if (initObj.hasOwnProperty('mosfet_failure')) {
        this.mosfet_failure = initObj.mosfet_failure
      }
      else {
        this.mosfet_failure = false;
      }
      if (initObj.hasOwnProperty('default_configuration')) {
        this.default_configuration = initObj.default_configuration
      }
      else {
        this.default_configuration = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorFaultFlags
    // Serialize message field [overheat]
    bufferOffset = _serializer.bool(obj.overheat, buffer, bufferOffset);
    // Serialize message field [overvoltage]
    bufferOffset = _serializer.bool(obj.overvoltage, buffer, bufferOffset);
    // Serialize message field [undervoltage]
    bufferOffset = _serializer.bool(obj.undervoltage, buffer, bufferOffset);
    // Serialize message field [short_circuit]
    bufferOffset = _serializer.bool(obj.short_circuit, buffer, bufferOffset);
    // Serialize message field [emergency_stop]
    bufferOffset = _serializer.bool(obj.emergency_stop, buffer, bufferOffset);
    // Serialize message field [motor_setup_fault]
    bufferOffset = _serializer.bool(obj.motor_setup_fault, buffer, bufferOffset);
    // Serialize message field [mosfet_failure]
    bufferOffset = _serializer.bool(obj.mosfet_failure, buffer, bufferOffset);
    // Serialize message field [default_configuration]
    bufferOffset = _serializer.bool(obj.default_configuration, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorFaultFlags
    let len;
    let data = new MotorFaultFlags(null);
    // Deserialize message field [overheat]
    data.overheat = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [overvoltage]
    data.overvoltage = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [undervoltage]
    data.undervoltage = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [short_circuit]
    data.short_circuit = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [emergency_stop]
    data.emergency_stop = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [motor_setup_fault]
    data.motor_setup_fault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [mosfet_failure]
    data.mosfet_failure = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [default_configuration]
    data.default_configuration = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MotorFaultFlags';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5204cec7a2d19b97b19f5f360556d07a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool overheat
    bool overvoltage
    bool undervoltage
    bool short_circuit
    bool emergency_stop
    bool motor_setup_fault
    bool mosfet_failure
    bool default_configuration
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MotorFaultFlags(null);
    if (msg.overheat !== undefined) {
      resolved.overheat = msg.overheat;
    }
    else {
      resolved.overheat = false
    }

    if (msg.overvoltage !== undefined) {
      resolved.overvoltage = msg.overvoltage;
    }
    else {
      resolved.overvoltage = false
    }

    if (msg.undervoltage !== undefined) {
      resolved.undervoltage = msg.undervoltage;
    }
    else {
      resolved.undervoltage = false
    }

    if (msg.short_circuit !== undefined) {
      resolved.short_circuit = msg.short_circuit;
    }
    else {
      resolved.short_circuit = false
    }

    if (msg.emergency_stop !== undefined) {
      resolved.emergency_stop = msg.emergency_stop;
    }
    else {
      resolved.emergency_stop = false
    }

    if (msg.motor_setup_fault !== undefined) {
      resolved.motor_setup_fault = msg.motor_setup_fault;
    }
    else {
      resolved.motor_setup_fault = false
    }

    if (msg.mosfet_failure !== undefined) {
      resolved.mosfet_failure = msg.mosfet_failure;
    }
    else {
      resolved.mosfet_failure = false
    }

    if (msg.default_configuration !== undefined) {
      resolved.default_configuration = msg.default_configuration;
    }
    else {
      resolved.default_configuration = false
    }

    return resolved;
    }
};

module.exports = MotorFaultFlags;
