; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude Debug.msg.html

(cl:defclass <Debug> (roslisp-msg-protocol:ros-message)
  ((left_rpm_command
    :reader left_rpm_command
    :initarg :left_rpm_command
    :type cl:float
    :initform 0.0)
   (right_rpm_command
    :reader right_rpm_command
    :initarg :right_rpm_command
    :type cl:float
    :initform 0.0)
   (left_rpm_feedback
    :reader left_rpm_feedback
    :initarg :left_rpm_feedback
    :type cl:float
    :initform 0.0)
   (right_rpm_feedback
    :reader right_rpm_feedback
    :initarg :right_rpm_feedback
    :type cl:float
    :initform 0.0))
)

(cl:defclass Debug (<Debug>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Debug>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Debug)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<Debug> is deprecated: use anscer_msgs-msg:Debug instead.")))

(cl:ensure-generic-function 'left_rpm_command-val :lambda-list '(m))
(cl:defmethod left_rpm_command-val ((m <Debug>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:left_rpm_command-val is deprecated.  Use anscer_msgs-msg:left_rpm_command instead.")
  (left_rpm_command m))

(cl:ensure-generic-function 'right_rpm_command-val :lambda-list '(m))
(cl:defmethod right_rpm_command-val ((m <Debug>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:right_rpm_command-val is deprecated.  Use anscer_msgs-msg:right_rpm_command instead.")
  (right_rpm_command m))

(cl:ensure-generic-function 'left_rpm_feedback-val :lambda-list '(m))
(cl:defmethod left_rpm_feedback-val ((m <Debug>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:left_rpm_feedback-val is deprecated.  Use anscer_msgs-msg:left_rpm_feedback instead.")
  (left_rpm_feedback m))

(cl:ensure-generic-function 'right_rpm_feedback-val :lambda-list '(m))
(cl:defmethod right_rpm_feedback-val ((m <Debug>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:right_rpm_feedback-val is deprecated.  Use anscer_msgs-msg:right_rpm_feedback instead.")
  (right_rpm_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Debug>) ostream)
  "Serializes a message object of type '<Debug>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'left_rpm_command))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'right_rpm_command))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'left_rpm_feedback))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'right_rpm_feedback))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Debug>) istream)
  "Deserializes a message object of type '<Debug>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_rpm_command) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_rpm_command) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_rpm_feedback) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_rpm_feedback) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Debug>)))
  "Returns string type for a message object of type '<Debug>"
  "anscer_msgs/Debug")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Debug)))
  "Returns string type for a message object of type 'Debug"
  "anscer_msgs/Debug")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Debug>)))
  "Returns md5sum for a message object of type '<Debug>"
  "cfb9ea294e0bf87e4f770199a831777a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Debug)))
  "Returns md5sum for a message object of type 'Debug"
  "cfb9ea294e0bf87e4f770199a831777a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Debug>)))
  "Returns full string definition for message of type '<Debug>"
  (cl:format cl:nil "float32 left_rpm_command~%float32 right_rpm_command~%float32 left_rpm_feedback~%float32 right_rpm_feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Debug)))
  "Returns full string definition for message of type 'Debug"
  (cl:format cl:nil "float32 left_rpm_command~%float32 right_rpm_command~%float32 left_rpm_feedback~%float32 right_rpm_feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Debug>))
  (cl:+ 0
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Debug>))
  "Converts a ROS message object to a list"
  (cl:list 'Debug
    (cl:cons ':left_rpm_command (left_rpm_command msg))
    (cl:cons ':right_rpm_command (right_rpm_command msg))
    (cl:cons ':left_rpm_feedback (left_rpm_feedback msg))
    (cl:cons ':right_rpm_feedback (right_rpm_feedback msg))
))
