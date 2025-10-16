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

class MissionDB {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.current_distance = null;
      this.total_distance = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = '';
      }
      if (initObj.hasOwnProperty('current_distance')) {
        this.current_distance = initObj.current_distance
      }
      else {
        this.current_distance = 0.0;
      }
      if (initObj.hasOwnProperty('total_distance')) {
        this.total_distance = initObj.total_distance
      }
      else {
        this.total_distance = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MissionDB
    // Serialize message field [timestamp]
    bufferOffset = _serializer.string(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [current_distance]
    bufferOffset = _serializer.float32(obj.current_distance, buffer, bufferOffset);
    // Serialize message field [total_distance]
    bufferOffset = _serializer.float32(obj.total_distance, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MissionDB
    let len;
    let data = new MissionDB(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [current_distance]
    data.current_distance = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [total_distance]
    data.total_distance = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.timestamp);
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MissionDB';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '45b94f6cc052bb5811d46e7c764cde3c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string timestamp
    float32 current_distance
    float32 total_distance
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MissionDB(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = ''
    }

    if (msg.current_distance !== undefined) {
      resolved.current_distance = msg.current_distance;
    }
    else {
      resolved.current_distance = 0.0
    }

    if (msg.total_distance !== undefined) {
      resolved.total_distance = msg.total_distance;
    }
    else {
      resolved.total_distance = 0.0
    }

    return resolved;
    }
};

module.exports = MissionDB;
