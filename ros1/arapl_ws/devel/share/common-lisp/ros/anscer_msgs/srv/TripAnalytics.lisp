; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude TripAnalytics-request.msg.html

(cl:defclass <TripAnalytics-request> (roslisp-msg-protocol:ros-message)
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

(cl:defclass TripAnalytics-request (<TripAnalytics-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TripAnalytics-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TripAnalytics-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<TripAnalytics-request> is deprecated: use anscer_msgs-srv:TripAnalytics-request instead.")))

(cl:ensure-generic-function 'start_date-val :lambda-list '(m))
(cl:defmethod start_date-val ((m <TripAnalytics-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:start_date-val is deprecated.  Use anscer_msgs-srv:start_date instead.")
  (start_date m))

(cl:ensure-generic-function 'end_date-val :lambda-list '(m))
(cl:defmethod end_date-val ((m <TripAnalytics-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:end_date-val is deprecated.  Use anscer_msgs-srv:end_date instead.")
  (end_date m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TripAnalytics-request>) ostream)
  "Serializes a message object of type '<TripAnalytics-request>"
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
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TripAnalytics-request>) istream)
  "Deserializes a message object of type '<TripAnalytics-request>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TripAnalytics-request>)))
  "Returns string type for a service object of type '<TripAnalytics-request>"
  "anscer_msgs/TripAnalyticsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TripAnalytics-request)))
  "Returns string type for a service object of type 'TripAnalytics-request"
  "anscer_msgs/TripAnalyticsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TripAnalytics-request>)))
  "Returns md5sum for a message object of type '<TripAnalytics-request>"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TripAnalytics-request)))
  "Returns md5sum for a message object of type 'TripAnalytics-request"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TripAnalytics-request>)))
  "Returns full string definition for message of type '<TripAnalytics-request>"
  (cl:format cl:nil "string start_date~%string end_date~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TripAnalytics-request)))
  "Returns full string definition for message of type 'TripAnalytics-request"
  (cl:format cl:nil "string start_date~%string end_date~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TripAnalytics-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'start_date))
     4 (cl:length (cl:slot-value msg 'end_date))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TripAnalytics-request>))
  "Converts a ROS message object to a list"
  (cl:list 'TripAnalytics-request
    (cl:cons ':start_date (start_date msg))
    (cl:cons ':end_date (end_date msg))
))
;//! \htmlinclude TripAnalytics-response.msg.html

(cl:defclass <TripAnalytics-response> (roslisp-msg-protocol:ros-message)
  ((mission_db
    :reader mission_db
    :initarg :mission_db
    :type (cl:vector anscer_msgs-msg:MissionDB)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:MissionDB :initial-element (cl:make-instance 'anscer_msgs-msg:MissionDB))))
)

(cl:defclass TripAnalytics-response (<TripAnalytics-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TripAnalytics-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TripAnalytics-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<TripAnalytics-response> is deprecated: use anscer_msgs-srv:TripAnalytics-response instead.")))

(cl:ensure-generic-function 'mission_db-val :lambda-list '(m))
(cl:defmethod mission_db-val ((m <TripAnalytics-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:mission_db-val is deprecated.  Use anscer_msgs-srv:mission_db instead.")
  (mission_db m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TripAnalytics-response>) ostream)
  "Serializes a message object of type '<TripAnalytics-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'mission_db))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'mission_db))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TripAnalytics-response>) istream)
  "Deserializes a message object of type '<TripAnalytics-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TripAnalytics-response>)))
  "Returns string type for a service object of type '<TripAnalytics-response>"
  "anscer_msgs/TripAnalyticsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TripAnalytics-response)))
  "Returns string type for a service object of type 'TripAnalytics-response"
  "anscer_msgs/TripAnalyticsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TripAnalytics-response>)))
  "Returns md5sum for a message object of type '<TripAnalytics-response>"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TripAnalytics-response)))
  "Returns md5sum for a message object of type 'TripAnalytics-response"
  "08b960482269c6ce2305b1dc4350baa3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TripAnalytics-response>)))
  "Returns full string definition for message of type '<TripAnalytics-response>"
  (cl:format cl:nil "anscer_msgs/MissionDB[] mission_db~%~%~%================================================================================~%MSG: anscer_msgs/MissionDB~%string timestamp~%float32 current_distance~%float32 total_distance~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TripAnalytics-response)))
  "Returns full string definition for message of type 'TripAnalytics-response"
  (cl:format cl:nil "anscer_msgs/MissionDB[] mission_db~%~%~%================================================================================~%MSG: anscer_msgs/MissionDB~%string timestamp~%float32 current_distance~%float32 total_distance~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TripAnalytics-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'mission_db) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TripAnalytics-response>))
  "Converts a ROS message object to a list"
  (cl:list 'TripAnalytics-response
    (cl:cons ':mission_db (mission_db msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'TripAnalytics)))
  'TripAnalytics-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'TripAnalytics)))
  'TripAnalytics-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TripAnalytics)))
  "Returns string type for a service object of type '<TripAnalytics>"
  "anscer_msgs/TripAnalytics")