; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude SafetyField.msg.html

(cl:defclass <SafetyField> (roslisp-msg-protocol:ros-message)
  ((field_id
    :reader field_id
    :initarg :field_id
    :type cl:fixnum
    :initform 0)
   (is_front
    :reader is_front
    :initarg :is_front
    :type cl:boolean
    :initform cl:nil)
   (is_rear
    :reader is_rear
    :initarg :is_rear
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SafetyField (<SafetyField>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SafetyField>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SafetyField)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<SafetyField> is deprecated: use anscer_msgs-msg:SafetyField instead.")))

(cl:ensure-generic-function 'field_id-val :lambda-list '(m))
(cl:defmethod field_id-val ((m <SafetyField>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:field_id-val is deprecated.  Use anscer_msgs-msg:field_id instead.")
  (field_id m))

(cl:ensure-generic-function 'is_front-val :lambda-list '(m))
(cl:defmethod is_front-val ((m <SafetyField>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:is_front-val is deprecated.  Use anscer_msgs-msg:is_front instead.")
  (is_front m))

(cl:ensure-generic-function 'is_rear-val :lambda-list '(m))
(cl:defmethod is_rear-val ((m <SafetyField>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:is_rear-val is deprecated.  Use anscer_msgs-msg:is_rear instead.")
  (is_rear m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SafetyField>) ostream)
  "Serializes a message object of type '<SafetyField>"
  (cl:let* ((signed (cl:slot-value msg 'field_id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_front) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_rear) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SafetyField>) istream)
  "Deserializes a message object of type '<SafetyField>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'field_id) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:setf (cl:slot-value msg 'is_front) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'is_rear) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SafetyField>)))
  "Returns string type for a message object of type '<SafetyField>"
  "anscer_msgs/SafetyField")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetyField)))
  "Returns string type for a message object of type 'SafetyField"
  "anscer_msgs/SafetyField")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SafetyField>)))
  "Returns md5sum for a message object of type '<SafetyField>"
  "02646f6a7b4907b4d9f4e67a0cbf76b2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SafetyField)))
  "Returns md5sum for a message object of type 'SafetyField"
  "02646f6a7b4907b4d9f4e67a0cbf76b2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SafetyField>)))
  "Returns full string definition for message of type '<SafetyField>"
  (cl:format cl:nil "int8 field_id~%bool is_front~%bool is_rear~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SafetyField)))
  "Returns full string definition for message of type 'SafetyField"
  (cl:format cl:nil "int8 field_id~%bool is_front~%bool is_rear~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SafetyField>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SafetyField>))
  "Converts a ROS message object to a list"
  (cl:list 'SafetyField
    (cl:cons ':field_id (field_id msg))
    (cl:cons ':is_front (is_front msg))
    (cl:cons ':is_rear (is_rear msg))
))
