; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude SetZone-request.msg.html

(cl:defclass <SetZone-request> (roslisp-msg-protocol:ros-message)
  ((zone_points
    :reader zone_points
    :initarg :zone_points
    :type (cl:vector anscer_msgs-msg:ZonePoints)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:ZonePoints :initial-element (cl:make-instance 'anscer_msgs-msg:ZonePoints))))
)

(cl:defclass SetZone-request (<SetZone-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetZone-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetZone-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<SetZone-request> is deprecated: use anscer_msgs-srv:SetZone-request instead.")))

(cl:ensure-generic-function 'zone_points-val :lambda-list '(m))
(cl:defmethod zone_points-val ((m <SetZone-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:zone_points-val is deprecated.  Use anscer_msgs-srv:zone_points instead.")
  (zone_points m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetZone-request>) ostream)
  "Serializes a message object of type '<SetZone-request>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'zone_points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'zone_points))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetZone-request>) istream)
  "Deserializes a message object of type '<SetZone-request>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'zone_points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'zone_points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:ZonePoints))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetZone-request>)))
  "Returns string type for a service object of type '<SetZone-request>"
  "anscer_msgs/SetZoneRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetZone-request)))
  "Returns string type for a service object of type 'SetZone-request"
  "anscer_msgs/SetZoneRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetZone-request>)))
  "Returns md5sum for a message object of type '<SetZone-request>"
  "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetZone-request)))
  "Returns md5sum for a message object of type 'SetZone-request"
  "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetZone-request>)))
  "Returns full string definition for message of type '<SetZone-request>"
  (cl:format cl:nil "anscer_msgs/ZonePoints[] zone_points~%~%================================================================================~%MSG: anscer_msgs/ZonePoints~%string index~%geometry_msgs/Point[] coordinates~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetZone-request)))
  "Returns full string definition for message of type 'SetZone-request"
  (cl:format cl:nil "anscer_msgs/ZonePoints[] zone_points~%~%================================================================================~%MSG: anscer_msgs/ZonePoints~%string index~%geometry_msgs/Point[] coordinates~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetZone-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'zone_points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetZone-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetZone-request
    (cl:cons ':zone_points (zone_points msg))
))
;//! \htmlinclude SetZone-response.msg.html

(cl:defclass <SetZone-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SetZone-response (<SetZone-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetZone-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetZone-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<SetZone-response> is deprecated: use anscer_msgs-srv:SetZone-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <SetZone-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:status-val is deprecated.  Use anscer_msgs-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetZone-response>) ostream)
  "Serializes a message object of type '<SetZone-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetZone-response>) istream)
  "Deserializes a message object of type '<SetZone-response>"
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetZone-response>)))
  "Returns string type for a service object of type '<SetZone-response>"
  "anscer_msgs/SetZoneResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetZone-response)))
  "Returns string type for a service object of type 'SetZone-response"
  "anscer_msgs/SetZoneResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetZone-response>)))
  "Returns md5sum for a message object of type '<SetZone-response>"
  "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetZone-response)))
  "Returns md5sum for a message object of type 'SetZone-response"
  "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetZone-response>)))
  "Returns full string definition for message of type '<SetZone-response>"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetZone-response)))
  "Returns full string definition for message of type 'SetZone-response"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetZone-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetZone-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetZone-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetZone)))
  'SetZone-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetZone)))
  'SetZone-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetZone)))
  "Returns string type for a service object of type '<SetZone>"
  "anscer_msgs/SetZone")