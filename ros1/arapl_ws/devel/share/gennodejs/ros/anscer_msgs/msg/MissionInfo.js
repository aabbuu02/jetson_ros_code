// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let MissionData = require('./MissionData.js');

//-----------------------------------------------------------

class MissionInfo {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mission_info = null;
    }
    else {
      if (initObj.hasOwnProperty('mission_info')) {
        this.mission_info = initObj.mission_info
      }
      else {
        this.mission_info = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MissionInfo
    // Serialize message field [mission_info]
    // Serialize the length for message field [mission_info]
    bufferOffset = _serializer.uint32(obj.mission_info.length, buffer, bufferOffset);
    obj.mission_info.forEach((val) => {
      bufferOffset = MissionData.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MissionInfo
    let len;
    let data = new MissionInfo(null);
    // Deserialize message field [mission_info]
    // Deserialize array length for message field [mission_info]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.mission_info = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.mission_info[i] = MissionData.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.mission_info.forEach((val) => {
      length += MissionData.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/MissionInfo';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '29be06f7c3d77e1344134d3a99624eb2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    anscer_msgs/MissionData[] mission_info
    
    
    ================================================================================
    MSG: anscer_msgs/MissionData
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
    const resolved = new MissionInfo(null);
    if (msg.mission_info !== undefined) {
      resolved.mission_info = new Array(msg.mission_info.length);
      for (let i = 0; i < resolved.mission_info.length; ++i) {
        resolved.mission_info[i] = MissionData.Resolve(msg.mission_info[i]);
      }
    }
    else {
      resolved.mission_info = []
    }

    return resolved;
    }
};

module.exports = MissionInfo;
