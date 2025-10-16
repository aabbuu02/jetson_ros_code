// Auto-generated. Do not edit!

// (in-package graph_creator_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class SelectedGraphElements {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.selected_elements = null;
    }
    else {
      if (initObj.hasOwnProperty('selected_elements')) {
        this.selected_elements = initObj.selected_elements
      }
      else {
        this.selected_elements = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SelectedGraphElements
    // Serialize message field [selected_elements]
    bufferOffset = _arraySerializer.string(obj.selected_elements, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SelectedGraphElements
    let len;
    let data = new SelectedGraphElements(null);
    // Deserialize message field [selected_elements]
    data.selected_elements = _arrayDeserializer.string(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.selected_elements.forEach((val) => {
      length += 4 + _getByteLength(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graph_creator_msgs/SelectedGraphElements';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd12cf3a0df62575b5490d1e21b2d67c6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string[] selected_elements
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SelectedGraphElements(null);
    if (msg.selected_elements !== undefined) {
      resolved.selected_elements = msg.selected_elements;
    }
    else {
      resolved.selected_elements = []
    }

    return resolved;
    }
};

module.exports = SelectedGraphElements;
