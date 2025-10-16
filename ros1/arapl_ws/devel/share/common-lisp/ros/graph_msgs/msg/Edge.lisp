; Auto-generated. Do not edit!


(cl:in-package graph_msgs-msg)


;//! \htmlinclude Edge.msg.html

(cl:defclass <Edge> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (alias
    :reader alias
    :initarg :alias
    :type cl:string
    :initform "")
   (type
    :reader type
    :initarg :type
    :type cl:fixnum
    :initform 0)
   (edge_direction_type
    :reader edge_direction_type
    :initarg :edge_direction_type
    :type cl:fixnum
    :initform 0)
   (creation_type
    :reader creation_type
    :initarg :creation_type
    :type cl:fixnum
    :initform 0)
   (source_vertex_id
    :reader source_vertex_id
    :initarg :source_vertex_id
    :type cl:integer
    :initform 0)
   (target_vertex_id
    :reader target_vertex_id
    :initarg :target_vertex_id
    :type cl:integer
    :initform 0)
   (length
    :reader length
    :initarg :length
    :type cl:float
    :initform 0.0)
   (cost_factor
    :reader cost_factor
    :initarg :cost_factor
    :type cl:float
    :initform 0.0)
   (bidirectional
    :reader bidirectional
    :initarg :bidirectional
    :type cl:boolean
    :initform cl:nil)
   (independent_orientation
    :reader independent_orientation
    :initarg :independent_orientation
    :type cl:boolean
    :initform cl:nil)
   (control_points
    :reader control_points
    :initarg :control_points
    :type (cl:vector geometry_msgs-msg:Pose)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Pose :initial-element (cl:make-instance 'geometry_msgs-msg:Pose)))
   (control_orientation
    :reader control_orientation
    :initarg :control_orientation
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (poses
    :reader poses
    :initarg :poses
    :type geometry_msgs-msg:PoseArray
    :initform (cl:make-instance 'geometry_msgs-msg:PoseArray))
   (properties
    :reader properties
    :initarg :properties
    :type (cl:vector graph_msgs-msg:Property)
   :initform (cl:make-array 0 :element-type 'graph_msgs-msg:Property :initial-element (cl:make-instance 'graph_msgs-msg:Property))))
)

(cl:defclass Edge (<Edge>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Edge>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Edge)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-msg:<Edge> is deprecated: use graph_msgs-msg:Edge instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:name-val is deprecated.  Use graph_msgs-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'alias-val :lambda-list '(m))
(cl:defmethod alias-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:alias-val is deprecated.  Use graph_msgs-msg:alias instead.")
  (alias m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:type-val is deprecated.  Use graph_msgs-msg:type instead.")
  (type m))

(cl:ensure-generic-function 'edge_direction_type-val :lambda-list '(m))
(cl:defmethod edge_direction_type-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:edge_direction_type-val is deprecated.  Use graph_msgs-msg:edge_direction_type instead.")
  (edge_direction_type m))

(cl:ensure-generic-function 'creation_type-val :lambda-list '(m))
(cl:defmethod creation_type-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:creation_type-val is deprecated.  Use graph_msgs-msg:creation_type instead.")
  (creation_type m))

(cl:ensure-generic-function 'source_vertex_id-val :lambda-list '(m))
(cl:defmethod source_vertex_id-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:source_vertex_id-val is deprecated.  Use graph_msgs-msg:source_vertex_id instead.")
  (source_vertex_id m))

(cl:ensure-generic-function 'target_vertex_id-val :lambda-list '(m))
(cl:defmethod target_vertex_id-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:target_vertex_id-val is deprecated.  Use graph_msgs-msg:target_vertex_id instead.")
  (target_vertex_id m))

(cl:ensure-generic-function 'length-val :lambda-list '(m))
(cl:defmethod length-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:length-val is deprecated.  Use graph_msgs-msg:length instead.")
  (length m))

(cl:ensure-generic-function 'cost_factor-val :lambda-list '(m))
(cl:defmethod cost_factor-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:cost_factor-val is deprecated.  Use graph_msgs-msg:cost_factor instead.")
  (cost_factor m))

(cl:ensure-generic-function 'bidirectional-val :lambda-list '(m))
(cl:defmethod bidirectional-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:bidirectional-val is deprecated.  Use graph_msgs-msg:bidirectional instead.")
  (bidirectional m))

(cl:ensure-generic-function 'independent_orientation-val :lambda-list '(m))
(cl:defmethod independent_orientation-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:independent_orientation-val is deprecated.  Use graph_msgs-msg:independent_orientation instead.")
  (independent_orientation m))

(cl:ensure-generic-function 'control_points-val :lambda-list '(m))
(cl:defmethod control_points-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:control_points-val is deprecated.  Use graph_msgs-msg:control_points instead.")
  (control_points m))

(cl:ensure-generic-function 'control_orientation-val :lambda-list '(m))
(cl:defmethod control_orientation-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:control_orientation-val is deprecated.  Use graph_msgs-msg:control_orientation instead.")
  (control_orientation m))

(cl:ensure-generic-function 'poses-val :lambda-list '(m))
(cl:defmethod poses-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:poses-val is deprecated.  Use graph_msgs-msg:poses instead.")
  (poses m))

(cl:ensure-generic-function 'properties-val :lambda-list '(m))
(cl:defmethod properties-val ((m <Edge>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:properties-val is deprecated.  Use graph_msgs-msg:properties instead.")
  (properties m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Edge>)))
    "Constants for message type '<Edge>"
  '((:STRAIGHT_LINE . 0)
    (:CUBIC_BEZIER . 1)
    (:FORWARD . 0)
    (:REVERSE . 1)
    (:BIDIRECTIONAL . 2)
    (:CREATED . 0)
    (:GENERATED . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Edge)))
    "Constants for message type 'Edge"
  '((:STRAIGHT_LINE . 0)
    (:CUBIC_BEZIER . 1)
    (:FORWARD . 0)
    (:REVERSE . 1)
    (:BIDIRECTIONAL . 2)
    (:CREATED . 0)
    (:GENERATED . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Edge>) ostream)
  "Serializes a message object of type '<Edge>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'alias))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'alias))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'edge_direction_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'creation_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'source_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'source_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'source_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'source_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'target_vertex_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'target_vertex_id)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'length))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cost_factor))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'bidirectional) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'independent_orientation) 1 0)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'control_points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'control_points))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'control_orientation) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'poses) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'properties))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'properties))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Edge>) istream)
  "Deserializes a message object of type '<Edge>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'alias) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'alias) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'edge_direction_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'creation_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'source_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'source_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'source_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'source_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'target_vertex_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'target_vertex_id)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'length) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cost_factor) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:slot-value msg 'bidirectional) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'independent_orientation) (cl:not (cl:zerop (cl:read-byte istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'control_points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'control_points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Pose))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'control_orientation) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'poses) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'properties) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'properties)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'graph_msgs-msg:Property))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Edge>)))
  "Returns string type for a message object of type '<Edge>"
  "graph_msgs/Edge")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Edge)))
  "Returns string type for a message object of type 'Edge"
  "graph_msgs/Edge")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Edge>)))
  "Returns md5sum for a message object of type '<Edge>"
  "7db65fe0ed203a54cf7e26bd678adbcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Edge)))
  "Returns md5sum for a message object of type 'Edge"
  "7db65fe0ed203a54cf7e26bd678adbcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Edge>)))
  "Returns full string definition for message of type '<Edge>"
  (cl:format cl:nil "# Edge types~%uint8 STRAIGHT_LINE=0~%uint8 CUBIC_BEZIER=1~%~%# Edge direction types~%uint8 FORWARD=0~%uint8 REVERSE=1~%uint8 BIDIRECTIONAL=2~%~%# Creation types ~%uint8 CREATED=0     # The edge is created~%uint8 GENERATED=1   # The edge is generated~%~%string name~%string alias~%uint8 type~%uint8 edge_direction_type~%uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both~%uint32 source_vertex_id~%uint32 target_vertex_id~%float64 length~%float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge~%bool bidirectional~%bool independent_orientation~%geometry_msgs/Pose[] control_points~%geometry_msgs/Pose control_orientation~%geometry_msgs/PoseArray poses   # Can contain the poses for the curve~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Edge)))
  "Returns full string definition for message of type 'Edge"
  (cl:format cl:nil "# Edge types~%uint8 STRAIGHT_LINE=0~%uint8 CUBIC_BEZIER=1~%~%# Edge direction types~%uint8 FORWARD=0~%uint8 REVERSE=1~%uint8 BIDIRECTIONAL=2~%~%# Creation types ~%uint8 CREATED=0     # The edge is created~%uint8 GENERATED=1   # The edge is generated~%~%string name~%string alias~%uint8 type~%uint8 edge_direction_type~%uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both~%uint32 source_vertex_id~%uint32 target_vertex_id~%float64 length~%float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge~%bool bidirectional~%bool independent_orientation~%geometry_msgs/Pose[] control_points~%geometry_msgs/Pose control_orientation~%geometry_msgs/PoseArray poses   # Can contain the poses for the curve~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Edge>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     4 (cl:length (cl:slot-value msg 'alias))
     1
     1
     1
     4
     4
     8
     8
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'control_points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'control_orientation))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'poses))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'properties) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Edge>))
  "Converts a ROS message object to a list"
  (cl:list 'Edge
    (cl:cons ':name (name msg))
    (cl:cons ':alias (alias msg))
    (cl:cons ':type (type msg))
    (cl:cons ':edge_direction_type (edge_direction_type msg))
    (cl:cons ':creation_type (creation_type msg))
    (cl:cons ':source_vertex_id (source_vertex_id msg))
    (cl:cons ':target_vertex_id (target_vertex_id msg))
    (cl:cons ':length (length msg))
    (cl:cons ':cost_factor (cost_factor msg))
    (cl:cons ':bidirectional (bidirectional msg))
    (cl:cons ':independent_orientation (independent_orientation msg))
    (cl:cons ':control_points (control_points msg))
    (cl:cons ':control_orientation (control_orientation msg))
    (cl:cons ':poses (poses msg))
    (cl:cons ':properties (properties msg))
))
