; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude GraphCreatorState.msg.html

(cl:defclass <GraphCreatorState> (roslisp-msg-protocol:ros-message)
  ((graph_creator_mode
    :reader graph_creator_mode
    :initarg :graph_creator_mode
    :type graph_creator_msgs-msg:GraphCreatorMode
    :initform (cl:make-instance 'graph_creator_msgs-msg:GraphCreatorMode))
   (edge_creation_type
    :reader edge_creation_type
    :initarg :edge_creation_type
    :type graph_creator_msgs-msg:EdgeCreationType
    :initform (cl:make-instance 'graph_creator_msgs-msg:EdgeCreationType))
   (edge_direction_creation_type
    :reader edge_direction_creation_type
    :initarg :edge_direction_creation_type
    :type graph_creator_msgs-msg:EdgeDirectionCreationType
    :initform (cl:make-instance 'graph_creator_msgs-msg:EdgeDirectionCreationType))
   (snap_pose_config
    :reader snap_pose_config
    :initarg :snap_pose_config
    :type graph_creator_msgs-msg:SnapPoseConfig
    :initform (cl:make-instance 'graph_creator_msgs-msg:SnapPoseConfig))
   (all_vertices_locked
    :reader all_vertices_locked
    :initarg :all_vertices_locked
    :type cl:boolean
    :initform cl:nil)
   (all_edges_locked
    :reader all_edges_locked
    :initarg :all_edges_locked
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass GraphCreatorState (<GraphCreatorState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GraphCreatorState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GraphCreatorState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<GraphCreatorState> is deprecated: use graph_creator_msgs-msg:GraphCreatorState instead.")))

(cl:ensure-generic-function 'graph_creator_mode-val :lambda-list '(m))
(cl:defmethod graph_creator_mode-val ((m <GraphCreatorState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:graph_creator_mode-val is deprecated.  Use graph_creator_msgs-msg:graph_creator_mode instead.")
  (graph_creator_mode m))

(cl:ensure-generic-function 'edge_creation_type-val :lambda-list '(m))
(cl:defmethod edge_creation_type-val ((m <GraphCreatorState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:edge_creation_type-val is deprecated.  Use graph_creator_msgs-msg:edge_creation_type instead.")
  (edge_creation_type m))

(cl:ensure-generic-function 'edge_direction_creation_type-val :lambda-list '(m))
(cl:defmethod edge_direction_creation_type-val ((m <GraphCreatorState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:edge_direction_creation_type-val is deprecated.  Use graph_creator_msgs-msg:edge_direction_creation_type instead.")
  (edge_direction_creation_type m))

(cl:ensure-generic-function 'snap_pose_config-val :lambda-list '(m))
(cl:defmethod snap_pose_config-val ((m <GraphCreatorState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:snap_pose_config-val is deprecated.  Use graph_creator_msgs-msg:snap_pose_config instead.")
  (snap_pose_config m))

(cl:ensure-generic-function 'all_vertices_locked-val :lambda-list '(m))
(cl:defmethod all_vertices_locked-val ((m <GraphCreatorState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:all_vertices_locked-val is deprecated.  Use graph_creator_msgs-msg:all_vertices_locked instead.")
  (all_vertices_locked m))

(cl:ensure-generic-function 'all_edges_locked-val :lambda-list '(m))
(cl:defmethod all_edges_locked-val ((m <GraphCreatorState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:all_edges_locked-val is deprecated.  Use graph_creator_msgs-msg:all_edges_locked instead.")
  (all_edges_locked m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GraphCreatorState>) ostream)
  "Serializes a message object of type '<GraphCreatorState>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'graph_creator_mode) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'edge_creation_type) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'edge_direction_creation_type) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'snap_pose_config) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'all_vertices_locked) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'all_edges_locked) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GraphCreatorState>) istream)
  "Deserializes a message object of type '<GraphCreatorState>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'graph_creator_mode) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'edge_creation_type) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'edge_direction_creation_type) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'snap_pose_config) istream)
    (cl:setf (cl:slot-value msg 'all_vertices_locked) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'all_edges_locked) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GraphCreatorState>)))
  "Returns string type for a message object of type '<GraphCreatorState>"
  "graph_creator_msgs/GraphCreatorState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GraphCreatorState)))
  "Returns string type for a message object of type 'GraphCreatorState"
  "graph_creator_msgs/GraphCreatorState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GraphCreatorState>)))
  "Returns md5sum for a message object of type '<GraphCreatorState>"
  "883f7fb23a6fd8276cdc11e15bd98652")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GraphCreatorState)))
  "Returns md5sum for a message object of type 'GraphCreatorState"
  "883f7fb23a6fd8276cdc11e15bd98652")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GraphCreatorState>)))
  "Returns full string definition for message of type '<GraphCreatorState>"
  (cl:format cl:nil "graph_creator_msgs/GraphCreatorMode graph_creator_mode~%graph_creator_msgs/EdgeCreationType edge_creation_type~%graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type~%graph_creator_msgs/SnapPoseConfig snap_pose_config~%bool all_vertices_locked~%bool all_edges_locked~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorMode~%uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: graph_creator_msgs/SnapPoseConfig~%bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GraphCreatorState)))
  "Returns full string definition for message of type 'GraphCreatorState"
  (cl:format cl:nil "graph_creator_msgs/GraphCreatorMode graph_creator_mode~%graph_creator_msgs/EdgeCreationType edge_creation_type~%graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type~%graph_creator_msgs/SnapPoseConfig snap_pose_config~%bool all_vertices_locked~%bool all_edges_locked~%================================================================================~%MSG: graph_creator_msgs/GraphCreatorMode~%uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0~%uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1~%~%uint8 mode~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: graph_creator_msgs/SnapPoseConfig~%bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GraphCreatorState>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'graph_creator_mode))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'edge_creation_type))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'edge_direction_creation_type))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'snap_pose_config))
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GraphCreatorState>))
  "Converts a ROS message object to a list"
  (cl:list 'GraphCreatorState
    (cl:cons ':graph_creator_mode (graph_creator_mode msg))
    (cl:cons ':edge_creation_type (edge_creation_type msg))
    (cl:cons ':edge_direction_creation_type (edge_direction_creation_type msg))
    (cl:cons ':snap_pose_config (snap_pose_config msg))
    (cl:cons ':all_vertices_locked (all_vertices_locked msg))
    (cl:cons ':all_edges_locked (all_edges_locked msg))
))
