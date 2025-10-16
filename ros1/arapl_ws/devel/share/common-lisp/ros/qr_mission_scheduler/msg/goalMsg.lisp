; Auto-generated. Do not edit!


(cl:in-package qr_mission_scheduler-msg)


;//! \htmlinclude goalMsg.msg.html

(cl:defclass <goalMsg> (roslisp-msg-protocol:ros-message)
  ((goalType
    :reader goalType
    :initarg :goalType
    :type cl:string
    :initform "")
   (source
    :reader source
    :initarg :source
    :type cl:float
    :initform 0.0)
   (destination
    :reader destination
    :initarg :destination
    :type cl:float
    :initform 0.0))
)

(cl:defclass goalMsg (<goalMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <goalMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'goalMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name qr_mission_scheduler-msg:<goalMsg> is deprecated: use qr_mission_scheduler-msg:goalMsg instead.")))

(cl:ensure-generic-function 'goalType-val :lambda-list '(m))
(cl:defmethod goalType-val ((m <goalMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-msg:goalType-val is deprecated.  Use qr_mission_scheduler-msg:goalType instead.")
  (goalType m))

(cl:ensure-generic-function 'source-val :lambda-list '(m))
(cl:defmethod source-val ((m <goalMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-msg:source-val is deprecated.  Use qr_mission_scheduler-msg:source instead.")
  (source m))

(cl:ensure-generic-function 'destination-val :lambda-list '(m))
(cl:defmethod destination-val ((m <goalMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-msg:destination-val is deprecated.  Use qr_mission_scheduler-msg:destination instead.")
  (destination m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <goalMsg>) ostream)
  "Serializes a message object of type '<goalMsg>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'goalType))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'goalType))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'source))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'destination))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <goalMsg>) istream)
  "Deserializes a message object of type '<goalMsg>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'goalType) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'goalType) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'source) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'destination) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<goalMsg>)))
  "Returns string type for a message object of type '<goalMsg>"
  "qr_mission_scheduler/goalMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'goalMsg)))
  "Returns string type for a message object of type 'goalMsg"
  "qr_mission_scheduler/goalMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<goalMsg>)))
  "Returns md5sum for a message object of type '<goalMsg>"
  "bdc5d71ceffd1361f6883e493cc747c6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'goalMsg)))
  "Returns md5sum for a message object of type 'goalMsg"
  "bdc5d71ceffd1361f6883e493cc747c6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<goalMsg>)))
  "Returns full string definition for message of type '<goalMsg>"
  (cl:format cl:nil "string goalType~%~%float64 source~%float64 destination~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'goalMsg)))
  "Returns full string definition for message of type 'goalMsg"
  (cl:format cl:nil "string goalType~%~%float64 source~%float64 destination~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <goalMsg>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'goalType))
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <goalMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'goalMsg
    (cl:cons ':goalType (goalType msg))
    (cl:cons ':source (source msg))
    (cl:cons ':destination (destination msg))
))
