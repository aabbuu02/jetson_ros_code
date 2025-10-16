; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude ZoneInformation.msg.html

(cl:defclass <ZoneInformation> (roslisp-msg-protocol:ros-message)
  ((indication_info
    :reader indication_info
    :initarg :indication_info
    :type anscer_msgs-msg:Indication
    :initform (cl:make-instance 'anscer_msgs-msg:Indication))
   (speed_factor
    :reader speed_factor
    :initarg :speed_factor
    :type cl:float
    :initform 0.0))
)

(cl:defclass ZoneInformation (<ZoneInformation>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ZoneInformation>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ZoneInformation)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<ZoneInformation> is deprecated: use anscer_msgs-msg:ZoneInformation instead.")))

(cl:ensure-generic-function 'indication_info-val :lambda-list '(m))
(cl:defmethod indication_info-val ((m <ZoneInformation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:indication_info-val is deprecated.  Use anscer_msgs-msg:indication_info instead.")
  (indication_info m))

(cl:ensure-generic-function 'speed_factor-val :lambda-list '(m))
(cl:defmethod speed_factor-val ((m <ZoneInformation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:speed_factor-val is deprecated.  Use anscer_msgs-msg:speed_factor instead.")
  (speed_factor m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ZoneInformation>) ostream)
  "Serializes a message object of type '<ZoneInformation>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'indication_info) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed_factor))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ZoneInformation>) istream)
  "Deserializes a message object of type '<ZoneInformation>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'indication_info) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed_factor) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ZoneInformation>)))
  "Returns string type for a message object of type '<ZoneInformation>"
  "anscer_msgs/ZoneInformation")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ZoneInformation)))
  "Returns string type for a message object of type 'ZoneInformation"
  "anscer_msgs/ZoneInformation")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ZoneInformation>)))
  "Returns md5sum for a message object of type '<ZoneInformation>"
  "37c3f4225b2755242cf0813eaae1cb1a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ZoneInformation)))
  "Returns md5sum for a message object of type 'ZoneInformation"
  "37c3f4225b2755242cf0813eaae1cb1a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ZoneInformation>)))
  "Returns full string definition for message of type '<ZoneInformation>"
  (cl:format cl:nil "anscer_msgs/Indication indication_info~%float32 speed_factor~%~%================================================================================~%MSG: anscer_msgs/Indication~%string color~%int8 color_mode~%bool buzzer~%int8 buzzer_mode~%int16 priority~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ZoneInformation)))
  "Returns full string definition for message of type 'ZoneInformation"
  (cl:format cl:nil "anscer_msgs/Indication indication_info~%float32 speed_factor~%~%================================================================================~%MSG: anscer_msgs/Indication~%string color~%int8 color_mode~%bool buzzer~%int8 buzzer_mode~%int16 priority~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ZoneInformation>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'indication_info))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ZoneInformation>))
  "Converts a ROS message object to a list"
  (cl:list 'ZoneInformation
    (cl:cons ':indication_info (indication_info msg))
    (cl:cons ':speed_factor (speed_factor msg))
))
