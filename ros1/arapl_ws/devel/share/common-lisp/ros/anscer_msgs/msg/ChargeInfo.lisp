; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude ChargeInfo.msg.html

(cl:defclass <ChargeInfo> (roslisp-msg-protocol:ros-message)
  ((charger_activate
    :reader charger_activate
    :initarg :charger_activate
    :type cl:boolean
    :initform cl:nil)
   (charge_time
    :reader charge_time
    :initarg :charge_time
    :type cl:integer
    :initform 0)
   (ignore_time
    :reader ignore_time
    :initarg :ignore_time
    :type cl:boolean
    :initform cl:nil)
   (charge_percentage
    :reader charge_percentage
    :initarg :charge_percentage
    :type cl:float
    :initform 0.0)
   (ignore_percentage
    :reader ignore_percentage
    :initarg :ignore_percentage
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ChargeInfo (<ChargeInfo>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ChargeInfo>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ChargeInfo)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<ChargeInfo> is deprecated: use anscer_msgs-msg:ChargeInfo instead.")))

(cl:ensure-generic-function 'charger_activate-val :lambda-list '(m))
(cl:defmethod charger_activate-val ((m <ChargeInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:charger_activate-val is deprecated.  Use anscer_msgs-msg:charger_activate instead.")
  (charger_activate m))

(cl:ensure-generic-function 'charge_time-val :lambda-list '(m))
(cl:defmethod charge_time-val ((m <ChargeInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:charge_time-val is deprecated.  Use anscer_msgs-msg:charge_time instead.")
  (charge_time m))

(cl:ensure-generic-function 'ignore_time-val :lambda-list '(m))
(cl:defmethod ignore_time-val ((m <ChargeInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:ignore_time-val is deprecated.  Use anscer_msgs-msg:ignore_time instead.")
  (ignore_time m))

(cl:ensure-generic-function 'charge_percentage-val :lambda-list '(m))
(cl:defmethod charge_percentage-val ((m <ChargeInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:charge_percentage-val is deprecated.  Use anscer_msgs-msg:charge_percentage instead.")
  (charge_percentage m))

(cl:ensure-generic-function 'ignore_percentage-val :lambda-list '(m))
(cl:defmethod ignore_percentage-val ((m <ChargeInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:ignore_percentage-val is deprecated.  Use anscer_msgs-msg:ignore_percentage instead.")
  (ignore_percentage m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<ChargeInfo>)))
    "Constants for message type '<ChargeInfo>"
  '((:CONNECTED . 1)
    (:DISCONNECTED . 2)
    (:OVERRIDE . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'ChargeInfo)))
    "Constants for message type 'ChargeInfo"
  '((:CONNECTED . 1)
    (:DISCONNECTED . 2)
    (:OVERRIDE . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ChargeInfo>) ostream)
  "Serializes a message object of type '<ChargeInfo>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'charger_activate) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'charge_time)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ignore_time) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'charge_percentage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ignore_percentage) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ChargeInfo>) istream)
  "Deserializes a message object of type '<ChargeInfo>"
    (cl:setf (cl:slot-value msg 'charger_activate) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'charge_time) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:slot-value msg 'ignore_time) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'charge_percentage) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'ignore_percentage) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ChargeInfo>)))
  "Returns string type for a message object of type '<ChargeInfo>"
  "anscer_msgs/ChargeInfo")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ChargeInfo)))
  "Returns string type for a message object of type 'ChargeInfo"
  "anscer_msgs/ChargeInfo")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ChargeInfo>)))
  "Returns md5sum for a message object of type '<ChargeInfo>"
  "07a5813f322d0f1699de1925e6361210")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ChargeInfo)))
  "Returns md5sum for a message object of type 'ChargeInfo"
  "07a5813f322d0f1699de1925e6361210")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ChargeInfo>)))
  "Returns full string definition for message of type '<ChargeInfo>"
  (cl:format cl:nil "uint8 CONNECTED=1~%uint8 DISCONNECTED=2~%uint8 OVERRIDE=3~%~%bool charger_activate~%int32 charge_time~%bool ignore_time~%float32 charge_percentage~%bool ignore_percentage~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ChargeInfo)))
  "Returns full string definition for message of type 'ChargeInfo"
  (cl:format cl:nil "uint8 CONNECTED=1~%uint8 DISCONNECTED=2~%uint8 OVERRIDE=3~%~%bool charger_activate~%int32 charge_time~%bool ignore_time~%float32 charge_percentage~%bool ignore_percentage~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ChargeInfo>))
  (cl:+ 0
     1
     4
     1
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ChargeInfo>))
  "Converts a ROS message object to a list"
  (cl:list 'ChargeInfo
    (cl:cons ':charger_activate (charger_activate msg))
    (cl:cons ':charge_time (charge_time msg))
    (cl:cons ':ignore_time (ignore_time msg))
    (cl:cons ':charge_percentage (charge_percentage msg))
    (cl:cons ':ignore_percentage (ignore_percentage msg))
))
