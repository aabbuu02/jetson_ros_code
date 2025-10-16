// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let GraphCreatorMode = require('../msg/GraphCreatorMode.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetGraphCreatorModeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mode = null;
    }
    else {
      if (initObj.hasOwnProperty('mode')) {
        this.mode = initObj.mode
      }
      else {
        this.mode = new GraphCreatorMode();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetGraphCreatorModeRequest
    // Serialize message field [mode]
    bufferOffset = GraphCreatorMode.serialize(obj.mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetGraphCreatorModeRequest
    let len;
    let data = new SetGraphCreatorModeRequest(null);
    // Deserialize message field [mode]
    data.mode = GraphCreatorMode.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/SetGraphCreatorModeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b0c90a1cad92ff24686e84a22cbe9a49';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    graph_creator_msgs/GraphCreatorMode mode
    
    ================================================================================
    MSG: graph_creator_msgs/GraphCreatorMode
    uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
    uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1
    
    uint8 mode
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetGraphCreatorModeRequest(null);
    if (msg.mode !== undefined) {
      resolved.mode = GraphCreatorMode.Resolve(msg.mode)
    }
    else {
      resolved.mode = new GraphCreatorMode()
    }

    return resolved;
    }
};

class SetGraphCreatorModeResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetGraphCreatorModeResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetGraphCreatorModeResponse
    let len;
    let data = new SetGraphCreatorModeResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.message);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/SetGraphCreatorModeResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '937c9679a518e3a18d831e57125ea522';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    string message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetGraphCreatorModeResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.message !== undefined) {
      resolved.message = msg.message;
    }
    else {
      resolved.message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: SetGraphCreatorModeRequest,
  Response: SetGraphCreatorModeResponse,
  md5sum() { return '63d68ca9906d91378a26fb79fbdcfad4'; },
  datatype() { return 'graph_creator_msgs/SetGraphCreatorMode'; }
};
