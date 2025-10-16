// Auto-generated. Do not edit!

// (in-package graph_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let Graph = require('../msg/Graph.js');

//-----------------------------------------------------------

class LoadGraphRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.graph_url = null;
    }
    else {
      if (initObj.hasOwnProperty('graph_url')) {
        this.graph_url = initObj.graph_url
      }
      else {
        this.graph_url = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LoadGraphRequest
    // Serialize message field [graph_url]
    bufferOffset = _serializer.string(obj.graph_url, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LoadGraphRequest
    let len;
    let data = new LoadGraphRequest(null);
    // Deserialize message field [graph_url]
    data.graph_url = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.graph_url);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_msgs/LoadGraphRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7750059a3359024bd94263cfa4c0b722';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Either use absolute path to the graph file like /path/to/graph.graphml or
    # use a relative path to a package. For example, package_name/graphs/graph.graphml.
    # In case of graph file being relative to a package, use of '/' is not required.
    string graph_url    # URL of graph resource
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LoadGraphRequest(null);
    if (msg.graph_url !== undefined) {
      resolved.graph_url = msg.graph_url;
    }
    else {
      resolved.graph_url = ''
    }

    return resolved;
    }
};

class LoadGraphResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.graph = null;
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('graph')) {
        this.graph = initObj.graph
      }
      else {
        this.graph = new Graph();
      }
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LoadGraphResponse
    // Serialize message field [graph]
    bufferOffset = Graph.serialize(obj.graph, buffer, bufferOffset);
    // Serialize message field [result]
    bufferOffset = _serializer.uint8(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LoadGraphResponse
    let len;
    let data = new LoadGraphResponse(null);
    // Deserialize message field [graph]
    data.graph = Graph.deserialize(buffer, bufferOffset);
    // Deserialize message field [result]
    data.result = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += Graph.getMessageSize(object.graph);
    return length + 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_msgs/LoadGraphResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c6a7dcd77b4b6152936793b80dfac506';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Result code defintions
    uint8 RESULT_SUCCESS=0
    uint8 RESULT_GRAPH_DOES_NOT_EXIST=1
    uint8 RESULT_INVALID_GRAPH_FILE_PATH=2
    uint8 RESULT_UNDEFINED_FAILURE=255
    
    # Returned graph is only valid if result equals RESULT_SUCCESS
    graph_msgs/Graph graph
    uint8 result
    
    ================================================================================
    MSG: graph_msgs/Graph
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
    const resolved = new LoadGraphResponse(null);
    if (msg.graph !== undefined) {
      resolved.graph = Graph.Resolve(msg.graph)
    }
    else {
      resolved.graph = new Graph()
    }

    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0
    }

    return resolved;
    }
};

// Constants for message
LoadGraphResponse.Constants = {
  RESULT_SUCCESS: 0,
  RESULT_GRAPH_DOES_NOT_EXIST: 1,
  RESULT_INVALID_GRAPH_FILE_PATH: 2,
  RESULT_UNDEFINED_FAILURE: 255,
}

module.exports = {
  Request: LoadGraphRequest,
  Response: LoadGraphResponse,
  md5sum() { return '3a21dc3edb22fc7f6da0621dca59dd0f'; },
  datatype() { return 'graph_msgs/LoadGraph'; }
};
