// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let KeyValue = require('./KeyValue.js');

//-----------------------------------------------------------

class KeyValues {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.keyvalue = null;
    }
    else {
      if (initObj.hasOwnProperty('keyvalue')) {
        this.keyvalue = initObj.keyvalue
      }
      else {
        this.keyvalue = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KeyValues
    // Serialize message field [keyvalue]
    // Serialize the length for message field [keyvalue]
    bufferOffset = _serializer.uint32(obj.keyvalue.length, buffer, bufferOffset);
    obj.keyvalue.forEach((val) => {
      bufferOffset = KeyValue.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KeyValues
    let len;
    let data = new KeyValues(null);
    // Deserialize message field [keyvalue]
    // Deserialize array length for message field [keyvalue]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.keyvalue = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.keyvalue[i] = KeyValue.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.keyvalue.forEach((val) => {
      length += KeyValue.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/KeyValues';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a0bd91006b3876ff7bb45ae93c1b6f32';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    KeyValue[] keyvalue
    
    ================================================================================
    MSG: anscer_msgs/KeyValue
    string key			#Label of the value
    string value		#Value to track
    string unit
    float32 errorlevel			#Errorlevel of the value
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new KeyValues(null);
    if (msg.keyvalue !== undefined) {
      resolved.keyvalue = new Array(msg.keyvalue.length);
      for (let i = 0; i < resolved.keyvalue.length; ++i) {
        resolved.keyvalue[i] = KeyValue.Resolve(msg.keyvalue[i]);
      }
    }
    else {
      resolved.keyvalue = []
    }

    return resolved;
    }
};

module.exports = KeyValues;
