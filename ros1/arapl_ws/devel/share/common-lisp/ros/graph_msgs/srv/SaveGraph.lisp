; Auto-generated. Do not edit!


(cl:in-package graph_msgs-srv)


;//! \htmlinclude SaveGraph-request.msg.html

(cl:defclass <SaveGraph-request> (roslisp-msg-protocol:ros-message)
  ((graph_file_name
    :reader graph_file_name
    :initarg :graph_file_name
    :type cl:string
    :initform "")
   (save_graph_url
    :reader save_graph_url
    :initarg :save_graph_url
    :type cl:string
    :initform ""))
)

(cl:defclass SaveGraph-request (<SaveGraph-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SaveGraph-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SaveGraph-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-srv:<SaveGraph-request> is deprecated: use graph_msgs-srv:SaveGraph-request instead.")))

(cl:ensure-generic-function 'graph_file_name-val :lambda-list '(m))
(cl:defmethod graph_file_name-val ((m <SaveGraph-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:graph_file_name-val is deprecated.  Use graph_msgs-srv:graph_file_name instead.")
  (graph_file_name m))

(cl:ensure-generic-function 'save_graph_url-val :lambda-list '(m))
(cl:defmethod save_graph_url-val ((m <SaveGraph-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:save_graph_url-val is deprecated.  Use graph_msgs-srv:save_graph_url instead.")
  (save_graph_url m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SaveGraph-request>) ostream)
  "Serializes a message object of type '<SaveGraph-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'graph_file_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'graph_file_name))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'save_graph_url))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'save_graph_url))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SaveGraph-request>) istream)
  "Deserializes a message object of type '<SaveGraph-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'graph_file_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'graph_file_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'save_graph_url) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'save_graph_url) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SaveGraph-request>)))
  "Returns string type for a service object of type '<SaveGraph-request>"
  "graph_msgs/SaveGraphRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SaveGraph-request)))
  "Returns string type for a service object of type 'SaveGraph-request"
  "graph_msgs/SaveGraphRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SaveGraph-request>)))
  "Returns md5sum for a message object of type '<SaveGraph-request>"
  "70cd2cf58e0678fd28ff2029ea82cfd1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SaveGraph-request)))
  "Returns md5sum for a message object of type 'SaveGraph-request"
  "70cd2cf58e0678fd28ff2029ea82cfd1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SaveGraph-request>)))
  "Returns full string definition for message of type '<SaveGraph-request>"
  (cl:format cl:nil "# Either use absolute path to save the graph file like /path/to/save/ or~%# use a relative path to a package. For example, package_name/graphs/.~%# In case of graph file save being relative to a package, use of '/' is not required.~%# The graph name is used to create the filename, for example, graph_file_name.graphml.~%# Finally, the graph will be save at save_graph_url/graph_file_name.graphml. ~%string graph_file_name~%string save_graph_url~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SaveGraph-request)))
  "Returns full string definition for message of type 'SaveGraph-request"
  (cl:format cl:nil "# Either use absolute path to save the graph file like /path/to/save/ or~%# use a relative path to a package. For example, package_name/graphs/.~%# In case of graph file save being relative to a package, use of '/' is not required.~%# The graph name is used to create the filename, for example, graph_file_name.graphml.~%# Finally, the graph will be save at save_graph_url/graph_file_name.graphml. ~%string graph_file_name~%string save_graph_url~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SaveGraph-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'graph_file_name))
     4 (cl:length (cl:slot-value msg 'save_graph_url))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SaveGraph-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SaveGraph-request
    (cl:cons ':graph_file_name (graph_file_name msg))
    (cl:cons ':save_graph_url (save_graph_url msg))
))
;//! \htmlinclude SaveGraph-response.msg.html

(cl:defclass <SaveGraph-response> (roslisp-msg-protocol:ros-message)
  ((graph
    :reader graph
    :initarg :graph
    :type graph_msgs-msg:Graph
    :initform (cl:make-instance 'graph_msgs-msg:Graph))
   (result
    :reader result
    :initarg :result
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SaveGraph-response (<SaveGraph-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SaveGraph-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SaveGraph-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-srv:<SaveGraph-response> is deprecated: use graph_msgs-srv:SaveGraph-response instead.")))

(cl:ensure-generic-function 'graph-val :lambda-list '(m))
(cl:defmethod graph-val ((m <SaveGraph-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:graph-val is deprecated.  Use graph_msgs-srv:graph instead.")
  (graph m))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <SaveGraph-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:result-val is deprecated.  Use graph_msgs-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<SaveGraph-response>)))
    "Constants for message type '<SaveGraph-response>"
  '((:RESULT_SUCCESS . 0)
    (:RESULT_GRAPH_ALREADY_EXISTS . 1)
    (:RESULT_INVALID_GRAPH_FILE_NAME . 2)
    (:RESULT_INVALID_GRAPH_FILE_PATH . 3)
    (:RESULT_UNDEFINED_FAILURE . 255))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'SaveGraph-response)))
    "Constants for message type 'SaveGraph-response"
  '((:RESULT_SUCCESS . 0)
    (:RESULT_GRAPH_ALREADY_EXISTS . 1)
    (:RESULT_INVALID_GRAPH_FILE_NAME . 2)
    (:RESULT_INVALID_GRAPH_FILE_PATH . 3)
    (:RESULT_UNDEFINED_FAILURE . 255))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SaveGraph-response>) ostream)
  "Serializes a message object of type '<SaveGraph-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'graph) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'result)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SaveGraph-response>) istream)
  "Deserializes a message object of type '<SaveGraph-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'graph) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'result)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SaveGraph-response>)))
  "Returns string type for a service object of type '<SaveGraph-response>"
  "graph_msgs/SaveGraphResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SaveGraph-response)))
  "Returns string type for a service object of type 'SaveGraph-response"
  "graph_msgs/SaveGraphResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SaveGraph-response>)))
  "Returns md5sum for a message object of type '<SaveGraph-response>"
  "70cd2cf58e0678fd28ff2029ea82cfd1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SaveGraph-response)))
  "Returns md5sum for a message object of type 'SaveGraph-response"
  "70cd2cf58e0678fd28ff2029ea82cfd1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SaveGraph-response>)))
  "Returns full string definition for message of type '<SaveGraph-response>"
  (cl:format cl:nil "# Result code defintions~%uint8 RESULT_SUCCESS=0~%uint8 RESULT_GRAPH_ALREADY_EXISTS=1~%uint8 RESULT_INVALID_GRAPH_FILE_NAME=2~%uint8 RESULT_INVALID_GRAPH_FILE_PATH=3~%uint8 RESULT_UNDEFINED_FAILURE=255~%~%graph_msgs/Graph graph~%uint8 result~%~%~%================================================================================~%MSG: graph_msgs/Graph~%std_msgs/Header header~%GraphMetaData meta_data~%Vertex[] vertices       # List of vertices~%Edge[] edges            # List of edges~%Property[] properties ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: graph_msgs/GraphMetaData~%uint8 DIRECTED=0~%uint8 UNDIRECTED=1~%~%std_msgs/Header header~%string graph_name~%uint8 graph_type~%uint32 number_of_vertices~%uint32 number_of_edges~%================================================================================~%MSG: graph_msgs/Vertex~%# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%================================================================================~%MSG: graph_msgs/Edge~%# Edge types~%uint8 STRAIGHT_LINE=0~%uint8 CUBIC_BEZIER=1~%~%# Edge direction types~%uint8 FORWARD=0~%uint8 REVERSE=1~%uint8 BIDIRECTIONAL=2~%~%# Creation types ~%uint8 CREATED=0     # The edge is created~%uint8 GENERATED=1   # The edge is generated~%~%string name~%string alias~%uint8 type~%uint8 edge_direction_type~%uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both~%uint32 source_vertex_id~%uint32 target_vertex_id~%float64 length~%float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge~%bool bidirectional~%bool independent_orientation~%geometry_msgs/Pose[] control_points~%geometry_msgs/Pose control_orientation~%geometry_msgs/PoseArray poses   # Can contain the poses for the curve~%Property[] properties~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SaveGraph-response)))
  "Returns full string definition for message of type 'SaveGraph-response"
  (cl:format cl:nil "# Result code defintions~%uint8 RESULT_SUCCESS=0~%uint8 RESULT_GRAPH_ALREADY_EXISTS=1~%uint8 RESULT_INVALID_GRAPH_FILE_NAME=2~%uint8 RESULT_INVALID_GRAPH_FILE_PATH=3~%uint8 RESULT_UNDEFINED_FAILURE=255~%~%graph_msgs/Graph graph~%uint8 result~%~%~%================================================================================~%MSG: graph_msgs/Graph~%std_msgs/Header header~%GraphMetaData meta_data~%Vertex[] vertices       # List of vertices~%Edge[] edges            # List of edges~%Property[] properties ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: graph_msgs/GraphMetaData~%uint8 DIRECTED=0~%uint8 UNDIRECTED=1~%~%std_msgs/Header header~%string graph_name~%uint8 graph_type~%uint32 number_of_vertices~%uint32 number_of_edges~%================================================================================~%MSG: graph_msgs/Vertex~%# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%================================================================================~%MSG: graph_msgs/Edge~%# Edge types~%uint8 STRAIGHT_LINE=0~%uint8 CUBIC_BEZIER=1~%~%# Edge direction types~%uint8 FORWARD=0~%uint8 REVERSE=1~%uint8 BIDIRECTIONAL=2~%~%# Creation types ~%uint8 CREATED=0     # The edge is created~%uint8 GENERATED=1   # The edge is generated~%~%string name~%string alias~%uint8 type~%uint8 edge_direction_type~%uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both~%uint32 source_vertex_id~%uint32 target_vertex_id~%float64 length~%float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge~%bool bidirectional~%bool independent_orientation~%geometry_msgs/Pose[] control_points~%geometry_msgs/Pose control_orientation~%geometry_msgs/PoseArray poses   # Can contain the poses for the curve~%Property[] properties~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SaveGraph-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'graph))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SaveGraph-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SaveGraph-response
    (cl:cons ':graph (graph msg))
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SaveGraph)))
  'SaveGraph-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SaveGraph)))
  'SaveGraph-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SaveGraph)))
  "Returns string type for a service object of type '<SaveGraph>"
  "graph_msgs/SaveGraph")