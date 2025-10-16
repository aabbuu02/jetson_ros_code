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

class ControllerMode {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.controller_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('controller_mode')) {
        this.controller_mode = initObj.controller_mode
      }
      else {
        this.controller_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ControllerMode
    // Serialize message field [controller_mode]
    bufferOffset = _serializer.int8(obj.controller_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ControllerMode
    let len;
    let data = new ControllerMode(null);
    // Deserialize message field [controller_mode]
    data.controller_mode = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/ControllerMode';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8df55bc2a0cb79189a6d96bf669a6495';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 DEFAULT_MOTION=0
    uint8 CHARGE_DOCK=1
    uint8 CHARGE_UNDOCK=2
    uint8 BARCODE_MOTION=3
    int8 controller_mode
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ControllerMode(null);
    if (msg.controller_mode !== undefined) {
      resolved.controller_mode = msg.controller_mode;
    }
    else {
      resolved.controller_mode = 0
    }

    return resolved;
    }
};

// Constants for message
ControllerMode.Constants = {
  DEFAULT_MOTION: 0,
  CHARGE_DOCK: 1,
  CHARGE_UNDOCK: 2,
  BARCODE_MOTION: 3,
}

module.exports = ControllerMode;
