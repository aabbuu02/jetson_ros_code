; Auto-generated. Do not edit!


(cl:in-package graph_msgs-msg)


;//! \htmlinclude GraphMetaData.msg.html

(cl:defclass <GraphMetaData> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (graph_name
    :reader graph_name
    :initarg :graph_name
    :type cl:string
    :initform "")
   (graph_type
    :reader graph_type
    :initarg :graph_type
    :type cl:fixnum
    :initform 0)
   (number_of_vertices
    :reader number_of_vertices
    :initarg :number_of_vertices
    :type cl:integer
    :initform 0)
   (number_of_edges
    :reader number_of_edges
    :initarg :number_of_edges
    :type cl:integer
    :initform 0))
)

(cl:defclass GraphMetaData (<GraphMetaData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GraphMetaData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GraphMetaData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-msg:<GraphMetaData> is deprecated: use graph_msgs-msg:GraphMetaData instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <GraphMetaData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:header-val is deprecated.  Use graph_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'graph_name-val :lambda-list '(m))
(cl:defmethod graph_name-val ((m <GraphMetaData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:graph_name-val is deprecated.  Use graph_msgs-msg:graph_name instead.")
  (graph_name m))

(cl:ensure-generic-function 'graph_type-val :lambda-list '(m))
(cl:defmethod graph_type-val ((m <GraphMetaData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:graph_type-val is deprecated.  Use graph_msgs-msg:graph_type instead.")
  (graph_type m))

(cl:ensure-generic-function 'number_of_vertices-val :lambda-list '(m))
(cl:defmethod number_of_vertices-val ((m <GraphMetaData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:number_of_vertices-val is deprecated.  Use graph_msgs-msg:number_of_vertices instead.")
  (number_of_vertices m))

(cl:ensure-generic-function 'number_of_edges-val :lambda-list '(m))
(cl:defmethod number_of_edges-val ((m <GraphMetaData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:number_of_edges-val is deprecated.  Use graph_msgs-msg:number_of_edges instead.")
  (number_of_edges m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<GraphMetaData>)))
    "Constants for message type '<GraphMetaData>"
  '((:DIRECTED . 0)
    (:UNDIRECTED . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'GraphMetaData)))
    "Constants for message type 'GraphMetaData"
  '((:DIRECTED . 0)
    (:UNDIRECTED . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GraphMetaData>) ostream)
  "Serializes a message object of type '<GraphMetaData>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'graph_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'graph_name))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'graph_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'number_of_vertices)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'number_of_vertices)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'number_of_vertices)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'number_of_vertices)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'number_of_edges)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'number_of_edges)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'number_of_edges)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'number_of_edges)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GraphMetaData>) istream)
  "Deserializes a message object of type '<GraphMetaData>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'graph_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'graph_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'graph_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'number_of_vertices)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'number_of_vertices)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'number_of_vertices)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'number_of_vertices)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'number_of_edges)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'number_of_edges)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'number_of_edges)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'number_of_edges)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GraphMetaData>)))
  "Returns string type for a message object of type '<GraphMetaData>"
  "graph_msgs/GraphMetaData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GraphMetaData)))
  "Returns string type for a message object of type 'GraphMetaData"
  "graph_msgs/GraphMetaData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GraphMetaData>)))
  "Returns md5sum for a message object of type '<GraphMetaData>"
  "c0d170d3d53451a272b88e7364b594fa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GraphMetaData)))
  "Returns md5sum for a message object of type 'GraphMetaData"
  "c0d170d3d53451a272b88e7364b594fa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GraphMetaData>)))
  "Returns full string definition for message of type '<GraphMetaData>"
  (cl:format cl:nil "uint8 DIRECTED=0~%uint8 UNDIRECTED=1~%~%std_msgs/Header header~%string graph_name~%uint8 graph_type~%uint32 number_of_vertices~%uint32 number_of_edges~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GraphMetaData)))
  "Returns full string definition for message of type 'GraphMetaData"
  (cl:format cl:nil "uint8 DIRECTED=0~%uint8 UNDIRECTED=1~%~%std_msgs/Header header~%string graph_name~%uint8 graph_type~%uint32 number_of_vertices~%uint32 number_of_edges~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GraphMetaData>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'graph_name))
     1
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GraphMetaData>))
  "Converts a ROS message object to a list"
  (cl:list 'GraphMetaData
    (cl:cons ':header (header msg))
    (cl:cons ':graph_name (graph_name msg))
    (cl:cons ':graph_type (graph_type msg))
    (cl:cons ':number_of_vertices (number_of_vertices msg))
    (cl:cons ':number_of_edges (number_of_edges msg))
))
