// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SnapPoseConfig = require('../msg/SnapPoseConfig.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetSnapPoseRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.snap_pose_config = null;
    }
    else {
      if (initObj.hasOwnProperty('snap_pose_config')) {
        this.snap_pose_config = initObj.snap_pose_config
      }
      else {
        this.snap_pose_config = new SnapPoseConfig();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetSnapPoseRequest
    // Serialize message field [snap_pose_config]
    bufferOffset = SnapPoseConfig.serialize(obj.snap_pose_config, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetSnapPoseRequest
    let len;
    let data = new SetSnapPoseRequest(null);
    // Deserialize message field [snap_pose_config]
    data.snap_pose_config = SnapPoseConfig.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 20;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/SetSnapPoseRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '453475facd73f8aa03dab123037803ff';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    graph_creator_msgs/SnapPoseConfig snap_pose_config
    
    ================================================================================
    MSG: graph_creator_msgs/SnapPoseConfig
    bool enable_for_vertices            # Enable snap position and orientation for vertices
    bool enable_for_edges               # Enable snap position and orientation for edge elements
    
    bool enable_position_snap           # Whether to enable position snap
    bool enable_orientation_snap        # Whether to enable orientation snap
    
    float64 position_snap_grid_size     # Position snap grid size in meters
    float64 orientation_snap_angle      # Orientation snap angle in radians 
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetSnapPoseRequest(null);
    if (msg.snap_pose_config !== undefined) {
      resolved.snap_pose_config = SnapPoseConfig.Resolve(msg.snap_pose_config)
    }
    else {
      resolved.snap_pose_config = new SnapPoseConfig()
    }

    return resolved;
    }
};

class SetSnapPoseResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetSnapPoseResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetSnapPoseResponse
    let len;
    let data = new SetSnapPoseResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.message);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/SetSnapPoseResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '937c9679a518e3a18d831e57125ea522';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    string message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetSnapPoseResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.message !== undefined) {
      resolved.message = msg.message;
    }
    else {
      resolved.message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: SetSnapPoseRequest,
  Response: SetSnapPoseResponse,
  md5sum() { return '5d5ee450554cf1a819df60529bb19a46'; },
  datatype() { return 'graph_creator_msgs/SetSnapPose'; }
};
