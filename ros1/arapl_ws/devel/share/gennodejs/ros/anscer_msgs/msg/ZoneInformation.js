// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Indication = require('./Indication.js');

//-----------------------------------------------------------

class ZoneInformation {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.indication_info = null;
      this.speed_factor = null;
    }
    else {
      if (initObj.hasOwnProperty('indication_info')) {
        this.indication_info = initObj.indication_info
      }
      else {
        this.indication_info = new Indication();
      }
      if (initObj.hasOwnProperty('speed_factor')) {
        this.speed_factor = initObj.speed_factor
      }
      else {
        this.speed_factor = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ZoneInformation
    // Serialize message field [indication_info]
    bufferOffset = Indication.serialize(obj.indication_info, buffer, bufferOffset);
    // Serialize message field [speed_factor]
    bufferOffset = _serializer.float32(obj.speed_factor, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ZoneInformation
    let len;
    let data = new ZoneInformation(null);
    // Deserialize message field [indication_info]
    data.indication_info = Indication.deserialize(buffer, bufferOffset);
    // Deserialize message field [speed_factor]
    data.speed_factor = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += Indication.getMessageSize(object.indication_info);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/ZoneInformation';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '37c3f4225b2755242cf0813eaae1cb1a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    anscer_msgs/Indication indication_info
    float32 speed_factor
    
    ================================================================================
    MSG: anscer_msgs/Indication
    string color
    int8 color_mode
    bool buzzer
    int8 buzzer_mode
    int16 priority
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ZoneInformation(null);
    if (msg.indication_info !== undefined) {
      resolved.indication_info = Indication.Resolve(msg.indication_info)
    }
    else {
      resolved.indication_info = new Indication()
    }

    if (msg.speed_factor !== undefined) {
      resolved.speed_factor = msg.speed_factor;
    }
    else {
      resolved.speed_factor = 0.0
    }

    return resolved;
    }
};

module.exports = ZoneInformation;
