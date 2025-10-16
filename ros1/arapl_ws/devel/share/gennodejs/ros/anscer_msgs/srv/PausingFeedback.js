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

class PausingFeedbackRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pause_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('pause_feedback')) {
        this.pause_feedback = initObj.pause_feedback
      }
      else {
        this.pause_feedback = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PausingFeedbackRequest
    // Serialize message field [pause_feedback]
    bufferOffset = _serializer.bool(obj.pause_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PausingFeedbackRequest
    let len;
    let data = new PausingFeedbackRequest(null);
    // Deserialize message field [pause_feedback]
    data.pause_feedback = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/PausingFeedbackRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '538266cc3b13f11b745fde95be9c626a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool pause_feedback
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PausingFeedbackRequest(null);
    if (msg.pause_feedback !== undefined) {
      resolved.pause_feedback = msg.pause_feedback;
    }
    else {
      resolved.pause_feedback = false
    }

    return resolved;
    }
};

class PausingFeedbackResponse {
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
    // Serializes a message object of type PausingFeedbackResponse
    // Serialize message field [status]
    bufferOffset = _serializer.bool(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PausingFeedbackResponse
    let len;
    let data = new PausingFeedbackResponse(null);
    // Deserialize message field [status]
    data.status = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/PausingFeedbackResponse';
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
    const resolved = new PausingFeedbackResponse(null);
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
  Request: PausingFeedbackRequest,
  Response: PausingFeedbackResponse,
  md5sum() { return '35c9adc405f74949be455cf9463364f8'; },
  datatype() { return 'anscer_msgs/PausingFeedback'; }
};
