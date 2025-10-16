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

class MissionData {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mission_name = null;
      this.success_count = null;
      this.mission_count = null;
    }
    else {
      if (initObj.hasOwnProperty('mission_name')) {
        this.mission_name = initObj.mission_name
      }
      else {
        this.mission_name = '';
      }
      if (initObj.hasOwnProperty('success_count')) {
        this.success_count = initObj.success_count
      }
      else {
        this.success_count = 0;
      }
      if (initObj.hasOwnProperty('mission_count')) {
        this.mission_count = initObj.mission_count
      }
      else {
        this.mission_count = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MissionData
    // Serialize message field [mission_name]
    bufferOffset = _serializer.string(obj.mission_name, buffer, bufferOffset);
    // Serialize message field [success_count]
    bufferOffset = _serializer.int16(obj.success_count, buffer, bufferOffset);
    // Serialize message field [mission_count]
    bufferOffset = _serializer.int16(obj.mission_count, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MissionData
    let len;
    let data = new MissionData(null);
    // Deserialize message field [mission_name]
    data.mission_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [success_count]
    data.success_count = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [mission_count]
    data.mission_count = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.mission_name);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MissionData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8677a8d3995d6e5101db8568d121c771';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string mission_name
    int16 success_count
    int16 mission_count
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MissionData(null);
    if (msg.mission_name !== undefined) {
      resolved.mission_name = msg.mission_name;
    }
    else {
      resolved.mission_name = ''
    }

    if (msg.success_count !== undefined) {
      resolved.success_count = msg.success_count;
    }
    else {
      resolved.success_count = 0
    }

    if (msg.mission_count !== undefined) {
      resolved.mission_count = msg.mission_count;
    }
    else {
      resolved.mission_count = 0
    }

    return resolved;
    }
};

module.exports = MissionData;
