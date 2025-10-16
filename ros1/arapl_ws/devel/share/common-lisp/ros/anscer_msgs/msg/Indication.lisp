; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude Indication.msg.html

(cl:defclass <Indication> (roslisp-msg-protocol:ros-message)
  ((color
    :reader color
    :initarg :color
    :type cl:string
    :initform "")
   (color_mode
    :reader color_mode
    :initarg :color_mode
    :type cl:fixnum
    :initform 0)
   (buzzer
    :reader buzzer
    :initarg :buzzer
    :type cl:boolean
    :initform cl:nil)
   (buzzer_mode
    :reader buzzer_mode
    :initarg :buzzer_mode
    :type cl:fixnum
    :initform 0)
   (priority
    :reader priority
    :initarg :priority
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Indication (<Indication>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Indication>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Indication)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<Indication> is deprecated: use anscer_msgs-msg:Indication instead.")))

(cl:ensure-generic-function 'color-val :lambda-list '(m))
(cl:defmethod color-val ((m <Indication>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:color-val is deprecated.  Use anscer_msgs-msg:color instead.")
  (color m))

(cl:ensure-generic-function 'color_mode-val :lambda-list '(m))
(cl:defmethod color_mode-val ((m <Indication>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:color_mode-val is deprecated.  Use anscer_msgs-msg:color_mode instead.")
  (color_mode m))

(cl:ensure-generic-function 'buzzer-val :lambda-list '(m))
(cl:defmethod buzzer-val ((m <Indication>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:buzzer-val is deprecated.  Use anscer_msgs-msg:buzzer instead.")
  (buzzer m))

(cl:ensure-generic-function 'buzzer_mode-val :lambda-list '(m))
(cl:defmethod buzzer_mode-val ((m <Indication>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:buzzer_mode-val is deprecated.  Use anscer_msgs-msg:buzzer_mode instead.")
  (buzzer_mode m))

(cl:ensure-generic-function 'priority-val :lambda-list '(m))
(cl:defmethod priority-val ((m <Indication>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:priority-val is deprecated.  Use anscer_msgs-msg:priority instead.")
  (priority m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Indication>) ostream)
  "Serializes a message object of type '<Indication>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'color))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'color))
  (cl:let* ((signed (cl:slot-value msg 'color_mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'buzzer) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'buzzer_mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'priority)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Indication>) istream)
  "Deserializes a message object of type '<Indication>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'color) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'color) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'color_mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:slot-value msg 'buzzer) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'buzzer_mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'priority) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Indication>)))
  "Returns string type for a message object of type '<Indication>"
  "anscer_msgs/Indication")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Indication)))
  "Returns string type for a message object of type 'Indication"
  "anscer_msgs/Indication")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Indication>)))
  "Returns md5sum for a message object of type '<Indication>"
  "121d26089d956929130db8efbb5ea4b2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Indication)))
  "Returns md5sum for a message object of type 'Indication"
  "121d26089d956929130db8efbb5ea4b2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Indication>)))
  "Returns full string definition for message of type '<Indication>"
  (cl:format cl:nil "string color~%int8 color_mode~%bool buzzer~%int8 buzzer_mode~%int16 priority~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Indication)))
  "Returns full string definition for message of type 'Indication"
  (cl:format cl:nil "string color~%int8 color_mode~%bool buzzer~%int8 buzzer_mode~%int16 priority~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Indication>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'color))
     1
     1
     1
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Indication>))
  "Converts a ROS message object to a list"
  (cl:list 'Indication
    (cl:cons ':color (color msg))
    (cl:cons ':color_mode (color_mode msg))
    (cl:cons ':buzzer (buzzer msg))
    (cl:cons ':buzzer_mode (buzzer_mode msg))
    (cl:cons ':priority (priority msg))
))
