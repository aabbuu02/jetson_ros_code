; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-srv)


;//! \htmlinclude SetEdgeDirectionCreationType-request.msg.html

(cl:defclass <SetEdgeDirectionCreationType-request> (roslisp-msg-protocol:ros-message)
  ((type
    :reader type
    :initarg :type
    :type graph_creator_msgs-msg:EdgeDirectionCreationType
    :initform (cl:make-instance 'graph_creator_msgs-msg:EdgeDirectionCreationType)))
)

(cl:defclass SetEdgeDirectionCreationType-request (<SetEdgeDirectionCreationType-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetEdgeDirectionCreationType-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetEdgeDirectionCreationType-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetEdgeDirectionCreationType-request> is deprecated: use graph_creator_msgs-srv:SetEdgeDirectionCreationType-request instead.")))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <SetEdgeDirectionCreationType-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:type-val is deprecated.  Use graph_creator_msgs-srv:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetEdgeDirectionCreationType-request>) ostream)
  "Serializes a message object of type '<SetEdgeDirectionCreationType-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'type) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetEdgeDirectionCreationType-request>) istream)
  "Deserializes a message object of type '<SetEdgeDirectionCreationType-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'type) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetEdgeDirectionCreationType-request>)))
  "Returns string type for a service object of type '<SetEdgeDirectionCreationType-request>"
  "graph_creator_msgs/SetEdgeDirectionCreationTypeRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetEdgeDirectionCreationType-request)))
  "Returns string type for a service object of type 'SetEdgeDirectionCreationType-request"
  "graph_creator_msgs/SetEdgeDirectionCreationTypeRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetEdgeDirectionCreationType-request>)))
  "Returns md5sum for a message object of type '<SetEdgeDirectionCreationType-request>"
  "34f28652b2a44e6592bf32db0fa65269")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetEdgeDirectionCreationType-request)))
  "Returns md5sum for a message object of type 'SetEdgeDirectionCreationType-request"
  "34f28652b2a44e6592bf32db0fa65269")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetEdgeDirectionCreationType-request>)))
  "Returns full string definition for message of type '<SetEdgeDirectionCreationType-request>"
  (cl:format cl:nil "graph_creator_msgs/EdgeDirectionCreationType type~%~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetEdgeDirectionCreationType-request)))
  "Returns full string definition for message of type 'SetEdgeDirectionCreationType-request"
  (cl:format cl:nil "graph_creator_msgs/EdgeDirectionCreationType type~%~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetEdgeDirectionCreationType-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'type))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetEdgeDirectionCreationType-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetEdgeDirectionCreationType-request
    (cl:cons ':type (type msg))
))
;//! \htmlinclude SetEdgeDirectionCreationType-response.msg.html

(cl:defclass <SetEdgeDirectionCreationType-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass SetEdgeDirectionCreationType-response (<SetEdgeDirectionCreationType-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetEdgeDirectionCreationType-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetEdgeDirectionCreationType-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetEdgeDirectionCreationType-response> is deprecated: use graph_creator_msgs-srv:SetEdgeDirectionCreationType-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetEdgeDirectionCreationType-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:success-val is deprecated.  Use graph_creator_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <SetEdgeDirectionCreationType-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:message-val is deprecated.  Use graph_creator_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetEdgeDirectionCreationType-response>) ostream)
  "Serializes a message object of type '<SetEdgeDirectionCreationType-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetEdgeDirectionCreationType-response>) istream)
  "Deserializes a message object of type '<SetEdgeDirectionCreationType-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetEdgeDirectionCreationType-response>)))
  "Returns string type for a service object of type '<SetEdgeDirectionCreationType-response>"
  "graph_creator_msgs/SetEdgeDirectionCreationTypeResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetEdgeDirectionCreationType-response)))
  "Returns string type for a service object of type 'SetEdgeDirectionCreationType-response"
  "graph_creator_msgs/SetEdgeDirectionCreationTypeResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetEdgeDirectionCreationType-response>)))
  "Returns md5sum for a message object of type '<SetEdgeDirectionCreationType-response>"
  "34f28652b2a44e6592bf32db0fa65269")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetEdgeDirectionCreationType-response)))
  "Returns md5sum for a message object of type 'SetEdgeDirectionCreationType-response"
  "34f28652b2a44e6592bf32db0fa65269")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetEdgeDirectionCreationType-response>)))
  "Returns full string definition for message of type '<SetEdgeDirectionCreationType-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetEdgeDirectionCreationType-response)))
  "Returns full string definition for message of type 'SetEdgeDirectionCreationType-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetEdgeDirectionCreationType-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetEdgeDirectionCreationType-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetEdgeDirectionCreationType-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetEdgeDirectionCreationType)))
  'SetEdgeDirectionCreationType-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetEdgeDirectionCreationType)))
  'SetEdgeDirectionCreationType-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetEdgeDirectionCreationType)))
  "Returns string type for a service object of type '<SetEdgeDirectionCreationType>"
  "graph_creator_msgs/SetEdgeDirectionCreationType")