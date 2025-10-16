; Auto-generated. Do not edit!


(cl:in-package qr_mission_scheduler-srv)


;//! \htmlinclude GetGoal-request.msg.html

(cl:defclass <GetGoal-request> (roslisp-msg-protocol:ros-message)
  ((goalType
    :reader goalType
    :initarg :goalType
    :type cl:string
    :initform "")
   (source_id
    :reader source_id
    :initarg :source_id
    :type cl:float
    :initform 0.0)
   (target_id
    :reader target_id
    :initarg :target_id
    :type cl:float
    :initform 0.0))
)

(cl:defclass GetGoal-request (<GetGoal-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetGoal-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetGoal-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name qr_mission_scheduler-srv:<GetGoal-request> is deprecated: use qr_mission_scheduler-srv:GetGoal-request instead.")))

(cl:ensure-generic-function 'goalType-val :lambda-list '(m))
(cl:defmethod goalType-val ((m <GetGoal-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-srv:goalType-val is deprecated.  Use qr_mission_scheduler-srv:goalType instead.")
  (goalType m))

(cl:ensure-generic-function 'source_id-val :lambda-list '(m))
(cl:defmethod source_id-val ((m <GetGoal-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-srv:source_id-val is deprecated.  Use qr_mission_scheduler-srv:source_id instead.")
  (source_id m))

(cl:ensure-generic-function 'target_id-val :lambda-list '(m))
(cl:defmethod target_id-val ((m <GetGoal-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-srv:target_id-val is deprecated.  Use qr_mission_scheduler-srv:target_id instead.")
  (target_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetGoal-request>) ostream)
  "Serializes a message object of type '<GetGoal-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'goalType))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'goalType))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'source_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'target_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetGoal-request>) istream)
  "Deserializes a message object of type '<GetGoal-request>"
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
    (cl:setf (cl:slot-value msg 'source_id) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'target_id) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetGoal-request>)))
  "Returns string type for a service object of type '<GetGoal-request>"
  "qr_mission_scheduler/GetGoalRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGoal-request)))
  "Returns string type for a service object of type 'GetGoal-request"
  "qr_mission_scheduler/GetGoalRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetGoal-request>)))
  "Returns md5sum for a message object of type '<GetGoal-request>"
  "e20506e2259fb39260e6aaae4121d9e2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetGoal-request)))
  "Returns md5sum for a message object of type 'GetGoal-request"
  "e20506e2259fb39260e6aaae4121d9e2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetGoal-request>)))
  "Returns full string definition for message of type '<GetGoal-request>"
  (cl:format cl:nil "# Source and destination IDs~%string goalType~%float64 source_id~%float64 target_id~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetGoal-request)))
  "Returns full string definition for message of type 'GetGoal-request"
  (cl:format cl:nil "# Source and destination IDs~%string goalType~%float64 source_id~%float64 target_id~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetGoal-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'goalType))
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetGoal-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetGoal-request
    (cl:cons ':goalType (goalType msg))
    (cl:cons ':source_id (source_id msg))
    (cl:cons ':target_id (target_id msg))
))
;//! \htmlinclude GetGoal-response.msg.html

(cl:defclass <GetGoal-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:string
    :initform ""))
)

(cl:defclass GetGoal-response (<GetGoal-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetGoal-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetGoal-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name qr_mission_scheduler-srv:<GetGoal-response> is deprecated: use qr_mission_scheduler-srv:GetGoal-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <GetGoal-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader qr_mission_scheduler-srv:result-val is deprecated.  Use qr_mission_scheduler-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetGoal-response>) ostream)
  "Serializes a message object of type '<GetGoal-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'result))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'result))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetGoal-response>) istream)
  "Deserializes a message object of type '<GetGoal-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'result) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetGoal-response>)))
  "Returns string type for a service object of type '<GetGoal-response>"
  "qr_mission_scheduler/GetGoalResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGoal-response)))
  "Returns string type for a service object of type 'GetGoal-response"
  "qr_mission_scheduler/GetGoalResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetGoal-response>)))
  "Returns md5sum for a message object of type '<GetGoal-response>"
  "e20506e2259fb39260e6aaae4121d9e2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetGoal-response)))
  "Returns md5sum for a message object of type 'GetGoal-response"
  "e20506e2259fb39260e6aaae4121d9e2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetGoal-response>)))
  "Returns full string definition for message of type '<GetGoal-response>"
  (cl:format cl:nil "string result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetGoal-response)))
  "Returns full string definition for message of type 'GetGoal-response"
  (cl:format cl:nil "string result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetGoal-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'result))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetGoal-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetGoal-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetGoal)))
  'GetGoal-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetGoal)))
  'GetGoal-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGoal)))
  "Returns string type for a service object of type '<GetGoal>"
  "qr_mission_scheduler/GetGoal")