// Auto-generated. Do not edit!

// (in-package lift_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ErrorStatus {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.lifterFault = null;
      this.extractorFault = null;
      this.turnTableFault = null;
      this.swingArmFault = null;
      this.emergencyPBfault = null;
      this.swingArmSensorZeroFault = null;
      this.swingArmSensorNinetyFault = null;
      this.turntableSensorZeroFault = null;
      this.extractorSensorLaserFault = null;
    }
    else {
      if (initObj.hasOwnProperty('lifterFault')) {
        this.lifterFault = initObj.lifterFault
      }
      else {
        this.lifterFault = false;
      }
      if (initObj.hasOwnProperty('extractorFault')) {
        this.extractorFault = initObj.extractorFault
      }
      else {
        this.extractorFault = false;
      }
      if (initObj.hasOwnProperty('turnTableFault')) {
        this.turnTableFault = initObj.turnTableFault
      }
      else {
        this.turnTableFault = false;
      }
      if (initObj.hasOwnProperty('swingArmFault')) {
        this.swingArmFault = initObj.swingArmFault
      }
      else {
        this.swingArmFault = false;
      }
      if (initObj.hasOwnProperty('emergencyPBfault')) {
        this.emergencyPBfault = initObj.emergencyPBfault
      }
      else {
        this.emergencyPBfault = false;
      }
      if (initObj.hasOwnProperty('swingArmSensorZeroFault')) {
        this.swingArmSensorZeroFault = initObj.swingArmSensorZeroFault
      }
      else {
        this.swingArmSensorZeroFault = false;
      }
      if (initObj.hasOwnProperty('swingArmSensorNinetyFault')) {
        this.swingArmSensorNinetyFault = initObj.swingArmSensorNinetyFault
      }
      else {
        this.swingArmSensorNinetyFault = false;
      }
      if (initObj.hasOwnProperty('turntableSensorZeroFault')) {
        this.turntableSensorZeroFault = initObj.turntableSensorZeroFault
      }
      else {
        this.turntableSensorZeroFault = false;
      }
      if (initObj.hasOwnProperty('extractorSensorLaserFault')) {
        this.extractorSensorLaserFault = initObj.extractorSensorLaserFault
      }
      else {
        this.extractorSensorLaserFault = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ErrorStatus
    // Serialize message field [lifterFault]
    bufferOffset = _serializer.bool(obj.lifterFault, buffer, bufferOffset);
    // Serialize message field [extractorFault]
    bufferOffset = _serializer.bool(obj.extractorFault, buffer, bufferOffset);
    // Serialize message field [turnTableFault]
    bufferOffset = _serializer.bool(obj.turnTableFault, buffer, bufferOffset);
    // Serialize message field [swingArmFault]
    bufferOffset = _serializer.bool(obj.swingArmFault, buffer, bufferOffset);
    // Serialize message field [emergencyPBfault]
    bufferOffset = _serializer.bool(obj.emergencyPBfault, buffer, bufferOffset);
    // Serialize message field [swingArmSensorZeroFault]
    bufferOffset = _serializer.bool(obj.swingArmSensorZeroFault, buffer, bufferOffset);
    // Serialize message field [swingArmSensorNinetyFault]
    bufferOffset = _serializer.bool(obj.swingArmSensorNinetyFault, buffer, bufferOffset);
    // Serialize message field [turntableSensorZeroFault]
    bufferOffset = _serializer.bool(obj.turntableSensorZeroFault, buffer, bufferOffset);
    // Serialize message field [extractorSensorLaserFault]
    bufferOffset = _serializer.bool(obj.extractorSensorLaserFault, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ErrorStatus
    let len;
    let data = new ErrorStatus(null);
    // Deserialize message field [lifterFault]
    data.lifterFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [extractorFault]
    data.extractorFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [turnTableFault]
    data.turnTableFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [swingArmFault]
    data.swingArmFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [emergencyPBfault]
    data.emergencyPBfault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [swingArmSensorZeroFault]
    data.swingArmSensorZeroFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [swingArmSensorNinetyFault]
    data.swingArmSensorNinetyFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [turntableSensorZeroFault]
    data.turntableSensorZeroFault = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [extractorSensorLaserFault]
    data.extractorSensorLaserFault = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'lift_action/ErrorStatus';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0ad64508a47bfdb3b3558cc9de515c2e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool lifterFault
    bool extractorFault
    bool turnTableFault
    bool swingArmFault
    bool emergencyPBfault
    bool swingArmSensorZeroFault
    bool swingArmSensorNinetyFault
    bool turntableSensorZeroFault
    bool extractorSensorLaserFault
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ErrorStatus(null);
    if (msg.lifterFault !== undefined) {
      resolved.lifterFault = msg.lifterFault;
    }
    else {
      resolved.lifterFault = false
    }

    if (msg.extractorFault !== undefined) {
      resolved.extractorFault = msg.extractorFault;
    }
    else {
      resolved.extractorFault = false
    }

    if (msg.turnTableFault !== undefined) {
      resolved.turnTableFault = msg.turnTableFault;
    }
    else {
      resolved.turnTableFault = false
    }

    if (msg.swingArmFault !== undefined) {
      resolved.swingArmFault = msg.swingArmFault;
    }
    else {
      resolved.swingArmFault = false
    }

    if (msg.emergencyPBfault !== undefined) {
      resolved.emergencyPBfault = msg.emergencyPBfault;
    }
    else {
      resolved.emergencyPBfault = false
    }

    if (msg.swingArmSensorZeroFault !== undefined) {
      resolved.swingArmSensorZeroFault = msg.swingArmSensorZeroFault;
    }
    else {
      resolved.swingArmSensorZeroFault = false
    }

    if (msg.swingArmSensorNinetyFault !== undefined) {
      resolved.swingArmSensorNinetyFault = msg.swingArmSensorNinetyFault;
    }
    else {
      resolved.swingArmSensorNinetyFault = false
    }

    if (msg.turntableSensorZeroFault !== undefined) {
      resolved.turntableSensorZeroFault = msg.turntableSensorZeroFault;
    }
    else {
      resolved.turntableSensorZeroFault = false
    }

    if (msg.extractorSensorLaserFault !== undefined) {
      resolved.extractorSensorLaserFault = msg.extractorSensorLaserFault;
    }
    else {
      resolved.extractorSensorLaserFault = false
    }

    return resolved;
    }
};

module.exports = ErrorStatus;
