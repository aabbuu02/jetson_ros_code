; Auto-generated. Do not edit!


(cl:in-package graph_msgs-srv)


;//! \htmlinclude GetGraphPlan-request.msg.html

(cl:defclass <GetGraphPlan-request> (roslisp-msg-protocol:ros-message)
  ((source_id
    :reader source_id
    :initarg :source_id
    :type cl:integer
    :initform 0)
   (target_id
    :reader target_id
    :initarg :target_id
    :type cl:integer
    :initform 0)
   (ignore_goal_orientation
    :reader ignore_goal_orientation
    :initarg :ignore_goal_orientation
    :type cl:boolean
    :initform cl:nil)
   (ignore_path_orientation
    :reader ignore_path_orientation
    :initarg :ignore_path_orientation
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass GetGraphPlan-request (<GetGraphPlan-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetGraphPlan-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetGraphPlan-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-srv:<GetGraphPlan-request> is deprecated: use graph_msgs-srv:GetGraphPlan-request instead.")))

(cl:ensure-generic-function 'source_id-val :lambda-list '(m))
(cl:defmethod source_id-val ((m <GetGraphPlan-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:source_id-val is deprecated.  Use graph_msgs-srv:source_id instead.")
  (source_id m))

(cl:ensure-generic-function 'target_id-val :lambda-list '(m))
(cl:defmethod target_id-val ((m <GetGraphPlan-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:target_id-val is deprecated.  Use graph_msgs-srv:target_id instead.")
  (target_id m))

(cl:ensure-generic-function 'ignore_goal_orientation-val :lambda-list '(m))
(cl:defmethod ignore_goal_orientation-val ((m <GetGraphPlan-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:ignore_goal_orientation-val is deprecated.  Use graph_msgs-srv:ignore_goal_orientation instead.")
  (ignore_goal_orientation m))

(cl:ensure-generic-function 'ignore_path_orientation-val :lambda-list '(m))
(cl:defmethod ignore_path_orientation-val ((m <GetGraphPlan-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:ignore_path_orientation-val is deprecated.  Use graph_msgs-srv:ignore_path_orientation instead.")
  (ignore_path_orientation m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetGraphPlan-request>) ostream)
  "Serializes a message object of type '<GetGraphPlan-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'source_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'source_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'source_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'source_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'target_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'target_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ignore_goal_orientation) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ignore_path_orientation) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetGraphPlan-request>) istream)
  "Deserializes a message object of type '<GetGraphPlan-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'source_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'source_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'source_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'source_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'target_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'target_id)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ignore_goal_orientation) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'ignore_path_orientation) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetGraphPlan-request>)))
  "Returns string type for a service object of type '<GetGraphPlan-request>"
  "graph_msgs/GetGraphPlanRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGraphPlan-request)))
  "Returns string type for a service object of type 'GetGraphPlan-request"
  "graph_msgs/GetGraphPlanRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetGraphPlan-request>)))
  "Returns md5sum for a message object of type '<GetGraphPlan-request>"
  "246031edd693b7aff99fb77edb89c199")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetGraphPlan-request)))
  "Returns md5sum for a message object of type 'GetGraphPlan-request"
  "246031edd693b7aff99fb77edb89c199")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetGraphPlan-request>)))
  "Returns full string definition for message of type '<GetGraphPlan-request>"
  (cl:format cl:nil "# Source and destination IDs~%uint32 source_id~%uint32 target_id~%bool ignore_goal_orientation~%bool ignore_path_orientation~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetGraphPlan-request)))
  "Returns full string definition for message of type 'GetGraphPlan-request"
  (cl:format cl:nil "# Source and destination IDs~%uint32 source_id~%uint32 target_id~%bool ignore_goal_orientation~%bool ignore_path_orientation~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetGraphPlan-request>))
  (cl:+ 0
     4
     4
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetGraphPlan-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetGraphPlan-request
    (cl:cons ':source_id (source_id msg))
    (cl:cons ':target_id (target_id msg))
    (cl:cons ':ignore_goal_orientation (ignore_goal_orientation msg))
    (cl:cons ':ignore_path_orientation (ignore_path_orientation msg))
))
;//! \htmlinclude GetGraphPlan-response.msg.html

(cl:defclass <GetGraphPlan-response> (roslisp-msg-protocol:ros-message)
  ((vertices_in_plan
    :reader vertices_in_plan
    :initarg :vertices_in_plan
    :type (cl:vector graph_msgs-msg:Vertex)
   :initform (cl:make-array 0 :element-type 'graph_msgs-msg:Vertex :initial-element (cl:make-instance 'graph_msgs-msg:Vertex)))
   (plan
    :reader plan
    :initarg :plan
    :type nav_msgs-msg:Path
    :initform (cl:make-instance 'nav_msgs-msg:Path))
   (plan_distance
    :reader plan_distance
    :initarg :plan_distance
    :type cl:float
    :initform 0.0)
   (success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass GetGraphPlan-response (<GetGraphPlan-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetGraphPlan-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetGraphPlan-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_msgs-srv:<GetGraphPlan-response> is deprecated: use graph_msgs-srv:GetGraphPlan-response instead.")))

(cl:ensure-generic-function 'vertices_in_plan-val :lambda-list '(m))
(cl:defmethod vertices_in_plan-val ((m <GetGraphPlan-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:vertices_in_plan-val is deprecated.  Use graph_msgs-srv:vertices_in_plan instead.")
  (vertices_in_plan m))

(cl:ensure-generic-function 'plan-val :lambda-list '(m))
(cl:defmethod plan-val ((m <GetGraphPlan-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:plan-val is deprecated.  Use graph_msgs-srv:plan instead.")
  (plan m))

(cl:ensure-generic-function 'plan_distance-val :lambda-list '(m))
(cl:defmethod plan_distance-val ((m <GetGraphPlan-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:plan_distance-val is deprecated.  Use graph_msgs-srv:plan_distance instead.")
  (plan_distance m))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GetGraphPlan-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:success-val is deprecated.  Use graph_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <GetGraphPlan-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_msgs-srv:message-val is deprecated.  Use graph_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetGraphPlan-response>) ostream)
  "Serializes a message object of type '<GetGraphPlan-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'vertices_in_plan))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'vertices_in_plan))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'plan) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'plan_distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetGraphPlan-response>) istream)
  "Deserializes a message object of type '<GetGraphPlan-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'vertices_in_plan) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'vertices_in_plan)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'graph_msgs-msg:Vertex))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'plan) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'plan_distance) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetGraphPlan-response>)))
  "Returns string type for a service object of type '<GetGraphPlan-response>"
  "graph_msgs/GetGraphPlanResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGraphPlan-response)))
  "Returns string type for a service object of type 'GetGraphPlan-response"
  "graph_msgs/GetGraphPlanResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetGraphPlan-response>)))
  "Returns md5sum for a message object of type '<GetGraphPlan-response>"
  "246031edd693b7aff99fb77edb89c199")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetGraphPlan-response)))
  "Returns md5sum for a message object of type 'GetGraphPlan-response"
  "246031edd693b7aff99fb77edb89c199")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetGraphPlan-response>)))
  "Returns full string definition for message of type '<GetGraphPlan-response>"
  (cl:format cl:nil "Vertex[] vertices_in_plan       # The vertices that are part of the plan~%nav_msgs/Path plan              # The plan from the pre-defined graph curves~%float64 plan_distance           # Total plan distance~%~%bool success                    # Whether planning was success~%string message                  # Messages related to planning~%~%================================================================================~%MSG: graph_msgs/Vertex~%# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%================================================================================~%MSG: nav_msgs/Path~%#An array of poses that represents a Path for a robot to follow~%Header header~%geometry_msgs/PoseStamped[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetGraphPlan-response)))
  "Returns full string definition for message of type 'GetGraphPlan-response"
  (cl:format cl:nil "Vertex[] vertices_in_plan       # The vertices that are part of the plan~%nav_msgs/Path plan              # The plan from the pre-defined graph curves~%float64 plan_distance           # Total plan distance~%~%bool success                    # Whether planning was success~%string message                  # Messages related to planning~%~%================================================================================~%MSG: graph_msgs/Vertex~%# Vertex types~%uint8 NORMAL=0~%uint8 PARK=1~%uint8 CHARGE=2~%uint8 CONTROL=3~%uint8 REPORT=4~%~%uint32 id~%string name~%string alias~%uint8 type~%bool ignore_orientation~%geometry_msgs/Pose pose~%Property[] properties~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: graph_msgs/Property~%string key~%string value~%================================================================================~%MSG: nav_msgs/Path~%#An array of poses that represents a Path for a robot to follow~%Header header~%geometry_msgs/PoseStamped[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetGraphPlan-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'vertices_in_plan) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'plan))
     8
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetGraphPlan-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetGraphPlan-response
    (cl:cons ':vertices_in_plan (vertices_in_plan msg))
    (cl:cons ':plan (plan msg))
    (cl:cons ':plan_distance (plan_distance msg))
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetGraphPlan)))
  'GetGraphPlan-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetGraphPlan)))
  'GetGraphPlan-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetGraphPlan)))
  "Returns string type for a service object of type '<GetGraphPlan>"
  "graph_msgs/GetGraphPlan")