// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ChargeInfo = require('./ChargeInfo.js');

//-----------------------------------------------------------

class Feedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.index = null;
      this.mission_id = null;
      this.number = null;
      this.status = null;
      this.charge_info = null;
      this.completion_percentage = null;
      this.time_elapsed = null;
      this.priority_level = null;
    }
    else {
      if (initObj.hasOwnProperty('index')) {
        this.index = initObj.index
      }
      else {
        this.index = '';
      }
      if (initObj.hasOwnProperty('mission_id')) {
        this.mission_id = initObj.mission_id
      }
      else {
        this.mission_id = '';
      }
      if (initObj.hasOwnProperty('number')) {
        this.number = initObj.number
      }
      else {
        this.number = 0;
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = 0;
      }
      if (initObj.hasOwnProperty('charge_info')) {
        this.charge_info = initObj.charge_info
      }
      else {
        this.charge_info = new ChargeInfo();
      }
      if (initObj.hasOwnProperty('completion_percentage')) {
        this.completion_percentage = initObj.completion_percentage
      }
      else {
        this.completion_percentage = 0.0;
      }
      if (initObj.hasOwnProperty('time_elapsed')) {
        this.time_elapsed = initObj.time_elapsed
      }
      else {
        this.time_elapsed = 0;
      }
      if (initObj.hasOwnProperty('priority_level')) {
        this.priority_level = initObj.priority_level
      }
      else {
        this.priority_level = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Feedback
    // Serialize message field [index]
    bufferOffset = _serializer.string(obj.index, buffer, bufferOffset);
    // Serialize message field [mission_id]
    bufferOffset = _serializer.string(obj.mission_id, buffer, bufferOffset);
    // Serialize message field [number]
    bufferOffset = _serializer.int16(obj.number, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = _serializer.int16(obj.status, buffer, bufferOffset);
    // Serialize message field [charge_info]
    bufferOffset = ChargeInfo.serialize(obj.charge_info, buffer, bufferOffset);
    // Serialize message field [completion_percentage]
    bufferOffset = _serializer.float32(obj.completion_percentage, buffer, bufferOffset);
    // Serialize message field [time_elapsed]
    bufferOffset = _serializer.int32(obj.time_elapsed, buffer, bufferOffset);
    // Serialize message field [priority_level]
    bufferOffset = _serializer.int32(obj.priority_level, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Feedback
    let len;
    let data = new Feedback(null);
    // Deserialize message field [index]
    data.index = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [mission_id]
    data.mission_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [number]
    data.number = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [charge_info]
    data.charge_info = ChargeInfo.deserialize(buffer, bufferOffset);
    // Deserialize message field [completion_percentage]
    data.completion_percentage = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [time_elapsed]
    data.time_elapsed = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [priority_level]
    data.priority_level = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.index);
    length += _getByteLength(object.mission_id);
    return length + 35;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/Feedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8b323bc9ef090763cc665618840a91da';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #mission status
    int32 IDLE =0
    int32 ACTIVE =1
    int32 SUCCESS =2
    int32 ABORTED =3
    int32 PAUSED =4
    
    
    string index
    string mission_id
    int16 number
    int16 status
    anscer_msgs/ChargeInfo charge_info
    float32 completion_percentage
    int32 time_elapsed
    int32 priority_level
    
    ================================================================================
    MSG: anscer_msgs/ChargeInfo
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
    const resolved = new Feedback(null);
    if (msg.index !== undefined) {
      resolved.index = msg.index;
    }
    else {
      resolved.index = ''
    }

    if (msg.mission_id !== undefined) {
      resolved.mission_id = msg.mission_id;
    }
    else {
      resolved.mission_id = ''
    }

    if (msg.number !== undefined) {
      resolved.number = msg.number;
    }
    else {
      resolved.number = 0
    }

    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = 0
    }

    if (msg.charge_info !== undefined) {
      resolved.charge_info = ChargeInfo.Resolve(msg.charge_info)
    }
    else {
      resolved.charge_info = new ChargeInfo()
    }

    if (msg.completion_percentage !== undefined) {
      resolved.completion_percentage = msg.completion_percentage;
    }
    else {
      resolved.completion_percentage = 0.0
    }

    if (msg.time_elapsed !== undefined) {
      resolved.time_elapsed = msg.time_elapsed;
    }
    else {
      resolved.time_elapsed = 0
    }

    if (msg.priority_level !== undefined) {
      resolved.priority_level = msg.priority_level;
    }
    else {
      resolved.priority_level = 0
    }

    return resolved;
    }
};

// Constants for message
Feedback.Constants = {
  IDLE: 0,
  ACTIVE: 1,
  SUCCESS: 2,
  ABORTED: 3,
  PAUSED: 4,
}

module.exports = Feedback;
