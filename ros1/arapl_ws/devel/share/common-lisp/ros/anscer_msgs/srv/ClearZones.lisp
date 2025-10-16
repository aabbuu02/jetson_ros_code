; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude ClearZones-request.msg.html

(cl:defclass <ClearZones-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass ClearZones-request (<ClearZones-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ClearZones-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ClearZones-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<ClearZones-request> is deprecated: use anscer_msgs-srv:ClearZones-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ClearZones-request>) ostream)
  "Serializes a message object of type '<ClearZones-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ClearZones-request>) istream)
  "Deserializes a message object of type '<ClearZones-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ClearZones-request>)))
  "Returns string type for a service object of type '<ClearZones-request>"
  "anscer_msgs/ClearZonesRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ClearZones-request)))
  "Returns string type for a service object of type 'ClearZones-request"
  "anscer_msgs/ClearZonesRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ClearZones-request>)))
  "Returns md5sum for a message object of type '<ClearZones-request>"
  "3a1255d4d998bd4d6585c64639b5ee9a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ClearZones-request)))
  "Returns md5sum for a message object of type 'ClearZones-request"
  "3a1255d4d998bd4d6585c64639b5ee9a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ClearZones-request>)))
  "Returns full string definition for message of type '<ClearZones-request>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ClearZones-request)))
  "Returns full string definition for message of type 'ClearZones-request"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ClearZones-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ClearZones-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ClearZones-request
))
;//! \htmlinclude ClearZones-response.msg.html

(cl:defclass <ClearZones-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ClearZones-response (<ClearZones-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ClearZones-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ClearZones-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<ClearZones-response> is deprecated: use anscer_msgs-srv:ClearZones-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <ClearZones-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:status-val is deprecated.  Use anscer_msgs-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ClearZones-response>) ostream)
  "Serializes a message object of type '<ClearZones-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ClearZones-response>) istream)
  "Deserializes a message object of type '<ClearZones-response>"
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ClearZones-response>)))
  "Returns string type for a service object of type '<ClearZones-response>"
  "anscer_msgs/ClearZonesResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ClearZones-response)))
  "Returns string type for a service object of type 'ClearZones-response"
  "anscer_msgs/ClearZonesResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ClearZones-response>)))
  "Returns md5sum for a message object of type '<ClearZones-response>"
  "3a1255d4d998bd4d6585c64639b5ee9a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ClearZones-response)))
  "Returns md5sum for a message object of type 'ClearZones-response"
  "3a1255d4d998bd4d6585c64639b5ee9a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ClearZones-response>)))
  "Returns full string definition for message of type '<ClearZones-response>"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ClearZones-response)))
  "Returns full string definition for message of type 'ClearZones-response"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ClearZones-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ClearZones-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ClearZones-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ClearZones)))
  'ClearZones-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ClearZones)))
  'ClearZones-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ClearZones)))
  "Returns string type for a service object of type '<ClearZones>"
  "anscer_msgs/ClearZones")