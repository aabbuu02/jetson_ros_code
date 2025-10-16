// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ACRControl {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.acr_shelf = null;
      this.target_shelf = null;
      this.acr_action = null;
      this.bar_code_number = null;
      this.whole_bin_number = null;
    }
    else {
      if (initObj.hasOwnProperty('acr_shelf')) {
        this.acr_shelf = initObj.acr_shelf
      }
      else {
        this.acr_shelf = 0;
      }
      if (initObj.hasOwnProperty('target_shelf')) {
        this.target_shelf = initObj.target_shelf
      }
      else {
        this.target_shelf = 0;
      }
      if (initObj.hasOwnProperty('acr_action')) {
        this.acr_action = initObj.acr_action
      }
      else {
        this.acr_action = 0;
      }
      if (initObj.hasOwnProperty('bar_code_number')) {
        this.bar_code_number = initObj.bar_code_number
      }
      else {
        this.bar_code_number = 0;
      }
      if (initObj.hasOwnProperty('whole_bin_number')) {
        this.whole_bin_number = initObj.whole_bin_number
      }
      else {
        this.whole_bin_number = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ACRControl
    // Serialize message field [acr_shelf]
    bufferOffset = _serializer.int16(obj.acr_shelf, buffer, bufferOffset);
    // Serialize message field [target_shelf]
    bufferOffset = _serializer.int16(obj.target_shelf, buffer, bufferOffset);
    // Serialize message field [acr_action]
    bufferOffset = _serializer.int16(obj.acr_action, buffer, bufferOffset);
    // Serialize message field [bar_code_number]
    bufferOffset = _serializer.int64(obj.bar_code_number, buffer, bufferOffset);
    // Serialize message field [whole_bin_number]
    bufferOffset = _serializer.int64(obj.whole_bin_number, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ACRControl
    let len;
    let data = new ACRControl(null);
    // Deserialize message field [acr_shelf]
    data.acr_shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [target_shelf]
    data.target_shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [acr_action]
    data.acr_action = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [bar_code_number]
    data.bar_code_number = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [whole_bin_number]
    data.whole_bin_number = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 22;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/ACRControl';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fc49709c8d8c7803a2e07e7391600be5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #mission status
    int32 PICKUP =0
    int32 DROPOFF =1
    
    int16 acr_shelf
    int16 target_shelf
    int16 acr_action
    int64 bar_code_number
    int64 whole_bin_number
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ACRControl(null);
    if (msg.acr_shelf !== undefined) {
      resolved.acr_shelf = msg.acr_shelf;
    }
    else {
      resolved.acr_shelf = 0
    }

    if (msg.target_shelf !== undefined) {
      resolved.target_shelf = msg.target_shelf;
    }
    else {
      resolved.target_shelf = 0
    }

    if (msg.acr_action !== undefined) {
      resolved.acr_action = msg.acr_action;
    }
    else {
      resolved.acr_action = 0
    }

    if (msg.bar_code_number !== undefined) {
      resolved.bar_code_number = msg.bar_code_number;
    }
    else {
      resolved.bar_code_number = 0
    }

    if (msg.whole_bin_number !== undefined) {
      resolved.whole_bin_number = msg.whole_bin_number;
    }
    else {
      resolved.whole_bin_number = 0
    }

    return resolved;
    }
};

// Constants for message
ACRControl.Constants = {
  PICKUP: 0,
  DROPOFF: 1,
}

module.exports = ACRControl;
