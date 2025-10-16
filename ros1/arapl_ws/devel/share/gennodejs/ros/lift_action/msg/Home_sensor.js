// Auto-generated. Do not edit!

// (in-package lift_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Home_sensor {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.process = null;
      this.homingStatus = null;
    }
    else {
      if (initObj.hasOwnProperty('process')) {
        this.process = initObj.process
      }
      else {
        this.process = '';
      }
      if (initObj.hasOwnProperty('homingStatus')) {
        this.homingStatus = initObj.homingStatus
      }
      else {
        this.homingStatus = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Home_sensor
    // Serialize message field [process]
    bufferOffset = _serializer.string(obj.process, buffer, bufferOffset);
    // Serialize message field [homingStatus]
    bufferOffset = _serializer.bool(obj.homingStatus, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Home_sensor
    let len;
    let data = new Home_sensor(null);
    // Deserialize message field [process]
    data.process = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [homingStatus]
    data.homingStatus = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.process);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'lift_action/Home_sensor';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4558b3f32ba7b3eceae2851b267cf424';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string process
    bool homingStatus
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Home_sensor(null);
    if (msg.process !== undefined) {
      resolved.process = msg.process;
    }
    else {
      resolved.process = ''
    }

    if (msg.homingStatus !== undefined) {
      resolved.homingStatus = msg.homingStatus;
    }
    else {
      resolved.homingStatus = false
    }

    return resolved;
    }
};

module.exports = Home_sensor;
