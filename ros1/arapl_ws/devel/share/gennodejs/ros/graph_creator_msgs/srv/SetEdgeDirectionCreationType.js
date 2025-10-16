// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let EdgeDirectionCreationType = require('../msg/EdgeDirectionCreationType.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetEdgeDirectionCreationTypeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.type = null;
    }
    else {
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = new EdgeDirectionCreationType();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetEdgeDirectionCreationTypeRequest
    // Serialize message field [type]
    bufferOffset = EdgeDirectionCreationType.serialize(obj.type, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetEdgeDirectionCreationTypeRequest
    let len;
    let data = new SetEdgeDirectionCreationTypeRequest(null);
    // Deserialize message field [type]
    data.type = EdgeDirectionCreationType.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/SetEdgeDirectionCreationTypeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4f050a4d6c92f2aa063eced5177306b4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    graph_creator_msgs/EdgeDirectionCreationType type
    
    ================================================================================
    MSG: graph_creator_msgs/EdgeDirectionCreationType
    uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
    uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
    uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2
    
    uint8 direction_type
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetEdgeDirectionCreationTypeRequest(null);
    if (msg.type !== undefined) {
      resolved.type = EdgeDirectionCreationType.Resolve(msg.type)
    }
    else {
      resolved.type = new EdgeDirectionCreationType()
    }

    return resolved;
    }
};

class SetEdgeDirectionCreationTypeResponse {
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
    // Serializes a message object of type SetEdgeDirectionCreationTypeResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetEdgeDirectionCreationTypeResponse
    let len;
    let data = new SetEdgeDirectionCreationTypeResponse(null);
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
    return 'graph_creator_msgs/SetEdgeDirectionCreationTypeResponse';
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
    const resolved = new SetEdgeDirectionCreationTypeResponse(null);
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
  Request: SetEdgeDirectionCreationTypeRequest,
  Response: SetEdgeDirectionCreationTypeResponse,
  md5sum() { return '34f28652b2a44e6592bf32db0fa65269'; },
  datatype() { return 'graph_creator_msgs/SetEdgeDirectionCreationType'; }
};
