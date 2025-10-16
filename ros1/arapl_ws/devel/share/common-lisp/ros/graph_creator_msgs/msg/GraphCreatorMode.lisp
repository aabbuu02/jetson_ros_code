; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude GraphCreatorMode.msg.html

(cl:defclass <GraphCreatorMode> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass GraphCreatorMode (<GraphCreatorMode>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GraphCreatorMode>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GraphCreatorMode)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<GraphCreatorMode> is deprecated: use graph_creator_msgs-msg:GraphCreatorMode instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <GraphCreatorMode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:mode-val is deprecated.  Use graph_creator_msgs-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<GraphCreatorMode>)))
    "Constants for message type '<GraphCreatorMode>"
  '((:GRAPH_CREATOR_MODE_CREATE_VERTICES . 0)
    (:GRAPH_CREATOR_MODE_CREATE_EDGES . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'GraphCreatorMode)))
    "Constants for message type 'GraphCreatorMode"
  '((:GRAPH_CREATOR_MODE_CREATE_VERTICES . 0)
    (:GRAPH_CREATOR_MODE_CREATE_EDGES . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GraphCreatorMode>) ostream)
  "Serializes a message object of type '<GraphCreatorMode>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GraphCreatorMode>) istream)
  "Deserializes a message object of type '<GraphCreatorMode>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GraphCreatorMode>)))
  "Returns string type for a message object of type '<GraphCreatorMode>"
  "graph_creator_msgs/GraphCreatorMode")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GraphCreatorMode)))
  "Returns string type for a message object of type 'GraphCreatorMode"
  "graph_creator_msgs/GraphCreatorMode")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GraphCreatorMode>)))
  "Returns md5sum for a message object of type '<GraphCreatorMode>"
  "bbb0500c90ff3108ea695d6ca1558739")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GraphCreatorMode)))
  "Returns md5sum for a message object of type 'GraphCreatorMode"
  "bbb0500c90ff3108ea695d6ca1558739")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GraphCreatorMode>)))
  "Returns full string definition for message of type '<GraphCreatorMode>"
  (cl:format cl:nil "uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GraphCreatorMode)))
  "Returns full string definition for message of type 'GraphCreatorMode"
  (cl:format cl:nil "uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GraphCreatorMode>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GraphCreatorMode>))
  "Converts a ROS message object to a list"
  (cl:list 'GraphCreatorMode
    (cl:cons ':mode (mode msg))
))
