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

class EdgeDirectionCreationType {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.direction_type = null;
    }
    else {
      if (initObj.hasOwnProperty('direction_type')) {
        this.direction_type = initObj.direction_type
      }
      else {
        this.direction_type = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EdgeDirectionCreationType
    // Serialize message field [direction_type]
    bufferOffset = _serializer.uint8(obj.direction_type, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EdgeDirectionCreationType
    let len;
    let data = new EdgeDirectionCreationType(null);
    // Deserialize message field [direction_type]
    data.direction_type = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_creator_msgs/EdgeDirectionCreationType';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '72ffc1009e4ad91bac1a2f601f8e57c1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new EdgeDirectionCreationType(null);
    if (msg.direction_type !== undefined) {
      resolved.direction_type = msg.direction_type;
    }
    else {
      resolved.direction_type = 0
    }

    return resolved;
    }
};

// Constants for message
EdgeDirectionCreationType.Constants = {
  EDGE_DIRECTION_CREATION_TYPE_FORWARD: 0,
  EDGE_DIRECTION_CREATION_TYPE_REVERSE: 1,
  EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL: 2,
}

module.exports = EdgeDirectionCreationType;
