// Auto-generated. Do not edit!

// (in-package ros_service_assignment.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class rectangle_areaRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.l = null;
      this.w = null;
    }
    else {
      if (initObj.hasOwnProperty('l')) {
        this.l = initObj.l
      }
      else {
        this.l = 0.0;
      }
      if (initObj.hasOwnProperty('w')) {
        this.w = initObj.w
      }
      else {
        this.w = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type rectangle_areaRequest
    // Serialize message field [l]
    bufferOffset = _serializer.float32(obj.l, buffer, bufferOffset);
    // Serialize message field [w]
    bufferOffset = _serializer.float32(obj.w, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type rectangle_areaRequest
    let len;
    let data = new rectangle_areaRequest(null);
    // Deserialize message field [l]
    data.l = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [w]
    data.w = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ros_service_assignment/rectangle_areaRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '73811226180668ce91b41770628c63aa';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 l
    float32 w
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new rectangle_areaRequest(null);
    if (msg.l !== undefined) {
      resolved.l = msg.l;
    }
    else {
      resolved.l = 0.0
    }

    if (msg.w !== undefined) {
      resolved.w = msg.w;
    }
    else {
      resolved.w = 0.0
    }

    return resolved;
    }
};

class rectangle_areaResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.area = null;
    }
    else {
      if (initObj.hasOwnProperty('area')) {
        this.area = initObj.area
      }
      else {
        this.area = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type rectangle_areaResponse
    // Serialize message field [area]
    bufferOffset = _serializer.float32(obj.area, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type rectangle_areaResponse
    let len;
    let data = new rectangle_areaResponse(null);
    // Deserialize message field [area]
    data.area = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ros_service_assignment/rectangle_areaResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ba46cd039de682077b3eaa09c3500c5c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 area
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new rectangle_areaResponse(null);
    if (msg.area !== undefined) {
      resolved.area = msg.area;
    }
    else {
      resolved.area = 0.0
    }

    return resolved;
    }
};

module.exports = {
  Request: rectangle_areaRequest,
  Response: rectangle_areaResponse,
  md5sum() { return '8c40727d6328d1ee6f8baf8490116346'; },
  datatype() { return 'ros_service_assignment/rectangle_area'; }
};
