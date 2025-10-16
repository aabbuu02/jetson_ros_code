; Auto-generated. Do not edit!


(cl:in-package lift_action-msg)


;//! \htmlinclude Home_sensor.msg.html

(cl:defclass <Home_sensor> (roslisp-msg-protocol:ros-message)
  ((process
    :reader process
    :initarg :process
    :type cl:string
    :initform "")
   (homingStatus
    :reader homingStatus
    :initarg :homingStatus
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Home_sensor (<Home_sensor>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Home_sensor>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Home_sensor)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lift_action-msg:<Home_sensor> is deprecated: use lift_action-msg:Home_sensor instead.")))

(cl:ensure-generic-function 'process-val :lambda-list '(m))
(cl:defmethod process-val ((m <Home_sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:process-val is deprecated.  Use lift_action-msg:process instead.")
  (process m))

(cl:ensure-generic-function 'homingStatus-val :lambda-list '(m))
(cl:defmethod homingStatus-val ((m <Home_sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:homingStatus-val is deprecated.  Use lift_action-msg:homingStatus instead.")
  (homingStatus m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Home_sensor>) ostream)
  "Serializes a message object of type '<Home_sensor>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'process))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'process))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'homingStatus) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Home_sensor>) istream)
  "Deserializes a message object of type '<Home_sensor>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'process) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'process) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'homingStatus) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Home_sensor>)))
  "Returns string type for a message object of type '<Home_sensor>"
  "lift_action/Home_sensor")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Home_sensor)))
  "Returns string type for a message object of type 'Home_sensor"
  "lift_action/Home_sensor")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Home_sensor>)))
  "Returns md5sum for a message object of type '<Home_sensor>"
  "4558b3f32ba7b3eceae2851b267cf424")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Home_sensor)))
  "Returns md5sum for a message object of type 'Home_sensor"
  "4558b3f32ba7b3eceae2851b267cf424")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Home_sensor>)))
  "Returns full string definition for message of type '<Home_sensor>"
  (cl:format cl:nil "string process~%bool homingStatus~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Home_sensor)))
  "Returns full string definition for message of type 'Home_sensor"
  (cl:format cl:nil "string process~%bool homingStatus~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Home_sensor>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'process))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Home_sensor>))
  "Converts a ROS message object to a list"
  (cl:list 'Home_sensor
    (cl:cons ':process (process msg))
    (cl:cons ':homingStatus (homingStatus msg))
))
