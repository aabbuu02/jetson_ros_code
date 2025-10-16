// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let EdgeCreationType = require('../msg/EdgeCreationType.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetEdgeCreationTypeRequest {
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
        this.type = new EdgeCreationType();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetEdgeCreationTypeRequest
    // Serialize message field [type]
    bufferOffset = EdgeCreationType.serialize(obj.type, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetEdgeCreationTypeRequest
    let len;
    let data = new SetEdgeCreationTypeRequest(null);
    // Deserialize message field [type]
    data.type = EdgeCreationType.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/SetEdgeCreationTypeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c54458b0add6a60ae37b82f7c9a13c89';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    graph_creator_msgs/EdgeCreationType type
    
    ================================================================================
    MSG: graph_creator_msgs/EdgeCreationType
    uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
    uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1
    
    uint8 type
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetEdgeCreationTypeRequest(null);
    if (msg.type !== undefined) {
      resolved.type = EdgeCreationType.Resolve(msg.type)
    }
    else {
      resolved.type = new EdgeCreationType()
    }

    return resolved;
    }
};

class SetEdgeCreationTypeResponse {
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
    // Serializes a message object of type SetEdgeCreationTypeResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetEdgeCreationTypeResponse
    let len;
    let data = new SetEdgeCreationTypeResponse(null);
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
    return 'graph_creator_msgs/SetEdgeCreationTypeResponse';
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
    const resolved = new SetEdgeCreationTypeResponse(null);
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
  Request: SetEdgeCreationTypeRequest,
  Response: SetEdgeCreationTypeResponse,
  md5sum() { return 'e5f002eea2c5b918b9b4d3297d8315c2'; },
  datatype() { return 'graph_creator_msgs/SetEdgeCreationType'; }
};
