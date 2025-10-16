; Auto-generated. Do not edit!


(cl:in-package graph_msgs-msg)


;//! \htmlinclude Vertex.msg.html

(cl:defclass <Vertex> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (name
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
   (ignore_orientation
    :reader ignore_orientation
    :initarg :ignore_orientation
    :type cl:boolean
    :initform cl:nil)
   (pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (properties
    :reader properties
    :initarg :properties
    :type (cl:vector graph_msgs-msg:Property)
   :initform (cl:make-array 0 :element-type 'graph_msgs-msg:Property :initial-element (cl:make-instance 'graph_msgs-msg:Property))))
)

(cl:defclass Vertex (<Vertex>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Vertex>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Vertex)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-msg:<Vertex> is deprecated: use graph_msgs-msg:Vertex instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:id-val is deprecated.  Use graph_msgs-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:name-val is deprecated.  Use graph_msgs-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'alias-val :lambda-list '(m))
(cl:defmethod alias-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:alias-val is deprecated.  Use graph_msgs-msg:alias instead.")
  (alias m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:type-val is deprecated.  Use graph_msgs-msg:type instead.")
  (type m))

(cl:ensure-generic-function 'ignore_orientation-val :lambda-list '(m))
(cl:defmethod ignore_orientation-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:ignore_orientation-val is deprecated.  Use graph_msgs-msg:ignore_orientation instead.")
  (ignore_orientation m))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:pose-val is deprecated.  Use graph_msgs-msg:pose instead.")
  (pose m))

(cl:ensure-generic-function 'properties-val :lambda-list '(m))
(cl:defmethod properties-val ((m <Vertex>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-msg:properties-val is deprecated.  Use graph_msgs-msg:properties instead.")
  (properties m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Vertex>)))
    "Constants for message type '<Vertex>"
  '((:NORMAL . 0)
    (:PARK . 1)
    (:CHARGE . 2)
    (:CONTROL . 3)
    (:REPORT . 4))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Vertex)))
    "Constants for message type 'Vertex"
  '((:NORMAL . 0)
    (:PARK . 1)
    (:CHARGE . 2)
    (:CONTROL . 3)
    (:REPORT . 4))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Vertex>) ostream)
  "Serializes a message object of type '<Vertex>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'id)) ostream)
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
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ignore_orientation) 1 0)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'properties))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'properties))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Vertex>) istream)
  "Deserializes a message object of type '<Vertex>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'id)) (cl:read-byte istream))
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
    (cl:setf (cl:slot-value msg 'ignore_orientation) (cl:not (cl:zerop (cl:read-byte istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Vertex>)))
  "Returns string type for a message object of type '<Vertex>"
  "graph_msgs/Vertex")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Vertex)))
  "Returns string type for a message object of type 'Vertex"
  "graph_msgs/Vertex")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Vertex>)))
  "Returns md5sum for a message object of type '<Vertex>"
  "da5a52518e6851fa3171e3b059d26164")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Vertex)))
  "Returns md5sum for a message object of type 'Vertex"
  "da5a52518e6851fa3171e3b059d26164")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Vertex>)))
  "Returns full string definition for message of type '<Vertex>"
  (cl:format cl:nil "# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Vertex)))
  "Returns full string definition for message of type 'Vertex"
  (cl:format cl:nil "# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Vertex>))
  (cl:+ 0
     4
     4 (cl:length (cl:slot-value msg 'name))
     4 (cl:length (cl:slot-value msg 'alias))
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'properties) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Vertex>))
  "Converts a ROS message object to a list"
  (cl:list 'Vertex
    (cl:cons ':id (id msg))
    (cl:cons ':name (name msg))
    (cl:cons ':alias (alias msg))
    (cl:cons ':type (type msg))
    (cl:cons ':ignore_orientation (ignore_orientation msg))
    (cl:cons ':pose (pose msg))
    (cl:cons ':properties (properties msg))
))
