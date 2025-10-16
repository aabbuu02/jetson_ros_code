// Auto-generated. Do not edit!

// (in-package graph_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class GraphMetaData {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.graph_name = null;
      this.graph_type = null;
      this.number_of_vertices = null;
      this.number_of_edges = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('graph_name')) {
        this.graph_name = initObj.graph_name
      }
      else {
        this.graph_name = '';
      }
      if (initObj.hasOwnProperty('graph_type')) {
        this.graph_type = initObj.graph_type
      }
      else {
        this.graph_type = 0;
      }
      if (initObj.hasOwnProperty('number_of_vertices')) {
        this.number_of_vertices = initObj.number_of_vertices
      }
      else {
        this.number_of_vertices = 0;
      }
      if (initObj.hasOwnProperty('number_of_edges')) {
        this.number_of_edges = initObj.number_of_edges
      }
      else {
        this.number_of_edges = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GraphMetaData
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [graph_name]
    bufferOffset = _serializer.string(obj.graph_name, buffer, bufferOffset);
    // Serialize message field [graph_type]
    bufferOffset = _serializer.uint8(obj.graph_type, buffer, bufferOffset);
    // Serialize message field [number_of_vertices]
    bufferOffset = _serializer.uint32(obj.number_of_vertices, buffer, bufferOffset);
    // Serialize message field [number_of_edges]
    bufferOffset = _serializer.uint32(obj.number_of_edges, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GraphMetaData
    let len;
    let data = new GraphMetaData(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [graph_name]
    data.graph_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [graph_type]
    data.graph_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [number_of_vertices]
    data.number_of_vertices = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [number_of_edges]
    data.number_of_edges = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += _getByteLength(object.graph_name);
    return length + 13;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_msgs/GraphMetaData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c0d170d3d53451a272b88e7364b594fa';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 DIRECTED=0
    uint8 UNDIRECTED=1
    
    std_msgs/Header header
    string graph_name
    uint8 graph_type
    uint32 number_of_vertices
    uint32 number_of_edges
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GraphMetaData(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.graph_name !== undefined) {
      resolved.graph_name = msg.graph_name;
    }
    else {
      resolved.graph_name = ''
    }

    if (msg.graph_type !== undefined) {
      resolved.graph_type = msg.graph_type;
    }
    else {
      resolved.graph_type = 0
    }

    if (msg.number_of_vertices !== undefined) {
      resolved.number_of_vertices = msg.number_of_vertices;
    }
    else {
      resolved.number_of_vertices = 0
    }

    if (msg.number_of_edges !== undefined) {
      resolved.number_of_edges = msg.number_of_edges;
    }
    else {
      resolved.number_of_edges = 0
    }

    return resolved;
    }
};

// Constants for message
GraphMetaData.Constants = {
  DIRECTED: 0,
  UNDIRECTED: 1,
}

module.exports = GraphMetaData;
