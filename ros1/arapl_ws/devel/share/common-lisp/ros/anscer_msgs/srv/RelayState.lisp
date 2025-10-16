; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-srv)


;//! \htmlinclude RelayState-request.msg.html

(cl:defclass <RelayState-request> (roslisp-msg-protocol:ros-message)
  ((relay_state
    :reader relay_state
    :initarg :relay_state
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass RelayState-request (<RelayState-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RelayState-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RelayState-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<RelayState-request> is deprecated: use anscer_msgs-srv:RelayState-request instead.")))

(cl:ensure-generic-function 'relay_state-val :lambda-list '(m))
(cl:defmethod relay_state-val ((m <RelayState-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:relay_state-val is deprecated.  Use anscer_msgs-srv:relay_state instead.")
  (relay_state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RelayState-request>) ostream)
  "Serializes a message object of type '<RelayState-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'relay_state) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RelayState-request>) istream)
  "Deserializes a message object of type '<RelayState-request>"
    (cl:setf (cl:slot-value msg 'relay_state) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RelayState-request>)))
  "Returns string type for a service object of type '<RelayState-request>"
  "anscer_msgs/RelayStateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RelayState-request)))
  "Returns string type for a service object of type 'RelayState-request"
  "anscer_msgs/RelayStateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RelayState-request>)))
  "Returns md5sum for a message object of type '<RelayState-request>"
  "e8da6cec6258bbf74a57054e8129516f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RelayState-request)))
  "Returns md5sum for a message object of type 'RelayState-request"
  "e8da6cec6258bbf74a57054e8129516f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RelayState-request>)))
  "Returns full string definition for message of type '<RelayState-request>"
  (cl:format cl:nil "bool relay_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RelayState-request)))
  "Returns full string definition for message of type 'RelayState-request"
  (cl:format cl:nil "bool relay_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RelayState-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RelayState-request>))
  "Converts a ROS message object to a list"
  (cl:list 'RelayState-request
    (cl:cons ':relay_state (relay_state msg))
))
;//! \htmlinclude RelayState-response.msg.html

(cl:defclass <RelayState-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass RelayState-response (<RelayState-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RelayState-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RelayState-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-srv:<RelayState-response> is deprecated: use anscer_msgs-srv:RelayState-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <RelayState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-srv:result-val is deprecated.  Use anscer_msgs-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RelayState-response>) ostream)
  "Serializes a message object of type '<RelayState-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RelayState-response>) istream)
  "Deserializes a message object of type '<RelayState-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RelayState-response>)))
  "Returns string type for a service object of type '<RelayState-response>"
  "anscer_msgs/RelayStateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RelayState-response)))
  "Returns string type for a service object of type 'RelayState-response"
  "anscer_msgs/RelayStateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RelayState-response>)))
  "Returns md5sum for a message object of type '<RelayState-response>"
  "e8da6cec6258bbf74a57054e8129516f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RelayState-response)))
  "Returns md5sum for a message object of type 'RelayState-response"
  "e8da6cec6258bbf74a57054e8129516f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RelayState-response>)))
  "Returns full string definition for message of type '<RelayState-response>"
  (cl:format cl:nil "bool result~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RelayState-response)))
  "Returns full string definition for message of type 'RelayState-response"
  (cl:format cl:nil "bool result~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RelayState-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RelayState-response>))
  "Converts a ROS message object to a list"
  (cl:list 'RelayState-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'RelayState)))
  'RelayState-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'RelayState)))
  'RelayState-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RelayState)))
  "Returns string type for a service object of type '<RelayState>"
  "anscer_msgs/RelayState")