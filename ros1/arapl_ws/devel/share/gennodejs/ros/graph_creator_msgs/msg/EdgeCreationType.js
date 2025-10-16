// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class EdgeCreationType {
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
        this.type = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EdgeCreationType
    // Serialize message field [type]
    bufferOffset = _serializer.uint8(obj.type, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EdgeCreationType
    let len;
    let data = new EdgeCreationType(null);
    // Deserialize message field [type]
    data.type = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_creator_msgs/EdgeCreationType';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ca84d608a8d470273fdf849e3d46708a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new EdgeCreationType(null);
    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = 0
    }

    return resolved;
    }
};

// Constants for message
EdgeCreationType.Constants = {
  EDGE_CREATION_TYPE_STRAIGHT_LINE: 0,
  EDGE_CREATION_TYPE_CUBIC_BEZIER: 1,
}

module.exports = EdgeCreationType;
