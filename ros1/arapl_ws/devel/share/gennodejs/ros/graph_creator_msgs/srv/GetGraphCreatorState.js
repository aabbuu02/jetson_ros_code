// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let GraphCreatorState = require('../msg/GraphCreatorState.js');

//-----------------------------------------------------------

class GetGraphCreatorStateRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetGraphCreatorStateRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGraphCreatorStateRequest
    let len;
    let data = new GetGraphCreatorStateRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/GetGraphCreatorStateRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetGraphCreatorStateRequest(null);
    return resolved;
    }
};

class GetGraphCreatorStateResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.state = null;
      this.success = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('state')) {
        this.state = initObj.state
      }
      else {
        this.state = new GraphCreatorState();
      }
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
    // Serializes a message object of type GetGraphCreatorStateResponse
    // Serialize message field [state]
    bufferOffset = GraphCreatorState.serialize(obj.state, buffer, bufferOffset);
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGraphCreatorStateResponse
    let len;
    let data = new GetGraphCreatorStateResponse(null);
    // Deserialize message field [state]
    data.state = GraphCreatorState.deserialize(buffer, bufferOffset);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.message);
    return length + 30;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/GetGraphCreatorStateResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '258429896b8cdbd7d95bd163ecc5ab51';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    graph_creator_msgs/GraphCreatorState state
    
    bool success
    string message
    
    ================================================================================
    MSG: graph_creator_msgs/GraphCreatorState
    graph_creator_msgs/GraphCreatorMode graph_creator_mode
    graph_creator_msgs/EdgeCreationType edge_creation_type
    graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type
    graph_creator_msgs/SnapPoseConfig snap_pose_config
    bool all_vertices_locked
    bool all_edges_locked
    ================================================================================
    MSG: graph_creator_msgs/GraphCreatorMode
    uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
    uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1
    
    uint8 mode
    
    ================================================================================
    MSG: graph_creator_msgs/EdgeCreationType
    uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
    uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1
    
    uint8 type
    ================================================================================
    MSG: graph_creator_msgs/EdgeDirectionCreationType
    uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
    uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
    uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2
    
    uint8 direction_type
    
    
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
    const resolved = new GetGraphCreatorStateResponse(null);
    if (msg.state !== undefined) {
      resolved.state = GraphCreatorState.Resolve(msg.state)
    }
    else {
      resolved.state = new GraphCreatorState()
    }

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
  Request: GetGraphCreatorStateRequest,
  Response: GetGraphCreatorStateResponse,
  md5sum() { return '258429896b8cdbd7d95bd163ecc5ab51'; },
  datatype() { return 'graph_creator_msgs/GetGraphCreatorState'; }
};
