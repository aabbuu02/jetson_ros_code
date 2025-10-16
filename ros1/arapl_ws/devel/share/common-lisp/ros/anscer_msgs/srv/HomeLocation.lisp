; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude HomeLocation-request.msg.html

(cl:defclass <HomeLocation-request> (roslisp-msg-protocol:ros-message)
  ((robot_pose
    :reader robot_pose
    :initarg :robot_pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose)))
)

(cl:defclass HomeLocation-request (<HomeLocation-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <HomeLocation-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'HomeLocation-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<HomeLocation-request> is deprecated: use anscer_msgs-srv:HomeLocation-request instead.")))

(cl:ensure-generic-function 'robot_pose-val :lambda-list '(m))
(cl:defmethod robot_pose-val ((m <HomeLocation-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:robot_pose-val is deprecated.  Use anscer_msgs-srv:robot_pose instead.")
  (robot_pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <HomeLocation-request>) ostream)
  "Serializes a message object of type '<HomeLocation-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'robot_pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <HomeLocation-request>) istream)
  "Deserializes a message object of type '<HomeLocation-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'robot_pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<HomeLocation-request>)))
  "Returns string type for a service object of type '<HomeLocation-request>"
  "anscer_msgs/HomeLocationRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HomeLocation-request)))
  "Returns string type for a service object of type 'HomeLocation-request"
  "anscer_msgs/HomeLocationRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<HomeLocation-request>)))
  "Returns md5sum for a message object of type '<HomeLocation-request>"
  "2fdc892b1cd61ba46702fac69928aa1a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'HomeLocation-request)))
  "Returns md5sum for a message object of type 'HomeLocation-request"
  "2fdc892b1cd61ba46702fac69928aa1a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<HomeLocation-request>)))
  "Returns full string definition for message of type '<HomeLocation-request>"
  (cl:format cl:nil "geometry_msgs/Pose robot_pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'HomeLocation-request)))
  "Returns full string definition for message of type 'HomeLocation-request"
  (cl:format cl:nil "geometry_msgs/Pose robot_pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <HomeLocation-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'robot_pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <HomeLocation-request>))
  "Converts a ROS message object to a list"
  (cl:list 'HomeLocation-request
    (cl:cons ':robot_pose (robot_pose msg))
))
;//! \htmlinclude HomeLocation-response.msg.html

(cl:defclass <HomeLocation-response> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (is_available
    :reader is_available
    :initarg :is_available
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass HomeLocation-response (<HomeLocation-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <HomeLocation-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'HomeLocation-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<HomeLocation-response> is deprecated: use anscer_msgs-srv:HomeLocation-response instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <HomeLocation-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:id-val is deprecated.  Use anscer_msgs-srv:id instead.")
  (id m))

(cl:ensure-generic-function 'is_available-val :lambda-list '(m))
(cl:defmethod is_available-val ((m <HomeLocation-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:is_available-val is deprecated.  Use anscer_msgs-srv:is_available instead.")
  (is_available m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <HomeLocation-response>) ostream)
  "Serializes a message object of type '<HomeLocation-response>"
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_available) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <HomeLocation-response>) istream)
  "Deserializes a message object of type '<HomeLocation-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:slot-value msg 'is_available) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<HomeLocation-response>)))
  "Returns string type for a service object of type '<HomeLocation-response>"
  "anscer_msgs/HomeLocationResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HomeLocation-response)))
  "Returns string type for a service object of type 'HomeLocation-response"
  "anscer_msgs/HomeLocationResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<HomeLocation-response>)))
  "Returns md5sum for a message object of type '<HomeLocation-response>"
  "2fdc892b1cd61ba46702fac69928aa1a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'HomeLocation-response)))
  "Returns md5sum for a message object of type 'HomeLocation-response"
  "2fdc892b1cd61ba46702fac69928aa1a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<HomeLocation-response>)))
  "Returns full string definition for message of type '<HomeLocation-response>"
  (cl:format cl:nil "int32 id~%bool is_available~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'HomeLocation-response)))
  "Returns full string definition for message of type 'HomeLocation-response"
  (cl:format cl:nil "int32 id~%bool is_available~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <HomeLocation-response>))
  (cl:+ 0
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <HomeLocation-response>))
  "Converts a ROS message object to a list"
  (cl:list 'HomeLocation-response
    (cl:cons ':id (id msg))
    (cl:cons ':is_available (is_available msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'HomeLocation)))
  'HomeLocation-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'HomeLocation)))
  'HomeLocation-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HomeLocation)))
  "Returns string type for a service object of type '<HomeLocation>"
  "anscer_msgs/HomeLocation")