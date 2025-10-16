; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MissionDB.msg.html

(cl:defclass <MissionDB> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:string
    :initform "")
   (current_distance
    :reader current_distance
    :initarg :current_distance
    :type cl:float
    :initform 0.0)
   (total_distance
    :reader total_distance
    :initarg :total_distance
    :type cl:float
    :initform 0.0))
)

(cl:defclass MissionDB (<MissionDB>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionDB>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionDB)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MissionDB> is deprecated: use anscer_msgs-msg:MissionDB instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <MissionDB>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:timestamp-val is deprecated.  Use anscer_msgs-msg:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'current_distance-val :lambda-list '(m))
(cl:defmethod current_distance-val ((m <MissionDB>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:current_distance-val is deprecated.  Use anscer_msgs-msg:current_distance instead.")
  (current_distance m))

(cl:ensure-generic-function 'total_distance-val :lambda-list '(m))
(cl:defmethod total_distance-val ((m <MissionDB>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:total_distance-val is deprecated.  Use anscer_msgs-msg:total_distance instead.")
  (total_distance m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionDB>) ostream)
  "Serializes a message object of type '<MissionDB>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'timestamp))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'current_distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'total_distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionDB>) istream)
  "Deserializes a message object of type '<MissionDB>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'timestamp) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'timestamp) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'current_distance) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'total_distance) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionDB>)))
  "Returns string type for a message object of type '<MissionDB>"
  "anscer_msgs/MissionDB")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionDB)))
  "Returns string type for a message object of type 'MissionDB"
  "anscer_msgs/MissionDB")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionDB>)))
  "Returns md5sum for a message object of type '<MissionDB>"
  "45b94f6cc052bb5811d46e7c764cde3c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionDB)))
  "Returns md5sum for a message object of type 'MissionDB"
  "45b94f6cc052bb5811d46e7c764cde3c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionDB>)))
  "Returns full string definition for message of type '<MissionDB>"
  (cl:format cl:nil "string timestamp~%float32 current_distance~%float32 total_distance~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionDB)))
  "Returns full string definition for message of type 'MissionDB"
  (cl:format cl:nil "string timestamp~%float32 current_distance~%float32 total_distance~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionDB>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'timestamp))
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionDB>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionDB
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':current_distance (current_distance msg))
    (cl:cons ':total_distance (total_distance msg))
))
