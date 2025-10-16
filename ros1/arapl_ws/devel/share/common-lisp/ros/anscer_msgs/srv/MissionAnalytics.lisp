; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude MissionAnalytics-request.msg.html

(cl:defclass <MissionAnalytics-request> (roslisp-msg-protocol:ros-message)
  ((start_date
    :reader start_date
    :initarg :start_date
    :type cl:string
    :initform "")
   (end_date
    :reader end_date
    :initarg :end_date
    :type cl:string
    :initform ""))
)

(cl:defclass MissionAnalytics-request (<MissionAnalytics-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionAnalytics-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionAnalytics-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<MissionAnalytics-request> is deprecated: use anscer_msgs-srv:MissionAnalytics-request instead.")))

(cl:ensure-generic-function 'start_date-val :lambda-list '(m))
(cl:defmethod start_date-val ((m <MissionAnalytics-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:start_date-val is deprecated.  Use anscer_msgs-srv:start_date instead.")
  (start_date m))

(cl:ensure-generic-function 'end_date-val :lambda-list '(m))
(cl:defmethod end_date-val ((m <MissionAnalytics-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:end_date-val is deprecated.  Use anscer_msgs-srv:end_date instead.")
  (end_date m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionAnalytics-request>) ostream)
  "Serializes a message object of type '<MissionAnalytics-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'start_date))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'start_date))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'end_date))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'end_date))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionAnalytics-request>) istream)
  "Deserializes a message object of type '<MissionAnalytics-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'start_date) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'start_date) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'end_date) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'end_date) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionAnalytics-request>)))
  "Returns string type for a service object of type '<MissionAnalytics-request>"
  "anscer_msgs/MissionAnalyticsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionAnalytics-request)))
  "Returns string type for a service object of type 'MissionAnalytics-request"
  "anscer_msgs/MissionAnalyticsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionAnalytics-request>)))
  "Returns md5sum for a message object of type '<MissionAnalytics-request>"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionAnalytics-request)))
  "Returns md5sum for a message object of type 'MissionAnalytics-request"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionAnalytics-request>)))
  "Returns full string definition for message of type '<MissionAnalytics-request>"
  (cl:format cl:nil "string start_date~%string end_date~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionAnalytics-request)))
  "Returns full string definition for message of type 'MissionAnalytics-request"
  (cl:format cl:nil "string start_date~%string end_date~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionAnalytics-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'start_date))
     4 (cl:length (cl:slot-value msg 'end_date))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionAnalytics-request>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionAnalytics-request
    (cl:cons ':start_date (start_date msg))
    (cl:cons ':end_date (end_date msg))
))
;//! \htmlinclude MissionAnalytics-response.msg.html

(cl:defclass <MissionAnalytics-response> (roslisp-msg-protocol:ros-message)
  ((mission_db
    :reader mission_db
    :initarg :mission_db
    :type (cl:vector anscer_msgs-msg:MissionDB)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:MissionDB :initial-element (cl:make-instance 'anscer_msgs-msg:MissionDB))))
)

(cl:defclass MissionAnalytics-response (<MissionAnalytics-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionAnalytics-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionAnalytics-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<MissionAnalytics-response> is deprecated: use anscer_msgs-srv:MissionAnalytics-response instead.")))

(cl:ensure-generic-function 'mission_db-val :lambda-list '(m))
(cl:defmethod mission_db-val ((m <MissionAnalytics-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:mission_db-val is deprecated.  Use anscer_msgs-srv:mission_db instead.")
  (mission_db m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionAnalytics-response>) ostream)
  "Serializes a message object of type '<MissionAnalytics-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'mission_db))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'mission_db))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionAnalytics-response>) istream)
  "Deserializes a message object of type '<MissionAnalytics-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'mission_db) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'mission_db)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:MissionDB))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionAnalytics-response>)))
  "Returns string type for a service object of type '<MissionAnalytics-response>"
  "anscer_msgs/MissionAnalyticsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionAnalytics-response)))
  "Returns string type for a service object of type 'MissionAnalytics-response"
  "anscer_msgs/MissionAnalyticsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionAnalytics-response>)))
  "Returns md5sum for a message object of type '<MissionAnalytics-response>"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionAnalytics-response)))
  "Returns md5sum for a message object of type 'MissionAnalytics-response"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionAnalytics-response>)))
  "Returns full string definition for message of type '<MissionAnalytics-response>"
  (cl:format cl:nil "anscer_msgs/MissionDB[] mission_db~%~%~%================================================================================~%MSG: anscer_msgs/MissionDB~%string timestamp~%float32 current_distance~%float32 total_distance~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionAnalytics-response)))
  "Returns full string definition for message of type 'MissionAnalytics-response"
  (cl:format cl:nil "anscer_msgs/MissionDB[] mission_db~%~%~%================================================================================~%MSG: anscer_msgs/MissionDB~%string timestamp~%float32 current_distance~%float32 total_distance~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionAnalytics-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'mission_db) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionAnalytics-response>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionAnalytics-response
    (cl:cons ':mission_db (mission_db msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'MissionAnalytics)))
  'MissionAnalytics-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'MissionAnalytics)))
  'MissionAnalytics-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionAnalytics)))
  "Returns string type for a service object of type '<MissionAnalytics>"
  "anscer_msgs/MissionAnalytics")