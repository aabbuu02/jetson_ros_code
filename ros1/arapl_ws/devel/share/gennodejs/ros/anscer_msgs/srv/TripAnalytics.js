// Auto-generated. Do not edit!

// (in-package anscer_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let MissionDB = require('../msg/MissionDB.js');

//-----------------------------------------------------------

class TripAnalyticsRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.start_date = null;
      this.end_date = null;
    }
    else {
      if (initObj.hasOwnProperty('start_date')) {
        this.start_date = initObj.start_date
      }
      else {
        this.start_date = '';
      }
      if (initObj.hasOwnProperty('end_date')) {
        this.end_date = initObj.end_date
      }
      else {
        this.end_date = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TripAnalyticsRequest
    // Serialize message field [start_date]
    bufferOffset = _serializer.string(obj.start_date, buffer, bufferOffset);
    // Serialize message field [end_date]
    bufferOffset = _serializer.string(obj.end_date, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TripAnalyticsRequest
    let len;
    let data = new TripAnalyticsRequest(null);
    // Deserialize message field [start_date]
    data.start_date = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [end_date]
    data.end_date = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.start_date);
    length += _getByteLength(object.end_date);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/TripAnalyticsRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9a0989d54cf5e3bd3f1e115ec9e51ee8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string start_date
    string end_date
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TripAnalyticsRequest(null);
    if (msg.start_date !== undefined) {
      resolved.start_date = msg.start_date;
    }
    else {
      resolved.start_date = ''
    }

    if (msg.end_date !== undefined) {
      resolved.end_date = msg.end_date;
    }
    else {
      resolved.end_date = ''
    }

    return resolved;
    }
};

class TripAnalyticsResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mission_db = null;
    }
    else {
      if (initObj.hasOwnProperty('mission_db')) {
        this.mission_db = initObj.mission_db
      }
      else {
        this.mission_db = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TripAnalyticsResponse
    // Serialize message field [mission_db]
    // Serialize the length for message field [mission_db]
    bufferOffset = _serializer.uint32(obj.mission_db.length, buffer, bufferOffset);
    obj.mission_db.forEach((val) => {
      bufferOffset = MissionDB.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TripAnalyticsResponse
    let len;
    let data = new TripAnalyticsResponse(null);
    // Deserialize message field [mission_db]
    // Deserialize array length for message field [mission_db]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.mission_db = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.mission_db[i] = MissionDB.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.mission_db.forEach((val) => {
      length += MissionDB.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/TripAnalyticsResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f985c515e6483a1e6161537b9b86c748';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    anscer_msgs/MissionDB[] mission_db
    
    
    ================================================================================
    MSG: anscer_msgs/MissionDB
    string timestamp
    float32 current_distance
    float32 total_distance
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TripAnalyticsResponse(null);
    if (msg.mission_db !== undefined) {
      resolved.mission_db = new Array(msg.mission_db.length);
      for (let i = 0; i < resolved.mission_db.length; ++i) {
        resolved.mission_db[i] = MissionDB.Resolve(msg.mission_db[i]);
      }
    }
    else {
      resolved.mission_db = []
    }

    return resolved;
    }
};

module.exports = {
  Request: TripAnalyticsRequest,
  Response: TripAnalyticsResponse,
  md5sum() { return '08b960482269c6ce2305b1dc4350baa3'; },
  datatype() { return 'anscer_msgs/TripAnalytics'; }
};
