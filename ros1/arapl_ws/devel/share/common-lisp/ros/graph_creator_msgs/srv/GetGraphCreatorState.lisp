; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-srv)


;//! \htmlinclude GetGraphCreatorState-request.msg.html

(cl:defclass <GetGraphCreatorState-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetGraphCreatorState-request (<GetGraphCreatorState-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetGraphCreatorState-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetGraphCreatorState-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<GetGraphCreatorState-request> is deprecated: use graph_creator_msgs-srv:GetGraphCreatorState-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetGraphCreatorState-request>) ostream)
  "Serializes a message object of type '<GetGraphCreatorState-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetGraphCreatorState-request>) istream)
  "Deserializes a message object of type '<GetGraphCreatorState-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetGraphCreatorState-request>)))
  "Returns string type for a service object of type '<GetGraphCreatorState-request>"
  "graph_creator_msgs/GetGraphCreatorStateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGraphCreatorState-request)))
  "Returns string type for a service object of type 'GetGraphCreatorState-request"
  "graph_creator_msgs/GetGraphCreatorStateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetGraphCreatorState-request>)))
  "Returns md5sum for a message object of type '<GetGraphCreatorState-request>"
  "258429896b8cdbd7d95bd163ecc5ab51")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetGraphCreatorState-request)))
  "Returns md5sum for a message object of type 'GetGraphCreatorState-request"
  "258429896b8cdbd7d95bd163ecc5ab51")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetGraphCreatorState-request>)))
  "Returns full string definition for message of type '<GetGraphCreatorState-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetGraphCreatorState-request)))
  "Returns full string definition for message of type 'GetGraphCreatorState-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetGraphCreatorState-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetGraphCreatorState-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetGraphCreatorState-request
))
;//! \htmlinclude GetGraphCreatorState-response.msg.html

(cl:defclass <GetGraphCreatorState-response> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type graph_creator_msgs-msg:GraphCreatorState
    :initform (cl:make-instance 'graph_creator_msgs-msg:GraphCreatorState))
   (success
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

(cl:defclass GetGraphCreatorState-response (<GetGraphCreatorState-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetGraphCreatorState-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetGraphCreatorState-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<GetGraphCreatorState-response> is deprecated: use graph_creator_msgs-srv:GetGraphCreatorState-response instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <GetGraphCreatorState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:state-val is deprecated.  Use graph_creator_msgs-srv:state instead.")
  (state m))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GetGraphCreatorState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:success-val is deprecated.  Use graph_creator_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <GetGraphCreatorState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:message-val is deprecated.  Use graph_creator_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetGraphCreatorState-response>) ostream)
  "Serializes a message object of type '<GetGraphCreatorState-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetGraphCreatorState-response>) istream)
  "Deserializes a message object of type '<GetGraphCreatorState-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetGraphCreatorState-response>)))
  "Returns string type for a service object of type '<GetGraphCreatorState-response>"
  "graph_creator_msgs/GetGraphCreatorStateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGraphCreatorState-response)))
  "Returns string type for a service object of type 'GetGraphCreatorState-response"
  "graph_creator_msgs/GetGraphCreatorStateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetGraphCreatorState-response>)))
  "Returns md5sum for a message object of type '<GetGraphCreatorState-response>"
  "258429896b8cdbd7d95bd163ecc5ab51")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetGraphCreatorState-response)))
  "Returns md5sum for a message object of type 'GetGraphCreatorState-response"
  "258429896b8cdbd7d95bd163ecc5ab51")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetGraphCreatorState-response>)))
  "Returns full string definition for message of type '<GetGraphCreatorState-response>"
  (cl:format cl:nil "graph_creator_msgs/GraphCreatorState state~%~%bool success~%string message~%~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorState~%graph_creator_msgs/GraphCreatorMode graph_creator_mode~%graph_creator_msgs/EdgeCreationType edge_creation_type~%graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type~%graph_creator_msgs/SnapPoseConfig snap_pose_config~%bool all_vertices_locked~%bool all_edges_locked~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorMode~%uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: graph_creator_msgs/SnapPoseConfig~%bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetGraphCreatorState-response)))
  "Returns full string definition for message of type 'GetGraphCreatorState-response"
  (cl:format cl:nil "graph_creator_msgs/GraphCreatorState state~%~%bool success~%string message~%~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorState~%graph_creator_msgs/GraphCreatorMode graph_creator_mode~%graph_creator_msgs/EdgeCreationType edge_creation_type~%graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type~%graph_creator_msgs/SnapPoseConfig snap_pose_config~%bool all_vertices_locked~%bool all_edges_locked~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorMode~%uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: graph_creator_msgs/SnapPoseConfig~%bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetGraphCreatorState-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetGraphCreatorState-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetGraphCreatorState-response
    (cl:cons ':state (state msg))
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetGraphCreatorState)))
  'GetGraphCreatorState-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetGraphCreatorState)))
  'GetGraphCreatorState-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGraphCreatorState)))
  "Returns string type for a service object of type '<GetGraphCreatorState>"
  "graph_creator_msgs/GetGraphCreatorState")