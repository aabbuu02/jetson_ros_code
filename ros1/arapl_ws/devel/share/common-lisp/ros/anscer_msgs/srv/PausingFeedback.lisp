; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude PausingFeedback-request.msg.html

(cl:defclass <PausingFeedback-request> (roslisp-msg-protocol:ros-message)
  ((pause_feedback
    :reader pause_feedback
    :initarg :pause_feedback
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass PausingFeedback-request (<PausingFeedback-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PausingFeedback-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PausingFeedback-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<PausingFeedback-request> is deprecated: use anscer_msgs-srv:PausingFeedback-request instead.")))

(cl:ensure-generic-function 'pause_feedback-val :lambda-list '(m))
(cl:defmethod pause_feedback-val ((m <PausingFeedback-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:pause_feedback-val is deprecated.  Use anscer_msgs-srv:pause_feedback instead.")
  (pause_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PausingFeedback-request>) ostream)
  "Serializes a message object of type '<PausingFeedback-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'pause_feedback) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PausingFeedback-request>) istream)
  "Deserializes a message object of type '<PausingFeedback-request>"
    (cl:setf (cl:slot-value msg 'pause_feedback) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PausingFeedback-request>)))
  "Returns string type for a service object of type '<PausingFeedback-request>"
  "anscer_msgs/PausingFeedbackRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PausingFeedback-request)))
  "Returns string type for a service object of type 'PausingFeedback-request"
  "anscer_msgs/PausingFeedbackRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PausingFeedback-request>)))
  "Returns md5sum for a message object of type '<PausingFeedback-request>"
  "35c9adc405f74949be455cf9463364f8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PausingFeedback-request)))
  "Returns md5sum for a message object of type 'PausingFeedback-request"
  "35c9adc405f74949be455cf9463364f8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PausingFeedback-request>)))
  "Returns full string definition for message of type '<PausingFeedback-request>"
  (cl:format cl:nil "bool pause_feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PausingFeedback-request)))
  "Returns full string definition for message of type 'PausingFeedback-request"
  (cl:format cl:nil "bool pause_feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PausingFeedback-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PausingFeedback-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PausingFeedback-request
    (cl:cons ':pause_feedback (pause_feedback msg))
))
;//! \htmlinclude PausingFeedback-response.msg.html

(cl:defclass <PausingFeedback-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass PausingFeedback-response (<PausingFeedback-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PausingFeedback-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PausingFeedback-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<PausingFeedback-response> is deprecated: use anscer_msgs-srv:PausingFeedback-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <PausingFeedback-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:status-val is deprecated.  Use anscer_msgs-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PausingFeedback-response>) ostream)
  "Serializes a message object of type '<PausingFeedback-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PausingFeedback-response>) istream)
  "Deserializes a message object of type '<PausingFeedback-response>"
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PausingFeedback-response>)))
  "Returns string type for a service object of type '<PausingFeedback-response>"
  "anscer_msgs/PausingFeedbackResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PausingFeedback-response)))
  "Returns string type for a service object of type 'PausingFeedback-response"
  "anscer_msgs/PausingFeedbackResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PausingFeedback-response>)))
  "Returns md5sum for a message object of type '<PausingFeedback-response>"
  "35c9adc405f74949be455cf9463364f8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PausingFeedback-response)))
  "Returns md5sum for a message object of type 'PausingFeedback-response"
  "35c9adc405f74949be455cf9463364f8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PausingFeedback-response>)))
  "Returns full string definition for message of type '<PausingFeedback-response>"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PausingFeedback-response)))
  "Returns full string definition for message of type 'PausingFeedback-response"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PausingFeedback-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PausingFeedback-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PausingFeedback-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PausingFeedback)))
  'PausingFeedback-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PausingFeedback)))
  'PausingFeedback-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PausingFeedback)))
  "Returns string type for a service object of type '<PausingFeedback>"
  "anscer_msgs/PausingFeedback")