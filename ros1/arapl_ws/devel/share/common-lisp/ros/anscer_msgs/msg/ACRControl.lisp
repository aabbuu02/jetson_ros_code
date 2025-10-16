; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude ACRControl.msg.html

(cl:defclass <ACRControl> (roslisp-msg-protocol:ros-message)
  ((acr_shelf
    :reader acr_shelf
    :initarg :acr_shelf
    :type cl:fixnum
    :initform 0)
   (target_shelf
    :reader target_shelf
    :initarg :target_shelf
    :type cl:fixnum
    :initform 0)
   (acr_action
    :reader acr_action
    :initarg :acr_action
    :type cl:fixnum
    :initform 0)
   (bar_code_number
    :reader bar_code_number
    :initarg :bar_code_number
    :type cl:integer
    :initform 0)
   (whole_bin_number
    :reader whole_bin_number
    :initarg :whole_bin_number
    :type cl:integer
    :initform 0))
)

(cl:defclass ACRControl (<ACRControl>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ACRControl>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ACRControl)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<ACRControl> is deprecated: use anscer_msgs-msg:ACRControl instead.")))

(cl:ensure-generic-function 'acr_shelf-val :lambda-list '(m))
(cl:defmethod acr_shelf-val ((m <ACRControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:acr_shelf-val is deprecated.  Use anscer_msgs-msg:acr_shelf instead.")
  (acr_shelf m))

(cl:ensure-generic-function 'target_shelf-val :lambda-list '(m))
(cl:defmethod target_shelf-val ((m <ACRControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:target_shelf-val is deprecated.  Use anscer_msgs-msg:target_shelf instead.")
  (target_shelf m))

(cl:ensure-generic-function 'acr_action-val :lambda-list '(m))
(cl:defmethod acr_action-val ((m <ACRControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:acr_action-val is deprecated.  Use anscer_msgs-msg:acr_action instead.")
  (acr_action m))

(cl:ensure-generic-function 'bar_code_number-val :lambda-list '(m))
(cl:defmethod bar_code_number-val ((m <ACRControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:bar_code_number-val is deprecated.  Use anscer_msgs-msg:bar_code_number instead.")
  (bar_code_number m))

(cl:ensure-generic-function 'whole_bin_number-val :lambda-list '(m))
(cl:defmethod whole_bin_number-val ((m <ACRControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:whole_bin_number-val is deprecated.  Use anscer_msgs-msg:whole_bin_number instead.")
  (whole_bin_number m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<ACRControl>)))
    "Constants for message type '<ACRControl>"
  '((:PICKUP . 0)
    (:DROPOFF . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'ACRControl)))
    "Constants for message type 'ACRControl"
  '((:PICKUP . 0)
    (:DROPOFF . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ACRControl>) ostream)
  "Serializes a message object of type '<ACRControl>"
  (cl:let* ((signed (cl:slot-value msg 'acr_shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'target_shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'acr_action)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'bar_code_number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'whole_bin_number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ACRControl>) istream)
  "Deserializes a message object of type '<ACRControl>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'acr_shelf) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'target_shelf) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'acr_action) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'bar_code_number) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'whole_bin_number) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ACRControl>)))
  "Returns string type for a message object of type '<ACRControl>"
  "anscer_msgs/ACRControl")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ACRControl)))
  "Returns string type for a message object of type 'ACRControl"
  "anscer_msgs/ACRControl")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ACRControl>)))
  "Returns md5sum for a message object of type '<ACRControl>"
  "fc49709c8d8c7803a2e07e7391600be5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ACRControl)))
  "Returns md5sum for a message object of type 'ACRControl"
  "fc49709c8d8c7803a2e07e7391600be5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ACRControl>)))
  "Returns full string definition for message of type '<ACRControl>"
  (cl:format cl:nil "#mission status~%int32 PICKUP =0~%int32 DROPOFF =1~%~%int16 acr_shelf~%int16 target_shelf~%int16 acr_action~%int64 bar_code_number~%int64 whole_bin_number~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ACRControl)))
  "Returns full string definition for message of type 'ACRControl"
  (cl:format cl:nil "#mission status~%int32 PICKUP =0~%int32 DROPOFF =1~%~%int16 acr_shelf~%int16 target_shelf~%int16 acr_action~%int64 bar_code_number~%int64 whole_bin_number~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ACRControl>))
  (cl:+ 0
     2
     2
     2
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ACRControl>))
  "Converts a ROS message object to a list"
  (cl:list 'ACRControl
    (cl:cons ':acr_shelf (acr_shelf msg))
    (cl:cons ':target_shelf (target_shelf msg))
    (cl:cons ':acr_action (acr_action msg))
    (cl:cons ':bar_code_number (bar_code_number msg))
    (cl:cons ':whole_bin_number (whole_bin_number msg))
))
