; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MotorDiagnosticsArray.msg.html

(cl:defclass <MotorDiagnosticsArray> (roslisp-msg-protocol:ros-message)
  ((motor_diagnostics
    :reader motor_diagnostics
    :initarg :motor_diagnostics
    :type (cl:vector anscer_msgs-msg:MotorDiagnostics)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:MotorDiagnostics :initial-element (cl:make-instance 'anscer_msgs-msg:MotorDiagnostics))))
)

(cl:defclass MotorDiagnosticsArray (<MotorDiagnosticsArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MotorDiagnosticsArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MotorDiagnosticsArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MotorDiagnosticsArray> is deprecated: use anscer_msgs-msg:MotorDiagnosticsArray instead.")))

(cl:ensure-generic-function 'motor_diagnostics-val :lambda-list '(m))
(cl:defmethod motor_diagnostics-val ((m <MotorDiagnosticsArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:motor_diagnostics-val is deprecated.  Use anscer_msgs-msg:motor_diagnostics instead.")
  (motor_diagnostics m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MotorDiagnosticsArray>) ostream)
  "Serializes a message object of type '<MotorDiagnosticsArray>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motor_diagnostics))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'motor_diagnostics))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MotorDiagnosticsArray>) istream)
  "Deserializes a message object of type '<MotorDiagnosticsArray>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'motor_diagnostics) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'motor_diagnostics)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:MotorDiagnostics))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MotorDiagnosticsArray>)))
  "Returns string type for a message object of type '<MotorDiagnosticsArray>"
  "anscer_msgs/MotorDiagnosticsArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MotorDiagnosticsArray)))
  "Returns string type for a message object of type 'MotorDiagnosticsArray"
  "anscer_msgs/MotorDiagnosticsArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MotorDiagnosticsArray>)))
  "Returns md5sum for a message object of type '<MotorDiagnosticsArray>"
  "e04d5a81a4ba18dbd66dc15d7fdf969a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MotorDiagnosticsArray)))
  "Returns md5sum for a message object of type 'MotorDiagnosticsArray"
  "e04d5a81a4ba18dbd66dc15d7fdf969a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MotorDiagnosticsArray>)))
  "Returns full string definition for message of type '<MotorDiagnosticsArray>"
  (cl:format cl:nil "MotorDiagnostics[] motor_diagnostics~%~%================================================================================~%MSG: anscer_msgs/MotorDiagnostics~%string name~%MotorFaultFlags fault_flags~%MotorStatusFlags status_flags~%~%================================================================================~%MSG: anscer_msgs/MotorFaultFlags~%bool overheat~%bool overvoltage~%bool undervoltage~%bool short_circuit~%bool emergency_stop~%bool motor_setup_fault~%bool mosfet_failure~%bool default_configuration~%~%================================================================================~%MSG: anscer_msgs/MotorStatusFlags~%bool serial_mode~%bool pulse_mode~%bool analog_mode~%bool power_stage_off~%bool stall_detected~%bool at_limit~%bool unused~%bool micro_basic_script_running~%bool motor_tuning_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MotorDiagnosticsArray)))
  "Returns full string definition for message of type 'MotorDiagnosticsArray"
  (cl:format cl:nil "MotorDiagnostics[] motor_diagnostics~%~%================================================================================~%MSG: anscer_msgs/MotorDiagnostics~%string name~%MotorFaultFlags fault_flags~%MotorStatusFlags status_flags~%~%================================================================================~%MSG: anscer_msgs/MotorFaultFlags~%bool overheat~%bool overvoltage~%bool undervoltage~%bool short_circuit~%bool emergency_stop~%bool motor_setup_fault~%bool mosfet_failure~%bool default_configuration~%~%================================================================================~%MSG: anscer_msgs/MotorStatusFlags~%bool serial_mode~%bool pulse_mode~%bool analog_mode~%bool power_stage_off~%bool stall_detected~%bool at_limit~%bool unused~%bool micro_basic_script_running~%bool motor_tuning_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MotorDiagnosticsArray>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motor_diagnostics) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MotorDiagnosticsArray>))
  "Converts a ROS message object to a list"
  (cl:list 'MotorDiagnosticsArray
    (cl:cons ':motor_diagnostics (motor_diagnostics msg))
))
