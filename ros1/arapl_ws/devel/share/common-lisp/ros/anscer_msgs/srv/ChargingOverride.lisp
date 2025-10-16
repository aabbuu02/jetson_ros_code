; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude ChargingOverride-request.msg.html

(cl:defclass <ChargingOverride-request> (roslisp-msg-protocol:ros-message)
  ((charge_override
    :reader charge_override
    :initarg :charge_override
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ChargingOverride-request (<ChargingOverride-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ChargingOverride-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ChargingOverride-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<ChargingOverride-request> is deprecated: use anscer_msgs-srv:ChargingOverride-request instead.")))

(cl:ensure-generic-function 'charge_override-val :lambda-list '(m))
(cl:defmethod charge_override-val ((m <ChargingOverride-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:charge_override-val is deprecated.  Use anscer_msgs-srv:charge_override instead.")
  (charge_override m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ChargingOverride-request>) ostream)
  "Serializes a message object of type '<ChargingOverride-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'charge_override) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ChargingOverride-request>) istream)
  "Deserializes a message object of type '<ChargingOverride-request>"
    (cl:setf (cl:slot-value msg 'charge_override) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ChargingOverride-request>)))
  "Returns string type for a service object of type '<ChargingOverride-request>"
  "anscer_msgs/ChargingOverrideRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ChargingOverride-request)))
  "Returns string type for a service object of type 'ChargingOverride-request"
  "anscer_msgs/ChargingOverrideRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ChargingOverride-request>)))
  "Returns md5sum for a message object of type '<ChargingOverride-request>"
  "26611cba0ebbfa060ca1a9e4e8ff36f7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ChargingOverride-request)))
  "Returns md5sum for a message object of type 'ChargingOverride-request"
  "26611cba0ebbfa060ca1a9e4e8ff36f7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ChargingOverride-request>)))
  "Returns full string definition for message of type '<ChargingOverride-request>"
  (cl:format cl:nil "bool charge_override~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ChargingOverride-request)))
  "Returns full string definition for message of type 'ChargingOverride-request"
  (cl:format cl:nil "bool charge_override~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ChargingOverride-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ChargingOverride-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ChargingOverride-request
    (cl:cons ':charge_override (charge_override msg))
))
;//! \htmlinclude ChargingOverride-response.msg.html

(cl:defclass <ChargingOverride-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ChargingOverride-response (<ChargingOverride-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ChargingOverride-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ChargingOverride-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<ChargingOverride-response> is deprecated: use anscer_msgs-srv:ChargingOverride-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <ChargingOverride-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:status-val is deprecated.  Use anscer_msgs-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ChargingOverride-response>) ostream)
  "Serializes a message object of type '<ChargingOverride-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ChargingOverride-response>) istream)
  "Deserializes a message object of type '<ChargingOverride-response>"
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ChargingOverride-response>)))
  "Returns string type for a service object of type '<ChargingOverride-response>"
  "anscer_msgs/ChargingOverrideResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ChargingOverride-response)))
  "Returns string type for a service object of type 'ChargingOverride-response"
  "anscer_msgs/ChargingOverrideResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ChargingOverride-response>)))
  "Returns md5sum for a message object of type '<ChargingOverride-response>"
  "26611cba0ebbfa060ca1a9e4e8ff36f7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ChargingOverride-response)))
  "Returns md5sum for a message object of type 'ChargingOverride-response"
  "26611cba0ebbfa060ca1a9e4e8ff36f7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ChargingOverride-response>)))
  "Returns full string definition for message of type '<ChargingOverride-response>"
  (cl:format cl:nil "bool status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ChargingOverride-response)))
  "Returns full string definition for message of type 'ChargingOverride-response"
  (cl:format cl:nil "bool status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ChargingOverride-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ChargingOverride-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ChargingOverride-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ChargingOverride)))
  'ChargingOverride-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ChargingOverride)))
  'ChargingOverride-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ChargingOverride)))
  "Returns string type for a service object of type '<ChargingOverride>"
  "anscer_msgs/ChargingOverride")