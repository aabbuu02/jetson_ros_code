// Auto-generated. Do not edit!

// (in-package lift_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class UI_Interface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.process = null;
      this.button = null;
      this.direction = null;
    }
    else {
      if (initObj.hasOwnProperty('process')) {
        this.process = initObj.process
      }
      else {
        this.process = '';
      }
      if (initObj.hasOwnProperty('button')) {
        this.button = initObj.button
      }
      else {
        this.button = false;
      }
      if (initObj.hasOwnProperty('direction')) {
        this.direction = initObj.direction
      }
      else {
        this.direction = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type UI_Interface
    // Serialize message field [process]
    bufferOffset = _serializer.string(obj.process, buffer, bufferOffset);
    // Serialize message field [button]
    bufferOffset = _serializer.bool(obj.button, buffer, bufferOffset);
    // Serialize message field [direction]
    bufferOffset = _serializer.int16(obj.direction, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type UI_Interface
    let len;
    let data = new UI_Interface(null);
    // Deserialize message field [process]
    data.process = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [button]
    data.button = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [direction]
    data.direction = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.process);
    return length + 7;
  }

  static datatype() {
    // Returns string type for a message object
    return 'lift_action/UI_Interface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4d42888895ca2661e28199a8a1f1bb9a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string process
    bool button
    int16 direction
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new UI_Interface(null);
    if (msg.process !== undefined) {
      resolved.process = msg.process;
    }
    else {
      resolved.process = ''
    }

    if (msg.button !== undefined) {
      resolved.button = msg.button;
    }
    else {
      resolved.button = false
    }

    if (msg.direction !== undefined) {
      resolved.direction = msg.direction;
    }
    else {
      resolved.direction = 0
    }

    return resolved;
    }
};

module.exports = UI_Interface;
