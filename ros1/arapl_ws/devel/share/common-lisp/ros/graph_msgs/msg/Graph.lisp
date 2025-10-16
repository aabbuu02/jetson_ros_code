; Auto-generated. Do not edit!


(cl:in-package graph_msgs-msg)


;//! \htmlinclude Graph.msg.html

(cl:defclass <Graph> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (meta_data
    :reader meta_data
    :initarg :meta_data
    :type graph_msgs-msg:GraphMetaData
    :initform (cl:make-instance 'graph_msgs-msg:GraphMetaData))
   (vertices
    :reader vertices
    :initarg :vertices
    :type (cl:vector graph_msgs-msg:Vertex)
   :initform (cl:make-array 0 :element-type 'graph_msgs-msg:Vertex :initial-element (cl:make-instance 'graph_msgs-msg:Vertex)))
   (edges
    :reader edges
    :initarg :edges
    :type (cl:vector graph_msgs-msg:Edge)
   :initform (cl:make-array 0 :element-type 'graph_msgs-msg:Edge :initial-element (cl:make-instance 'graph_msgs-msg:Edge)))
   (properties
    :reader properties
    :initarg :properties
    :type (cl:vector graph_msgs-msg:Property)
   :initform (cl:make-array 0 :element-type 'graph_msgs-msg:Property :initial-element (cl:make-instance 'graph_msgs-msg:Property))))
)

(cl:defclass Graph (<Graph>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Graph>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Graph)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-msg:<Graph> is deprecated: use graph_msgs-msg:Graph instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Graph>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:header-val is deprecated.  Use graph_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'meta_data-val :lambda-list '(m))
(cl:defmethod meta_data-val ((m <Graph>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:meta_data-val is deprecated.  Use graph_msgs-msg:meta_data instead.")
  (meta_data m))

(cl:ensure-generic-function 'vertices-val :lambda-list '(m))
(cl:defmethod vertices-val ((m <Graph>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:vertices-val is deprecated.  Use graph_msgs-msg:vertices instead.")
  (vertices m))

(cl:ensure-generic-function 'edges-val :lambda-list '(m))
(cl:defmethod edges-val ((m <Graph>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:edges-val is deprecated.  Use graph_msgs-msg:edges instead.")
  (edges m))

(cl:ensure-generic-function 'properties-val :lambda-list '(m))
(cl:defmethod properties-val ((m <Graph>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:properties-val is deprecated.  Use graph_msgs-msg:properties instead.")
  (properties m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Graph>) ostream)
  "Serializes a message object of type '<Graph>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'meta_data) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'vertices))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'vertices))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'edges))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'edges))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'properties))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'properties))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Graph>) istream)
  "Deserializes a message object of type '<Graph>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'meta_data) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'vertices) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'vertices)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'graph_msgs-msg:Vertex))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'edges) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'edges)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'graph_msgs-msg:Edge))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Graph>)))
  "Returns string type for a message object of type '<Graph>"
  "graph_msgs/Graph")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Graph)))
  "Returns string type for a message object of type 'Graph"
  "graph_msgs/Graph")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Graph>)))
  "Returns md5sum for a message object of type '<Graph>"
  "0310af2f1693ece9ce205cea29e160ca")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Graph)))
  "Returns md5sum for a message object of type 'Graph"
  "0310af2f1693ece9ce205cea29e160ca")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Graph>)))
  "Returns full string definition for message of type '<Graph>"
  (cl:format cl:nil "std_msgs/Header header~%GraphMetaData meta_data~%Vertex[] vertices       # List of vertices~%Edge[] edges            # List of edges~%Property[] properties ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: graph_msgs/GraphMetaData~%uint8 DIRECTED=0~%uint8 UNDIRECTED=1~%~%std_msgs/Header header~%string graph_name~%uint8 graph_type~%uint32 number_of_vertices~%uint32 number_of_edges~%================================================================================~%MSG: graph_msgs/Vertex~%# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%================================================================================~%MSG: graph_msgs/Edge~%# Edge types~%uint8 STRAIGHT_LINE=0~%uint8 CUBIC_BEZIER=1~%~%# Edge direction types~%uint8 FORWARD=0~%uint8 REVERSE=1~%uint8 BIDIRECTIONAL=2~%~%# Creation types ~%uint8 CREATED=0     # The edge is created~%uint8 GENERATED=1   # The edge is generated~%~%string name~%string alias~%uint8 type~%uint8 edge_direction_type~%uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both~%uint32 source_vertex_id~%uint32 target_vertex_id~%float64 length~%float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge~%bool bidirectional~%bool independent_orientation~%geometry_msgs/Pose[] control_points~%geometry_msgs/Pose control_orientation~%geometry_msgs/PoseArray poses   # Can contain the poses for the curve~%Property[] properties~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Graph)))
  "Returns full string definition for message of type 'Graph"
  (cl:format cl:nil "std_msgs/Header header~%GraphMetaData meta_data~%Vertex[] vertices       # List of vertices~%Edge[] edges            # List of edges~%Property[] properties ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: graph_msgs/GraphMetaData~%uint8 DIRECTED=0~%uint8 UNDIRECTED=1~%~%std_msgs/Header header~%string graph_name~%uint8 graph_type~%uint32 number_of_vertices~%uint32 number_of_edges~%================================================================================~%MSG: graph_msgs/Vertex~%# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%================================================================================~%MSG: graph_msgs/Edge~%# Edge types~%uint8 STRAIGHT_LINE=0~%uint8 CUBIC_BEZIER=1~%~%# Edge direction types~%uint8 FORWARD=0~%uint8 REVERSE=1~%uint8 BIDIRECTIONAL=2~%~%# Creation types ~%uint8 CREATED=0     # The edge is created~%uint8 GENERATED=1   # The edge is generated~%~%string name~%string alias~%uint8 type~%uint8 edge_direction_type~%uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both~%uint32 source_vertex_id~%uint32 target_vertex_id~%float64 length~%float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge~%bool bidirectional~%bool independent_orientation~%geometry_msgs/Pose[] control_points~%geometry_msgs/Pose control_orientation~%geometry_msgs/PoseArray poses   # Can contain the poses for the curve~%Property[] properties~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Graph>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'meta_data))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'vertices) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'edges) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'properties) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Graph>))
  "Converts a ROS message object to a list"
  (cl:list 'Graph
    (cl:cons ':header (header msg))
    (cl:cons ':meta_data (meta_data msg))
    (cl:cons ':vertices (vertices msg))
    (cl:cons ':edges (edges msg))
    (cl:cons ':properties (properties msg))
))
