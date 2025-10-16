// Auto-generated. Do not edit!

// (in-package lift_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Homing_status {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.lifterStatus = null;
      this.extractorSatus = null;
      this.turnTableStatus = null;
      this.isHomed = null;
    }
    else {
      if (initObj.hasOwnProperty('lifterStatus')) {
        this.lifterStatus = initObj.lifterStatus
      }
      else {
        this.lifterStatus = false;
      }
      if (initObj.hasOwnProperty('extractorSatus')) {
        this.extractorSatus = initObj.extractorSatus
      }
      else {
        this.extractorSatus = false;
      }
      if (initObj.hasOwnProperty('turnTableStatus')) {
        this.turnTableStatus = initObj.turnTableStatus
      }
      else {
        this.turnTableStatus = false;
      }
      if (initObj.hasOwnProperty('isHomed')) {
        this.isHomed = initObj.isHomed
      }
      else {
        this.isHomed = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Homing_status
    // Serialize message field [lifterStatus]
    bufferOffset = _serializer.bool(obj.lifterStatus, buffer, bufferOffset);
    // Serialize message field [extractorSatus]
    bufferOffset = _serializer.bool(obj.extractorSatus, buffer, bufferOffset);
    // Serialize message field [turnTableStatus]
    bufferOffset = _serializer.bool(obj.turnTableStatus, buffer, bufferOffset);
    // Serialize message field [isHomed]
    bufferOffset = _serializer.bool(obj.isHomed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Homing_status
    let len;
    let data = new Homing_status(null);
    // Deserialize message field [lifterStatus]
    data.lifterStatus = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [extractorSatus]
    data.extractorSatus = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [turnTableStatus]
    data.turnTableStatus = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [isHomed]
    data.isHomed = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'lift_action/Homing_status';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3ca3915b4946dfb69c51af3e4d1a0401';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool lifterStatus
    bool extractorSatus
    bool turnTableStatus
    bool isHomed
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Homing_status(null);
    if (msg.lifterStatus !== undefined) {
      resolved.lifterStatus = msg.lifterStatus;
    }
    else {
      resolved.lifterStatus = false
    }

    if (msg.extractorSatus !== undefined) {
      resolved.extractorSatus = msg.extractorSatus;
    }
    else {
      resolved.extractorSatus = false
    }

    if (msg.turnTableStatus !== undefined) {
      resolved.turnTableStatus = msg.turnTableStatus;
    }
    else {
      resolved.turnTableStatus = false
    }

    if (msg.isHomed !== undefined) {
      resolved.isHomed = msg.isHomed;
    }
    else {
      resolved.isHomed = false
    }

    return resolved;
    }
};

module.exports = Homing_status;
