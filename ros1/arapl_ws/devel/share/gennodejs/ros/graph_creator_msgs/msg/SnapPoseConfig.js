// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class SnapPoseConfig {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.enable_for_vertices = null;
      this.enable_for_edges = null;
      this.enable_position_snap = null;
      this.enable_orientation_snap = null;
      this.position_snap_grid_size = null;
      this.orientation_snap_angle = null;
    }
    else {
      if (initObj.hasOwnProperty('enable_for_vertices')) {
        this.enable_for_vertices = initObj.enable_for_vertices
      }
      else {
        this.enable_for_vertices = false;
      }
      if (initObj.hasOwnProperty('enable_for_edges')) {
        this.enable_for_edges = initObj.enable_for_edges
      }
      else {
        this.enable_for_edges = false;
      }
      if (initObj.hasOwnProperty('enable_position_snap')) {
        this.enable_position_snap = initObj.enable_position_snap
      }
      else {
        this.enable_position_snap = false;
      }
      if (initObj.hasOwnProperty('enable_orientation_snap')) {
        this.enable_orientation_snap = initObj.enable_orientation_snap
      }
      else {
        this.enable_orientation_snap = false;
      }
      if (initObj.hasOwnProperty('position_snap_grid_size')) {
        this.position_snap_grid_size = initObj.position_snap_grid_size
      }
      else {
        this.position_snap_grid_size = 0.0;
      }
      if (initObj.hasOwnProperty('orientation_snap_angle')) {
        this.orientation_snap_angle = initObj.orientation_snap_angle
      }
      else {
        this.orientation_snap_angle = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SnapPoseConfig
    // Serialize message field [enable_for_vertices]
    bufferOffset = _serializer.bool(obj.enable_for_vertices, buffer, bufferOffset);
    // Serialize message field [enable_for_edges]
    bufferOffset = _serializer.bool(obj.enable_for_edges, buffer, bufferOffset);
    // Serialize message field [enable_position_snap]
    bufferOffset = _serializer.bool(obj.enable_position_snap, buffer, bufferOffset);
    // Serialize message field [enable_orientation_snap]
    bufferOffset = _serializer.bool(obj.enable_orientation_snap, buffer, bufferOffset);
    // Serialize message field [position_snap_grid_size]
    bufferOffset = _serializer.float64(obj.position_snap_grid_size, buffer, bufferOffset);
    // Serialize message field [orientation_snap_angle]
    bufferOffset = _serializer.float64(obj.orientation_snap_angle, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SnapPoseConfig
    let len;
    let data = new SnapPoseConfig(null);
    // Deserialize message field [enable_for_vertices]
    data.enable_for_vertices = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [enable_for_edges]
    data.enable_for_edges = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [enable_position_snap]
    data.enable_position_snap = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [enable_orientation_snap]
    data.enable_orientation_snap = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [position_snap_grid_size]
    data.position_snap_grid_size = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [orientation_snap_angle]
    data.orientation_snap_angle = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_creator_msgs/SnapPoseConfig';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '523ee3105beaf49ae3b84f7e22ff96ed';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new SnapPoseConfig(null);
    if (msg.enable_for_vertices !== undefined) {
      resolved.enable_for_vertices = msg.enable_for_vertices;
    }
    else {
      resolved.enable_for_vertices = false
    }

    if (msg.enable_for_edges !== undefined) {
      resolved.enable_for_edges = msg.enable_for_edges;
    }
    else {
      resolved.enable_for_edges = false
    }

    if (msg.enable_position_snap !== undefined) {
      resolved.enable_position_snap = msg.enable_position_snap;
    }
    else {
      resolved.enable_position_snap = false
    }

    if (msg.enable_orientation_snap !== undefined) {
      resolved.enable_orientation_snap = msg.enable_orientation_snap;
    }
    else {
      resolved.enable_orientation_snap = false
    }

    if (msg.position_snap_grid_size !== undefined) {
      resolved.position_snap_grid_size = msg.position_snap_grid_size;
    }
    else {
      resolved.position_snap_grid_size = 0.0
    }

    if (msg.orientation_snap_angle !== undefined) {
      resolved.orientation_snap_angle = msg.orientation_snap_angle;
    }
    else {
      resolved.orientation_snap_angle = 0.0
    }

    return resolved;
    }
};

module.exports = SnapPoseConfig;
