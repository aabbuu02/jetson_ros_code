// Auto-generated. Do not edit!

// (in-package graph_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let GraphMetaData = require('./GraphMetaData.js');
let Vertex = require('./Vertex.js');
let Edge = require('./Edge.js');
let Property = require('./Property.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Graph {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.meta_data = null;
      this.vertices = null;
      this.edges = null;
      this.properties = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('meta_data')) {
        this.meta_data = initObj.meta_data
      }
      else {
        this.meta_data = new GraphMetaData();
      }
      if (initObj.hasOwnProperty('vertices')) {
        this.vertices = initObj.vertices
      }
      else {
        this.vertices = [];
      }
      if (initObj.hasOwnProperty('edges')) {
        this.edges = initObj.edges
      }
      else {
        this.edges = [];
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
    // Serializes a message object of type Graph
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [meta_data]
    bufferOffset = GraphMetaData.serialize(obj.meta_data, buffer, bufferOffset);
    // Serialize message field [vertices]
    // Serialize the length for message field [vertices]
    bufferOffset = _serializer.uint32(obj.vertices.length, buffer, bufferOffset);
    obj.vertices.forEach((val) => {
      bufferOffset = Vertex.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [edges]
    // Serialize the length for message field [edges]
    bufferOffset = _serializer.uint32(obj.edges.length, buffer, bufferOffset);
    obj.edges.forEach((val) => {
      bufferOffset = Edge.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [properties]
    // Serialize the length for message field [properties]
    bufferOffset = _serializer.uint32(obj.properties.length, buffer, bufferOffset);
    obj.properties.forEach((val) => {
      bufferOffset = Property.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Graph
    let len;
    let data = new Graph(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [meta_data]
    data.meta_data = GraphMetaData.deserialize(buffer, bufferOffset);
    // Deserialize message field [vertices]
    // Deserialize array length for message field [vertices]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.vertices = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.vertices[i] = Vertex.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [edges]
    // Deserialize array length for message field [edges]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.edges = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.edges[i] = Edge.deserialize(buffer, bufferOffset)
    }
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
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += GraphMetaData.getMessageSize(object.meta_data);
    object.vertices.forEach((val) => {
      length += Vertex.getMessageSize(val);
    });
    object.edges.forEach((val) => {
      length += Edge.getMessageSize(val);
    });
    object.properties.forEach((val) => {
      length += Property.getMessageSize(val);
    });
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_msgs/Graph';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0310af2f1693ece9ce205cea29e160ca';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    GraphMetaData meta_data
    Vertex[] vertices       # List of vertices
    Edge[] edges            # List of edges
    Property[] properties 
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
    MSG: graph_msgs/GraphMetaData
    uint8 DIRECTED=0
    uint8 UNDIRECTED=1
    
    std_msgs/Header header
    string graph_name
    uint8 graph_type
    uint32 number_of_vertices
    uint32 number_of_edges
    ================================================================================
    MSG: graph_msgs/Vertex
    # Vertex types
    uint8 NORMAL=0
    uint8 PARK=1
    uint8 CHARGE=2
    uint8 CONTROL=3
    uint8 REPORT=4
    
    uint32 id
    string name
    string alias
    uint8 type
    bool ignore_orientation
    geometry_msgs/Pose pose
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
    MSG: graph_msgs/Property
    string key
    string value
    ================================================================================
    MSG: graph_msgs/Edge
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
    MSG: geometry_msgs/PoseArray
    # An array of poses with a header for global reference.
    
    Header header
    
    Pose[] poses
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Graph(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.meta_data !== undefined) {
      resolved.meta_data = GraphMetaData.Resolve(msg.meta_data)
    }
    else {
      resolved.meta_data = new GraphMetaData()
    }

    if (msg.vertices !== undefined) {
      resolved.vertices = new Array(msg.vertices.length);
      for (let i = 0; i < resolved.vertices.length; ++i) {
        resolved.vertices[i] = Vertex.Resolve(msg.vertices[i]);
      }
    }
    else {
      resolved.vertices = []
    }

    if (msg.edges !== undefined) {
      resolved.edges = new Array(msg.edges.length);
      for (let i = 0; i < resolved.edges.length; ++i) {
        resolved.edges[i] = Edge.Resolve(msg.edges[i]);
      }
    }
    else {
      resolved.edges = []
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

module.exports = Graph;
