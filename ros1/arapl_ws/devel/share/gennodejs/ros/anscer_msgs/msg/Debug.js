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

class Debug {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.left_rpm_command = null;
      this.right_rpm_command = null;
      this.left_rpm_feedback = null;
      this.right_rpm_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('left_rpm_command')) {
        this.left_rpm_command = initObj.left_rpm_command
      }
      else {
        this.left_rpm_command = 0.0;
      }
      if (initObj.hasOwnProperty('right_rpm_command')) {
        this.right_rpm_command = initObj.right_rpm_command
      }
      else {
        this.right_rpm_command = 0.0;
      }
      if (initObj.hasOwnProperty('left_rpm_feedback')) {
        this.left_rpm_feedback = initObj.left_rpm_feedback
      }
      else {
        this.left_rpm_feedback = 0.0;
      }
      if (initObj.hasOwnProperty('right_rpm_feedback')) {
        this.right_rpm_feedback = initObj.right_rpm_feedback
      }
      else {
        this.right_rpm_feedback = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Debug
    // Serialize message field [left_rpm_command]
    bufferOffset = _serializer.float32(obj.left_rpm_command, buffer, bufferOffset);
    // Serialize message field [right_rpm_command]
    bufferOffset = _serializer.float32(obj.right_rpm_command, buffer, bufferOffset);
    // Serialize message field [left_rpm_feedback]
    bufferOffset = _serializer.float32(obj.left_rpm_feedback, buffer, bufferOffset);
    // Serialize message field [right_rpm_feedback]
    bufferOffset = _serializer.float32(obj.right_rpm_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Debug
    let len;
    let data = new Debug(null);
    // Deserialize message field [left_rpm_command]
    data.left_rpm_command = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [right_rpm_command]
    data.right_rpm_command = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [left_rpm_feedback]
    data.left_rpm_feedback = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [right_rpm_feedback]
    data.right_rpm_feedback = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/Debug';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cfb9ea294e0bf87e4f770199a831777a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 left_rpm_command
    float32 right_rpm_command
    float32 left_rpm_feedback
    float32 right_rpm_feedback
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Debug(null);
    if (msg.left_rpm_command !== undefined) {
      resolved.left_rpm_command = msg.left_rpm_command;
    }
    else {
      resolved.left_rpm_command = 0.0
    }

    if (msg.right_rpm_command !== undefined) {
      resolved.right_rpm_command = msg.right_rpm_command;
    }
    else {
      resolved.right_rpm_command = 0.0
    }

    if (msg.left_rpm_feedback !== undefined) {
      resolved.left_rpm_feedback = msg.left_rpm_feedback;
    }
    else {
      resolved.left_rpm_feedback = 0.0
    }

    if (msg.right_rpm_feedback !== undefined) {
      resolved.right_rpm_feedback = msg.right_rpm_feedback;
    }
    else {
      resolved.right_rpm_feedback = 0.0
    }

    return resolved;
    }
};

module.exports = Debug;
