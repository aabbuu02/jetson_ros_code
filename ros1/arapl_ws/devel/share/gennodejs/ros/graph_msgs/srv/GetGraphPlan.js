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

let Vertex = require('../msg/Vertex.js');
let nav_msgs = _finder('nav_msgs');

//-----------------------------------------------------------

class GetGraphPlanRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.source_id = null;
      this.target_id = null;
      this.ignore_goal_orientation = null;
      this.ignore_path_orientation = null;
    }
    else {
      if (initObj.hasOwnProperty('source_id')) {
        this.source_id = initObj.source_id
      }
      else {
        this.source_id = 0;
      }
      if (initObj.hasOwnProperty('target_id')) {
        this.target_id = initObj.target_id
      }
      else {
        this.target_id = 0;
      }
      if (initObj.hasOwnProperty('ignore_goal_orientation')) {
        this.ignore_goal_orientation = initObj.ignore_goal_orientation
      }
      else {
        this.ignore_goal_orientation = false;
      }
      if (initObj.hasOwnProperty('ignore_path_orientation')) {
        this.ignore_path_orientation = initObj.ignore_path_orientation
      }
      else {
        this.ignore_path_orientation = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetGraphPlanRequest
    // Serialize message field [source_id]
    bufferOffset = _serializer.uint32(obj.source_id, buffer, bufferOffset);
    // Serialize message field [target_id]
    bufferOffset = _serializer.uint32(obj.target_id, buffer, bufferOffset);
    // Serialize message field [ignore_goal_orientation]
    bufferOffset = _serializer.bool(obj.ignore_goal_orientation, buffer, bufferOffset);
    // Serialize message field [ignore_path_orientation]
    bufferOffset = _serializer.bool(obj.ignore_path_orientation, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGraphPlanRequest
    let len;
    let data = new GetGraphPlanRequest(null);
    // Deserialize message field [source_id]
    data.source_id = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [target_id]
    data.target_id = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [ignore_goal_orientation]
    data.ignore_goal_orientation = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [ignore_path_orientation]
    data.ignore_path_orientation = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 10;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_msgs/GetGraphPlanRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9b1087ece28d0262c7635d4336c2ee40';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Source and destination IDs
    uint32 source_id
    uint32 target_id
    bool ignore_goal_orientation
    bool ignore_path_orientation
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetGraphPlanRequest(null);
    if (msg.source_id !== undefined) {
      resolved.source_id = msg.source_id;
    }
    else {
      resolved.source_id = 0
    }

    if (msg.target_id !== undefined) {
      resolved.target_id = msg.target_id;
    }
    else {
      resolved.target_id = 0
    }

    if (msg.ignore_goal_orientation !== undefined) {
      resolved.ignore_goal_orientation = msg.ignore_goal_orientation;
    }
    else {
      resolved.ignore_goal_orientation = false
    }

    if (msg.ignore_path_orientation !== undefined) {
      resolved.ignore_path_orientation = msg.ignore_path_orientation;
    }
    else {
      resolved.ignore_path_orientation = false
    }

    return resolved;
    }
};

class GetGraphPlanResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.vertices_in_plan = null;
      this.plan = null;
      this.plan_distance = null;
      this.success = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('vertices_in_plan')) {
        this.vertices_in_plan = initObj.vertices_in_plan
      }
      else {
        this.vertices_in_plan = [];
      }
      if (initObj.hasOwnProperty('plan')) {
        this.plan = initObj.plan
      }
      else {
        this.plan = new nav_msgs.msg.Path();
      }
      if (initObj.hasOwnProperty('plan_distance')) {
        this.plan_distance = initObj.plan_distance
      }
      else {
        this.plan_distance = 0.0;
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
    // Serializes a message object of type GetGraphPlanResponse
    // Serialize message field [vertices_in_plan]
    // Serialize the length for message field [vertices_in_plan]
    bufferOffset = _serializer.uint32(obj.vertices_in_plan.length, buffer, bufferOffset);
    obj.vertices_in_plan.forEach((val) => {
      bufferOffset = Vertex.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [plan]
    bufferOffset = nav_msgs.msg.Path.serialize(obj.plan, buffer, bufferOffset);
    // Serialize message field [plan_distance]
    bufferOffset = _serializer.float64(obj.plan_distance, buffer, bufferOffset);
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetGraphPlanResponse
    let len;
    let data = new GetGraphPlanResponse(null);
    // Deserialize message field [vertices_in_plan]
    // Deserialize array length for message field [vertices_in_plan]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.vertices_in_plan = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.vertices_in_plan[i] = Vertex.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [plan]
    data.plan = nav_msgs.msg.Path.deserialize(buffer, bufferOffset);
    // Deserialize message field [plan_distance]
    data.plan_distance = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.vertices_in_plan.forEach((val) => {
      length += Vertex.getMessageSize(val);
    });
    length += nav_msgs.msg.Path.getMessageSize(object.plan);
    length += _getByteLength(object.message);
    return length + 17;
  }

  static datatype() {
    // Returns string type for a service object
    return 'graph_msgs/GetGraphPlanResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a3bb8666953be009bc8cc16cf326d151';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Vertex[] vertices_in_plan       # The vertices that are part of the plan
    nav_msgs/Path plan              # The plan from the pre-defined graph curves
    float64 plan_distance           # Total plan distance
    
    bool success                    # Whether planning was success
    string message                  # Messages related to planning
    
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
    MSG: nav_msgs/Path
    #An array of poses that represents a Path for a robot to follow
    Header header
    geometry_msgs/PoseStamped[] poses
    
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
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetGraphPlanResponse(null);
    if (msg.vertices_in_plan !== undefined) {
      resolved.vertices_in_plan = new Array(msg.vertices_in_plan.length);
      for (let i = 0; i < resolved.vertices_in_plan.length; ++i) {
        resolved.vertices_in_plan[i] = Vertex.Resolve(msg.vertices_in_plan[i]);
      }
    }
    else {
      resolved.vertices_in_plan = []
    }

    if (msg.plan !== undefined) {
      resolved.plan = nav_msgs.msg.Path.Resolve(msg.plan)
    }
    else {
      resolved.plan = new nav_msgs.msg.Path()
    }

    if (msg.plan_distance !== undefined) {
      resolved.plan_distance = msg.plan_distance;
    }
    else {
      resolved.plan_distance = 0.0
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
  Request: GetGraphPlanRequest,
  Response: GetGraphPlanResponse,
  md5sum() { return '246031edd693b7aff99fb77edb89c199'; },
  datatype() { return 'graph_msgs/GetGraphPlan'; }
};
