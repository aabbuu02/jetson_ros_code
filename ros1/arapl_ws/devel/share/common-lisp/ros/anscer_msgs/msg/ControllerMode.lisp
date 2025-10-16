; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude ControllerMode.msg.html

(cl:defclass <ControllerMode> (roslisp-msg-protocol:ros-message)
  ((controller_mode
    :reader controller_mode
    :initarg :controller_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass ControllerMode (<ControllerMode>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControllerMode>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControllerMode)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<ControllerMode> is deprecated: use anscer_msgs-msg:ControllerMode instead.")))

(cl:ensure-generic-function 'controller_mode-val :lambda-list '(m))
(cl:defmethod controller_mode-val ((m <ControllerMode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:controller_mode-val is deprecated.  Use anscer_msgs-msg:controller_mode instead.")
  (controller_mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<ControllerMode>)))
    "Constants for message type '<ControllerMode>"
  '((:DEFAULT_MOTION . 0)
    (:CHARGE_DOCK . 1)
    (:CHARGE_UNDOCK . 2)
    (:BARCODE_MOTION . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'ControllerMode)))
    "Constants for message type 'ControllerMode"
  '((:DEFAULT_MOTION . 0)
    (:CHARGE_DOCK . 1)
    (:CHARGE_UNDOCK . 2)
    (:BARCODE_MOTION . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControllerMode>) ostream)
  "Serializes a message object of type '<ControllerMode>"
  (cl:let* ((signed (cl:slot-value msg 'controller_mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControllerMode>) istream)
  "Deserializes a message object of type '<ControllerMode>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'controller_mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControllerMode>)))
  "Returns string type for a message object of type '<ControllerMode>"
  "anscer_msgs/ControllerMode")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControllerMode)))
  "Returns string type for a message object of type 'ControllerMode"
  "anscer_msgs/ControllerMode")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControllerMode>)))
  "Returns md5sum for a message object of type '<ControllerMode>"
  "8df55bc2a0cb79189a6d96bf669a6495")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControllerMode)))
  "Returns md5sum for a message object of type 'ControllerMode"
  "8df55bc2a0cb79189a6d96bf669a6495")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControllerMode>)))
  "Returns full string definition for message of type '<ControllerMode>"
  (cl:format cl:nil "uint8 DEFAULT_MOTION=0~%uint8 CHARGE_DOCK=1~%uint8 CHARGE_UNDOCK=2~%uint8 BARCODE_MOTION=3~%int8 controller_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControllerMode)))
  "Returns full string definition for message of type 'ControllerMode"
  (cl:format cl:nil "uint8 DEFAULT_MOTION=0~%uint8 CHARGE_DOCK=1~%uint8 CHARGE_UNDOCK=2~%uint8 BARCODE_MOTION=3~%int8 controller_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControllerMode>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControllerMode>))
  "Converts a ROS message object to a list"
  (cl:list 'ControllerMode
    (cl:cons ':controller_mode (controller_mode msg))
))
