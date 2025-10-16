// Auto-generated. Do not edit!

// (in-package wms_data.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Feedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.unique_id = null;
      this.acr_shelf = null;
      this.action = null;
      this.status = null;
      this.failStatus = null;
    }
    else {
      if (initObj.hasOwnProperty('unique_id')) {
        this.unique_id = initObj.unique_id
      }
      else {
        this.unique_id = '';
      }
      if (initObj.hasOwnProperty('acr_shelf')) {
        this.acr_shelf = initObj.acr_shelf
      }
      else {
        this.acr_shelf = 0;
      }
      if (initObj.hasOwnProperty('action')) {
        this.action = initObj.action
      }
      else {
        this.action = 0;
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = false;
      }
      if (initObj.hasOwnProperty('failStatus')) {
        this.failStatus = initObj.failStatus
      }
      else {
        this.failStatus = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Feedback
    // Serialize message field [unique_id]
    bufferOffset = _serializer.string(obj.unique_id, buffer, bufferOffset);
    // Serialize message field [acr_shelf]
    bufferOffset = _serializer.int16(obj.acr_shelf, buffer, bufferOffset);
    // Serialize message field [action]
    bufferOffset = _serializer.int16(obj.action, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = _serializer.bool(obj.status, buffer, bufferOffset);
    // Serialize message field [failStatus]
    bufferOffset = _serializer.bool(obj.failStatus, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Feedback
    let len;
    let data = new Feedback(null);
    // Deserialize message field [unique_id]
    data.unique_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [acr_shelf]
    data.acr_shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [action]
    data.action = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [failStatus]
    data.failStatus = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.unique_id);
    return length + 10;
  }

  static datatype() {
    // Returns string type for a message object
    return 'wms_data/Feedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6588a9452ee8a183f42490d3b437bdbe';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string unique_id
    int16 acr_shelf
    int16 action
    bool status
    bool failStatus
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Feedback(null);
    if (msg.unique_id !== undefined) {
      resolved.unique_id = msg.unique_id;
    }
    else {
      resolved.unique_id = ''
    }

    if (msg.acr_shelf !== undefined) {
      resolved.acr_shelf = msg.acr_shelf;
    }
    else {
      resolved.acr_shelf = 0
    }

    if (msg.action !== undefined) {
      resolved.action = msg.action;
    }
    else {
      resolved.action = 0
    }

    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = false
    }

    if (msg.failStatus !== undefined) {
      resolved.failStatus = msg.failStatus;
    }
    else {
      resolved.failStatus = false
    }

    return resolved;
    }
};

module.exports = Feedback;
