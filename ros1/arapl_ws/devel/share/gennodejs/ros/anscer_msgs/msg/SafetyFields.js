// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SafetyField = require('./SafetyField.js');

//-----------------------------------------------------------

class SafetyFields {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.warning = null;
      this.safety = null;
    }
    else {
      if (initObj.hasOwnProperty('warning')) {
        this.warning = initObj.warning
      }
      else {
        this.warning = [];
      }
      if (initObj.hasOwnProperty('safety')) {
        this.safety = initObj.safety
      }
      else {
        this.safety = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyFields
    // Serialize message field [warning]
    // Serialize the length for message field [warning]
    bufferOffset = _serializer.uint32(obj.warning.length, buffer, bufferOffset);
    obj.warning.forEach((val) => {
      bufferOffset = SafetyField.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [safety]
    // Serialize the length for message field [safety]
    bufferOffset = _serializer.uint32(obj.safety.length, buffer, bufferOffset);
    obj.safety.forEach((val) => {
      bufferOffset = SafetyField.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyFields
    let len;
    let data = new SafetyFields(null);
    // Deserialize message field [warning]
    // Deserialize array length for message field [warning]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.warning = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.warning[i] = SafetyField.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [safety]
    // Deserialize array length for message field [safety]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.safety = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.safety[i] = SafetyField.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 3 * object.warning.length;
    length += 3 * object.safety.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/SafetyFields';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a7a9ac03c2713cea077fbfe497276db8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    anscer_msgs/SafetyField[] warning
    anscer_msgs/SafetyField[] safety
    
    ================================================================================
    MSG: anscer_msgs/SafetyField
    int8 field_id
    bool is_front
    bool is_rear
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetyFields(null);
    if (msg.warning !== undefined) {
      resolved.warning = new Array(msg.warning.length);
      for (let i = 0; i < resolved.warning.length; ++i) {
        resolved.warning[i] = SafetyField.Resolve(msg.warning[i]);
      }
    }
    else {
      resolved.warning = []
    }

    if (msg.safety !== undefined) {
      resolved.safety = new Array(msg.safety.length);
      for (let i = 0; i < resolved.safety.length; ++i) {
        resolved.safety[i] = SafetyField.Resolve(msg.safety[i]);
      }
    }
    else {
      resolved.safety = []
    }

    return resolved;
    }
};

module.exports = SafetyFields;
