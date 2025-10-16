; Auto-generated. Do not edit!


(cl:in-package lift_action-msg)


;//! \htmlinclude Homing_status.msg.html

(cl:defclass <Homing_status> (roslisp-msg-protocol:ros-message)
  ((lifterStatus
    :reader lifterStatus
    :initarg :lifterStatus
    :type cl:boolean
    :initform cl:nil)
   (extractorSatus
    :reader extractorSatus
    :initarg :extractorSatus
    :type cl:boolean
    :initform cl:nil)
   (turnTableStatus
    :reader turnTableStatus
    :initarg :turnTableStatus
    :type cl:boolean
    :initform cl:nil)
   (isHomed
    :reader isHomed
    :initarg :isHomed
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Homing_status (<Homing_status>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Homing_status>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Homing_status)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lift_action-msg:<Homing_status> is deprecated: use lift_action-msg:Homing_status instead.")))

(cl:ensure-generic-function 'lifterStatus-val :lambda-list '(m))
(cl:defmethod lifterStatus-val ((m <Homing_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:lifterStatus-val is deprecated.  Use lift_action-msg:lifterStatus instead.")
  (lifterStatus m))

(cl:ensure-generic-function 'extractorSatus-val :lambda-list '(m))
(cl:defmethod extractorSatus-val ((m <Homing_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:extractorSatus-val is deprecated.  Use lift_action-msg:extractorSatus instead.")
  (extractorSatus m))

(cl:ensure-generic-function 'turnTableStatus-val :lambda-list '(m))
(cl:defmethod turnTableStatus-val ((m <Homing_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:turnTableStatus-val is deprecated.  Use lift_action-msg:turnTableStatus instead.")
  (turnTableStatus m))

(cl:ensure-generic-function 'isHomed-val :lambda-list '(m))
(cl:defmethod isHomed-val ((m <Homing_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:isHomed-val is deprecated.  Use lift_action-msg:isHomed instead.")
  (isHomed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Homing_status>) ostream)
  "Serializes a message object of type '<Homing_status>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'lifterStatus) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'extractorSatus) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'turnTableStatus) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isHomed) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Homing_status>) istream)
  "Deserializes a message object of type '<Homing_status>"
    (cl:setf (cl:slot-value msg 'lifterStatus) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'extractorSatus) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'turnTableStatus) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'isHomed) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Homing_status>)))
  "Returns string type for a message object of type '<Homing_status>"
  "lift_action/Homing_status")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Homing_status)))
  "Returns string type for a message object of type 'Homing_status"
  "lift_action/Homing_status")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Homing_status>)))
  "Returns md5sum for a message object of type '<Homing_status>"
  "3ca3915b4946dfb69c51af3e4d1a0401")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Homing_status)))
  "Returns md5sum for a message object of type 'Homing_status"
  "3ca3915b4946dfb69c51af3e4d1a0401")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Homing_status>)))
  "Returns full string definition for message of type '<Homing_status>"
  (cl:format cl:nil "bool lifterStatus~%bool extractorSatus~%bool turnTableStatus~%bool isHomed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Homing_status)))
  "Returns full string definition for message of type 'Homing_status"
  (cl:format cl:nil "bool lifterStatus~%bool extractorSatus~%bool turnTableStatus~%bool isHomed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Homing_status>))
  (cl:+ 0
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Homing_status>))
  "Converts a ROS message object to a list"
  (cl:list 'Homing_status
    (cl:cons ':lifterStatus (lifterStatus msg))
    (cl:cons ':extractorSatus (extractorSatus msg))
    (cl:cons ':turnTableStatus (turnTableStatus msg))
    (cl:cons ':isHomed (isHomed msg))
))
