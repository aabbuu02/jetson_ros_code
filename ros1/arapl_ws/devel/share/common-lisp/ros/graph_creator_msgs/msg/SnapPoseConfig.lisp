; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude SnapPoseConfig.msg.html

(cl:defclass <SnapPoseConfig> (roslisp-msg-protocol:ros-message)
  ((enable_for_vertices
    :reader enable_for_vertices
    :initarg :enable_for_vertices
    :type cl:boolean
    :initform cl:nil)
   (enable_for_edges
    :reader enable_for_edges
    :initarg :enable_for_edges
    :type cl:boolean
    :initform cl:nil)
   (enable_position_snap
    :reader enable_position_snap
    :initarg :enable_position_snap
    :type cl:boolean
    :initform cl:nil)
   (enable_orientation_snap
    :reader enable_orientation_snap
    :initarg :enable_orientation_snap
    :type cl:boolean
    :initform cl:nil)
   (position_snap_grid_size
    :reader position_snap_grid_size
    :initarg :position_snap_grid_size
    :type cl:float
    :initform 0.0)
   (orientation_snap_angle
    :reader orientation_snap_angle
    :initarg :orientation_snap_angle
    :type cl:float
    :initform 0.0))
)

(cl:defclass SnapPoseConfig (<SnapPoseConfig>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SnapPoseConfig>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SnapPoseConfig)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<SnapPoseConfig> is deprecated: use graph_creator_msgs-msg:SnapPoseConfig instead.")))

(cl:ensure-generic-function 'enable_for_vertices-val :lambda-list '(m))
(cl:defmethod enable_for_vertices-val ((m <SnapPoseConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:enable_for_vertices-val is deprecated.  Use graph_creator_msgs-msg:enable_for_vertices instead.")
  (enable_for_vertices m))

(cl:ensure-generic-function 'enable_for_edges-val :lambda-list '(m))
(cl:defmethod enable_for_edges-val ((m <SnapPoseConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:enable_for_edges-val is deprecated.  Use graph_creator_msgs-msg:enable_for_edges instead.")
  (enable_for_edges m))

(cl:ensure-generic-function 'enable_position_snap-val :lambda-list '(m))
(cl:defmethod enable_position_snap-val ((m <SnapPoseConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:enable_position_snap-val is deprecated.  Use graph_creator_msgs-msg:enable_position_snap instead.")
  (enable_position_snap m))

(cl:ensure-generic-function 'enable_orientation_snap-val :lambda-list '(m))
(cl:defmethod enable_orientation_snap-val ((m <SnapPoseConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:enable_orientation_snap-val is deprecated.  Use graph_creator_msgs-msg:enable_orientation_snap instead.")
  (enable_orientation_snap m))

(cl:ensure-generic-function 'position_snap_grid_size-val :lambda-list '(m))
(cl:defmethod position_snap_grid_size-val ((m <SnapPoseConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:position_snap_grid_size-val is deprecated.  Use graph_creator_msgs-msg:position_snap_grid_size instead.")
  (position_snap_grid_size m))

(cl:ensure-generic-function 'orientation_snap_angle-val :lambda-list '(m))
(cl:defmethod orientation_snap_angle-val ((m <SnapPoseConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:orientation_snap_angle-val is deprecated.  Use graph_creator_msgs-msg:orientation_snap_angle instead.")
  (orientation_snap_angle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SnapPoseConfig>) ostream)
  "Serializes a message object of type '<SnapPoseConfig>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enable_for_vertices) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enable_for_edges) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enable_position_snap) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enable_orientation_snap) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'position_snap_grid_size))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'orientation_snap_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SnapPoseConfig>) istream)
  "Deserializes a message object of type '<SnapPoseConfig>"
    (cl:setf (cl:slot-value msg 'enable_for_vertices) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'enable_for_edges) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'enable_position_snap) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'enable_orientation_snap) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'position_snap_grid_size) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'orientation_snap_angle) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SnapPoseConfig>)))
  "Returns string type for a message object of type '<SnapPoseConfig>"
  "graph_creator_msgs/SnapPoseConfig")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SnapPoseConfig)))
  "Returns string type for a message object of type 'SnapPoseConfig"
  "graph_creator_msgs/SnapPoseConfig")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SnapPoseConfig>)))
  "Returns md5sum for a message object of type '<SnapPoseConfig>"
  "523ee3105beaf49ae3b84f7e22ff96ed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SnapPoseConfig)))
  "Returns md5sum for a message object of type 'SnapPoseConfig"
  "523ee3105beaf49ae3b84f7e22ff96ed")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SnapPoseConfig>)))
  "Returns full string definition for message of type '<SnapPoseConfig>"
  (cl:format cl:nil "bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SnapPoseConfig)))
  "Returns full string definition for message of type 'SnapPoseConfig"
  (cl:format cl:nil "bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SnapPoseConfig>))
  (cl:+ 0
     1
     1
     1
     1
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SnapPoseConfig>))
  "Converts a ROS message object to a list"
  (cl:list 'SnapPoseConfig
    (cl:cons ':enable_for_vertices (enable_for_vertices msg))
    (cl:cons ':enable_for_edges (enable_for_edges msg))
    (cl:cons ':enable_position_snap (enable_position_snap msg))
    (cl:cons ':enable_orientation_snap (enable_orientation_snap msg))
    (cl:cons ':position_snap_grid_size (position_snap_grid_size msg))
    (cl:cons ':orientation_snap_angle (orientation_snap_angle msg))
))
