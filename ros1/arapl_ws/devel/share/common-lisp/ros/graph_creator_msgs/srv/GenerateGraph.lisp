; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-srv)


;//! \htmlinclude GenerateGraph-request.msg.html

(cl:defclass <GenerateGraph-request> (roslisp-msg-protocol:ros-message)
  ((graph_generator_config
    :reader graph_generator_config
    :initarg :graph_generator_config
    :type graph_creator_msgs-msg:GraphGeneratorConfig
    :initform (cl:make-instance 'graph_creator_msgs-msg:GraphGeneratorConfig)))
)

(cl:defclass GenerateGraph-request (<GenerateGraph-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GenerateGraph-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GenerateGraph-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<GenerateGraph-request> is deprecated: use graph_creator_msgs-srv:GenerateGraph-request instead.")))

(cl:ensure-generic-function 'graph_generator_config-val :lambda-list '(m))
(cl:defmethod graph_generator_config-val ((m <GenerateGraph-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:graph_generator_config-val is deprecated.  Use graph_creator_msgs-srv:graph_generator_config instead.")
  (graph_generator_config m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GenerateGraph-request>) ostream)
  "Serializes a message object of type '<GenerateGraph-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'graph_generator_config) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GenerateGraph-request>) istream)
  "Deserializes a message object of type '<GenerateGraph-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'graph_generator_config) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GenerateGraph-request>)))
  "Returns string type for a service object of type '<GenerateGraph-request>"
  "graph_creator_msgs/GenerateGraphRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateGraph-request)))
  "Returns string type for a service object of type 'GenerateGraph-request"
  "graph_creator_msgs/GenerateGraphRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GenerateGraph-request>)))
  "Returns md5sum for a message object of type '<GenerateGraph-request>"
  "d85b195d5e52e94013ad042183fa42f4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GenerateGraph-request)))
  "Returns md5sum for a message object of type 'GenerateGraph-request"
  "d85b195d5e52e94013ad042183fa42f4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GenerateGraph-request>)))
  "Returns full string definition for message of type '<GenerateGraph-request>"
  (cl:format cl:nil "GraphGeneratorConfig graph_generator_config~%~%================================================================================~%MSG: graph_creator_msgs/GraphGeneratorConfig~%uint8 GRAPH_GENERATION_TYPE_GRID=0~%uint8 GRAPH_GENERATION_TYPE_DXF=1~%~%uint8 generation_type~%EdgeCreationType edge_creation_type~%EdgeDirectionCreationType edge_direction_type~%bool ignore_vertex_orientation                      # Ignore vertex orientation~%bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation~%uint32 edge_count_threshold                         # Edge count threshold~%~%# For generating graph from DXF files~%string dxf_file_path                                # File paths can be either relative to a package or absolute~%float32 scale_x~%float32 scale_y~%~%# For generating grid graphs~%geometry_msgs/Pose start_pose~%uint32 rows                                         # Rows are along Y-axis~%uint32 columns                                      # Columns are along X-axis~%float32 row_spacing                                 # Spacing between two vertices along the Y-axis~%float32 column_spacing                              # Spacing between two vertics along the X-axis~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GenerateGraph-request)))
  "Returns full string definition for message of type 'GenerateGraph-request"
  (cl:format cl:nil "GraphGeneratorConfig graph_generator_config~%~%================================================================================~%MSG: graph_creator_msgs/GraphGeneratorConfig~%uint8 GRAPH_GENERATION_TYPE_GRID=0~%uint8 GRAPH_GENERATION_TYPE_DXF=1~%~%uint8 generation_type~%EdgeCreationType edge_creation_type~%EdgeDirectionCreationType edge_direction_type~%bool ignore_vertex_orientation                      # Ignore vertex orientation~%bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation~%uint32 edge_count_threshold                         # Edge count threshold~%~%# For generating graph from DXF files~%string dxf_file_path                                # File paths can be either relative to a package or absolute~%float32 scale_x~%float32 scale_y~%~%# For generating grid graphs~%geometry_msgs/Pose start_pose~%uint32 rows                                         # Rows are along Y-axis~%uint32 columns                                      # Columns are along X-axis~%float32 row_spacing                                 # Spacing between two vertices along the Y-axis~%float32 column_spacing                              # Spacing between two vertics along the X-axis~%~%================================================================================~%MSG: graph_creator_msgs/EdgeCreationType~%uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%================================================================================~%MSG: graph_creator_msgs/EdgeDirectionCreationType~%uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GenerateGraph-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'graph_generator_config))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GenerateGraph-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GenerateGraph-request
    (cl:cons ':graph_generator_config (graph_generator_config msg))
))
;//! \htmlinclude GenerateGraph-response.msg.html

(cl:defclass <GenerateGraph-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass GenerateGraph-response (<GenerateGraph-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GenerateGraph-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GenerateGraph-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-srv:<GenerateGraph-response> is deprecated: use graph_creator_msgs-srv:GenerateGraph-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GenerateGraph-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:success-val is deprecated.  Use graph_creator_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <GenerateGraph-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-srv:message-val is deprecated.  Use graph_creator_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GenerateGraph-response>) ostream)
  "Serializes a message object of type '<GenerateGraph-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GenerateGraph-response>) istream)
  "Deserializes a message object of type '<GenerateGraph-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GenerateGraph-response>)))
  "Returns string type for a service object of type '<GenerateGraph-response>"
  "graph_creator_msgs/GenerateGraphResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateGraph-response)))
  "Returns string type for a service object of type 'GenerateGraph-response"
  "graph_creator_msgs/GenerateGraphResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GenerateGraph-response>)))
  "Returns md5sum for a message object of type '<GenerateGraph-response>"
  "d85b195d5e52e94013ad042183fa42f4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GenerateGraph-response)))
  "Returns md5sum for a message object of type 'GenerateGraph-response"
  "d85b195d5e52e94013ad042183fa42f4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GenerateGraph-response>)))
  "Returns full string definition for message of type '<GenerateGraph-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GenerateGraph-response)))
  "Returns full string definition for message of type 'GenerateGraph-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GenerateGraph-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GenerateGraph-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GenerateGraph-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GenerateGraph)))
  'GenerateGraph-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GenerateGraph)))
  'GenerateGraph-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateGraph)))
  "Returns string type for a service object of type '<GenerateGraph>"
  "graph_creator_msgs/GenerateGraph")