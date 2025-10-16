// Auto-generated. Do not edit!

// (in-package qr_mission_scheduler.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class goalMsg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.goalType = null;
      this.source = null;
      this.destination = null;
    }
    else {
      if (initObj.hasOwnProperty('goalType')) {
        this.goalType = initObj.goalType
      }
      else {
        this.goalType = '';
      }
      if (initObj.hasOwnProperty('source')) {
        this.source = initObj.source
      }
      else {
        this.source = 0.0;
      }
      if (initObj.hasOwnProperty('destination')) {
        this.destination = initObj.destination
      }
      else {
        this.destination = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type goalMsg
    // Serialize message field [goalType]
    bufferOffset = _serializer.string(obj.goalType, buffer, bufferOffset);
    // Serialize message field [source]
    bufferOffset = _serializer.float64(obj.source, buffer, bufferOffset);
    // Serialize message field [destination]
    bufferOffset = _serializer.float64(obj.destination, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type goalMsg
    let len;
    let data = new goalMsg(null);
    // Deserialize message field [goalType]
    data.goalType = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [source]
    data.source = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [destination]
    data.destination = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.goalType);
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'qr_mission_scheduler/goalMsg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bdc5d71ceffd1361f6883e493cc747c6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string goalType
    
    float64 source
    float64 destination
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new goalMsg(null);
    if (msg.goalType !== undefined) {
      resolved.goalType = msg.goalType;
    }
    else {
      resolved.goalType = ''
    }

    if (msg.source !== undefined) {
      resolved.source = msg.source;
    }
    else {
      resolved.source = 0.0
    }

    if (msg.destination !== undefined) {
      resolved.destination = msg.destination;
    }
    else {
      resolved.destination = 0.0
    }

    return resolved;
    }
};

module.exports = goalMsg;
