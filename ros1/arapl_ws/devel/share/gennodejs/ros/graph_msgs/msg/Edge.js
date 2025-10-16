// Auto-generated. Do not edit!

// (in-package graph_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Property = require('./Property.js');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class Edge {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.alias = null;
      this.type = null;
      this.edge_direction_type = null;
      this.creation_type = null;
      this.source_vertex_id = null;
      this.target_vertex_id = null;
      this.length = null;
      this.cost_factor = null;
      this.bidirectional = null;
      this.independent_orientation = null;
      this.control_points = null;
      this.control_orientation = null;
      this.poses = null;
      this.properties = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('alias')) {
        this.alias = initObj.alias
      }
      else {
        this.alias = '';
      }
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = 0;
      }
      if (initObj.hasOwnProperty('edge_direction_type')) {
        this.edge_direction_type = initObj.edge_direction_type
      }
      else {
        this.edge_direction_type = 0;
      }
      if (initObj.hasOwnProperty('creation_type')) {
        this.creation_type = initObj.creation_type
      }
      else {
        this.creation_type = 0;
      }
      if (initObj.hasOwnProperty('source_vertex_id')) {
        this.source_vertex_id = initObj.source_vertex_id
      }
      else {
        this.source_vertex_id = 0;
      }
      if (initObj.hasOwnProperty('target_vertex_id')) {
        this.target_vertex_id = initObj.target_vertex_id
      }
      else {
        this.target_vertex_id = 0;
      }
      if (initObj.hasOwnProperty('length')) {
        this.length = initObj.length
      }
      else {
        this.length = 0.0;
      }
      if (initObj.hasOwnProperty('cost_factor')) {
        this.cost_factor = initObj.cost_factor
      }
      else {
        this.cost_factor = 0.0;
      }
      if (initObj.hasOwnProperty('bidirectional')) {
        this.bidirectional = initObj.bidirectional
      }
      else {
        this.bidirectional = false;
      }
      if (initObj.hasOwnProperty('independent_orientation')) {
        this.independent_orientation = initObj.independent_orientation
      }
      else {
        this.independent_orientation = false;
      }
      if (initObj.hasOwnProperty('control_points')) {
        this.control_points = initObj.control_points
      }
      else {
        this.control_points = [];
      }
      if (initObj.hasOwnProperty('control_orientation')) {
        this.control_orientation = initObj.control_orientation
      }
      else {
        this.control_orientation = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('poses')) {
        this.poses = initObj.poses
      }
      else {
        this.poses = new geometry_msgs.msg.PoseArray();
      }
      if (initObj.hasOwnProperty('properties')) {
        this.properties = initObj.properties
      }
      else {
        this.properties = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Edge
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [alias]
    bufferOffset = _serializer.string(obj.alias, buffer, bufferOffset);
    // Serialize message field [type]
    bufferOffset = _serializer.uint8(obj.type, buffer, bufferOffset);
    // Serialize message field [edge_direction_type]
    bufferOffset = _serializer.uint8(obj.edge_direction_type, buffer, bufferOffset);
    // Serialize message field [creation_type]
    bufferOffset = _serializer.uint8(obj.creation_type, buffer, bufferOffset);
    // Serialize message field [source_vertex_id]
    bufferOffset = _serializer.uint32(obj.source_vertex_id, buffer, bufferOffset);
    // Serialize message field [target_vertex_id]
    bufferOffset = _serializer.uint32(obj.target_vertex_id, buffer, bufferOffset);
    // Serialize message field [length]
    bufferOffset = _serializer.float64(obj.length, buffer, bufferOffset);
    // Serialize message field [cost_factor]
    bufferOffset = _serializer.float64(obj.cost_factor, buffer, bufferOffset);
    // Serialize message field [bidirectional]
    bufferOffset = _serializer.bool(obj.bidirectional, buffer, bufferOffset);
    // Serialize message field [independent_orientation]
    bufferOffset = _serializer.bool(obj.independent_orientation, buffer, bufferOffset);
    // Serialize message field [control_points]
    // Serialize the length for message field [control_points]
    bufferOffset = _serializer.uint32(obj.control_points.length, buffer, bufferOffset);
    obj.control_points.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Pose.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [control_orientation]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.control_orientation, buffer, bufferOffset);
    // Serialize message field [poses]
    bufferOffset = geometry_msgs.msg.PoseArray.serialize(obj.poses, buffer, bufferOffset);
    // Serialize message field [properties]
    // Serialize the length for message field [properties]
    bufferOffset = _serializer.uint32(obj.properties.length, buffer, bufferOffset);
    obj.properties.forEach((val) => {
      bufferOffset = Property.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Edge
    let len;
    let data = new Edge(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [alias]
    data.alias = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [type]
    data.type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [edge_direction_type]
    data.edge_direction_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [creation_type]
    data.creation_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [source_vertex_id]
    data.source_vertex_id = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [target_vertex_id]
    data.target_vertex_id = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [length]
    data.length = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cost_factor]
    data.cost_factor = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [bidirectional]
    data.bidirectional = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [independent_orientation]
    data.independent_orientation = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [control_points]
    // Deserialize array length for message field [control_points]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.control_points = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.control_points[i] = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [control_orientation]
    data.control_orientation = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [poses]
    data.poses = geometry_msgs.msg.PoseArray.deserialize(buffer, bufferOffset);
    // Deserialize message field [properties]
    // Deserialize array length for message field [properties]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.properties = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.properties[i] = Property.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.name);
    length += _getByteLength(object.alias);
    length += 56 * object.control_points.length;
    length += geometry_msgs.msg.PoseArray.getMessageSize(object.poses);
    object.properties.forEach((val) => {
      length += Property.getMessageSize(val);
    });
    return length + 101;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_msgs/Edge';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7db65fe0ed203a54cf7e26bd678adbcf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Edge types
    uint8 STRAIGHT_LINE=0
    uint8 CUBIC_BEZIER=1
    
    # Edge direction types
    uint8 FORWARD=0
    uint8 REVERSE=1
    uint8 BIDIRECTIONAL=2
    
    # Creation types 
    uint8 CREATED=0     # The edge is created
    uint8 GENERATED=1   # The edge is generated
    
    string name
    string alias
    uint8 type
    uint8 edge_direction_type
    uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both
    uint32 source_vertex_id
    uint32 target_vertex_id
    float64 length
    float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge
    bool bidirectional
    bool independent_orientation
    geometry_msgs/Pose[] control_points
    geometry_msgs/Pose control_orientation
    geometry_msgs/PoseArray poses   # Can contain the poses for the curve
    Property[] properties
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
    
    ================================================================================
    MSG: geometry_msgs/PoseArray
    # An array of poses with a header for global reference.
    
    Header header
    
    Pose[] poses
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: graph_msgs/Property
    string key
    string value
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Edge(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.alias !== undefined) {
      resolved.alias = msg.alias;
    }
    else {
      resolved.alias = ''
    }

    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = 0
    }

    if (msg.edge_direction_type !== undefined) {
      resolved.edge_direction_type = msg.edge_direction_type;
    }
    else {
      resolved.edge_direction_type = 0
    }

    if (msg.creation_type !== undefined) {
      resolved.creation_type = msg.creation_type;
    }
    else {
      resolved.creation_type = 0
    }

    if (msg.source_vertex_id !== undefined) {
      resolved.source_vertex_id = msg.source_vertex_id;
    }
    else {
      resolved.source_vertex_id = 0
    }

    if (msg.target_vertex_id !== undefined) {
      resolved.target_vertex_id = msg.target_vertex_id;
    }
    else {
      resolved.target_vertex_id = 0
    }

    if (msg.length !== undefined) {
      resolved.length = msg.length;
    }
    else {
      resolved.length = 0.0
    }

    if (msg.cost_factor !== undefined) {
      resolved.cost_factor = msg.cost_factor;
    }
    else {
      resolved.cost_factor = 0.0
    }

    if (msg.bidirectional !== undefined) {
      resolved.bidirectional = msg.bidirectional;
    }
    else {
      resolved.bidirectional = false
    }

    if (msg.independent_orientation !== undefined) {
      resolved.independent_orientation = msg.independent_orientation;
    }
    else {
      resolved.independent_orientation = false
    }

    if (msg.control_points !== undefined) {
      resolved.control_points = new Array(msg.control_points.length);
      for (let i = 0; i < resolved.control_points.length; ++i) {
        resolved.control_points[i] = geometry_msgs.msg.Pose.Resolve(msg.control_points[i]);
      }
    }
    else {
      resolved.control_points = []
    }

    if (msg.control_orientation !== undefined) {
      resolved.control_orientation = geometry_msgs.msg.Pose.Resolve(msg.control_orientation)
    }
    else {
      resolved.control_orientation = new geometry_msgs.msg.Pose()
    }

    if (msg.poses !== undefined) {
      resolved.poses = geometry_msgs.msg.PoseArray.Resolve(msg.poses)
    }
    else {
      resolved.poses = new geometry_msgs.msg.PoseArray()
    }

    if (msg.properties !== undefined) {
      resolved.properties = new Array(msg.properties.length);
      for (let i = 0; i < resolved.properties.length; ++i) {
        resolved.properties[i] = Property.Resolve(msg.properties[i]);
      }
    }
    else {
      resolved.properties = []
    }

    return resolved;
    }
};

// Constants for message
Edge.Constants = {
  STRAIGHT_LINE: 0,
  CUBIC_BEZIER: 1,
  FORWARD: 0,
  REVERSE: 1,
  BIDIRECTIONAL: 2,
  CREATED: 0,
  GENERATED: 1,
}

module.exports = Edge;
