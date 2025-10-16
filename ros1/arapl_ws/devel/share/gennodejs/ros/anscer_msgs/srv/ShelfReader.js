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


//-----------------------------------------------------------

class ShelfReaderRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dummy_req = null;
    }
    else {
      if (initObj.hasOwnProperty('dummy_req')) {
        this.dummy_req = initObj.dummy_req
      }
      else {
        this.dummy_req = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ShelfReaderRequest
    // Serialize message field [dummy_req]
    bufferOffset = _serializer.int64(obj.dummy_req, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ShelfReaderRequest
    let len;
    let data = new ShelfReaderRequest(null);
    // Deserialize message field [dummy_req]
    data.dummy_req = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/ShelfReaderRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'daa414209e0556e417f832cfb4c8de67';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 dummy_req 
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ShelfReaderRequest(null);
    if (msg.dummy_req !== undefined) {
      resolved.dummy_req = msg.dummy_req;
    }
    else {
      resolved.dummy_req = 0
    }

    return resolved;
    }
};

class ShelfReaderResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.shelf_response = null;
    }
    else {
      if (initObj.hasOwnProperty('shelf_response')) {
        this.shelf_response = initObj.shelf_response
      }
      else {
        this.shelf_response = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ShelfReaderResponse
    // Serialize message field [shelf_response]
    bufferOffset = _serializer.int64(obj.shelf_response, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ShelfReaderResponse
    let len;
    let data = new ShelfReaderResponse(null);
    // Deserialize message field [shelf_response]
    data.shelf_response = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'anscer_msgs/ShelfReaderResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ae872df039c0f6f56ecf16dcabc0f208';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 shelf_response
    
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ShelfReaderResponse(null);
    if (msg.shelf_response !== undefined) {
      resolved.shelf_response = msg.shelf_response;
    }
    else {
      resolved.shelf_response = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: ShelfReaderRequest,
  Response: ShelfReaderResponse,
  md5sum() { return '4218f5cbbe42113a859058f65a58f219'; },
  datatype() { return 'anscer_msgs/ShelfReader'; }
};
