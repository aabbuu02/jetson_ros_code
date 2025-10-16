; Auto-generated. Do not edit!


(cl:in-package lift_action-msg)


;//! \htmlinclude ErrorStatus.msg.html

(cl:defclass <ErrorStatus> (roslisp-msg-protocol:ros-message)
  ((lifterFault
    :reader lifterFault
    :initarg :lifterFault
    :type cl:boolean
    :initform cl:nil)
   (extractorFault
    :reader extractorFault
    :initarg :extractorFault
    :type cl:boolean
    :initform cl:nil)
   (turnTableFault
    :reader turnTableFault
    :initarg :turnTableFault
    :type cl:boolean
    :initform cl:nil)
   (swingArmFault
    :reader swingArmFault
    :initarg :swingArmFault
    :type cl:boolean
    :initform cl:nil)
   (emergencyPBfault
    :reader emergencyPBfault
    :initarg :emergencyPBfault
    :type cl:boolean
    :initform cl:nil)
   (swingArmSensorZeroFault
    :reader swingArmSensorZeroFault
    :initarg :swingArmSensorZeroFault
    :type cl:boolean
    :initform cl:nil)
   (swingArmSensorNinetyFault
    :reader swingArmSensorNinetyFault
    :initarg :swingArmSensorNinetyFault
    :type cl:boolean
    :initform cl:nil)
   (turntableSensorZeroFault
    :reader turntableSensorZeroFault
    :initarg :turntableSensorZeroFault
    :type cl:boolean
    :initform cl:nil)
   (extractorSensorLaserFault
    :reader extractorSensorLaserFault
    :initarg :extractorSensorLaserFault
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ErrorStatus (<ErrorStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ErrorStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ErrorStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lift_action-msg:<ErrorStatus> is deprecated: use lift_action-msg:ErrorStatus instead.")))

(cl:ensure-generic-function 'lifterFault-val :lambda-list '(m))
(cl:defmethod lifterFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:lifterFault-val is deprecated.  Use lift_action-msg:lifterFault instead.")
  (lifterFault m))

(cl:ensure-generic-function 'extractorFault-val :lambda-list '(m))
(cl:defmethod extractorFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:extractorFault-val is deprecated.  Use lift_action-msg:extractorFault instead.")
  (extractorFault m))

(cl:ensure-generic-function 'turnTableFault-val :lambda-list '(m))
(cl:defmethod turnTableFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:turnTableFault-val is deprecated.  Use lift_action-msg:turnTableFault instead.")
  (turnTableFault m))

(cl:ensure-generic-function 'swingArmFault-val :lambda-list '(m))
(cl:defmethod swingArmFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:swingArmFault-val is deprecated.  Use lift_action-msg:swingArmFault instead.")
  (swingArmFault m))

(cl:ensure-generic-function 'emergencyPBfault-val :lambda-list '(m))
(cl:defmethod emergencyPBfault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:emergencyPBfault-val is deprecated.  Use lift_action-msg:emergencyPBfault instead.")
  (emergencyPBfault m))

(cl:ensure-generic-function 'swingArmSensorZeroFault-val :lambda-list '(m))
(cl:defmethod swingArmSensorZeroFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:swingArmSensorZeroFault-val is deprecated.  Use lift_action-msg:swingArmSensorZeroFault instead.")
  (swingArmSensorZeroFault m))

(cl:ensure-generic-function 'swingArmSensorNinetyFault-val :lambda-list '(m))
(cl:defmethod swingArmSensorNinetyFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:swingArmSensorNinetyFault-val is deprecated.  Use lift_action-msg:swingArmSensorNinetyFault instead.")
  (swingArmSensorNinetyFault m))

(cl:ensure-generic-function 'turntableSensorZeroFault-val :lambda-list '(m))
(cl:defmethod turntableSensorZeroFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:turntableSensorZeroFault-val is deprecated.  Use lift_action-msg:turntableSensorZeroFault instead.")
  (turntableSensorZeroFault m))

(cl:ensure-generic-function 'extractorSensorLaserFault-val :lambda-list '(m))
(cl:defmethod extractorSensorLaserFault-val ((m <ErrorStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:extractorSensorLaserFault-val is deprecated.  Use lift_action-msg:extractorSensorLaserFault instead.")
  (extractorSensorLaserFault m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ErrorStatus>) ostream)
  "Serializes a message object of type '<ErrorStatus>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'lifterFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'extractorFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'turnTableFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'swingArmFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'emergencyPBfault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'swingArmSensorZeroFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'swingArmSensorNinetyFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'turntableSensorZeroFault) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'extractorSensorLaserFault) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ErrorStatus>) istream)
  "Deserializes a message object of type '<ErrorStatus>"
    (cl:setf (cl:slot-value msg 'lifterFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'extractorFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'turnTableFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'swingArmFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'emergencyPBfault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'swingArmSensorZeroFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'swingArmSensorNinetyFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'turntableSensorZeroFault) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'extractorSensorLaserFault) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ErrorStatus>)))
  "Returns string type for a message object of type '<ErrorStatus>"
  "lift_action/ErrorStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ErrorStatus)))
  "Returns string type for a message object of type 'ErrorStatus"
  "lift_action/ErrorStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ErrorStatus>)))
  "Returns md5sum for a message object of type '<ErrorStatus>"
  "0ad64508a47bfdb3b3558cc9de515c2e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ErrorStatus)))
  "Returns md5sum for a message object of type 'ErrorStatus"
  "0ad64508a47bfdb3b3558cc9de515c2e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ErrorStatus>)))
  "Returns full string definition for message of type '<ErrorStatus>"
  (cl:format cl:nil "bool lifterFault~%bool extractorFault~%bool turnTableFault~%bool swingArmFault~%bool emergencyPBfault~%bool swingArmSensorZeroFault~%bool swingArmSensorNinetyFault~%bool turntableSensorZeroFault~%bool extractorSensorLaserFault~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ErrorStatus)))
  "Returns full string definition for message of type 'ErrorStatus"
  (cl:format cl:nil "bool lifterFault~%bool extractorFault~%bool turnTableFault~%bool swingArmFault~%bool emergencyPBfault~%bool swingArmSensorZeroFault~%bool swingArmSensorNinetyFault~%bool turntableSensorZeroFault~%bool extractorSensorLaserFault~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ErrorStatus>))
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
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ErrorStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'ErrorStatus
    (cl:cons ':lifterFault (lifterFault msg))
    (cl:cons ':extractorFault (extractorFault msg))
    (cl:cons ':turnTableFault (turnTableFault msg))
    (cl:cons ':swingArmFault (swingArmFault msg))
    (cl:cons ':emergencyPBfault (emergencyPBfault msg))
    (cl:cons ':swingArmSensorZeroFault (swingArmSensorZeroFault msg))
    (cl:cons ':swingArmSensorNinetyFault (swingArmSensorNinetyFault msg))
    (cl:cons ':turntableSensorZeroFault (turntableSensorZeroFault msg))
    (cl:cons ':extractorSensorLaserFault (extractorSensorLaserFault msg))
))
