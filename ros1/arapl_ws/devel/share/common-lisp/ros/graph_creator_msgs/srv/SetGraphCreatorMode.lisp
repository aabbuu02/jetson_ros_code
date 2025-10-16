; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-srv)


;//! \htmlinclude SetGraphCreatorMode-request.msg.html

(cl:defclass <SetGraphCreatorMode-request> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type graph_creator_msgs-msg:GraphCreatorMode
    :initform (cl:make-instance 'graph_creator_msgs-msg:GraphCreatorMode)))
)

(cl:defclass SetGraphCreatorMode-request (<SetGraphCreatorMode-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetGraphCreatorMode-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetGraphCreatorMode-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetGraphCreatorMode-request> is deprecated: use graph_creator_msgs-srv:SetGraphCreatorMode-request instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <SetGraphCreatorMode-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:mode-val is deprecated.  Use graph_creator_msgs-srv:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetGraphCreatorMode-request>) ostream)
  "Serializes a message object of type '<SetGraphCreatorMode-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'mode) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetGraphCreatorMode-request>) istream)
  "Deserializes a message object of type '<SetGraphCreatorMode-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'mode) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetGraphCreatorMode-request>)))
  "Returns string type for a service object of type '<SetGraphCreatorMode-request>"
  "graph_creator_msgs/SetGraphCreatorModeRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetGraphCreatorMode-request)))
  "Returns string type for a service object of type 'SetGraphCreatorMode-request"
  "graph_creator_msgs/SetGraphCreatorModeRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetGraphCreatorMode-request>)))
  "Returns md5sum for a message object of type '<SetGraphCreatorMode-request>"
  "63d68ca9906d91378a26fb79fbdcfad4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetGraphCreatorMode-request)))
  "Returns md5sum for a message object of type 'SetGraphCreatorMode-request"
  "63d68ca9906d91378a26fb79fbdcfad4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetGraphCreatorMode-request>)))
  "Returns full string definition for message of type '<SetGraphCreatorMode-request>"
  (cl:format cl:nil "graph_creator_msgs/GraphCreatorMode mode~%~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorMode~%uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetGraphCreatorMode-request)))
  "Returns full string definition for message of type 'SetGraphCreatorMode-request"
  (cl:format cl:nil "graph_creator_msgs/GraphCreatorMode mode~%~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorMode~%uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetGraphCreatorMode-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'mode))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetGraphCreatorMode-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetGraphCreatorMode-request
    (cl:cons ':mode (mode msg))
))
;//! \htmlinclude SetGraphCreatorMode-response.msg.html

(cl:defclass <SetGraphCreatorMode-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass SetGraphCreatorMode-response (<SetGraphCreatorMode-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetGraphCreatorMode-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetGraphCreatorMode-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetGraphCreatorMode-response> is deprecated: use graph_creator_msgs-srv:SetGraphCreatorMode-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetGraphCreatorMode-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:success-val is deprecated.  Use graph_creator_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <SetGraphCreatorMode-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:message-val is deprecated.  Use graph_creator_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetGraphCreatorMode-response>) ostream)
  "Serializes a message object of type '<SetGraphCreatorMode-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetGraphCreatorMode-response>) istream)
  "Deserializes a message object of type '<SetGraphCreatorMode-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetGraphCreatorMode-response>)))
  "Returns string type for a service object of type '<SetGraphCreatorMode-response>"
  "graph_creator_msgs/SetGraphCreatorModeResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetGraphCreatorMode-response)))
  "Returns string type for a service object of type 'SetGraphCreatorMode-response"
  "graph_creator_msgs/SetGraphCreatorModeResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetGraphCreatorMode-response>)))
  "Returns md5sum for a message object of type '<SetGraphCreatorMode-response>"
  "63d68ca9906d91378a26fb79fbdcfad4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetGraphCreatorMode-response)))
  "Returns md5sum for a message object of type 'SetGraphCreatorMode-response"
  "63d68ca9906d91378a26fb79fbdcfad4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetGraphCreatorMode-response>)))
  "Returns full string definition for message of type '<SetGraphCreatorMode-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetGraphCreatorMode-response)))
  "Returns full string definition for message of type 'SetGraphCreatorMode-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetGraphCreatorMode-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetGraphCreatorMode-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetGraphCreatorMode-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetGraphCreatorMode)))
  'SetGraphCreatorMode-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetGraphCreatorMode)))
  'SetGraphCreatorMode-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetGraphCreatorMode)))
  "Returns string type for a service object of type '<SetGraphCreatorMode>"
  "graph_creator_msgs/SetGraphCreatorMode")