; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MissionInfo.msg.html

(cl:defclass <MissionInfo> (roslisp-msg-protocol:ros-message)
  ((mission_info
    :reader mission_info
    :initarg :mission_info
    :type (cl:vector anscer_msgs-msg:MissionData)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:MissionData :initial-element (cl:make-instance 'anscer_msgs-msg:MissionData))))
)

(cl:defclass MissionInfo (<MissionInfo>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionInfo>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionInfo)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MissionInfo> is deprecated: use anscer_msgs-msg:MissionInfo instead.")))

(cl:ensure-generic-function 'mission_info-val :lambda-list '(m))
(cl:defmethod mission_info-val ((m <MissionInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:mission_info-val is deprecated.  Use anscer_msgs-msg:mission_info instead.")
  (mission_info m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionInfo>) ostream)
  "Serializes a message object of type '<MissionInfo>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'mission_info))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'mission_info))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionInfo>) istream)
  "Deserializes a message object of type '<MissionInfo>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'mission_info) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'mission_info)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:MissionData))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionInfo>)))
  "Returns string type for a message object of type '<MissionInfo>"
  "anscer_msgs/MissionInfo")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionInfo)))
  "Returns string type for a message object of type 'MissionInfo"
  "anscer_msgs/MissionInfo")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionInfo>)))
  "Returns md5sum for a message object of type '<MissionInfo>"
  "29be06f7c3d77e1344134d3a99624eb2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionInfo)))
  "Returns md5sum for a message object of type 'MissionInfo"
  "29be06f7c3d77e1344134d3a99624eb2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionInfo>)))
  "Returns full string definition for message of type '<MissionInfo>"
  (cl:format cl:nil "anscer_msgs/MissionData[] mission_info~%~%~%================================================================================~%MSG: anscer_msgs/MissionData~%string mission_name~%int16 success_count~%int16 mission_count~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionInfo)))
  "Returns full string definition for message of type 'MissionInfo"
  (cl:format cl:nil "anscer_msgs/MissionData[] mission_info~%~%~%================================================================================~%MSG: anscer_msgs/MissionData~%string mission_name~%int16 success_count~%int16 mission_count~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionInfo>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'mission_info) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionInfo>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionInfo
    (cl:cons ':mission_info (mission_info msg))
))
