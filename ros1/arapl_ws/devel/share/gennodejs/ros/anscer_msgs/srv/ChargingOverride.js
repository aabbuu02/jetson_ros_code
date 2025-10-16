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

class ChargingOverrideRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.charge_override = null;
    }
    else {
      if (initObj.hasOwnProperty('charge_override')) {
        this.charge_override = initObj.charge_override
      }
      else {
        this.charge_override = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ChargingOverrideRequest
    // Serialize message field [charge_override]
    bufferOffset = _serializer.bool(obj.charge_override, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ChargingOverrideRequest
    let len;
    let data = new ChargingOverrideRequest(null);
    // Deserialize message field [charge_override]
    data.charge_override = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/ChargingOverrideRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bd1892b53b11596225dd3b58c0a55908';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool charge_override
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ChargingOverrideRequest(null);
    if (msg.charge_override !== undefined) {
      resolved.charge_override = msg.charge_override;
    }
    else {
      resolved.charge_override = false
    }

    return resolved;
    }
};

class ChargingOverrideResponse {
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
    // Serializes a message object of type ChargingOverrideResponse
    // Serialize message field [status]
    bufferOffset = _serializer.bool(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ChargingOverrideResponse
    let len;
    let data = new ChargingOverrideResponse(null);
    // Deserialize message field [status]
    data.status = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/ChargingOverrideResponse';
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
    const resolved = new ChargingOverrideResponse(null);
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
  Request: ChargingOverrideRequest,
  Response: ChargingOverrideResponse,
  md5sum() { return '26611cba0ebbfa060ca1a9e4e8ff36f7'; },
  datatype() { return 'anscer_msgs/ChargingOverride'; }
};
