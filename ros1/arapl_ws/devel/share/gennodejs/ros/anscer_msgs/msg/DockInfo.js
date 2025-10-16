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

class DockInfo {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dock_marker = null;
      this.dock_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('dock_marker')) {
        this.dock_marker = initObj.dock_marker
      }
      else {
        this.dock_marker = 0;
      }
      if (initObj.hasOwnProperty('dock_mode')) {
        this.dock_mode = initObj.dock_mode
      }
      else {
        this.dock_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DockInfo
    // Serialize message field [dock_marker]
    bufferOffset = _serializer.int8(obj.dock_marker, buffer, bufferOffset);
    // Serialize message field [dock_mode]
    bufferOffset = _serializer.int8(obj.dock_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DockInfo
    let len;
    let data = new DockInfo(null);
    // Deserialize message field [dock_marker]
    data.dock_marker = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [dock_mode]
    data.dock_mode = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/DockInfo';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '72372d50c9cb649d61d640ea75a875cc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 FIDUCIALDOCKING=1
    uint8 REFLECTORDOCKING=2
    uint8 TROLLEYDOCKING=3
    uint8 ICPDOCKING=4
    uint8 GROUNDMARKERDOCKING=5
    uint8 SIDEWISEDOCKING=6
    
    uint8 DOCKSTATE=1
    uint8 UNDOCKSTATE=2
    
    int8 dock_marker
    int8 dock_mode
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DockInfo(null);
    if (msg.dock_marker !== undefined) {
      resolved.dock_marker = msg.dock_marker;
    }
    else {
      resolved.dock_marker = 0
    }

    if (msg.dock_mode !== undefined) {
      resolved.dock_mode = msg.dock_mode;
    }
    else {
      resolved.dock_mode = 0
    }

    return resolved;
    }
};

// Constants for message
DockInfo.Constants = {
  FIDUCIALDOCKING: 1,
  REFLECTORDOCKING: 2,
  TROLLEYDOCKING: 3,
  ICPDOCKING: 4,
  GROUNDMARKERDOCKING: 5,
  SIDEWISEDOCKING: 6,
  DOCKSTATE: 1,
  UNDOCKSTATE: 2,
}

module.exports = DockInfo;
