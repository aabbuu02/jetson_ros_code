// Auto-generated. Do not edit!

// (in-package anscer_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SafetyZoneRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.safety_zone = null;
    }
    else {
      if (initObj.hasOwnProperty('safety_zone')) {
        this.safety_zone = initObj.safety_zone
      }
      else {
        this.safety_zone = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyZoneRequest
    // Serialize message field [safety_zone]
    bufferOffset = _serializer.float32(obj.safety_zone, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyZoneRequest
    let len;
    let data = new SafetyZoneRequest(null);
    // Deserialize message field [safety_zone]
    data.safety_zone = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SafetyZoneRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3dfa5a05dd5746de1f5b03b04e0274d1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 safety_zone
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetyZoneRequest(null);
    if (msg.safety_zone !== undefined) {
      resolved.safety_zone = msg.safety_zone;
    }
    else {
      resolved.safety_zone = 0.0
    }

    return resolved;
    }
};

class SafetyZoneResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyZoneResponse
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyZoneResponse
    let len;
    let data = new SafetyZoneResponse(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SafetyZoneResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetyZoneResponse(null);
    return resolved;
    }
};

module.exports = {
  Request: SafetyZoneRequest,
  Response: SafetyZoneResponse,
  md5sum() { return '3dfa5a05dd5746de1f5b03b04e0274d1'; },
  datatype() { return 'anscer_msgs/SafetyZone'; }
};
