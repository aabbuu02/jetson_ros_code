; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude Safety-request.msg.html

(cl:defclass <Safety-request> (roslisp-msg-protocol:ros-message)
  ((safety_config
    :reader safety_config
    :initarg :safety_config
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Safety-request (<Safety-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Safety-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Safety-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<Safety-request> is deprecated: use anscer_msgs-srv:Safety-request instead.")))

(cl:ensure-generic-function 'safety_config-val :lambda-list '(m))
(cl:defmethod safety_config-val ((m <Safety-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:safety_config-val is deprecated.  Use anscer_msgs-srv:safety_config instead.")
  (safety_config m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Safety-request>) ostream)
  "Serializes a message object of type '<Safety-request>"
  (cl:let* ((signed (cl:slot-value msg 'safety_config)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Safety-request>) istream)
  "Deserializes a message object of type '<Safety-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'safety_config) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Safety-request>)))
  "Returns string type for a service object of type '<Safety-request>"
  "anscer_msgs/SafetyRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Safety-request)))
  "Returns string type for a service object of type 'Safety-request"
  "anscer_msgs/SafetyRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Safety-request>)))
  "Returns md5sum for a message object of type '<Safety-request>"
  "0d401b7765833ddbdd23a78ce7d31162")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Safety-request)))
  "Returns md5sum for a message object of type 'Safety-request"
  "0d401b7765833ddbdd23a78ce7d31162")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Safety-request>)))
  "Returns full string definition for message of type '<Safety-request>"
  (cl:format cl:nil "int8 safety_config~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Safety-request)))
  "Returns full string definition for message of type 'Safety-request"
  (cl:format cl:nil "int8 safety_config~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Safety-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Safety-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Safety-request
    (cl:cons ':safety_config (safety_config msg))
))
;//! \htmlinclude Safety-response.msg.html

(cl:defclass <Safety-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass Safety-response (<Safety-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Safety-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Safety-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<Safety-response> is deprecated: use anscer_msgs-srv:Safety-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Safety-response>) ostream)
  "Serializes a message object of type '<Safety-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Safety-response>) istream)
  "Deserializes a message object of type '<Safety-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Safety-response>)))
  "Returns string type for a service object of type '<Safety-response>"
  "anscer_msgs/SafetyResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Safety-response)))
  "Returns string type for a service object of type 'Safety-response"
  "anscer_msgs/SafetyResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Safety-response>)))
  "Returns md5sum for a message object of type '<Safety-response>"
  "0d401b7765833ddbdd23a78ce7d31162")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Safety-response)))
  "Returns md5sum for a message object of type 'Safety-response"
  "0d401b7765833ddbdd23a78ce7d31162")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Safety-response>)))
  "Returns full string definition for message of type '<Safety-response>"
  (cl:format cl:nil "~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Safety-response)))
  "Returns full string definition for message of type 'Safety-response"
  (cl:format cl:nil "~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Safety-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Safety-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Safety-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Safety)))
  'Safety-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Safety)))
  'Safety-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Safety)))
  "Returns string type for a service object of type '<Safety>"
  "anscer_msgs/Safety")