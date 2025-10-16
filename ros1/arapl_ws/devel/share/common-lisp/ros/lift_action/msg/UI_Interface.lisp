; Auto-generated. Do not edit!


(cl:in-package lift_action-msg)


;//! \htmlinclude UI_Interface.msg.html

(cl:defclass <UI_Interface> (roslisp-msg-protocol:ros-message)
  ((process
    :reader process
    :initarg :process
    :type cl:string
    :initform "")
   (button
    :reader button
    :initarg :button
    :type cl:boolean
    :initform cl:nil)
   (direction
    :reader direction
    :initarg :direction
    :type cl:fixnum
    :initform 0))
)

(cl:defclass UI_Interface (<UI_Interface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UI_Interface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UI_Interface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lift_action-msg:<UI_Interface> is deprecated: use lift_action-msg:UI_Interface instead.")))

(cl:ensure-generic-function 'process-val :lambda-list '(m))
(cl:defmethod process-val ((m <UI_Interface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:process-val is deprecated.  Use lift_action-msg:process instead.")
  (process m))

(cl:ensure-generic-function 'button-val :lambda-list '(m))
(cl:defmethod button-val ((m <UI_Interface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:button-val is deprecated.  Use lift_action-msg:button instead.")
  (button m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <UI_Interface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:direction-val is deprecated.  Use lift_action-msg:direction instead.")
  (direction m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UI_Interface>) ostream)
  "Serializes a message object of type '<UI_Interface>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'process))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'process))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'button) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'direction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UI_Interface>) istream)
  "Deserializes a message object of type '<UI_Interface>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'process) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'process) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'button) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'direction) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UI_Interface>)))
  "Returns string type for a message object of type '<UI_Interface>"
  "lift_action/UI_Interface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UI_Interface)))
  "Returns string type for a message object of type 'UI_Interface"
  "lift_action/UI_Interface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UI_Interface>)))
  "Returns md5sum for a message object of type '<UI_Interface>"
  "4d42888895ca2661e28199a8a1f1bb9a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UI_Interface)))
  "Returns md5sum for a message object of type 'UI_Interface"
  "4d42888895ca2661e28199a8a1f1bb9a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UI_Interface>)))
  "Returns full string definition for message of type '<UI_Interface>"
  (cl:format cl:nil "string process~%bool button~%int16 direction~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UI_Interface)))
  "Returns full string definition for message of type 'UI_Interface"
  (cl:format cl:nil "string process~%bool button~%int16 direction~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UI_Interface>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'process))
     1
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UI_Interface>))
  "Converts a ROS message object to a list"
  (cl:list 'UI_Interface
    (cl:cons ':process (process msg))
    (cl:cons ':button (button msg))
    (cl:cons ':direction (direction msg))
))
