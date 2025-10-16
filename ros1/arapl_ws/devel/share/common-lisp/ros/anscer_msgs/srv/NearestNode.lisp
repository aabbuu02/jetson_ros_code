; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude NearestNode-request.msg.html

(cl:defclass <NearestNode-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass NearestNode-request (<NearestNode-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NearestNode-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NearestNode-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<NearestNode-request> is deprecated: use anscer_msgs-srv:NearestNode-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NearestNode-request>) ostream)
  "Serializes a message object of type '<NearestNode-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NearestNode-request>) istream)
  "Deserializes a message object of type '<NearestNode-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NearestNode-request>)))
  "Returns string type for a service object of type '<NearestNode-request>"
  "anscer_msgs/NearestNodeRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NearestNode-request)))
  "Returns string type for a service object of type 'NearestNode-request"
  "anscer_msgs/NearestNodeRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NearestNode-request>)))
  "Returns md5sum for a message object of type '<NearestNode-request>"
  "c5e4a7d59c68f74eabcec876a00216aa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NearestNode-request)))
  "Returns md5sum for a message object of type 'NearestNode-request"
  "c5e4a7d59c68f74eabcec876a00216aa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NearestNode-request>)))
  "Returns full string definition for message of type '<NearestNode-request>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NearestNode-request)))
  "Returns full string definition for message of type 'NearestNode-request"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NearestNode-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NearestNode-request>))
  "Converts a ROS message object to a list"
  (cl:list 'NearestNode-request
))
;//! \htmlinclude NearestNode-response.msg.html

(cl:defclass <NearestNode-response> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0))
)

(cl:defclass NearestNode-response (<NearestNode-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NearestNode-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NearestNode-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<NearestNode-response> is deprecated: use anscer_msgs-srv:NearestNode-response instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <NearestNode-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:id-val is deprecated.  Use anscer_msgs-srv:id instead.")
  (id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NearestNode-response>) ostream)
  "Serializes a message object of type '<NearestNode-response>"
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NearestNode-response>) istream)
  "Deserializes a message object of type '<NearestNode-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NearestNode-response>)))
  "Returns string type for a service object of type '<NearestNode-response>"
  "anscer_msgs/NearestNodeResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NearestNode-response)))
  "Returns string type for a service object of type 'NearestNode-response"
  "anscer_msgs/NearestNodeResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NearestNode-response>)))
  "Returns md5sum for a message object of type '<NearestNode-response>"
  "c5e4a7d59c68f74eabcec876a00216aa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NearestNode-response)))
  "Returns md5sum for a message object of type 'NearestNode-response"
  "c5e4a7d59c68f74eabcec876a00216aa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NearestNode-response>)))
  "Returns full string definition for message of type '<NearestNode-response>"
  (cl:format cl:nil "int32 id~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NearestNode-response)))
  "Returns full string definition for message of type 'NearestNode-response"
  (cl:format cl:nil "int32 id~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NearestNode-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NearestNode-response>))
  "Converts a ROS message object to a list"
  (cl:list 'NearestNode-response
    (cl:cons ':id (id msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'NearestNode)))
  'NearestNode-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'NearestNode)))
  'NearestNode-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NearestNode)))
  "Returns string type for a service object of type '<NearestNode>"
  "anscer_msgs/NearestNode")