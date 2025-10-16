; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MotorDiagnostics.msg.html

(cl:defclass <MotorDiagnostics> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (fault_flags
    :reader fault_flags
    :initarg :fault_flags
    :type anscer_msgs-msg:MotorFaultFlags
    :initform (cl:make-instance 'anscer_msgs-msg:MotorFaultFlags))
   (status_flags
    :reader status_flags
    :initarg :status_flags
    :type anscer_msgs-msg:MotorStatusFlags
    :initform (cl:make-instance 'anscer_msgs-msg:MotorStatusFlags)))
)

(cl:defclass MotorDiagnostics (<MotorDiagnostics>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MotorDiagnostics>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MotorDiagnostics)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MotorDiagnostics> is deprecated: use anscer_msgs-msg:MotorDiagnostics instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <MotorDiagnostics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:name-val is deprecated.  Use anscer_msgs-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'fault_flags-val :lambda-list '(m))
(cl:defmethod fault_flags-val ((m <MotorDiagnostics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:fault_flags-val is deprecated.  Use anscer_msgs-msg:fault_flags instead.")
  (fault_flags m))

(cl:ensure-generic-function 'status_flags-val :lambda-list '(m))
(cl:defmethod status_flags-val ((m <MotorDiagnostics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:status_flags-val is deprecated.  Use anscer_msgs-msg:status_flags instead.")
  (status_flags m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MotorDiagnostics>) ostream)
  "Serializes a message object of type '<MotorDiagnostics>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'fault_flags) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'status_flags) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MotorDiagnostics>) istream)
  "Deserializes a message object of type '<MotorDiagnostics>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'fault_flags) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'status_flags) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MotorDiagnostics>)))
  "Returns string type for a message object of type '<MotorDiagnostics>"
  "anscer_msgs/MotorDiagnostics")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MotorDiagnostics)))
  "Returns string type for a message object of type 'MotorDiagnostics"
  "anscer_msgs/MotorDiagnostics")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MotorDiagnostics>)))
  "Returns md5sum for a message object of type '<MotorDiagnostics>"
  "0632e6a21795b5a1cc88be69506a4af5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MotorDiagnostics)))
  "Returns md5sum for a message object of type 'MotorDiagnostics"
  "0632e6a21795b5a1cc88be69506a4af5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MotorDiagnostics>)))
  "Returns full string definition for message of type '<MotorDiagnostics>"
  (cl:format cl:nil "string name~%MotorFaultFlags fault_flags~%MotorStatusFlags status_flags~%~%================================================================================~%MSG: anscer_msgs/MotorFaultFlags~%bool overheat~%bool overvoltage~%bool undervoltage~%bool short_circuit~%bool emergency_stop~%bool motor_setup_fault~%bool mosfet_failure~%bool default_configuration~%~%================================================================================~%MSG: anscer_msgs/MotorStatusFlags~%bool serial_mode~%bool pulse_mode~%bool analog_mode~%bool power_stage_off~%bool stall_detected~%bool at_limit~%bool unused~%bool micro_basic_script_running~%bool motor_tuning_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MotorDiagnostics)))
  "Returns full string definition for message of type 'MotorDiagnostics"
  (cl:format cl:nil "string name~%MotorFaultFlags fault_flags~%MotorStatusFlags status_flags~%~%================================================================================~%MSG: anscer_msgs/MotorFaultFlags~%bool overheat~%bool overvoltage~%bool undervoltage~%bool short_circuit~%bool emergency_stop~%bool motor_setup_fault~%bool mosfet_failure~%bool default_configuration~%~%================================================================================~%MSG: anscer_msgs/MotorStatusFlags~%bool serial_mode~%bool pulse_mode~%bool analog_mode~%bool power_stage_off~%bool stall_detected~%bool at_limit~%bool unused~%bool micro_basic_script_running~%bool motor_tuning_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MotorDiagnostics>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'fault_flags))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'status_flags))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MotorDiagnostics>))
  "Converts a ROS message object to a list"
  (cl:list 'MotorDiagnostics
    (cl:cons ':name (name msg))
    (cl:cons ':fault_flags (fault_flags msg))
    (cl:cons ':status_flags (status_flags msg))
))
