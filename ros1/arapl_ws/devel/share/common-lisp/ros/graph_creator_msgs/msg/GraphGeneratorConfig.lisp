; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude GraphGeneratorConfig.msg.html

(cl:defclass <GraphGeneratorConfig> (roslisp-msg-protocol:ros-message)
  ((generation_type
    :reader generation_type
    :initarg :generation_type
    :type cl:fixnum
    :initform 0)
   (edge_creation_type
    :reader edge_creation_type
    :initarg :edge_creation_type
    :type graph_creator_msgs-msg:EdgeCreationType
    :initform (cl:make-instance 'graph_creator_msgs-msg:EdgeCreationType))
   (edge_direction_type
    :reader edge_direction_type
    :initarg :edge_direction_type
    :type graph_creator_msgs-msg:EdgeDirectionCreationType
    :initform (cl:make-instance 'graph_creator_msgs-msg:EdgeDirectionCreationType))
   (ignore_vertex_orientation
    :reader ignore_vertex_orientation
    :initarg :ignore_vertex_orientation
    :type cl:boolean
    :initform cl:nil)
   (use_edge_count_threshold
    :reader use_edge_count_threshold
    :initarg :use_edge_count_threshold
    :type cl:boolean
    :initform cl:nil)
   (edge_count_threshold
    :reader edge_count_threshold
    :initarg :edge_count_threshold
    :type cl:integer
    :initform 0)
   (dxf_file_path
    :reader dxf_file_path
    :initarg :dxf_file_path
    :type cl:string
    :initform "")
   (scale_x
    :reader scale_x
    :initarg :scale_x
    :type cl:float
    :initform 0.0)
   (scale_y
    :reader scale_y
    :initarg :scale_y
    :type cl:float
    :initform 0.0)
   (start_pose
    :reader start_pose
    :initarg :start_pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (rows
    :reader rows
    :initarg :rows
    :type cl:integer
    :initform 0)
   (columns
    :reader columns
    :initarg :columns
    :type cl:integer
    :initform 0)
   (row_spacing
    :reader row_spacing
    :initarg :row_spacing
    :type cl:float
    :initform 0.0)
   (column_spacing
    :reader column_spacing
    :initarg :column_spacing
    :type cl:float
    :initform 0.0))
)

(cl:defclass GraphGeneratorConfig (<GraphGeneratorConfig>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GraphGeneratorConfig>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GraphGeneratorConfig)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<GraphGeneratorConfig> is deprecated: use graph_creator_msgs-msg:GraphGeneratorConfig instead.")))

(cl:ensure-generic-function 'generation_type-val :lambda-list '(m))
(cl:defmethod generation_type-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:generation_type-val is deprecated.  Use graph_creator_msgs-msg:generation_type instead.")
  (generation_type m))

(cl:ensure-generic-function 'edge_creation_type-val :lambda-list '(m))
(cl:defmethod edge_creation_type-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:edge_creation_type-val is deprecated.  Use graph_creator_msgs-msg:edge_creation_type instead.")
  (edge_creation_type m))

(cl:ensure-generic-function 'edge_direction_type-val :lambda-list '(m))
(cl:defmethod edge_direction_type-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:edge_direction_type-val is deprecated.  Use graph_creator_msgs-msg:edge_direction_type instead.")
  (edge_direction_type m))

(cl:ensure-generic-function 'ignore_vertex_orientation-val :lambda-list '(m))
(cl:defmethod ignore_vertex_orientation-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:ignore_vertex_orientation-val is deprecated.  Use graph_creator_msgs-msg:ignore_vertex_orientation instead.")
  (ignore_vertex_orientation m))

(cl:ensure-generic-function 'use_edge_count_threshold-val :lambda-list '(m))
(cl:defmethod use_edge_count_threshold-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:use_edge_count_threshold-val is deprecated.  Use graph_creator_msgs-msg:use_edge_count_threshold instead.")
  (use_edge_count_threshold m))

(cl:ensure-generic-function 'edge_count_threshold-val :lambda-list '(m))
(cl:defmethod edge_count_threshold-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:edge_count_threshold-val is deprecated.  Use graph_creator_msgs-msg:edge_count_threshold instead.")
  (edge_count_threshold m))

(cl:ensure-generic-function 'dxf_file_path-val :lambda-list '(m))
(cl:defmethod dxf_file_path-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:dxf_file_path-val is deprecated.  Use graph_creator_msgs-msg:dxf_file_path instead.")
  (dxf_file_path m))

(cl:ensure-generic-function 'scale_x-val :lambda-list '(m))
(cl:defmethod scale_x-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:scale_x-val is deprecated.  Use graph_creator_msgs-msg:scale_x instead.")
  (scale_x m))

(cl:ensure-generic-function 'scale_y-val :lambda-list '(m))
(cl:defmethod scale_y-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:scale_y-val is deprecated.  Use graph_creator_msgs-msg:scale_y instead.")
  (scale_y m))

(cl:ensure-generic-function 'start_pose-val :lambda-list '(m))
(cl:defmethod start_pose-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:start_pose-val is deprecated.  Use graph_creator_msgs-msg:start_pose instead.")
  (start_pose m))

(cl:ensure-generic-function 'rows-val :lambda-list '(m))
(cl:defmethod rows-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:rows-val is deprecated.  Use graph_creator_msgs-msg:rows instead.")
  (rows m))

(cl:ensure-generic-function 'columns-val :lambda-list '(m))
(cl:defmethod columns-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:columns-val is deprecated.  Use graph_creator_msgs-msg:columns instead.")
  (columns m))

(cl:ensure-generic-function 'row_spacing-val :lambda-list '(m))
(cl:defmethod row_spacing-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:row_spacing-val is deprecated.  Use graph_creator_msgs-msg:row_spacing instead.")
  (row_spacing m))

(cl:ensure-generic-function 'column_spacing-val :lambda-list '(m))
(cl:defmethod column_spacing-val ((m <GraphGeneratorConfig>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:column_spacing-val is deprecated.  Use graph_creator_msgs-msg:column_spacing instead.")
  (column_spacing m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<GraphGeneratorConfig>)))
    "Constants for message type '<GraphGeneratorConfig>"
  '((:GRAPH_GENERATION_TYPE_GRID . 0)
    (:GRAPH_GENERATION_TYPE_DXF . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'GraphGeneratorConfig)))
    "Constants for message type 'GraphGeneratorConfig"
  '((:GRAPH_GENERATION_TYPE_GRID . 0)
    (:GRAPH_GENERATION_TYPE_DXF . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GraphGeneratorConfig>) ostream)
  "Serializes a message object of type '<GraphGeneratorConfig>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'generation_type)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'edge_creation_type) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'edge_direction_type) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ignore_vertex_orientation) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'use_edge_count_threshold) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'edge_count_threshold)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'edge_count_threshold)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'edge_count_threshold)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'edge_count_threshold)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'dxf_file_path))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'dxf_file_path))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'scale_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'scale_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'start_pose) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'rows)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'rows)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'rows)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'rows)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'columns)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'columns)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'columns)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'columns)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'row_spacing))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'column_spacing))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GraphGeneratorConfig>) istream)
  "Deserializes a message object of type '<GraphGeneratorConfig>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'generation_type)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'edge_creation_type) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'edge_direction_type) istream)
    (cl:setf (cl:slot-value msg 'ignore_vertex_orientation) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'use_edge_count_threshold) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'edge_count_threshold)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'edge_count_threshold)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'edge_count_threshold)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'edge_count_threshold)) (cl:read-byte istream))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dxf_file_path) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'dxf_file_path) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'scale_x) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'scale_y) (roslisp-utils:decode-single-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'start_pose) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'rows)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'rows)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'rows)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'rows)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'columns)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'columns)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'columns)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'columns)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'row_spacing) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'column_spacing) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GraphGeneratorConfig>)))
  "Returns string type for a message object of type '<GraphGeneratorConfig>"
  "graph_creator_msgs/GraphGeneratorConfig")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GraphGeneratorConfig)))
  "Returns string type for a message object of type 'GraphGeneratorConfig"
  "graph_creator_msgs/GraphGeneratorConfig")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GraphGeneratorConfig>)))
  "Returns md5sum for a message object of type '<GraphGeneratorConfig>"
  "d549626c784b6f02d6bb8ede7bb25247")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GraphGeneratorConfig)))
  "Returns md5sum for a message object of type 'GraphGeneratorConfig"
  "d549626c784b6f02d6bb8ede7bb25247")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GraphGeneratorConfig>)))
  "Returns full string definition for message of type '<GraphGeneratorConfig>"
  (cl:format cl:nil "uint8 GRAPH_GENERATION_TYPE_GRID=0~%uint8 GRAPH_GENERATION_TYPE_DXF=1~%~%uint8 generation_type~%EdgeCreationType edge_creation_type~%EdgeDirectionCreationType edge_direction_type~%bool ignore_vertex_orientation                      # Ignore vertex orientation~%bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation~%uint32 edge_count_threshold                         # Edge count threshold~%~%# For generating graph from DXF files~%string dxf_file_path                                # File paths can be either relative to a package or absolute~%float32 scale_x~%float32 scale_y~%~%# For generating grid graphs~%geometry_msgs/Pose start_pose~%uint32 rows                                         # Rows are along Y-axis~%uint32 columns                                      # Columns are along X-axis~%float32 row_spacing                                 # Spacing between two vertices along the Y-axis~%float32 column_spacing                              # Spacing between two vertics along the X-axis~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GraphGeneratorConfig)))
  "Returns full string definition for message of type 'GraphGeneratorConfig"
  (cl:format cl:nil "uint8 GRAPH_GENERATION_TYPE_GRID=0~%uint8 GRAPH_GENERATION_TYPE_DXF=1~%~%uint8 generation_type~%EdgeCreationType edge_creation_type~%EdgeDirectionCreationType edge_direction_type~%bool ignore_vertex_orientation                      # Ignore vertex orientation~%bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation~%uint32 edge_count_threshold                         # Edge count threshold~%~%# For generating graph from DXF files~%string dxf_file_path                                # File paths can be either relative to a package or absolute~%float32 scale_x~%float32 scale_y~%~%# For generating grid graphs~%geometry_msgs/Pose start_pose~%uint32 rows                                         # Rows are along Y-axis~%uint32 columns                                      # Columns are along X-axis~%float32 row_spacing                                 # Spacing between two vertices along the Y-axis~%float32 column_spacing                              # Spacing between two vertics along the X-axis~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GraphGeneratorConfig>))
  (cl:+ 0
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'edge_creation_type))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'edge_direction_type))
     1
     1
     4
     4 (cl:length (cl:slot-value msg 'dxf_file_path))
     4
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'start_pose))
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GraphGeneratorConfig>))
  "Converts a ROS message object to a list"
  (cl:list 'GraphGeneratorConfig
    (cl:cons ':generation_type (generation_type msg))
    (cl:cons ':edge_creation_type (edge_creation_type msg))
    (cl:cons ':edge_direction_type (edge_direction_type msg))
    (cl:cons ':ignore_vertex_orientation (ignore_vertex_orientation msg))
    (cl:cons ':use_edge_count_threshold (use_edge_count_threshold msg))
    (cl:cons ':edge_count_threshold (edge_count_threshold msg))
    (cl:cons ':dxf_file_path (dxf_file_path msg))
    (cl:cons ':scale_x (scale_x msg))
    (cl:cons ':scale_y (scale_y msg))
    (cl:cons ':start_pose (start_pose msg))
    (cl:cons ':rows (rows msg))
    (cl:cons ':columns (columns msg))
    (cl:cons ':row_spacing (row_spacing msg))
    (cl:cons ':column_spacing (column_spacing msg))
))
