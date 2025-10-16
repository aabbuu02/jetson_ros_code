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

class LiftAction {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.unique_id = null;
      this.reached = null;
      this.rack = null;
      this.shelf = null;
      this.acr_shelf = null;
      this.action = null;
      this.whole_bin_no = null;
      this.putaway_barcode = null;
    }
    else {
      if (initObj.hasOwnProperty('unique_id')) {
        this.unique_id = initObj.unique_id
      }
      else {
        this.unique_id = '';
      }
      if (initObj.hasOwnProperty('reached')) {
        this.reached = initObj.reached
      }
      else {
        this.reached = false;
      }
      if (initObj.hasOwnProperty('rack')) {
        this.rack = initObj.rack
      }
      else {
        this.rack = 0;
      }
      if (initObj.hasOwnProperty('shelf')) {
        this.shelf = initObj.shelf
      }
      else {
        this.shelf = 0;
      }
      if (initObj.hasOwnProperty('acr_shelf')) {
        this.acr_shelf = initObj.acr_shelf
      }
      else {
        this.acr_shelf = 0;
      }
      if (initObj.hasOwnProperty('action')) {
        this.action = initObj.action
      }
      else {
        this.action = 0;
      }
      if (initObj.hasOwnProperty('whole_bin_no')) {
        this.whole_bin_no = initObj.whole_bin_no
      }
      else {
        this.whole_bin_no = '';
      }
      if (initObj.hasOwnProperty('putaway_barcode')) {
        this.putaway_barcode = initObj.putaway_barcode
      }
      else {
        this.putaway_barcode = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LiftAction
    // Serialize message field [unique_id]
    bufferOffset = _serializer.string(obj.unique_id, buffer, bufferOffset);
    // Serialize message field [reached]
    bufferOffset = _serializer.bool(obj.reached, buffer, bufferOffset);
    // Serialize message field [rack]
    bufferOffset = _serializer.int16(obj.rack, buffer, bufferOffset);
    // Serialize message field [shelf]
    bufferOffset = _serializer.int16(obj.shelf, buffer, bufferOffset);
    // Serialize message field [acr_shelf]
    bufferOffset = _serializer.int16(obj.acr_shelf, buffer, bufferOffset);
    // Serialize message field [action]
    bufferOffset = _serializer.int16(obj.action, buffer, bufferOffset);
    // Serialize message field [whole_bin_no]
    bufferOffset = _serializer.string(obj.whole_bin_no, buffer, bufferOffset);
    // Serialize message field [putaway_barcode]
    bufferOffset = _serializer.string(obj.putaway_barcode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LiftAction
    let len;
    let data = new LiftAction(null);
    // Deserialize message field [unique_id]
    data.unique_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [reached]
    data.reached = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [rack]
    data.rack = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [shelf]
    data.shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [acr_shelf]
    data.acr_shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [action]
    data.action = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [whole_bin_no]
    data.whole_bin_no = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [putaway_barcode]
    data.putaway_barcode = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.unique_id);
    length += _getByteLength(object.whole_bin_no);
    length += _getByteLength(object.putaway_barcode);
    return length + 21;
  }

  static datatype() {
    // Returns string type for a message object
    return 'lift_action/LiftAction';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '74abac7a70a7dbf2314bec741f0342c4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string unique_id
    bool reached
    int16 rack
    int16 shelf
    int16 acr_shelf
    int16 action
    string whole_bin_no
    string putaway_barcode
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LiftAction(null);
    if (msg.unique_id !== undefined) {
      resolved.unique_id = msg.unique_id;
    }
    else {
      resolved.unique_id = ''
    }

    if (msg.reached !== undefined) {
      resolved.reached = msg.reached;
    }
    else {
      resolved.reached = false
    }

    if (msg.rack !== undefined) {
      resolved.rack = msg.rack;
    }
    else {
      resolved.rack = 0
    }

    if (msg.shelf !== undefined) {
      resolved.shelf = msg.shelf;
    }
    else {
      resolved.shelf = 0
    }

    if (msg.acr_shelf !== undefined) {
      resolved.acr_shelf = msg.acr_shelf;
    }
    else {
      resolved.acr_shelf = 0
    }

    if (msg.action !== undefined) {
      resolved.action = msg.action;
    }
    else {
      resolved.action = 0
    }

    if (msg.whole_bin_no !== undefined) {
      resolved.whole_bin_no = msg.whole_bin_no;
    }
    else {
      resolved.whole_bin_no = ''
    }

    if (msg.putaway_barcode !== undefined) {
      resolved.putaway_barcode = msg.putaway_barcode;
    }
    else {
      resolved.putaway_barcode = ''
    }

    return resolved;
    }
};

module.exports = LiftAction;
