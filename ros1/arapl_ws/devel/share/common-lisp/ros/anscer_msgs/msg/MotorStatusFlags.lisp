; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude MotorStatusFlags.msg.html

(cl:defclass <MotorStatusFlags> (roslisp-msg-protocol:ros-message)
  ((serial_mode
    :reader serial_mode
    :initarg :serial_mode
    :type cl:boolean
    :initform cl:nil)
   (pulse_mode
    :reader pulse_mode
    :initarg :pulse_mode
    :type cl:boolean
    :initform cl:nil)
   (analog_mode
    :reader analog_mode
    :initarg :analog_mode
    :type cl:boolean
    :initform cl:nil)
   (power_stage_off
    :reader power_stage_off
    :initarg :power_stage_off
    :type cl:boolean
    :initform cl:nil)
   (stall_detected
    :reader stall_detected
    :initarg :stall_detected
    :type cl:boolean
    :initform cl:nil)
   (at_limit
    :reader at_limit
    :initarg :at_limit
    :type cl:boolean
    :initform cl:nil)
   (unused
    :reader unused
    :initarg :unused
    :type cl:boolean
    :initform cl:nil)
   (micro_basic_script_running
    :reader micro_basic_script_running
    :initarg :micro_basic_script_running
    :type cl:boolean
    :initform cl:nil)
   (motor_tuning_mode
    :reader motor_tuning_mode
    :initarg :motor_tuning_mode
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MotorStatusFlags (<MotorStatusFlags>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MotorStatusFlags>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MotorStatusFlags)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<MotorStatusFlags> is deprecated: use anscer_msgs-msg:MotorStatusFlags instead.")))

(cl:ensure-generic-function 'serial_mode-val :lambda-list '(m))
(cl:defmethod serial_mode-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:serial_mode-val is deprecated.  Use anscer_msgs-msg:serial_mode instead.")
  (serial_mode m))

(cl:ensure-generic-function 'pulse_mode-val :lambda-list '(m))
(cl:defmethod pulse_mode-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:pulse_mode-val is deprecated.  Use anscer_msgs-msg:pulse_mode instead.")
  (pulse_mode m))

(cl:ensure-generic-function 'analog_mode-val :lambda-list '(m))
(cl:defmethod analog_mode-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:analog_mode-val is deprecated.  Use anscer_msgs-msg:analog_mode instead.")
  (analog_mode m))

(cl:ensure-generic-function 'power_stage_off-val :lambda-list '(m))
(cl:defmethod power_stage_off-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:power_stage_off-val is deprecated.  Use anscer_msgs-msg:power_stage_off instead.")
  (power_stage_off m))

(cl:ensure-generic-function 'stall_detected-val :lambda-list '(m))
(cl:defmethod stall_detected-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:stall_detected-val is deprecated.  Use anscer_msgs-msg:stall_detected instead.")
  (stall_detected m))

(cl:ensure-generic-function 'at_limit-val :lambda-list '(m))
(cl:defmethod at_limit-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:at_limit-val is deprecated.  Use anscer_msgs-msg:at_limit instead.")
  (at_limit m))

(cl:ensure-generic-function 'unused-val :lambda-list '(m))
(cl:defmethod unused-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:unused-val is deprecated.  Use anscer_msgs-msg:unused instead.")
  (unused m))

(cl:ensure-generic-function 'micro_basic_script_running-val :lambda-list '(m))
(cl:defmethod micro_basic_script_running-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:micro_basic_script_running-val is deprecated.  Use anscer_msgs-msg:micro_basic_script_running instead.")
  (micro_basic_script_running m))

(cl:ensure-generic-function 'motor_tuning_mode-val :lambda-list '(m))
(cl:defmethod motor_tuning_mode-val ((m <MotorStatusFlags>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:motor_tuning_mode-val is deprecated.  Use anscer_msgs-msg:motor_tuning_mode instead.")
  (motor_tuning_mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MotorStatusFlags>) ostream)
  "Serializes a message object of type '<MotorStatusFlags>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'serial_mode) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'pulse_mode) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'analog_mode) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'power_stage_off) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'stall_detected) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'at_limit) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'unused) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'micro_basic_script_running) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'motor_tuning_mode) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MotorStatusFlags>) istream)
  "Deserializes a message object of type '<MotorStatusFlags>"
    (cl:setf (cl:slot-value msg 'serial_mode) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'pulse_mode) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'analog_mode) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'power_stage_off) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'stall_detected) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'at_limit) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'unused) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'micro_basic_script_running) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'motor_tuning_mode) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MotorStatusFlags>)))
  "Returns string type for a message object of type '<MotorStatusFlags>"
  "anscer_msgs/MotorStatusFlags")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MotorStatusFlags)))
  "Returns string type for a message object of type 'MotorStatusFlags"
  "anscer_msgs/MotorStatusFlags")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MotorStatusFlags>)))
  "Returns md5sum for a message object of type '<MotorStatusFlags>"
  "4d1ef401a01f21abeee2855174e79d1f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MotorStatusFlags)))
  "Returns md5sum for a message object of type 'MotorStatusFlags"
  "4d1ef401a01f21abeee2855174e79d1f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MotorStatusFlags>)))
  "Returns full string definition for message of type '<MotorStatusFlags>"
  (cl:format cl:nil "bool serial_mode~%bool pulse_mode~%bool analog_mode~%bool power_stage_off~%bool stall_detected~%bool at_limit~%bool unused~%bool micro_basic_script_running~%bool motor_tuning_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MotorStatusFlags)))
  "Returns full string definition for message of type 'MotorStatusFlags"
  (cl:format cl:nil "bool serial_mode~%bool pulse_mode~%bool analog_mode~%bool power_stage_off~%bool stall_detected~%bool at_limit~%bool unused~%bool micro_basic_script_running~%bool motor_tuning_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MotorStatusFlags>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MotorStatusFlags>))
  "Converts a ROS message object to a list"
  (cl:list 'MotorStatusFlags
    (cl:cons ':serial_mode (serial_mode msg))
    (cl:cons ':pulse_mode (pulse_mode msg))
    (cl:cons ':analog_mode (analog_mode msg))
    (cl:cons ':power_stage_off (power_stage_off msg))
    (cl:cons ':stall_detected (stall_detected msg))
    (cl:cons ':at_limit (at_limit msg))
    (cl:cons ':unused (unused msg))
    (cl:cons ':micro_basic_script_running (micro_basic_script_running msg))
    (cl:cons ':motor_tuning_mode (motor_tuning_mode msg))
))
