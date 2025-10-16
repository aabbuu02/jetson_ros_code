; Auto-generated. Do not edit!


(cl:in-package lift_action-msg)


;//! \htmlinclude LiftFeedback.msg.html

(cl:defclass <LiftFeedback> (roslisp-msg-protocol:ros-message)
  ((unique_id
    :reader unique_id
    :initarg :unique_id
    :type cl:string
    :initform "")
   (acr_shelf
    :reader acr_shelf
    :initarg :acr_shelf
    :type cl:fixnum
    :initform 0)
   (action
    :reader action
    :initarg :action
    :type cl:fixnum
    :initform 0)
   (status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil)
   (failStatus
    :reader failStatus
    :initarg :failStatus
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass LiftFeedback (<LiftFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LiftFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LiftFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lift_action-msg:<LiftFeedback> is deprecated: use lift_action-msg:LiftFeedback instead.")))

(cl:ensure-generic-function 'unique_id-val :lambda-list '(m))
(cl:defmethod unique_id-val ((m <LiftFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:unique_id-val is deprecated.  Use lift_action-msg:unique_id instead.")
  (unique_id m))

(cl:ensure-generic-function 'acr_shelf-val :lambda-list '(m))
(cl:defmethod acr_shelf-val ((m <LiftFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:acr_shelf-val is deprecated.  Use lift_action-msg:acr_shelf instead.")
  (acr_shelf m))

(cl:ensure-generic-function 'action-val :lambda-list '(m))
(cl:defmethod action-val ((m <LiftFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:action-val is deprecated.  Use lift_action-msg:action instead.")
  (action m))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <LiftFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:status-val is deprecated.  Use lift_action-msg:status instead.")
  (status m))

(cl:ensure-generic-function 'failStatus-val :lambda-list '(m))
(cl:defmethod failStatus-val ((m <LiftFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:failStatus-val is deprecated.  Use lift_action-msg:failStatus instead.")
  (failStatus m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LiftFeedback>) ostream)
  "Serializes a message object of type '<LiftFeedback>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'unique_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'unique_id))
  (cl:let* ((signed (cl:slot-value msg 'acr_shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'action)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'failStatus) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LiftFeedback>) istream)
  "Deserializes a message object of type '<LiftFeedback>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'unique_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'unique_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'acr_shelf) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'action) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'failStatus) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LiftFeedback>)))
  "Returns string type for a message object of type '<LiftFeedback>"
  "lift_action/LiftFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LiftFeedback)))
  "Returns string type for a message object of type 'LiftFeedback"
  "lift_action/LiftFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LiftFeedback>)))
  "Returns md5sum for a message object of type '<LiftFeedback>"
  "6588a9452ee8a183f42490d3b437bdbe")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LiftFeedback)))
  "Returns md5sum for a message object of type 'LiftFeedback"
  "6588a9452ee8a183f42490d3b437bdbe")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LiftFeedback>)))
  "Returns full string definition for message of type '<LiftFeedback>"
  (cl:format cl:nil "string unique_id~%int16 acr_shelf~%int16 action~%bool status~%bool failStatus~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LiftFeedback)))
  "Returns full string definition for message of type 'LiftFeedback"
  (cl:format cl:nil "string unique_id~%int16 acr_shelf~%int16 action~%bool status~%bool failStatus~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LiftFeedback>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'unique_id))
     2
     2
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LiftFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'LiftFeedback
    (cl:cons ':unique_id (unique_id msg))
    (cl:cons ':acr_shelf (acr_shelf msg))
    (cl:cons ':action (action msg))
    (cl:cons ':status (status msg))
    (cl:cons ':failStatus (failStatus msg))
))
