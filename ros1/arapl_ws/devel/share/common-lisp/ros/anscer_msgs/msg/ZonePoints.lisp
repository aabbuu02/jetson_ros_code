; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude ZonePoints.msg.html

(cl:defclass <ZonePoints> (roslisp-msg-protocol:ros-message)
  ((index
    :reader index
    :initarg :index
    :type cl:string
    :initform "")
   (coordinates
    :reader coordinates
    :initarg :coordinates
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point))))
)

(cl:defclass ZonePoints (<ZonePoints>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ZonePoints>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ZonePoints)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<ZonePoints> is deprecated: use anscer_msgs-msg:ZonePoints instead.")))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <ZonePoints>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:index-val is deprecated.  Use anscer_msgs-msg:index instead.")
  (index m))

(cl:ensure-generic-function 'coordinates-val :lambda-list '(m))
(cl:defmethod coordinates-val ((m <ZonePoints>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:coordinates-val is deprecated.  Use anscer_msgs-msg:coordinates instead.")
  (coordinates m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ZonePoints>) ostream)
  "Serializes a message object of type '<ZonePoints>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'index))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'index))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'coordinates))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'coordinates))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ZonePoints>) istream)
  "Deserializes a message object of type '<ZonePoints>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'index) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'index) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'coordinates) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'coordinates)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ZonePoints>)))
  "Returns string type for a message object of type '<ZonePoints>"
  "anscer_msgs/ZonePoints")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ZonePoints)))
  "Returns string type for a message object of type 'ZonePoints"
  "anscer_msgs/ZonePoints")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ZonePoints>)))
  "Returns md5sum for a message object of type '<ZonePoints>"
  "c62b504d2caceb162c84163822c2459c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ZonePoints)))
  "Returns md5sum for a message object of type 'ZonePoints"
  "c62b504d2caceb162c84163822c2459c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ZonePoints>)))
  "Returns full string definition for message of type '<ZonePoints>"
  (cl:format cl:nil "string index~%geometry_msgs/Point[] coordinates~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ZonePoints)))
  "Returns full string definition for message of type 'ZonePoints"
  (cl:format cl:nil "string index~%geometry_msgs/Point[] coordinates~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ZonePoints>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'index))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'coordinates) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ZonePoints>))
  "Converts a ROS message object to a list"
  (cl:list 'ZonePoints
    (cl:cons ':index (index msg))
    (cl:cons ':coordinates (coordinates msg))
))
