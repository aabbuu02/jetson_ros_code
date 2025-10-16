; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude FieldStatus.msg.html

(cl:defclass <FieldStatus> (roslisp-msg-protocol:ros-message)
  ((direction
    :reader direction
    :initarg :direction
    :type cl:fixnum
    :initform 0)
   (is_safety
    :reader is_safety
    :initarg :is_safety
    :type cl:boolean
    :initform cl:nil)
   (is_warning
    :reader is_warning
    :initarg :is_warning
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass FieldStatus (<FieldStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FieldStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FieldStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<FieldStatus> is deprecated: use anscer_msgs-msg:FieldStatus instead.")))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <FieldStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:direction-val is deprecated.  Use anscer_msgs-msg:direction instead.")
  (direction m))

(cl:ensure-generic-function 'is_safety-val :lambda-list '(m))
(cl:defmethod is_safety-val ((m <FieldStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:is_safety-val is deprecated.  Use anscer_msgs-msg:is_safety instead.")
  (is_safety m))

(cl:ensure-generic-function 'is_warning-val :lambda-list '(m))
(cl:defmethod is_warning-val ((m <FieldStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:is_warning-val is deprecated.  Use anscer_msgs-msg:is_warning instead.")
  (is_warning m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FieldStatus>) ostream)
  "Serializes a message object of type '<FieldStatus>"
  (cl:let* ((signed (cl:slot-value msg 'direction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_safety) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_warning) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FieldStatus>) istream)
  "Deserializes a message object of type '<FieldStatus>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'direction) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:slot-value msg 'is_safety) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'is_warning) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FieldStatus>)))
  "Returns string type for a message object of type '<FieldStatus>"
  "anscer_msgs/FieldStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FieldStatus)))
  "Returns string type for a message object of type 'FieldStatus"
  "anscer_msgs/FieldStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FieldStatus>)))
  "Returns md5sum for a message object of type '<FieldStatus>"
  "0bad4ea9ecfbe49f072cf1a2ba87fb38")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FieldStatus)))
  "Returns md5sum for a message object of type 'FieldStatus"
  "0bad4ea9ecfbe49f072cf1a2ba87fb38")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FieldStatus>)))
  "Returns full string definition for message of type '<FieldStatus>"
  (cl:format cl:nil "int8 direction~%bool is_safety~%bool is_warning~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FieldStatus)))
  "Returns full string definition for message of type 'FieldStatus"
  (cl:format cl:nil "int8 direction~%bool is_safety~%bool is_warning~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FieldStatus>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FieldStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'FieldStatus
    (cl:cons ':direction (direction msg))
    (cl:cons ':is_safety (is_safety msg))
    (cl:cons ':is_warning (is_warning msg))
))
