// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class ZonePoints {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.index = null;
      this.coordinates = null;
    }
    else {
      if (initObj.hasOwnProperty('index')) {
        this.index = initObj.index
      }
      else {
        this.index = '';
      }
      if (initObj.hasOwnProperty('coordinates')) {
        this.coordinates = initObj.coordinates
      }
      else {
        this.coordinates = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ZonePoints
    // Serialize message field [index]
    bufferOffset = _serializer.string(obj.index, buffer, bufferOffset);
    // Serialize message field [coordinates]
    // Serialize the length for message field [coordinates]
    bufferOffset = _serializer.uint32(obj.coordinates.length, buffer, bufferOffset);
    obj.coordinates.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Point.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ZonePoints
    let len;
    let data = new ZonePoints(null);
    // Deserialize message field [index]
    data.index = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [coordinates]
    // Deserialize array length for message field [coordinates]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.coordinates = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.coordinates[i] = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.index);
    length += 24 * object.coordinates.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/ZonePoints';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c62b504d2caceb162c84163822c2459c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string index
    geometry_msgs/Point[] coordinates
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ZonePoints(null);
    if (msg.index !== undefined) {
      resolved.index = msg.index;
    }
    else {
      resolved.index = ''
    }

    if (msg.coordinates !== undefined) {
      resolved.coordinates = new Array(msg.coordinates.length);
      for (let i = 0; i < resolved.coordinates.length; ++i) {
        resolved.coordinates[i] = geometry_msgs.msg.Point.Resolve(msg.coordinates[i]);
      }
    }
    else {
      resolved.coordinates = []
    }

    return resolved;
    }
};

module.exports = ZonePoints;
