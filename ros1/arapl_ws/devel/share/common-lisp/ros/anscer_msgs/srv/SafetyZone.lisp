; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude SafetyZone-request.msg.html

(cl:defclass <SafetyZone-request> (roslisp-msg-protocol:ros-message)
  ((safety_zone
    :reader safety_zone
    :initarg :safety_zone
    :type cl:float
    :initform 0.0))
)

(cl:defclass SafetyZone-request (<SafetyZone-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SafetyZone-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SafetyZone-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<SafetyZone-request> is deprecated: use anscer_msgs-srv:SafetyZone-request instead.")))

(cl:ensure-generic-function 'safety_zone-val :lambda-list '(m))
(cl:defmethod safety_zone-val ((m <SafetyZone-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:safety_zone-val is deprecated.  Use anscer_msgs-srv:safety_zone instead.")
  (safety_zone m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SafetyZone-request>) ostream)
  "Serializes a message object of type '<SafetyZone-request>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'safety_zone))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SafetyZone-request>) istream)
  "Deserializes a message object of type '<SafetyZone-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'safety_zone) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SafetyZone-request>)))
  "Returns string type for a service object of type '<SafetyZone-request>"
  "anscer_msgs/SafetyZoneRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetyZone-request)))
  "Returns string type for a service object of type 'SafetyZone-request"
  "anscer_msgs/SafetyZoneRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SafetyZone-request>)))
  "Returns md5sum for a message object of type '<SafetyZone-request>"
  "3dfa5a05dd5746de1f5b03b04e0274d1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SafetyZone-request)))
  "Returns md5sum for a message object of type 'SafetyZone-request"
  "3dfa5a05dd5746de1f5b03b04e0274d1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SafetyZone-request>)))
  "Returns full string definition for message of type '<SafetyZone-request>"
  (cl:format cl:nil "float32 safety_zone~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SafetyZone-request)))
  "Returns full string definition for message of type 'SafetyZone-request"
  (cl:format cl:nil "float32 safety_zone~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SafetyZone-request>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SafetyZone-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SafetyZone-request
    (cl:cons ':safety_zone (safety_zone msg))
))
;//! \htmlinclude SafetyZone-response.msg.html

(cl:defclass <SafetyZone-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass SafetyZone-response (<SafetyZone-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SafetyZone-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SafetyZone-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<SafetyZone-response> is deprecated: use anscer_msgs-srv:SafetyZone-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SafetyZone-response>) ostream)
  "Serializes a message object of type '<SafetyZone-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SafetyZone-response>) istream)
  "Deserializes a message object of type '<SafetyZone-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SafetyZone-response>)))
  "Returns string type for a service object of type '<SafetyZone-response>"
  "anscer_msgs/SafetyZoneResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetyZone-response)))
  "Returns string type for a service object of type 'SafetyZone-response"
  "anscer_msgs/SafetyZoneResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SafetyZone-response>)))
  "Returns md5sum for a message object of type '<SafetyZone-response>"
  "3dfa5a05dd5746de1f5b03b04e0274d1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SafetyZone-response)))
  "Returns md5sum for a message object of type 'SafetyZone-response"
  "3dfa5a05dd5746de1f5b03b04e0274d1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SafetyZone-response>)))
  "Returns full string definition for message of type '<SafetyZone-response>"
  (cl:format cl:nil "~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SafetyZone-response)))
  "Returns full string definition for message of type 'SafetyZone-response"
  (cl:format cl:nil "~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SafetyZone-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SafetyZone-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SafetyZone-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SafetyZone)))
  'SafetyZone-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SafetyZone)))
  'SafetyZone-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetyZone)))
  "Returns string type for a service object of type '<SafetyZone>"
  "anscer_msgs/SafetyZone")