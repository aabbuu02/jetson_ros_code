; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude KeyValue.msg.html

(cl:defclass <KeyValue> (roslisp-msg-protocol:ros-message)
  ((key
    :reader key
    :initarg :key
    :type cl:string
    :initform "")
   (value
    :reader value
    :initarg :value
    :type cl:string
    :initform "")
   (unit
    :reader unit
    :initarg :unit
    :type cl:string
    :initform "")
   (errorlevel
    :reader errorlevel
    :initarg :errorlevel
    :type cl:float
    :initform 0.0))
)

(cl:defclass KeyValue (<KeyValue>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <KeyValue>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'KeyValue)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<KeyValue> is deprecated: use anscer_msgs-msg:KeyValue instead.")))

(cl:ensure-generic-function 'key-val :lambda-list '(m))
(cl:defmethod key-val ((m <KeyValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:key-val is deprecated.  Use anscer_msgs-msg:key instead.")
  (key m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <KeyValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:value-val is deprecated.  Use anscer_msgs-msg:value instead.")
  (value m))

(cl:ensure-generic-function 'unit-val :lambda-list '(m))
(cl:defmethod unit-val ((m <KeyValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:unit-val is deprecated.  Use anscer_msgs-msg:unit instead.")
  (unit m))

(cl:ensure-generic-function 'errorlevel-val :lambda-list '(m))
(cl:defmethod errorlevel-val ((m <KeyValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:errorlevel-val is deprecated.  Use anscer_msgs-msg:errorlevel instead.")
  (errorlevel m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <KeyValue>) ostream)
  "Serializes a message object of type '<KeyValue>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'key))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'key))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'value))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'unit))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'unit))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'errorlevel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <KeyValue>) istream)
  "Deserializes a message object of type '<KeyValue>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'key) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'key) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'value) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'value) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'unit) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'unit) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'errorlevel) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<KeyValue>)))
  "Returns string type for a message object of type '<KeyValue>"
  "anscer_msgs/KeyValue")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KeyValue)))
  "Returns string type for a message object of type 'KeyValue"
  "anscer_msgs/KeyValue")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<KeyValue>)))
  "Returns md5sum for a message object of type '<KeyValue>"
  "0366bc3220232a9a18c5cc0865090e86")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'KeyValue)))
  "Returns md5sum for a message object of type 'KeyValue"
  "0366bc3220232a9a18c5cc0865090e86")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<KeyValue>)))
  "Returns full string definition for message of type '<KeyValue>"
  (cl:format cl:nil "string key			#Label of the value~%string value		#Value to track~%string unit~%float32 errorlevel			#Errorlevel of the value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'KeyValue)))
  "Returns full string definition for message of type 'KeyValue"
  (cl:format cl:nil "string key			#Label of the value~%string value		#Value to track~%string unit~%float32 errorlevel			#Errorlevel of the value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <KeyValue>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'key))
     4 (cl:length (cl:slot-value msg 'value))
     4 (cl:length (cl:slot-value msg 'unit))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <KeyValue>))
  "Converts a ROS message object to a list"
  (cl:list 'KeyValue
    (cl:cons ':key (key msg))
    (cl:cons ':value (value msg))
    (cl:cons ':unit (unit msg))
    (cl:cons ':errorlevel (errorlevel msg))
))
