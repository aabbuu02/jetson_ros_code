; Auto-generated. Do not edit!


(cl:in-package anscer_msgs-msg)


;//! \htmlinclude SafetyFields.msg.html

(cl:defclass <SafetyFields> (roslisp-msg-protocol:ros-message)
  ((warning
    :reader warning
    :initarg :warning
    :type (cl:vector anscer_msgs-msg:SafetyField)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:SafetyField :initial-element (cl:make-instance 'anscer_msgs-msg:SafetyField)))
   (safety
    :reader safety
    :initarg :safety
    :type (cl:vector anscer_msgs-msg:SafetyField)
   :initform (cl:make-array 0 :element-type 'anscer_msgs-msg:SafetyField :initial-element (cl:make-instance 'anscer_msgs-msg:SafetyField))))
)

(cl:defclass SafetyFields (<SafetyFields>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SafetyFields>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SafetyFields)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anscer_msgs-msg:<SafetyFields> is deprecated: use anscer_msgs-msg:SafetyFields instead.")))

(cl:ensure-generic-function 'warning-val :lambda-list '(m))
(cl:defmethod warning-val ((m <SafetyFields>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:warning-val is deprecated.  Use anscer_msgs-msg:warning instead.")
  (warning m))

(cl:ensure-generic-function 'safety-val :lambda-list '(m))
(cl:defmethod safety-val ((m <SafetyFields>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anscer_msgs-msg:safety-val is deprecated.  Use anscer_msgs-msg:safety instead.")
  (safety m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SafetyFields>) ostream)
  "Serializes a message object of type '<SafetyFields>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'warning))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'warning))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'safety))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'safety))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SafetyFields>) istream)
  "Deserializes a message object of type '<SafetyFields>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'warning) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'warning)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:SafetyField))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'safety) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'safety)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'anscer_msgs-msg:SafetyField))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SafetyFields>)))
  "Returns string type for a message object of type '<SafetyFields>"
  "anscer_msgs/SafetyFields")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SafetyFields)))
  "Returns string type for a message object of type 'SafetyFields"
  "anscer_msgs/SafetyFields")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SafetyFields>)))
  "Returns md5sum for a message object of type '<SafetyFields>"
  "a7a9ac03c2713cea077fbfe497276db8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SafetyFields)))
  "Returns md5sum for a message object of type 'SafetyFields"
  "a7a9ac03c2713cea077fbfe497276db8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SafetyFields>)))
  "Returns full string definition for message of type '<SafetyFields>"
  (cl:format cl:nil "anscer_msgs/SafetyField[] warning~%anscer_msgs/SafetyField[] safety~%~%================================================================================~%MSG: anscer_msgs/SafetyField~%int8 field_id~%bool is_front~%bool is_rear~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SafetyFields)))
  "Returns full string definition for message of type 'SafetyFields"
  (cl:format cl:nil "anscer_msgs/SafetyField[] warning~%anscer_msgs/SafetyField[] safety~%~%================================================================================~%MSG: anscer_msgs/SafetyField~%int8 field_id~%bool is_front~%bool is_rear~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SafetyFields>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'warning) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'safety) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SafetyFields>))
  "Converts a ROS message object to a list"
  (cl:list 'SafetyFields
    (cl:cons ':warning (warning msg))
    (cl:cons ':safety (safety msg))
))
