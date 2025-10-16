; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude DockInfo.msg.html

(cl:defclass <DockInfo> (roslisp-msg-protocol:ros-message)
  ((dock_marker
    :reader dock_marker
    :initarg :dock_marker
    :type cl:fixnum
    :initform 0)
   (dock_mode
    :reader dock_mode
    :initarg :dock_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass DockInfo (<DockInfo>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DockInfo>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DockInfo)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<DockInfo> is deprecated: use anscer_msgs-msg:DockInfo instead.")))

(cl:ensure-generic-function 'dock_marker-val :lambda-list '(m))
(cl:defmethod dock_marker-val ((m <DockInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:dock_marker-val is deprecated.  Use anscer_msgs-msg:dock_marker instead.")
  (dock_marker m))

(cl:ensure-generic-function 'dock_mode-val :lambda-list '(m))
(cl:defmethod dock_mode-val ((m <DockInfo>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:dock_mode-val is deprecated.  Use anscer_msgs-msg:dock_mode instead.")
  (dock_mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<DockInfo>)))
    "Constants for message type '<DockInfo>"
  '((:FIDUCIALDOCKING . 1)
    (:REFLECTORDOCKING . 2)
    (:TROLLEYDOCKING . 3)
    (:ICPDOCKING . 4)
    (:GROUNDMARKERDOCKING . 5)
    (:SIDEWISEDOCKING . 6)
    (:DOCKSTATE . 1)
    (:UNDOCKSTATE . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'DockInfo)))
    "Constants for message type 'DockInfo"
  '((:FIDUCIALDOCKING . 1)
    (:REFLECTORDOCKING . 2)
    (:TROLLEYDOCKING . 3)
    (:ICPDOCKING . 4)
    (:GROUNDMARKERDOCKING . 5)
    (:SIDEWISEDOCKING . 6)
    (:DOCKSTATE . 1)
    (:UNDOCKSTATE . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DockInfo>) ostream)
  "Serializes a message object of type '<DockInfo>"
  (cl:let* ((signed (cl:slot-value msg 'dock_marker)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'dock_mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DockInfo>) istream)
  "Deserializes a message object of type '<DockInfo>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dock_marker) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dock_mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DockInfo>)))
  "Returns string type for a message object of type '<DockInfo>"
  "anscer_msgs/DockInfo")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DockInfo)))
  "Returns string type for a message object of type 'DockInfo"
  "anscer_msgs/DockInfo")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DockInfo>)))
  "Returns md5sum for a message object of type '<DockInfo>"
  "72372d50c9cb649d61d640ea75a875cc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DockInfo)))
  "Returns md5sum for a message object of type 'DockInfo"
  "72372d50c9cb649d61d640ea75a875cc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DockInfo>)))
  "Returns full string definition for message of type '<DockInfo>"
  (cl:format cl:nil "uint8 FIDUCIALDOCKING=1~%uint8 REFLECTORDOCKING=2~%uint8 TROLLEYDOCKING=3~%uint8 ICPDOCKING=4~%uint8 GROUNDMARKERDOCKING=5~%uint8 SIDEWISEDOCKING=6~%~%uint8 DOCKSTATE=1~%uint8 UNDOCKSTATE=2~%~%int8 dock_marker~%int8 dock_mode~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DockInfo)))
  "Returns full string definition for message of type 'DockInfo"
  (cl:format cl:nil "uint8 FIDUCIALDOCKING=1~%uint8 REFLECTORDOCKING=2~%uint8 TROLLEYDOCKING=3~%uint8 ICPDOCKING=4~%uint8 GROUNDMARKERDOCKING=5~%uint8 SIDEWISEDOCKING=6~%~%uint8 DOCKSTATE=1~%uint8 UNDOCKSTATE=2~%~%int8 dock_marker~%int8 dock_mode~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DockInfo>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DockInfo>))
  "Converts a ROS message object to a list"
  (cl:list 'DockInfo
    (cl:cons ':dock_marker (dock_marker msg))
    (cl:cons ':dock_mode (dock_mode msg))
))
