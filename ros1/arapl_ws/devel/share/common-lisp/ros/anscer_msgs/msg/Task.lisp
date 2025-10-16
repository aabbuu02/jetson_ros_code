; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude Task.msg.html

(cl:defclass <Task> (roslisp-msg-protocol:ros-message)
  ((index
    :reader index
    :initarg :index
    :type cl:string
    :initform "")
   (waypoint_index
    :reader waypoint_index
    :initarg :waypoint_index
    :type cl:fixnum
    :initform 0)
   (number
    :reader number
    :initarg :number
    :type cl:fixnum
    :initform 0)
   (activate
    :reader activate
    :initarg :activate
    :type cl:boolean
    :initform cl:nil)
   (acr_info
    :reader acr_info
    :initarg :acr_info
    :type anscer_msgs-msg:ACRControl
    :initform (cl:make-instance 'anscer_msgs-msg:ACRControl))
   (charge_info
    :reader charge_info
    :initarg :charge_info
    :type anscer_msgs-msg:ChargeInfo
    :initform (cl:make-instance 'anscer_msgs-msg:ChargeInfo)))
)

(cl:defclass Task (<Task>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Task>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Task)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<Task> is deprecated: use anscer_msgs-msg:Task instead.")))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:index-val is deprecated.  Use anscer_msgs-msg:index instead.")
  (index m))

(cl:ensure-generic-function 'waypoint_index-val :lambda-list '(m))
(cl:defmethod waypoint_index-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:waypoint_index-val is deprecated.  Use anscer_msgs-msg:waypoint_index instead.")
  (waypoint_index m))

(cl:ensure-generic-function 'number-val :lambda-list '(m))
(cl:defmethod number-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:number-val is deprecated.  Use anscer_msgs-msg:number instead.")
  (number m))

(cl:ensure-generic-function 'activate-val :lambda-list '(m))
(cl:defmethod activate-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:activate-val is deprecated.  Use anscer_msgs-msg:activate instead.")
  (activate m))

(cl:ensure-generic-function 'acr_info-val :lambda-list '(m))
(cl:defmethod acr_info-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:acr_info-val is deprecated.  Use anscer_msgs-msg:acr_info instead.")
  (acr_info m))

(cl:ensure-generic-function 'charge_info-val :lambda-list '(m))
(cl:defmethod charge_info-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:charge_info-val is deprecated.  Use anscer_msgs-msg:charge_info instead.")
  (charge_info m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Task>) ostream)
  "Serializes a message object of type '<Task>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'index))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'index))
  (cl:let* ((signed (cl:slot-value msg 'waypoint_index)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'activate) 1 0)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'acr_info) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'charge_info) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Task>) istream)
  "Deserializes a message object of type '<Task>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'index) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'index) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'waypoint_index) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'number) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:slot-value msg 'activate) (cl:not (cl:zerop (cl:read-byte istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'acr_info) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'charge_info) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Task>)))
  "Returns string type for a message object of type '<Task>"
  "anscer_msgs/Task")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Task)))
  "Returns string type for a message object of type 'Task"
  "anscer_msgs/Task")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Task>)))
  "Returns md5sum for a message object of type '<Task>"
  "a8514c525e421060a8b705e1ac323b92")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Task)))
  "Returns md5sum for a message object of type 'Task"
  "a8514c525e421060a8b705e1ac323b92")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Task>)))
  "Returns full string definition for message of type '<Task>"
  (cl:format cl:nil "string index~%int16 waypoint_index~%int16 number~%bool activate~%anscer_msgs/ACRControl acr_info~%anscer_msgs/ChargeInfo charge_info~%~%================================================================================~%MSG: anscer_msgs/ACRControl~%#mission status~%int32 PICKUP =0~%int32 DROPOFF =1~%~%int16 acr_shelf~%int16 target_shelf~%int16 acr_action~%int64 bar_code_number~%int64 whole_bin_number~%~%================================================================================~%MSG: anscer_msgs/ChargeInfo~%uint8 CONNECTED=1~%uint8 DISCONNECTED=2~%uint8 OVERRIDE=3~%~%bool charger_activate~%int32 charge_time~%bool ignore_time~%float32 charge_percentage~%bool ignore_percentage~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Task)))
  "Returns full string definition for message of type 'Task"
  (cl:format cl:nil "string index~%int16 waypoint_index~%int16 number~%bool activate~%anscer_msgs/ACRControl acr_info~%anscer_msgs/ChargeInfo charge_info~%~%================================================================================~%MSG: anscer_msgs/ACRControl~%#mission status~%int32 PICKUP =0~%int32 DROPOFF =1~%~%int16 acr_shelf~%int16 target_shelf~%int16 acr_action~%int64 bar_code_number~%int64 whole_bin_number~%~%================================================================================~%MSG: anscer_msgs/ChargeInfo~%uint8 CONNECTED=1~%uint8 DISCONNECTED=2~%uint8 OVERRIDE=3~%~%bool charger_activate~%int32 charge_time~%bool ignore_time~%float32 charge_percentage~%bool ignore_percentage~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Task>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'index))
     2
     2
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'acr_info))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'charge_info))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Task>))
  "Converts a ROS message object to a list"
  (cl:list 'Task
    (cl:cons ':index (index msg))
    (cl:cons ':waypoint_index (waypoint_index msg))
    (cl:cons ':number (number msg))
    (cl:cons ':activate (activate msg))
    (cl:cons ':acr_info (acr_info msg))
    (cl:cons ':charge_info (charge_info msg))
))
