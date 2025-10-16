; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude UserFeedback-request.msg.html

(cl:defclass <UserFeedback-request> (roslisp-msg-protocol:ros-message)
  ((user_feedback
    :reader user_feedback
    :initarg :user_feedback
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass UserFeedback-request (<UserFeedback-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UserFeedback-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UserFeedback-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<UserFeedback-request> is deprecated: use anscer_msgs-srv:UserFeedback-request instead.")))

(cl:ensure-generic-function 'user_feedback-val :lambda-list '(m))
(cl:defmethod user_feedback-val ((m <UserFeedback-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:user_feedback-val is deprecated.  Use anscer_msgs-srv:user_feedback instead.")
  (user_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UserFeedback-request>) ostream)
  "Serializes a message object of type '<UserFeedback-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'user_feedback) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UserFeedback-request>) istream)
  "Deserializes a message object of type '<UserFeedback-request>"
    (cl:setf (cl:slot-value msg 'user_feedback) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UserFeedback-request>)))
  "Returns string type for a service object of type '<UserFeedback-request>"
  "anscer_msgs/UserFeedbackRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UserFeedback-request)))
  "Returns string type for a service object of type 'UserFeedback-request"
  "anscer_msgs/UserFeedbackRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UserFeedback-request>)))
  "Returns md5sum for a message object of type '<UserFeedback-request>"
  "0463a42b390cfbf0c6dd3fa4dc48abcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UserFeedback-request)))
  "Returns md5sum for a message object of type 'UserFeedback-request"
  "0463a42b390cfbf0c6dd3fa4dc48abcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UserFeedback-request>)))
  "Returns full string definition for message of type '<UserFeedback-request>"
  (cl:format cl:nil "bool user_feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UserFeedback-request)))
  "Returns full string definition for message of type 'UserFeedback-request"
  (cl:format cl:nil "bool user_feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UserFeedback-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UserFeedback-request>))
  "Converts a ROS message object to a list"
  (cl:list 'UserFeedback-request
    (cl:cons ':user_feedback (user_feedback msg))
))
;//! \htmlinclude UserFeedback-response.msg.html

(cl:defclass <UserFeedback-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass UserFeedback-response (<UserFeedback-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UserFeedback-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UserFeedback-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<UserFeedback-response> is deprecated: use anscer_msgs-srv:UserFeedback-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <UserFeedback-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:status-val is deprecated.  Use anscer_msgs-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UserFeedback-response>) ostream)
  "Serializes a message object of type '<UserFeedback-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UserFeedback-response>) istream)
  "Deserializes a message object of type '<UserFeedback-response>"
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UserFeedback-response>)))
  "Returns string type for a service object of type '<UserFeedback-response>"
  "anscer_msgs/UserFeedbackResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UserFeedback-response)))
  "Returns string type for a service object of type 'UserFeedback-response"
  "anscer_msgs/UserFeedbackResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UserFeedback-response>)))
  "Returns md5sum for a message object of type '<UserFeedback-response>"
  "0463a42b390cfbf0c6dd3fa4dc48abcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UserFeedback-response)))
  "Returns md5sum for a message object of type 'UserFeedback-response"
  "0463a42b390cfbf0c6dd3fa4dc48abcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UserFeedback-response>)))
  "Returns full string definition for message of type '<UserFeedback-response>"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UserFeedback-response)))
  "Returns full string definition for message of type 'UserFeedback-response"
  (cl:format cl:nil "bool status~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UserFeedback-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UserFeedback-response>))
  "Converts a ROS message object to a list"
  (cl:list 'UserFeedback-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'UserFeedback)))
  'UserFeedback-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'UserFeedback)))
  'UserFeedback-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UserFeedback)))
  "Returns string type for a service object of type '<UserFeedback>"
  "anscer_msgs/UserFeedback")