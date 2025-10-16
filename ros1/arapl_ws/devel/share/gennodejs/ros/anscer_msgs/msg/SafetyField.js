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

class SafetyField {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.field_id = null;
      this.is_front = null;
      this.is_rear = null;
    }
    else {
      if (initObj.hasOwnProperty('field_id')) {
        this.field_id = initObj.field_id
      }
      else {
        this.field_id = 0;
      }
      if (initObj.hasOwnProperty('is_front')) {
        this.is_front = initObj.is_front
      }
      else {
        this.is_front = false;
      }
      if (initObj.hasOwnProperty('is_rear')) {
        this.is_rear = initObj.is_rear
      }
      else {
        this.is_rear = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SafetyField
    // Serialize message field [field_id]
    bufferOffset = _serializer.int8(obj.field_id, buffer, bufferOffset);
    // Serialize message field [is_front]
    bufferOffset = _serializer.bool(obj.is_front, buffer, bufferOffset);
    // Serialize message field [is_rear]
    bufferOffset = _serializer.bool(obj.is_rear, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SafetyField
    let len;
    let data = new SafetyField(null);
    // Deserialize message field [field_id]
    data.field_id = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [is_front]
    data.is_front = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_rear]
    data.is_rear = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 3;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/SafetyField';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '02646f6a7b4907b4d9f4e67a0cbf76b2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 field_id
    bool is_front
    bool is_rear
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SafetyField(null);
    if (msg.field_id !== undefined) {
      resolved.field_id = msg.field_id;
    }
    else {
      resolved.field_id = 0
    }

    if (msg.is_front !== undefined) {
      resolved.is_front = msg.is_front;
    }
    else {
      resolved.is_front = false
    }

    if (msg.is_rear !== undefined) {
      resolved.is_rear = msg.is_rear;
    }
    else {
      resolved.is_rear = false
    }

    return resolved;
    }
};

module.exports = SafetyField;
