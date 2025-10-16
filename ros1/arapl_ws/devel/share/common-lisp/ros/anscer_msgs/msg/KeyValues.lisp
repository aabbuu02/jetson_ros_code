; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude KeyValues.msg.html

(cl:defclass <KeyValues> (roslisp-msg-protocol:ros-message)
  ((keyvalue
    :reader keyvalue
    :initarg :keyvalue
    :type (cl:vector anscer_msgs-msg:KeyValue)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:KeyValue :initial-element (cl:make-instance 'anscer_msgs-msg:KeyValue))))
)

(cl:defclass KeyValues (<KeyValues>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <KeyValues>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'KeyValues)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<KeyValues> is deprecated: use anscer_msgs-msg:KeyValues instead.")))

(cl:ensure-generic-function 'keyvalue-val :lambda-list '(m))
(cl:defmethod keyvalue-val ((m <KeyValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:keyvalue-val is deprecated.  Use anscer_msgs-msg:keyvalue instead.")
  (keyvalue m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <KeyValues>) ostream)
  "Serializes a message object of type '<KeyValues>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'keyvalue))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'keyvalue))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <KeyValues>) istream)
  "Deserializes a message object of type '<KeyValues>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'keyvalue) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'keyvalue)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:KeyValue))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<KeyValues>)))
  "Returns string type for a message object of type '<KeyValues>"
  "anscer_msgs/KeyValues")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'KeyValues)))
  "Returns string type for a message object of type 'KeyValues"
  "anscer_msgs/KeyValues")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<KeyValues>)))
  "Returns md5sum for a message object of type '<KeyValues>"
  "a0bd91006b3876ff7bb45ae93c1b6f32")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'KeyValues)))
  "Returns md5sum for a message object of type 'KeyValues"
  "a0bd91006b3876ff7bb45ae93c1b6f32")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<KeyValues>)))
  "Returns full string definition for message of type '<KeyValues>"
  (cl:format cl:nil "KeyValue[] keyvalue~%~%================================================================================~%MSG: anscer_msgs/KeyValue~%string key			#Label of the value~%string value		#Value to track~%string unit~%float32 errorlevel			#Errorlevel of the value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'KeyValues)))
  "Returns full string definition for message of type 'KeyValues"
  (cl:format cl:nil "KeyValue[] keyvalue~%~%================================================================================~%MSG: anscer_msgs/KeyValue~%string key			#Label of the value~%string value		#Value to track~%string unit~%float32 errorlevel			#Errorlevel of the value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <KeyValues>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'keyvalue) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <KeyValues>))
  "Converts a ROS message object to a list"
  (cl:list 'KeyValues
    (cl:cons ':keyvalue (keyvalue msg))
))
