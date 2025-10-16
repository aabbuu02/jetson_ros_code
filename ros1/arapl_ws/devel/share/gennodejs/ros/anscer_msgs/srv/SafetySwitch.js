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

class SafetySwitchRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.safety_switch = null;
    }
    else {
      if (initObj.hasOwnProperty('safety_switch')) {
        this.safety_switch = initObj.safety_switch
      }
      else {
        this.safety_switch = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetySwitchRequest
    // Serialize message field [safety_switch]
    bufferOffset = _serializer.int8(obj.safety_switch, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetySwitchRequest
    let len;
    let data = new SafetySwitchRequest(null);
    // Deserialize message field [safety_switch]
    data.safety_switch = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SafetySwitchRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '326cd3578d44842b737297960a21b2ac';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 safety_switch
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetySwitchRequest(null);
    if (msg.safety_switch !== undefined) {
      resolved.safety_switch = msg.safety_switch;
    }
    else {
      resolved.safety_switch = 0
    }

    return resolved;
    }
};

class SafetySwitchResponse {
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
    // Serializes a message object of type SafetySwitchResponse
    // Serialize message field [status]
    bufferOffset = _serializer.bool(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetySwitchResponse
    let len;
    let data = new SafetySwitchResponse(null);
    // Deserialize message field [status]
    data.status = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/SafetySwitchResponse';
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
    const resolved = new SafetySwitchResponse(null);
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
  Request: SafetySwitchRequest,
  Response: SafetySwitchResponse,
  md5sum() { return '417735b2444563673e85098665efa4f8'; },
  datatype() { return 'anscer_msgs/SafetySwitch'; }
};
