; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-srv)


;//! \htmlinclude SetSnapPose-request.msg.html

(cl:defclass <SetSnapPose-request> (roslisp-msg-protocol:ros-message)
  ((snap_pose_config
    :reader snap_pose_config
    :initarg :snap_pose_config
    :type graph_creator_msgs-msg:SnapPoseConfig
    :initform (cl:make-instance 'graph_creator_msgs-msg:SnapPoseConfig)))
)

(cl:defclass SetSnapPose-request (<SetSnapPose-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetSnapPose-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetSnapPose-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetSnapPose-request> is deprecated: use graph_creator_msgs-srv:SetSnapPose-request instead.")))

(cl:ensure-generic-function 'snap_pose_config-val :lambda-list '(m))
(cl:defmethod snap_pose_config-val ((m <SetSnapPose-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:snap_pose_config-val is deprecated.  Use graph_creator_msgs-srv:snap_pose_config instead.")
  (snap_pose_config m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetSnapPose-request>) ostream)
  "Serializes a message object of type '<SetSnapPose-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'snap_pose_config) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetSnapPose-request>) istream)
  "Deserializes a message object of type '<SetSnapPose-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'snap_pose_config) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetSnapPose-request>)))
  "Returns string type for a service object of type '<SetSnapPose-request>"
  "graph_creator_msgs/SetSnapPoseRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetSnapPose-request)))
  "Returns string type for a service object of type 'SetSnapPose-request"
  "graph_creator_msgs/SetSnapPoseRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetSnapPose-request>)))
  "Returns md5sum for a message object of type '<SetSnapPose-request>"
  "5d5ee450554cf1a819df60529bb19a46")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetSnapPose-request)))
  "Returns md5sum for a message object of type 'SetSnapPose-request"
  "5d5ee450554cf1a819df60529bb19a46")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetSnapPose-request>)))
  "Returns full string definition for message of type '<SetSnapPose-request>"
  (cl:format cl:nil "graph_creator_msgs/SnapPoseConfig snap_pose_config~%~%================================================================================~%MSG: graph_creator_msgs/SnapPoseConfig~%bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetSnapPose-request)))
  "Returns full string definition for message of type 'SetSnapPose-request"
  (cl:format cl:nil "graph_creator_msgs/SnapPoseConfig snap_pose_config~%~%================================================================================~%MSG: graph_creator_msgs/SnapPoseConfig~%bool enable_for_vertices            # Enable snap position and orientation for vertices~%bool enable_for_edges               # Enable snap position and orientation for edge elements~%~%bool enable_position_snap           # Whether to enable position snap~%bool enable_orientation_snap        # Whether to enable orientation snap~%~%float64 position_snap_grid_size     # Position snap grid size in meters~%float64 orientation_snap_angle      # Orientation snap angle in radians ~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetSnapPose-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'snap_pose_config))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetSnapPose-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetSnapPose-request
    (cl:cons ':snap_pose_config (snap_pose_config msg))
))
;//! \htmlinclude SetSnapPose-response.msg.html

(cl:defclass <SetSnapPose-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass SetSnapPose-response (<SetSnapPose-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetSnapPose-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetSnapPose-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<SetSnapPose-response> is deprecated: use graph_creator_msgs-srv:SetSnapPose-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetSnapPose-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:success-val is deprecated.  Use graph_creator_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <SetSnapPose-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:message-val is deprecated.  Use graph_creator_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetSnapPose-response>) ostream)
  "Serializes a message object of type '<SetSnapPose-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetSnapPose-response>) istream)
  "Deserializes a message object of type '<SetSnapPose-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetSnapPose-response>)))
  "Returns string type for a service object of type '<SetSnapPose-response>"
  "graph_creator_msgs/SetSnapPoseResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetSnapPose-response)))
  "Returns string type for a service object of type 'SetSnapPose-response"
  "graph_creator_msgs/SetSnapPoseResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetSnapPose-response>)))
  "Returns md5sum for a message object of type '<SetSnapPose-response>"
  "5d5ee450554cf1a819df60529bb19a46")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetSnapPose-response)))
  "Returns md5sum for a message object of type 'SetSnapPose-response"
  "5d5ee450554cf1a819df60529bb19a46")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetSnapPose-response>)))
  "Returns full string definition for message of type '<SetSnapPose-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetSnapPose-response)))
  "Returns full string definition for message of type 'SetSnapPose-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetSnapPose-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetSnapPose-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetSnapPose-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetSnapPose)))
  'SetSnapPose-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetSnapPose)))
  'SetSnapPose-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetSnapPose)))
  "Returns string type for a service object of type '<SetSnapPose>"
  "graph_creator_msgs/SetSnapPose")