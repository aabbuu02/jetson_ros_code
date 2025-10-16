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

class FieldStatus {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.direction = null;
      this.is_safety = null;
      this.is_warning = null;
    }
    else {
      if (initObj.hasOwnProperty('direction')) {
        this.direction = initObj.direction
      }
      else {
        this.direction = 0;
      }
      if (initObj.hasOwnProperty('is_safety')) {
        this.is_safety = initObj.is_safety
      }
      else {
        this.is_safety = false;
      }
      if (initObj.hasOwnProperty('is_warning')) {
        this.is_warning = initObj.is_warning
      }
      else {
        this.is_warning = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type FieldStatus
    // Serialize message field [direction]
    bufferOffset = _serializer.int8(obj.direction, buffer, bufferOffset);
    // Serialize message field [is_safety]
    bufferOffset = _serializer.bool(obj.is_safety, buffer, bufferOffset);
    // Serialize message field [is_warning]
    bufferOffset = _serializer.bool(obj.is_warning, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type FieldStatus
    let len;
    let data = new FieldStatus(null);
    // Deserialize message field [direction]
    data.direction = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [is_safety]
    data.is_safety = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_warning]
    data.is_warning = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 3;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/FieldStatus';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0bad4ea9ecfbe49f072cf1a2ba87fb38';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 direction
    bool is_safety
    bool is_warning
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new FieldStatus(null);
    if (msg.direction !== undefined) {
      resolved.direction = msg.direction;
    }
    else {
      resolved.direction = 0
    }

    if (msg.is_safety !== undefined) {
      resolved.is_safety = msg.is_safety;
    }
    else {
      resolved.is_safety = false
    }

    if (msg.is_warning !== undefined) {
      resolved.is_warning = msg.is_warning;
    }
    else {
      resolved.is_warning = false
    }

    return resolved;
    }
};

module.exports = FieldStatus;
