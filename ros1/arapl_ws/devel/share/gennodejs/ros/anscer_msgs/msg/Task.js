// Auto-generated. Do not edit!

// (in-package anscer_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ACRControl = require('./ACRControl.js');
let ChargeInfo = require('./ChargeInfo.js');

//-----------------------------------------------------------

class Task {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.index = null;
      this.waypoint_index = null;
      this.number = null;
      this.activate = null;
      this.acr_info = null;
      this.charge_info = null;
    }
    else {
      if (initObj.hasOwnProperty('index')) {
        this.index = initObj.index
      }
      else {
        this.index = '';
      }
      if (initObj.hasOwnProperty('waypoint_index')) {
        this.waypoint_index = initObj.waypoint_index
      }
      else {
        this.waypoint_index = 0;
      }
      if (initObj.hasOwnProperty('number')) {
        this.number = initObj.number
      }
      else {
        this.number = 0;
      }
      if (initObj.hasOwnProperty('activate')) {
        this.activate = initObj.activate
      }
      else {
        this.activate = false;
      }
      if (initObj.hasOwnProperty('acr_info')) {
        this.acr_info = initObj.acr_info
      }
      else {
        this.acr_info = new ACRControl();
      }
      if (initObj.hasOwnProperty('charge_info')) {
        this.charge_info = initObj.charge_info
      }
      else {
        this.charge_info = new ChargeInfo();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Task
    // Serialize message field [index]
    bufferOffset = _serializer.string(obj.index, buffer, bufferOffset);
    // Serialize message field [waypoint_index]
    bufferOffset = _serializer.int16(obj.waypoint_index, buffer, bufferOffset);
    // Serialize message field [number]
    bufferOffset = _serializer.int16(obj.number, buffer, bufferOffset);
    // Serialize message field [activate]
    bufferOffset = _serializer.bool(obj.activate, buffer, bufferOffset);
    // Serialize message field [acr_info]
    bufferOffset = ACRControl.serialize(obj.acr_info, buffer, bufferOffset);
    // Serialize message field [charge_info]
    bufferOffset = ChargeInfo.serialize(obj.charge_info, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Task
    let len;
    let data = new Task(null);
    // Deserialize message field [index]
    data.index = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [waypoint_index]
    data.waypoint_index = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [number]
    data.number = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [activate]
    data.activate = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [acr_info]
    data.acr_info = ACRControl.deserialize(buffer, bufferOffset);
    // Deserialize message field [charge_info]
    data.charge_info = ChargeInfo.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.index);
    return length + 42;
  }

  static datatype() {
    // Returns string type for a message object
    return 'anscer_msgs/Task';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a8514c525e421060a8b705e1ac323b92';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string index
    int16 waypoint_index
    int16 number
    bool activate
    anscer_msgs/ACRControl acr_info
    anscer_msgs/ChargeInfo charge_info
    
    ================================================================================
    MSG: anscer_msgs/ACRControl
    #mission status
    int32 PICKUP =0
    int32 DROPOFF =1
    
    int16 acr_shelf
    int16 target_shelf
    int16 acr_action
    int64 bar_code_number
    int64 whole_bin_number
    
    ================================================================================
    MSG: anscer_msgs/ChargeInfo
    uint8 CONNECTED=1
    uint8 DISCONNECTED=2
    uint8 OVERRIDE=3
    
    bool charger_activate
    int32 charge_time
    bool ignore_time
    float32 charge_percentage
    bool ignore_percentage
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Task(null);
    if (msg.index !== undefined) {
      resolved.index = msg.index;
    }
    else {
      resolved.index = ''
    }

    if (msg.waypoint_index !== undefined) {
      resolved.waypoint_index = msg.waypoint_index;
    }
    else {
      resolved.waypoint_index = 0
    }

    if (msg.number !== undefined) {
      resolved.number = msg.number;
    }
    else {
      resolved.number = 0
    }

    if (msg.activate !== undefined) {
      resolved.activate = msg.activate;
    }
    else {
      resolved.activate = false
    }

    if (msg.acr_info !== undefined) {
      resolved.acr_info = ACRControl.Resolve(msg.acr_info)
    }
    else {
      resolved.acr_info = new ACRControl()
    }

    if (msg.charge_info !== undefined) {
      resolved.charge_info = ChargeInfo.Resolve(msg.charge_info)
    }
    else {
      resolved.charge_info = new ChargeInfo()
    }

    return resolved;
    }
};

module.exports = Task;
