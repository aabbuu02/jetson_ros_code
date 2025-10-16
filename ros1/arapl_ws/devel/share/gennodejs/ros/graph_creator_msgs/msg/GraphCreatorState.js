// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let GraphCreatorMode = require('./GraphCreatorMode.js');
let EdgeCreationType = require('./EdgeCreationType.js');
let EdgeDirectionCreationType = require('./EdgeDirectionCreationType.js');
let SnapPoseConfig = require('./SnapPoseConfig.js');

//-----------------------------------------------------------

class GraphCreatorState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.graph_creator_mode = null;
      this.edge_creation_type = null;
      this.edge_direction_creation_type = null;
      this.snap_pose_config = null;
      this.all_vertices_locked = null;
      this.all_edges_locked = null;
    }
    else {
      if (initObj.hasOwnProperty('graph_creator_mode')) {
        this.graph_creator_mode = initObj.graph_creator_mode
      }
      else {
        this.graph_creator_mode = new GraphCreatorMode();
      }
      if (initObj.hasOwnProperty('edge_creation_type')) {
        this.edge_creation_type = initObj.edge_creation_type
      }
      else {
        this.edge_creation_type = new EdgeCreationType();
      }
      if (initObj.hasOwnProperty('edge_direction_creation_type')) {
        this.edge_direction_creation_type = initObj.edge_direction_creation_type
      }
      else {
        this.edge_direction_creation_type = new EdgeDirectionCreationType();
      }
      if (initObj.hasOwnProperty('snap_pose_config')) {
        this.snap_pose_config = initObj.snap_pose_config
      }
      else {
        this.snap_pose_config = new SnapPoseConfig();
      }
      if (initObj.hasOwnProperty('all_vertices_locked')) {
        this.all_vertices_locked = initObj.all_vertices_locked
      }
      else {
        this.all_vertices_locked = false;
      }
      if (initObj.hasOwnProperty('all_edges_locked')) {
        this.all_edges_locked = initObj.all_edges_locked
      }
      else {
        this.all_edges_locked = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GraphCreatorState
    // Serialize message field [graph_creator_mode]
    bufferOffset = GraphCreatorMode.serialize(obj.graph_creator_mode, buffer, bufferOffset);
    // Serialize message field [edge_creation_type]
    bufferOffset = EdgeCreationType.serialize(obj.edge_creation_type, buffer, bufferOffset);
    // Serialize message field [edge_direction_creation_type]
    bufferOffset = EdgeDirectionCreationType.serialize(obj.edge_direction_creation_type, buffer, bufferOffset);
    // Serialize message field [snap_pose_config]
    bufferOffset = SnapPoseConfig.serialize(obj.snap_pose_config, buffer, bufferOffset);
    // Serialize message field [all_vertices_locked]
    bufferOffset = _serializer.bool(obj.all_vertices_locked, buffer, bufferOffset);
    // Serialize message field [all_edges_locked]
    bufferOffset = _serializer.bool(obj.all_edges_locked, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GraphCreatorState
    let len;
    let data = new GraphCreatorState(null);
    // Deserialize message field [graph_creator_mode]
    data.graph_creator_mode = GraphCreatorMode.deserialize(buffer, bufferOffset);
    // Deserialize message field [edge_creation_type]
    data.edge_creation_type = EdgeCreationType.deserialize(buffer, bufferOffset);
    // Deserialize message field [edge_direction_creation_type]
    data.edge_direction_creation_type = EdgeDirectionCreationType.deserialize(buffer, bufferOffset);
    // Deserialize message field [snap_pose_config]
    data.snap_pose_config = SnapPoseConfig.deserialize(buffer, bufferOffset);
    // Deserialize message field [all_vertices_locked]
    data.all_vertices_locked = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [all_edges_locked]
    data.all_edges_locked = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 25;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_creator_msgs/GraphCreatorState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '883f7fb23a6fd8276cdc11e15bd98652';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new GraphCreatorState(null);
    if (msg.graph_creator_mode !== undefined) {
      resolved.graph_creator_mode = GraphCreatorMode.Resolve(msg.graph_creator_mode)
    }
    else {
      resolved.graph_creator_mode = new GraphCreatorMode()
    }

    if (msg.edge_creation_type !== undefined) {
      resolved.edge_creation_type = EdgeCreationType.Resolve(msg.edge_creation_type)
    }
    else {
      resolved.edge_creation_type = new EdgeCreationType()
    }

    if (msg.edge_direction_creation_type !== undefined) {
      resolved.edge_direction_creation_type = EdgeDirectionCreationType.Resolve(msg.edge_direction_creation_type)
    }
    else {
      resolved.edge_direction_creation_type = new EdgeDirectionCreationType()
    }

    if (msg.snap_pose_config !== undefined) {
      resolved.snap_pose_config = SnapPoseConfig.Resolve(msg.snap_pose_config)
    }
    else {
      resolved.snap_pose_config = new SnapPoseConfig()
    }

    if (msg.all_vertices_locked !== undefined) {
      resolved.all_vertices_locked = msg.all_vertices_locked;
    }
    else {
      resolved.all_vertices_locked = false
    }

    if (msg.all_edges_locked !== undefined) {
      resolved.all_edges_locked = msg.all_edges_locked;
    }
    else {
      resolved.all_edges_locked = false
    }

    return resolved;
    }
};

module.exports = GraphCreatorState;
