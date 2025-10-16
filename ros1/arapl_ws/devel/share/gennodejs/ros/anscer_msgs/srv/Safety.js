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

class SafetyRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.safety_config = null;
    }
    else {
      if (initObj.hasOwnProperty('safety_config')) {
        this.safety_config = initObj.safety_config
      }
      else {
        this.safety_config = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyRequest
    // Serialize message field [safety_config]
    bufferOffset = _serializer.int8(obj.safety_config, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyRequest
    let len;
    let data = new SafetyRequest(null);
    // Deserialize message field [safety_config]
    data.safety_config = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SafetyRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0d401b7765833ddbdd23a78ce7d31162';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 safety_config
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetyRequest(null);
    if (msg.safety_config !== undefined) {
      resolved.safety_config = msg.safety_config;
    }
    else {
      resolved.safety_config = 0
    }

    return resolved;
    }
};

class SafetyResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyResponse
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyResponse
    let len;
    let data = new SafetyResponse(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SafetyResponse';
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
    const resolved = new SafetyResponse(null);
    return resolved;
    }
};

module.exports = {
  Request: SafetyRequest,
  Response: SafetyResponse,
  md5sum() { return '0d401b7765833ddbdd23a78ce7d31162'; },
  datatype() { return 'anscer_msgs/Safety'; }
};
