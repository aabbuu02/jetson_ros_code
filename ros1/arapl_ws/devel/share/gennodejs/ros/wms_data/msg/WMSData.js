// Auto-generated. Do not edit!

// (in-package wms_data.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class WMSData {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.unique_id = null;
      this.date = null;
      this.priority = null;
      this.rack = null;
      this.shelf = null;
      this.bin = null;
      this.action = null;
      this.status = null;
      this.ean_code = null;
      this.putaway_code = null;
      this.acr_shelf = null;
      this.whole_bin_no = null;
      this.core = null;
      this.level = null;
      this.year = null;
      this.date_data = null;
      this.serial_no = null;
    }
    else {
      if (initObj.hasOwnProperty('unique_id')) {
        this.unique_id = initObj.unique_id
      }
      else {
        this.unique_id = '';
      }
      if (initObj.hasOwnProperty('date')) {
        this.date = initObj.date
      }
      else {
        this.date = '';
      }
      if (initObj.hasOwnProperty('priority')) {
        this.priority = initObj.priority
      }
      else {
        this.priority = 0;
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
      if (initObj.hasOwnProperty('bin')) {
        this.bin = initObj.bin
      }
      else {
        this.bin = 0;
      }
      if (initObj.hasOwnProperty('action')) {
        this.action = initObj.action
      }
      else {
        this.action = false;
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = false;
      }
      if (initObj.hasOwnProperty('ean_code')) {
        this.ean_code = initObj.ean_code
      }
      else {
        this.ean_code = '';
      }
      if (initObj.hasOwnProperty('putaway_code')) {
        this.putaway_code = initObj.putaway_code
      }
      else {
        this.putaway_code = '';
      }
      if (initObj.hasOwnProperty('acr_shelf')) {
        this.acr_shelf = initObj.acr_shelf
      }
      else {
        this.acr_shelf = 0;
      }
      if (initObj.hasOwnProperty('whole_bin_no')) {
        this.whole_bin_no = initObj.whole_bin_no
      }
      else {
        this.whole_bin_no = '';
      }
      if (initObj.hasOwnProperty('core')) {
        this.core = initObj.core
      }
      else {
        this.core = '';
      }
      if (initObj.hasOwnProperty('level')) {
        this.level = initObj.level
      }
      else {
        this.level = '';
      }
      if (initObj.hasOwnProperty('year')) {
        this.year = initObj.year
      }
      else {
        this.year = '';
      }
      if (initObj.hasOwnProperty('date_data')) {
        this.date_data = initObj.date_data
      }
      else {
        this.date_data = '';
      }
      if (initObj.hasOwnProperty('serial_no')) {
        this.serial_no = initObj.serial_no
      }
      else {
        this.serial_no = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WMSData
    // Serialize message field [unique_id]
    bufferOffset = _serializer.string(obj.unique_id, buffer, bufferOffset);
    // Serialize message field [date]
    bufferOffset = _serializer.string(obj.date, buffer, bufferOffset);
    // Serialize message field [priority]
    bufferOffset = _serializer.int16(obj.priority, buffer, bufferOffset);
    // Serialize message field [rack]
    bufferOffset = _serializer.int16(obj.rack, buffer, bufferOffset);
    // Serialize message field [shelf]
    bufferOffset = _serializer.int16(obj.shelf, buffer, bufferOffset);
    // Serialize message field [bin]
    bufferOffset = _serializer.int16(obj.bin, buffer, bufferOffset);
    // Serialize message field [action]
    bufferOffset = _serializer.bool(obj.action, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = _serializer.bool(obj.status, buffer, bufferOffset);
    // Serialize message field [ean_code]
    bufferOffset = _serializer.string(obj.ean_code, buffer, bufferOffset);
    // Serialize message field [putaway_code]
    bufferOffset = _serializer.string(obj.putaway_code, buffer, bufferOffset);
    // Serialize message field [acr_shelf]
    bufferOffset = _serializer.int16(obj.acr_shelf, buffer, bufferOffset);
    // Serialize message field [whole_bin_no]
    bufferOffset = _serializer.string(obj.whole_bin_no, buffer, bufferOffset);
    // Serialize message field [core]
    bufferOffset = _serializer.string(obj.core, buffer, bufferOffset);
    // Serialize message field [level]
    bufferOffset = _serializer.string(obj.level, buffer, bufferOffset);
    // Serialize message field [year]
    bufferOffset = _serializer.string(obj.year, buffer, bufferOffset);
    // Serialize message field [date_data]
    bufferOffset = _serializer.string(obj.date_data, buffer, bufferOffset);
    // Serialize message field [serial_no]
    bufferOffset = _serializer.string(obj.serial_no, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WMSData
    let len;
    let data = new WMSData(null);
    // Deserialize message field [unique_id]
    data.unique_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [date]
    data.date = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [priority]
    data.priority = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [rack]
    data.rack = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [shelf]
    data.shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [bin]
    data.bin = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [action]
    data.action = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [ean_code]
    data.ean_code = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [putaway_code]
    data.putaway_code = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [acr_shelf]
    data.acr_shelf = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [whole_bin_no]
    data.whole_bin_no = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [core]
    data.core = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [level]
    data.level = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [year]
    data.year = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [date_data]
    data.date_data = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [serial_no]
    data.serial_no = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.unique_id);
    length += _getByteLength(object.date);
    length += _getByteLength(object.ean_code);
    length += _getByteLength(object.putaway_code);
    length += _getByteLength(object.whole_bin_no);
    length += _getByteLength(object.core);
    length += _getByteLength(object.level);
    length += _getByteLength(object.year);
    length += _getByteLength(object.date_data);
    length += _getByteLength(object.serial_no);
    return length + 52;
  }

  static datatype() {
    // Returns string type for a message object
    return 'wms_data/WMSData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '338f7a7211a5e9f2655096004ac2e21e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string unique_id
    string date
    int16 priority
    int16 rack
    int16 shelf
    int16 bin
    bool action
    bool status
    string ean_code
    string putaway_code
    int16 acr_shelf
    string whole_bin_no
    string core
    string level
    string year
    string date_data
    string serial_no
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new WMSData(null);
    if (msg.unique_id !== undefined) {
      resolved.unique_id = msg.unique_id;
    }
    else {
      resolved.unique_id = ''
    }

    if (msg.date !== undefined) {
      resolved.date = msg.date;
    }
    else {
      resolved.date = ''
    }

    if (msg.priority !== undefined) {
      resolved.priority = msg.priority;
    }
    else {
      resolved.priority = 0
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

    if (msg.bin !== undefined) {
      resolved.bin = msg.bin;
    }
    else {
      resolved.bin = 0
    }

    if (msg.action !== undefined) {
      resolved.action = msg.action;
    }
    else {
      resolved.action = false
    }

    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = false
    }

    if (msg.ean_code !== undefined) {
      resolved.ean_code = msg.ean_code;
    }
    else {
      resolved.ean_code = ''
    }

    if (msg.putaway_code !== undefined) {
      resolved.putaway_code = msg.putaway_code;
    }
    else {
      resolved.putaway_code = ''
    }

    if (msg.acr_shelf !== undefined) {
      resolved.acr_shelf = msg.acr_shelf;
    }
    else {
      resolved.acr_shelf = 0
    }

    if (msg.whole_bin_no !== undefined) {
      resolved.whole_bin_no = msg.whole_bin_no;
    }
    else {
      resolved.whole_bin_no = ''
    }

    if (msg.core !== undefined) {
      resolved.core = msg.core;
    }
    else {
      resolved.core = ''
    }

    if (msg.level !== undefined) {
      resolved.level = msg.level;
    }
    else {
      resolved.level = ''
    }

    if (msg.year !== undefined) {
      resolved.year = msg.year;
    }
    else {
      resolved.year = ''
    }

    if (msg.date_data !== undefined) {
      resolved.date_data = msg.date_data;
    }
    else {
      resolved.date_data = ''
    }

    if (msg.serial_no !== undefined) {
      resolved.serial_no = msg.serial_no;
    }
    else {
      resolved.serial_no = ''
    }

    return resolved;
    }
};

module.exports = WMSData;
