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

class GetGraphRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetGraphRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGraphRequest
    let len;
    let data = new GetGraphRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_msgs/GetGraphRequest';
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
    const resolved = new GetGraphRequest(null);
    return resolved;
    }
};

class GetGraphResponse {
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
    // Serializes a message object of type GetGraphResponse
    // Serialize message field [graph]
    bufferOffset = Graph.serialize(obj.graph, buffer, bufferOffset);
    // Serialize message field [result]
    bufferOffset = _serializer.uint8(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGraphResponse
    let len;
    let data = new GetGraphResponse(null);
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
    return 'graph_msgs/GetGraphResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '69b28c3b9947ded8e5533db9ff2abcd5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 RESULT_GRAPH_VALID=0
    uint8 RESULT_GRAPH_INVALID=1
    
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
    const resolved = new GetGraphResponse(null);
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
GetGraphResponse.Constants = {
  RESULT_GRAPH_VALID: 0,
  RESULT_GRAPH_INVALID: 1,
}

module.exports = {
  Request: GetGraphRequest,
  Response: GetGraphResponse,
  md5sum() { return '69b28c3b9947ded8e5533db9ff2abcd5'; },
  datatype() { return 'graph_msgs/GetGraph'; }
};
