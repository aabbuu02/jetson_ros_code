; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MissionData.msg.html

(cl:defclass <MissionData> (roslisp-msg-protocol:ros-message)
  ((mission_name
    :reader mission_name
    :initarg :mission_name
    :type cl:string
    :initform "")
   (success_count
    :reader success_count
    :initarg :success_count
    :type cl:fixnum
    :initform 0)
   (mission_count
    :reader mission_count
    :initarg :mission_count
    :type cl:fixnum
    :initform 0))
)

(cl:defclass MissionData (<MissionData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MissionData> is deprecated: use anscer_msgs-msg:MissionData instead.")))

(cl:ensure-generic-function 'mission_name-val :lambda-list '(m))
(cl:defmethod mission_name-val ((m <MissionData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:mission_name-val is deprecated.  Use anscer_msgs-msg:mission_name instead.")
  (mission_name m))

(cl:ensure-generic-function 'success_count-val :lambda-list '(m))
(cl:defmethod success_count-val ((m <MissionData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:success_count-val is deprecated.  Use anscer_msgs-msg:success_count instead.")
  (success_count m))

(cl:ensure-generic-function 'mission_count-val :lambda-list '(m))
(cl:defmethod mission_count-val ((m <MissionData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:mission_count-val is deprecated.  Use anscer_msgs-msg:mission_count instead.")
  (mission_count m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionData>) ostream)
  "Serializes a message object of type '<MissionData>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'mission_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'mission_name))
  (cl:let* ((signed (cl:slot-value msg 'success_count)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'mission_count)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionData>) istream)
  "Deserializes a message object of type '<MissionData>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mission_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'mission_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'success_count) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mission_count) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionData>)))
  "Returns string type for a message object of type '<MissionData>"
  "anscer_msgs/MissionData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionData)))
  "Returns string type for a message object of type 'MissionData"
  "anscer_msgs/MissionData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionData>)))
  "Returns md5sum for a message object of type '<MissionData>"
  "8677a8d3995d6e5101db8568d121c771")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionData)))
  "Returns md5sum for a message object of type 'MissionData"
  "8677a8d3995d6e5101db8568d121c771")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionData>)))
  "Returns full string definition for message of type '<MissionData>"
  (cl:format cl:nil "string mission_name~%int16 success_count~%int16 mission_count~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionData)))
  "Returns full string definition for message of type 'MissionData"
  (cl:format cl:nil "string mission_name~%int16 success_count~%int16 mission_count~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionData>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'mission_name))
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionData>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionData
    (cl:cons ':mission_name (mission_name msg))
    (cl:cons ':success_count (success_count msg))
    (cl:cons ':mission_count (mission_count msg))
))
