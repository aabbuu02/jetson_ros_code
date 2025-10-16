; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MotorFaultFlags.msg.html

(cl:defclass <MotorFaultFlags> (roslisp-msg-protocol:ros-message)
  ((overheat
    :reader overheat
    :initarg :overheat
    :type cl:boolean
    :initform cl:nil)
   (overvoltage
    :reader overvoltage
    :initarg :overvoltage
    :type cl:boolean
    :initform cl:nil)
   (undervoltage
    :reader undervoltage
    :initarg :undervoltage
    :type cl:boolean
    :initform cl:nil)
   (short_circuit
    :reader short_circuit
    :initarg :short_circuit
    :type cl:boolean
    :initform cl:nil)
   (emergency_stop
    :reader emergency_stop
    :initarg :emergency_stop
    :type cl:boolean
    :initform cl:nil)
   (motor_setup_fault
    :reader motor_setup_fault
    :initarg :motor_setup_fault
    :type cl:boolean
    :initform cl:nil)
   (mosfet_failure
    :reader mosfet_failure
    :initarg :mosfet_failure
    :type cl:boolean
    :initform cl:nil)
   (default_configuration
    :reader default_configuration
    :initarg :default_configuration
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MotorFaultFlags (<MotorFaultFlags>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MotorFaultFlags>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MotorFaultFlags)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MotorFaultFlags> is deprecated: use anscer_msgs-msg:MotorFaultFlags instead.")))

(cl:ensure-generic-function 'overheat-val :lambda-list '(m))
(cl:defmethod overheat-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:overheat-val is deprecated.  Use anscer_msgs-msg:overheat instead.")
  (overheat m))

(cl:ensure-generic-function 'overvoltage-val :lambda-list '(m))
(cl:defmethod overvoltage-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:overvoltage-val is deprecated.  Use anscer_msgs-msg:overvoltage instead.")
  (overvoltage m))

(cl:ensure-generic-function 'undervoltage-val :lambda-list '(m))
(cl:defmethod undervoltage-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:undervoltage-val is deprecated.  Use anscer_msgs-msg:undervoltage instead.")
  (undervoltage m))

(cl:ensure-generic-function 'short_circuit-val :lambda-list '(m))
(cl:defmethod short_circuit-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:short_circuit-val is deprecated.  Use anscer_msgs-msg:short_circuit instead.")
  (short_circuit m))

(cl:ensure-generic-function 'emergency_stop-val :lambda-list '(m))
(cl:defmethod emergency_stop-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:emergency_stop-val is deprecated.  Use anscer_msgs-msg:emergency_stop instead.")
  (emergency_stop m))

(cl:ensure-generic-function 'motor_setup_fault-val :lambda-list '(m))
(cl:defmethod motor_setup_fault-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:motor_setup_fault-val is deprecated.  Use anscer_msgs-msg:motor_setup_fault instead.")
  (motor_setup_fault m))

(cl:ensure-generic-function 'mosfet_failure-val :lambda-list '(m))
(cl:defmethod mosfet_failure-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:mosfet_failure-val is deprecated.  Use anscer_msgs-msg:mosfet_failure instead.")
  (mosfet_failure m))

(cl:ensure-generic-function 'default_configuration-val :lambda-list '(m))
(cl:defmethod default_configuration-val ((m <MotorFaultFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:default_configuration-val is deprecated.  Use anscer_msgs-msg:default_configuration instead.")
  (default_configuration m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MotorFaultFlags>) ostream)
  "Serializes a message object of type '<MotorFaultFlags>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'overheat) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'overvoltage) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'undervoltage) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'short_circuit) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'emergency_stop) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'motor_setup_fault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'mosfet_failure) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'default_configuration) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MotorFaultFlags>) istream)
  "Deserializes a message object of type '<MotorFaultFlags>"
    (cl:setf (cl:slot-value msg 'overheat) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'overvoltage) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'undervoltage) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'short_circuit) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'emergency_stop) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'motor_setup_fault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'mosfet_failure) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'default_configuration) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MotorFaultFlags>)))
  "Returns string type for a message object of type '<MotorFaultFlags>"
  "anscer_msgs/MotorFaultFlags")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MotorFaultFlags)))
  "Returns string type for a message object of type 'MotorFaultFlags"
  "anscer_msgs/MotorFaultFlags")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MotorFaultFlags>)))
  "Returns md5sum for a message object of type '<MotorFaultFlags>"
  "5204cec7a2d19b97b19f5f360556d07a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MotorFaultFlags)))
  "Returns md5sum for a message object of type 'MotorFaultFlags"
  "5204cec7a2d19b97b19f5f360556d07a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MotorFaultFlags>)))
  "Returns full string definition for message of type '<MotorFaultFlags>"
  (cl:format cl:nil "bool overheat~%bool overvoltage~%bool undervoltage~%bool short_circuit~%bool emergency_stop~%bool motor_setup_fault~%bool mosfet_failure~%bool default_configuration~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MotorFaultFlags)))
  "Returns full string definition for message of type 'MotorFaultFlags"
  (cl:format cl:nil "bool overheat~%bool overvoltage~%bool undervoltage~%bool short_circuit~%bool emergency_stop~%bool motor_setup_fault~%bool mosfet_failure~%bool default_configuration~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MotorFaultFlags>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MotorFaultFlags>))
  "Converts a ROS message object to a list"
  (cl:list 'MotorFaultFlags
    (cl:cons ':overheat (overheat msg))
    (cl:cons ':overvoltage (overvoltage msg))
    (cl:cons ':undervoltage (undervoltage msg))
    (cl:cons ':short_circuit (short_circuit msg))
    (cl:cons ':emergency_stop (emergency_stop msg))
    (cl:cons ':motor_setup_fault (motor_setup_fault msg))
    (cl:cons ':mosfet_failure (mosfet_failure msg))
    (cl:cons ':default_configuration (default_configuration msg))
))
