// Auto-generated. Do not edit!

// (in-package wms_data.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let WMSData = require('./WMSData.js');

//-----------------------------------------------------------

class WMSTasks {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.tasks = null;
    }
    else {
      if (initObj.hasOwnProperty('tasks')) {
        this.tasks = initObj.tasks
      }
      else {
        this.tasks = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WMSTasks
    // Serialize message field [tasks]
    // Serialize the length for message field [tasks]
    bufferOffset = _serializer.uint32(obj.tasks.length, buffer, bufferOffset);
    obj.tasks.forEach((val) => {
      bufferOffset = WMSData.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WMSTasks
    let len;
    let data = new WMSTasks(null);
    // Deserialize message field [tasks]
    // Deserialize array length for message field [tasks]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.tasks = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.tasks[i] = WMSData.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.tasks.forEach((val) => {
      length += WMSData.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'wms_data/WMSTasks';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e9c22e6c13dccc15f5397cda86a34fd5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    wms_data/WMSData[] tasks
    
    ================================================================================
    MSG: wms_data/WMSData
    string unique_id
    string date
    int16 priority
    int16 rack
    int16 shelf
    int16 bin
    bool action
    bool status
    string ean_code
    string putaway_code
    int16 acr_shelf
    string whole_bin_no
    string core
    string level
    string year
    string date_data
    string serial_no
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new WMSTasks(null);
    if (msg.tasks !== undefined) {
      resolved.tasks = new Array(msg.tasks.length);
      for (let i = 0; i < resolved.tasks.length; ++i) {
        resolved.tasks[i] = WMSData.Resolve(msg.tasks[i]);
      }
    }
    else {
      resolved.tasks = []
    }

    return resolved;
    }
};

module.exports = WMSTasks;
