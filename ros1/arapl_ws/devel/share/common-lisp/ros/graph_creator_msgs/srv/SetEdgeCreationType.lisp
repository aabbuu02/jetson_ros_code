; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-srv)


;//! \htmlinclude SetEdgeCreationType-request.msg.html

(cl:defclass <SetEdgeCreationType-request> (roslisp-msg-protocol:ros-message)
  ((type
    :reader type
    :initarg :type
    :type graph_creator_msgs-msg:EdgeCreationType
    :initform (cl:make-instance 'graph_creator_msgs-msg:EdgeCreationType)))
)

(cl:defclass SetEdgeCreationType-request (<SetEdgeCreationType-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetEdgeCreationType-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetEdgeCreationType-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetEdgeCreationType-request> is deprecated: use graph_creator_msgs-srv:SetEdgeCreationType-request instead.")))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <SetEdgeCreationType-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:type-val is deprecated.  Use graph_creator_msgs-srv:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetEdgeCreationType-request>) ostream)
  "Serializes a message object of type '<SetEdgeCreationType-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'type) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetEdgeCreationType-request>) istream)
  "Deserializes a message object of type '<SetEdgeCreationType-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'type) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetEdgeCreationType-request>)))
  "Returns string type for a service object of type '<SetEdgeCreationType-request>"
  "graph_creator_msgs/SetEdgeCreationTypeRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetEdgeCreationType-request)))
  "Returns string type for a service object of type 'SetEdgeCreationType-request"
  "graph_creator_msgs/SetEdgeCreationTypeRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetEdgeCreationType-request>)))
  "Returns md5sum for a message object of type '<SetEdgeCreationType-request>"
  "e5f002eea2c5b918b9b4d3297d8315c2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetEdgeCreationType-request)))
  "Returns md5sum for a message object of type 'SetEdgeCreationType-request"
  "e5f002eea2c5b918b9b4d3297d8315c2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetEdgeCreationType-request>)))
  "Returns full string definition for message of type '<SetEdgeCreationType-request>"
  (cl:format cl:nil "graph_creator_msgs/EdgeCreationType type~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetEdgeCreationType-request)))
  "Returns full string definition for message of type 'SetEdgeCreationType-request"
  (cl:format cl:nil "graph_creator_msgs/EdgeCreationType type~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetEdgeCreationType-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'type))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetEdgeCreationType-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetEdgeCreationType-request
    (cl:cons ':type (type msg))
))
;//! \htmlinclude SetEdgeCreationType-response.msg.html

(cl:defclass <SetEdgeCreationType-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass SetEdgeCreationType-response (<SetEdgeCreationType-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetEdgeCreationType-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetEdgeCreationType-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetEdgeCreationType-response> is deprecated: use graph_creator_msgs-srv:SetEdgeCreationType-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetEdgeCreationType-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:success-val is deprecated.  Use graph_creator_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <SetEdgeCreationType-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:message-val is deprecated.  Use graph_creator_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetEdgeCreationType-response>) ostream)
  "Serializes a message object of type '<SetEdgeCreationType-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetEdgeCreationType-response>) istream)
  "Deserializes a message object of type '<SetEdgeCreationType-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetEdgeCreationType-response>)))
  "Returns string type for a service object of type '<SetEdgeCreationType-response>"
  "graph_creator_msgs/SetEdgeCreationTypeResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetEdgeCreationType-response)))
  "Returns string type for a service object of type 'SetEdgeCreationType-response"
  "graph_creator_msgs/SetEdgeCreationTypeResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetEdgeCreationType-response>)))
  "Returns md5sum for a message object of type '<SetEdgeCreationType-response>"
  "e5f002eea2c5b918b9b4d3297d8315c2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetEdgeCreationType-response)))
  "Returns md5sum for a message object of type 'SetEdgeCreationType-response"
  "e5f002eea2c5b918b9b4d3297d8315c2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetEdgeCreationType-response>)))
  "Returns full string definition for message of type '<SetEdgeCreationType-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetEdgeCreationType-response)))
  "Returns full string definition for message of type 'SetEdgeCreationType-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetEdgeCreationType-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetEdgeCreationType-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetEdgeCreationType-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetEdgeCreationType)))
  'SetEdgeCreationType-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetEdgeCreationType)))
  'SetEdgeCreationType-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetEdgeCreationType)))
  "Returns string type for a service object of type '<SetEdgeCreationType>"
  "graph_creator_msgs/SetEdgeCreationType")