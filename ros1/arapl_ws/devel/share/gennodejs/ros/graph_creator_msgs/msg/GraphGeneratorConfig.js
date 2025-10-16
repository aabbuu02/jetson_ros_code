// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let EdgeCreationType = require('./EdgeCreationType.js');
let EdgeDirectionCreationType = require('./EdgeDirectionCreationType.js');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class GraphGeneratorConfig {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.generation_type = null;
      this.edge_creation_type = null;
      this.edge_direction_type = null;
      this.ignore_vertex_orientation = null;
      this.use_edge_count_threshold = null;
      this.edge_count_threshold = null;
      this.dxf_file_path = null;
      this.scale_x = null;
      this.scale_y = null;
      this.start_pose = null;
      this.rows = null;
      this.columns = null;
      this.row_spacing = null;
      this.column_spacing = null;
    }
    else {
      if (initObj.hasOwnProperty('generation_type')) {
        this.generation_type = initObj.generation_type
      }
      else {
        this.generation_type = 0;
      }
      if (initObj.hasOwnProperty('edge_creation_type')) {
        this.edge_creation_type = initObj.edge_creation_type
      }
      else {
        this.edge_creation_type = new EdgeCreationType();
      }
      if (initObj.hasOwnProperty('edge_direction_type')) {
        this.edge_direction_type = initObj.edge_direction_type
      }
      else {
        this.edge_direction_type = new EdgeDirectionCreationType();
      }
      if (initObj.hasOwnProperty('ignore_vertex_orientation')) {
        this.ignore_vertex_orientation = initObj.ignore_vertex_orientation
      }
      else {
        this.ignore_vertex_orientation = false;
      }
      if (initObj.hasOwnProperty('use_edge_count_threshold')) {
        this.use_edge_count_threshold = initObj.use_edge_count_threshold
      }
      else {
        this.use_edge_count_threshold = false;
      }
      if (initObj.hasOwnProperty('edge_count_threshold')) {
        this.edge_count_threshold = initObj.edge_count_threshold
      }
      else {
        this.edge_count_threshold = 0;
      }
      if (initObj.hasOwnProperty('dxf_file_path')) {
        this.dxf_file_path = initObj.dxf_file_path
      }
      else {
        this.dxf_file_path = '';
      }
      if (initObj.hasOwnProperty('scale_x')) {
        this.scale_x = initObj.scale_x
      }
      else {
        this.scale_x = 0.0;
      }
      if (initObj.hasOwnProperty('scale_y')) {
        this.scale_y = initObj.scale_y
      }
      else {
        this.scale_y = 0.0;
      }
      if (initObj.hasOwnProperty('start_pose')) {
        this.start_pose = initObj.start_pose
      }
      else {
        this.start_pose = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('rows')) {
        this.rows = initObj.rows
      }
      else {
        this.rows = 0;
      }
      if (initObj.hasOwnProperty('columns')) {
        this.columns = initObj.columns
      }
      else {
        this.columns = 0;
      }
      if (initObj.hasOwnProperty('row_spacing')) {
        this.row_spacing = initObj.row_spacing
      }
      else {
        this.row_spacing = 0.0;
      }
      if (initObj.hasOwnProperty('column_spacing')) {
        this.column_spacing = initObj.column_spacing
      }
      else {
        this.column_spacing = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GraphGeneratorConfig
    // Serialize message field [generation_type]
    bufferOffset = _serializer.uint8(obj.generation_type, buffer, bufferOffset);
    // Serialize message field [edge_creation_type]
    bufferOffset = EdgeCreationType.serialize(obj.edge_creation_type, buffer, bufferOffset);
    // Serialize message field [edge_direction_type]
    bufferOffset = EdgeDirectionCreationType.serialize(obj.edge_direction_type, buffer, bufferOffset);
    // Serialize message field [ignore_vertex_orientation]
    bufferOffset = _serializer.bool(obj.ignore_vertex_orientation, buffer, bufferOffset);
    // Serialize message field [use_edge_count_threshold]
    bufferOffset = _serializer.bool(obj.use_edge_count_threshold, buffer, bufferOffset);
    // Serialize message field [edge_count_threshold]
    bufferOffset = _serializer.uint32(obj.edge_count_threshold, buffer, bufferOffset);
    // Serialize message field [dxf_file_path]
    bufferOffset = _serializer.string(obj.dxf_file_path, buffer, bufferOffset);
    // Serialize message field [scale_x]
    bufferOffset = _serializer.float32(obj.scale_x, buffer, bufferOffset);
    // Serialize message field [scale_y]
    bufferOffset = _serializer.float32(obj.scale_y, buffer, bufferOffset);
    // Serialize message field [start_pose]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.start_pose, buffer, bufferOffset);
    // Serialize message field [rows]
    bufferOffset = _serializer.uint32(obj.rows, buffer, bufferOffset);
    // Serialize message field [columns]
    bufferOffset = _serializer.uint32(obj.columns, buffer, bufferOffset);
    // Serialize message field [row_spacing]
    bufferOffset = _serializer.float32(obj.row_spacing, buffer, bufferOffset);
    // Serialize message field [column_spacing]
    bufferOffset = _serializer.float32(obj.column_spacing, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GraphGeneratorConfig
    let len;
    let data = new GraphGeneratorConfig(null);
    // Deserialize message field [generation_type]
    data.generation_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [edge_creation_type]
    data.edge_creation_type = EdgeCreationType.deserialize(buffer, bufferOffset);
    // Deserialize message field [edge_direction_type]
    data.edge_direction_type = EdgeDirectionCreationType.deserialize(buffer, bufferOffset);
    // Deserialize message field [ignore_vertex_orientation]
    data.ignore_vertex_orientation = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [use_edge_count_threshold]
    data.use_edge_count_threshold = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [edge_count_threshold]
    data.edge_count_threshold = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [dxf_file_path]
    data.dxf_file_path = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [scale_x]
    data.scale_x = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [scale_y]
    data.scale_y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [start_pose]
    data.start_pose = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [rows]
    data.rows = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [columns]
    data.columns = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [row_spacing]
    data.row_spacing = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [column_spacing]
    data.column_spacing = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.dxf_file_path);
    return length + 93;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_creator_msgs/GraphGeneratorConfig';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd549626c784b6f02d6bb8ede7bb25247';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new GraphGeneratorConfig(null);
    if (msg.generation_type !== undefined) {
      resolved.generation_type = msg.generation_type;
    }
    else {
      resolved.generation_type = 0
    }

    if (msg.edge_creation_type !== undefined) {
      resolved.edge_creation_type = EdgeCreationType.Resolve(msg.edge_creation_type)
    }
    else {
      resolved.edge_creation_type = new EdgeCreationType()
    }

    if (msg.edge_direction_type !== undefined) {
      resolved.edge_direction_type = EdgeDirectionCreationType.Resolve(msg.edge_direction_type)
    }
    else {
      resolved.edge_direction_type = new EdgeDirectionCreationType()
    }

    if (msg.ignore_vertex_orientation !== undefined) {
      resolved.ignore_vertex_orientation = msg.ignore_vertex_orientation;
    }
    else {
      resolved.ignore_vertex_orientation = false
    }

    if (msg.use_edge_count_threshold !== undefined) {
      resolved.use_edge_count_threshold = msg.use_edge_count_threshold;
    }
    else {
      resolved.use_edge_count_threshold = false
    }

    if (msg.edge_count_threshold !== undefined) {
      resolved.edge_count_threshold = msg.edge_count_threshold;
    }
    else {
      resolved.edge_count_threshold = 0
    }

    if (msg.dxf_file_path !== undefined) {
      resolved.dxf_file_path = msg.dxf_file_path;
    }
    else {
      resolved.dxf_file_path = ''
    }

    if (msg.scale_x !== undefined) {
      resolved.scale_x = msg.scale_x;
    }
    else {
      resolved.scale_x = 0.0
    }

    if (msg.scale_y !== undefined) {
      resolved.scale_y = msg.scale_y;
    }
    else {
      resolved.scale_y = 0.0
    }

    if (msg.start_pose !== undefined) {
      resolved.start_pose = geometry_msgs.msg.Pose.Resolve(msg.start_pose)
    }
    else {
      resolved.start_pose = new geometry_msgs.msg.Pose()
    }

    if (msg.rows !== undefined) {
      resolved.rows = msg.rows;
    }
    else {
      resolved.rows = 0
    }

    if (msg.columns !== undefined) {
      resolved.columns = msg.columns;
    }
    else {
      resolved.columns = 0
    }

    if (msg.row_spacing !== undefined) {
      resolved.row_spacing = msg.row_spacing;
    }
    else {
      resolved.row_spacing = 0.0
    }

    if (msg.column_spacing !== undefined) {
      resolved.column_spacing = msg.column_spacing;
    }
    else {
      resolved.column_spacing = 0.0
    }

    return resolved;
    }
};

// Constants for message
GraphGeneratorConfig.Constants = {
  GRAPH_GENERATION_TYPE_GRID: 0,
  GRAPH_GENERATION_TYPE_DXF: 1,
}

module.exports = GraphGeneratorConfig;
