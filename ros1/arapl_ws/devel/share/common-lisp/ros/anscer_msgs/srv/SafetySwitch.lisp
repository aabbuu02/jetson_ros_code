; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude SafetySwitch-request.msg.html

(cl:defclass <SafetySwitch-request> (roslisp-msg-protocol:ros-message)
  ((safety_switch
    :reader safety_switch
    :initarg :safety_switch
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SafetySwitch-request (<SafetySwitch-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SafetySwitch-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SafetySwitch-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<SafetySwitch-request> is deprecated: use anscer_msgs-srv:SafetySwitch-request instead.")))

(cl:ensure-generic-function 'safety_switch-val :lambda-list '(m))
(cl:defmethod safety_switch-val ((m <SafetySwitch-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:safety_switch-val is deprecated.  Use anscer_msgs-srv:safety_switch instead.")
  (safety_switch m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SafetySwitch-request>) ostream)
  "Serializes a message object of type '<SafetySwitch-request>"
  (cl:let* ((signed (cl:slot-value msg 'safety_switch)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SafetySwitch-request>) istream)
  "Deserializes a message object of type '<SafetySwitch-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'safety_switch) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SafetySwitch-request>)))
  "Returns string type for a service object of type '<SafetySwitch-request>"
  "anscer_msgs/SafetySwitchRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetySwitch-request)))
  "Returns string type for a service object of type 'SafetySwitch-request"
  "anscer_msgs/SafetySwitchRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SafetySwitch-request>)))
  "Returns md5sum for a message object of type '<SafetySwitch-request>"
  "417735b2444563673e85098665efa4f8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SafetySwitch-request)))
  "Returns md5sum for a message object of type 'SafetySwitch-request"
  "417735b2444563673e85098665efa4f8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SafetySwitch-request>)))
  "Returns full string definition for message of type '<SafetySwitch-request>"
  (cl:format cl:nil "int8 safety_switch~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SafetySwitch-request)))
  "Returns full string definition for message of type 'SafetySwitch-request"
  (cl:format cl:nil "int8 safety_switch~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SafetySwitch-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SafetySwitch-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SafetySwitch-request
    (cl:cons ':safety_switch (safety_switch msg))
))
;//! \htmlinclude SafetySwitch-response.msg.html

(cl:defclass <SafetySwitch-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SafetySwitch-response (<SafetySwitch-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SafetySwitch-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SafetySwitch-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<SafetySwitch-response> is deprecated: use anscer_msgs-srv:SafetySwitch-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <SafetySwitch-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:status-val is deprecated.  Use anscer_msgs-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SafetySwitch-response>) ostream)
  "Serializes a message object of type '<SafetySwitch-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SafetySwitch-response>) istream)
  "Deserializes a message object of type '<SafetySwitch-response>"
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SafetySwitch-response>)))
  "Returns string type for a service object of type '<SafetySwitch-response>"
  "anscer_msgs/SafetySwitchResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetySwitch-response)))
  "Returns string type for a service object of type 'SafetySwitch-response"
  "anscer_msgs/SafetySwitchResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SafetySwitch-response>)))
  "Returns md5sum for a message object of type '<SafetySwitch-response>"
  "417735b2444563673e85098665efa4f8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SafetySwitch-response)))
  "Returns md5sum for a message object of type 'SafetySwitch-response"
  "417735b2444563673e85098665efa4f8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SafetySwitch-response>)))
  "Returns full string definition for message of type '<SafetySwitch-response>"
  (cl:format cl:nil "bool status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SafetySwitch-response)))
  "Returns full string definition for message of type 'SafetySwitch-response"
  (cl:format cl:nil "bool status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SafetySwitch-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SafetySwitch-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SafetySwitch-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SafetySwitch)))
  'SafetySwitch-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SafetySwitch)))
  'SafetySwitch-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetySwitch)))
  "Returns string type for a service object of type '<SafetySwitch>"
  "anscer_msgs/SafetySwitch")