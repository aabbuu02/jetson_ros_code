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

class Indication {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.color = null;
      this.color_mode = null;
      this.buzzer = null;
      this.buzzer_mode = null;
      this.priority = null;
    }
    else {
      if (initObj.hasOwnProperty('color')) {
        this.color = initObj.color
      }
      else {
        this.color = '';
      }
      if (initObj.hasOwnProperty('color_mode')) {
        this.color_mode = initObj.color_mode
      }
      else {
        this.color_mode = 0;
      }
      if (initObj.hasOwnProperty('buzzer')) {
        this.buzzer = initObj.buzzer
      }
      else {
        this.buzzer = false;
      }
      if (initObj.hasOwnProperty('buzzer_mode')) {
        this.buzzer_mode = initObj.buzzer_mode
      }
      else {
        this.buzzer_mode = 0;
      }
      if (initObj.hasOwnProperty('priority')) {
        this.priority = initObj.priority
      }
      else {
        this.priority = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Indication
    // Serialize message field [color]
    bufferOffset = _serializer.string(obj.color, buffer, bufferOffset);
    // Serialize message field [color_mode]
    bufferOffset = _serializer.int8(obj.color_mode, buffer, bufferOffset);
    // Serialize message field [buzzer]
    bufferOffset = _serializer.bool(obj.buzzer, buffer, bufferOffset);
    // Serialize message field [buzzer_mode]
    bufferOffset = _serializer.int8(obj.buzzer_mode, buffer, bufferOffset);
    // Serialize message field [priority]
    bufferOffset = _serializer.int16(obj.priority, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Indication
    let len;
    let data = new Indication(null);
    // Deserialize message field [color]
    data.color = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [color_mode]
    data.color_mode = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [buzzer]
    data.buzzer = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [buzzer_mode]
    data.buzzer_mode = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [priority]
    data.priority = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.color);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/Indication';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '121d26089d956929130db8efbb5ea4b2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new Indication(null);
    if (msg.color !== undefined) {
      resolved.color = msg.color;
    }
    else {
      resolved.color = ''
    }

    if (msg.color_mode !== undefined) {
      resolved.color_mode = msg.color_mode;
    }
    else {
      resolved.color_mode = 0
    }

    if (msg.buzzer !== undefined) {
      resolved.buzzer = msg.buzzer;
    }
    else {
      resolved.buzzer = false
    }

    if (msg.buzzer_mode !== undefined) {
      resolved.buzzer_mode = msg.buzzer_mode;
    }
    else {
      resolved.buzzer_mode = 0
    }

    if (msg.priority !== undefined) {
      resolved.priority = msg.priority;
    }
    else {
      resolved.priority = 0
    }

    return resolved;
    }
};

module.exports = Indication;
