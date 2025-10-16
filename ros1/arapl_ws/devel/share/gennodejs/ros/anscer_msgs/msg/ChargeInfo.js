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

class ChargeInfo {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.charger_activate = null;
      this.charge_time = null;
      this.ignore_time = null;
      this.charge_percentage = null;
      this.ignore_percentage = null;
    }
    else {
      if (initObj.hasOwnProperty('charger_activate')) {
        this.charger_activate = initObj.charger_activate
      }
      else {
        this.charger_activate = false;
      }
      if (initObj.hasOwnProperty('charge_time')) {
        this.charge_time = initObj.charge_time
      }
      else {
        this.charge_time = 0;
      }
      if (initObj.hasOwnProperty('ignore_time')) {
        this.ignore_time = initObj.ignore_time
      }
      else {
        this.ignore_time = false;
      }
      if (initObj.hasOwnProperty('charge_percentage')) {
        this.charge_percentage = initObj.charge_percentage
      }
      else {
        this.charge_percentage = 0.0;
      }
      if (initObj.hasOwnProperty('ignore_percentage')) {
        this.ignore_percentage = initObj.ignore_percentage
      }
      else {
        this.ignore_percentage = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ChargeInfo
    // Serialize message field [charger_activate]
    bufferOffset = _serializer.bool(obj.charger_activate, buffer, bufferOffset);
    // Serialize message field [charge_time]
    bufferOffset = _serializer.int32(obj.charge_time, buffer, bufferOffset);
    // Serialize message field [ignore_time]
    bufferOffset = _serializer.bool(obj.ignore_time, buffer, bufferOffset);
    // Serialize message field [charge_percentage]
    bufferOffset = _serializer.float32(obj.charge_percentage, buffer, bufferOffset);
    // Serialize message field [ignore_percentage]
    bufferOffset = _serializer.bool(obj.ignore_percentage, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ChargeInfo
    let len;
    let data = new ChargeInfo(null);
    // Deserialize message field [charger_activate]
    data.charger_activate = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [charge_time]
    data.charge_time = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [ignore_time]
    data.ignore_time = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [charge_percentage]
    data.charge_percentage = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ignore_percentage]
    data.ignore_percentage = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 11;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/ChargeInfo';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '07a5813f322d0f1699de1925e6361210';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 CONNECTED=1
    uint8 DISCONNECTED=2
    uint8 OVERRIDE=3
    
    bool charger_activate
    int32 charge_time
    bool ignore_time
    float32 charge_percentage
    bool ignore_percentage
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ChargeInfo(null);
    if (msg.charger_activate !== undefined) {
      resolved.charger_activate = msg.charger_activate;
    }
    else {
      resolved.charger_activate = false
    }

    if (msg.charge_time !== undefined) {
      resolved.charge_time = msg.charge_time;
    }
    else {
      resolved.charge_time = 0
    }

    if (msg.ignore_time !== undefined) {
      resolved.ignore_time = msg.ignore_time;
    }
    else {
      resolved.ignore_time = false
    }

    if (msg.charge_percentage !== undefined) {
      resolved.charge_percentage = msg.charge_percentage;
    }
    else {
      resolved.charge_percentage = 0.0
    }

    if (msg.ignore_percentage !== undefined) {
      resolved.ignore_percentage = msg.ignore_percentage;
    }
    else {
      resolved.ignore_percentage = false
    }

    return resolved;
    }
};

// Constants for message
ChargeInfo.Constants = {
  CONNECTED: 1,
  DISCONNECTED: 2,
  OVERRIDE: 3,
}

module.exports = ChargeInfo;
