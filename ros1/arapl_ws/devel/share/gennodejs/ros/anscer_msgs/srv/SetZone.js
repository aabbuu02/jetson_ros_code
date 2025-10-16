// Auto-generated. Do not edit!

// (in-package anscer_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ZonePoints = require('../msg/ZonePoints.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetZoneRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.zone_points = null;
    }
    else {
      if (initObj.hasOwnProperty('zone_points')) {
        this.zone_points = initObj.zone_points
      }
      else {
        this.zone_points = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetZoneRequest
    // Serialize message field [zone_points]
    // Serialize the length for message field [zone_points]
    bufferOffset = _serializer.uint32(obj.zone_points.length, buffer, bufferOffset);
    obj.zone_points.forEach((val) => {
      bufferOffset = ZonePoints.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetZoneRequest
    let len;
    let data = new SetZoneRequest(null);
    // Deserialize message field [zone_points]
    // Deserialize array length for message field [zone_points]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.zone_points = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.zone_points[i] = ZonePoints.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.zone_points.forEach((val) => {
      length += ZonePoints.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SetZoneRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '08e9fcd73c1179703fff15f09533420d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    anscer_msgs/ZonePoints[] zone_points
    
    ================================================================================
    MSG: anscer_msgs/ZonePoints
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
    const resolved = new SetZoneRequest(null);
    if (msg.zone_points !== undefined) {
      resolved.zone_points = new Array(msg.zone_points.length);
      for (let i = 0; i < resolved.zone_points.length; ++i) {
        resolved.zone_points[i] = ZonePoints.Resolve(msg.zone_points[i]);
      }
    }
    else {
      resolved.zone_points = []
    }

    return resolved;
    }
};

class SetZoneResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.status = null;
    }
    else {
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetZoneResponse
    // Serialize message field [status]
    bufferOffset = _serializer.bool(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetZoneResponse
    let len;
    let data = new SetZoneResponse(null);
    // Deserialize message field [status]
    data.status = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SetZoneResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3a1255d4d998bd4d6585c64639b5ee9a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool status
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetZoneResponse(null);
    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = false
    }

    return resolved;
    }
};

module.exports = {
  Request: SetZoneRequest,
  Response: SetZoneResponse,
  md5sum() { return '37c3e3d21bd5bbc35f0e2a546f8b8b1a'; },
  datatype() { return 'anscer_msgs/SetZone'; }
};
