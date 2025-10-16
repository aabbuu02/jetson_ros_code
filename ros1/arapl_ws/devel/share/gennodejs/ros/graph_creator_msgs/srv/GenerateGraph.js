// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let GraphGeneratorConfig = require('../msg/GraphGeneratorConfig.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class GenerateGraphRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.graph_generator_config = null;
    }
    else {
      if (initObj.hasOwnProperty('graph_generator_config')) {
        this.graph_generator_config = initObj.graph_generator_config
      }
      else {
        this.graph_generator_config = new GraphGeneratorConfig();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GenerateGraphRequest
    // Serialize message field [graph_generator_config]
    bufferOffset = GraphGeneratorConfig.serialize(obj.graph_generator_config, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GenerateGraphRequest
    let len;
    let data = new GenerateGraphRequest(null);
    // Deserialize message field [graph_generator_config]
    data.graph_generator_config = GraphGeneratorConfig.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += GraphGeneratorConfig.getMessageSize(object.graph_generator_config);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_creator_msgs/GenerateGraphRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '536767deea0d0151bb7f511a9b5ef5d6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    GraphGeneratorConfig graph_generator_config
    
    ================================================================================
    MSG: graph_creator_msgs/GraphGeneratorConfig
    uint8 GRAPH_GENERATION_TYPE_GRID=0
    uint8 GRAPH_GENERATION_TYPE_DXF=1
    
    uint8 generation_type
    EdgeCreationType edge_creation_type
    EdgeDirectionCreationType edge_direction_type
    bool ignore_vertex_orientation                      # Ignore vertex orientation
    bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation
    uint32 edge_count_threshold                         # Edge count threshold
    
    # For generating graph from DXF files
    string dxf_file_path                                # File paths can be either relative to a package or absolute
    float32 scale_x
    float32 scale_y
    
    # For generating grid graphs
    geometry_msgs/Pose start_pose
    uint32 rows                                         # Rows are along Y-axis
    uint32 columns                                      # Columns are along X-axis
    float32 row_spacing                                 # Spacing between two vertices along the Y-axis
    float32 column_spacing                              # Spacing between two vertics along the X-axis
    
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
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GenerateGraphRequest(null);
    if (msg.graph_generator_config !== undefined) {
      resolved.graph_generator_config = GraphGeneratorConfig.Resolve(msg.graph_generator_config)
    }
    else {
      resolved.graph_generator_config = new GraphGeneratorConfig()
    }

    return resolved;
    }
};

class GenerateGraphResponse {
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
    // Serializes a message object of type GenerateGraphResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GenerateGraphResponse
    let len;
    let data = new GenerateGraphResponse(null);
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
    return 'graph_creator_msgs/GenerateGraphResponse';
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
    const resolved = new GenerateGraphResponse(null);
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
  Request: GenerateGraphRequest,
  Response: GenerateGraphResponse,
  md5sum() { return 'd85b195d5e52e94013ad042183fa42f4'; },
  datatype() { return 'graph_creator_msgs/GenerateGraph'; }
};
