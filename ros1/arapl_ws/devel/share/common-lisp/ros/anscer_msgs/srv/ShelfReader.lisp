; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude ShelfReader-request.msg.html

(cl:defclass <ShelfReader-request> (roslisp-msg-protocol:ros-message)
  ((dummy_req
    :reader dummy_req
    :initarg :dummy_req
    :type cl:integer
    :initform 0))
)

(cl:defclass ShelfReader-request (<ShelfReader-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ShelfReader-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ShelfReader-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<ShelfReader-request> is deprecated: use anscer_msgs-srv:ShelfReader-request instead.")))

(cl:ensure-generic-function 'dummy_req-val :lambda-list '(m))
(cl:defmethod dummy_req-val ((m <ShelfReader-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:dummy_req-val is deprecated.  Use anscer_msgs-srv:dummy_req instead.")
  (dummy_req m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ShelfReader-request>) ostream)
  "Serializes a message object of type '<ShelfReader-request>"
  (cl:let* ((signed (cl:slot-value msg 'dummy_req)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ShelfReader-request>) istream)
  "Deserializes a message object of type '<ShelfReader-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dummy_req) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ShelfReader-request>)))
  "Returns string type for a service object of type '<ShelfReader-request>"
  "anscer_msgs/ShelfReaderRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ShelfReader-request)))
  "Returns string type for a service object of type 'ShelfReader-request"
  "anscer_msgs/ShelfReaderRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ShelfReader-request>)))
  "Returns md5sum for a message object of type '<ShelfReader-request>"
  "4218f5cbbe42113a859058f65a58f219")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ShelfReader-request)))
  "Returns md5sum for a message object of type 'ShelfReader-request"
  "4218f5cbbe42113a859058f65a58f219")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ShelfReader-request>)))
  "Returns full string definition for message of type '<ShelfReader-request>"
  (cl:format cl:nil "int64 dummy_req ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ShelfReader-request)))
  "Returns full string definition for message of type 'ShelfReader-request"
  (cl:format cl:nil "int64 dummy_req ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ShelfReader-request>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ShelfReader-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ShelfReader-request
    (cl:cons ':dummy_req (dummy_req msg))
))
;//! \htmlinclude ShelfReader-response.msg.html

(cl:defclass <ShelfReader-response> (roslisp-msg-protocol:ros-message)
  ((shelf_response
    :reader shelf_response
    :initarg :shelf_response
    :type cl:integer
    :initform 0))
)

(cl:defclass ShelfReader-response (<ShelfReader-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ShelfReader-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ShelfReader-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<ShelfReader-response> is deprecated: use anscer_msgs-srv:ShelfReader-response instead.")))

(cl:ensure-generic-function 'shelf_response-val :lambda-list '(m))
(cl:defmethod shelf_response-val ((m <ShelfReader-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:shelf_response-val is deprecated.  Use anscer_msgs-srv:shelf_response instead.")
  (shelf_response m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ShelfReader-response>) ostream)
  "Serializes a message object of type '<ShelfReader-response>"
  (cl:let* ((signed (cl:slot-value msg 'shelf_response)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ShelfReader-response>) istream)
  "Deserializes a message object of type '<ShelfReader-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'shelf_response) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ShelfReader-response>)))
  "Returns string type for a service object of type '<ShelfReader-response>"
  "anscer_msgs/ShelfReaderResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ShelfReader-response)))
  "Returns string type for a service object of type 'ShelfReader-response"
  "anscer_msgs/ShelfReaderResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ShelfReader-response>)))
  "Returns md5sum for a message object of type '<ShelfReader-response>"
  "4218f5cbbe42113a859058f65a58f219")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ShelfReader-response)))
  "Returns md5sum for a message object of type 'ShelfReader-response"
  "4218f5cbbe42113a859058f65a58f219")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ShelfReader-response>)))
  "Returns full string definition for message of type '<ShelfReader-response>"
  (cl:format cl:nil "int64 shelf_response~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ShelfReader-response)))
  "Returns full string definition for message of type 'ShelfReader-response"
  (cl:format cl:nil "int64 shelf_response~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ShelfReader-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ShelfReader-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ShelfReader-response
    (cl:cons ':shelf_response (shelf_response msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ShelfReader)))
  'ShelfReader-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ShelfReader)))
  'ShelfReader-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ShelfReader)))
  "Returns string type for a service object of type '<ShelfReader>"
  "anscer_msgs/ShelfReader")