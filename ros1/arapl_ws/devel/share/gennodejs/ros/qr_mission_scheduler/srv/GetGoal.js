// Auto-generated. Do not edit!

// (in-package qr_mission_scheduler.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class GetGoalRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.goalType = null;
      this.source_id = null;
      this.target_id = null;
    }
    else {
      if (initObj.hasOwnProperty('goalType')) {
        this.goalType = initObj.goalType
      }
      else {
        this.goalType = '';
      }
      if (initObj.hasOwnProperty('source_id')) {
        this.source_id = initObj.source_id
      }
      else {
        this.source_id = 0.0;
      }
      if (initObj.hasOwnProperty('target_id')) {
        this.target_id = initObj.target_id
      }
      else {
        this.target_id = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetGoalRequest
    // Serialize message field [goalType]
    bufferOffset = _serializer.string(obj.goalType, buffer, bufferOffset);
    // Serialize message field [source_id]
    bufferOffset = _serializer.float64(obj.source_id, buffer, bufferOffset);
    // Serialize message field [target_id]
    bufferOffset = _serializer.float64(obj.target_id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGoalRequest
    let len;
    let data = new GetGoalRequest(null);
    // Deserialize message field [goalType]
    data.goalType = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [source_id]
    data.source_id = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [target_id]
    data.target_id = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.goalType);
    return length + 20;
  }

  static datatype() {
    // Returns string type for a service object
    return 'qr_mission_scheduler/GetGoalRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd2f8e68b25673e07d8c78993888f0d45';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Source and destination IDs
    string goalType
    float64 source_id
    float64 target_id
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetGoalRequest(null);
    if (msg.goalType !== undefined) {
      resolved.goalType = msg.goalType;
    }
    else {
      resolved.goalType = ''
    }

    if (msg.source_id !== undefined) {
      resolved.source_id = msg.source_id;
    }
    else {
      resolved.source_id = 0.0
    }

    if (msg.target_id !== undefined) {
      resolved.target_id = msg.target_id;
    }
    else {
      resolved.target_id = 0.0
    }

    return resolved;
    }
};

class GetGoalResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetGoalResponse
    // Serialize message field [result]
    bufferOffset = _serializer.string(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGoalResponse
    let len;
    let data = new GetGoalResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.result);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'qr_mission_scheduler/GetGoalResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c22f2a1ed8654a0b365f1bb3f7ff2c0f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string result
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetGoalResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: GetGoalRequest,
  Response: GetGoalResponse,
  md5sum() { return 'e20506e2259fb39260e6aaae4121d9e2'; },
  datatype() { return 'qr_mission_scheduler/GetGoal'; }
};
