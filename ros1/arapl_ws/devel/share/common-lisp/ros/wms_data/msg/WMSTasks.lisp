; Auto-generated. Do not edit!


(cl:in-package wms_data-msg)


;//! \htmlinclude WMSTasks.msg.html

(cl:defclass <WMSTasks> (roslisp-msg-protocol:ros-message)
  ((tasks
    :reader tasks
    :initarg :tasks
    :type (cl:vector wms_data-msg:WMSData)
   :initform (cl:make-array 0 :element-type 'wms_data-msg:WMSData :initial-element (cl:make-instance 'wms_data-msg:WMSData))))
)

(cl:defclass WMSTasks (<WMSTasks>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WMSTasks>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WMSTasks)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wms_data-msg:<WMSTasks> is deprecated: use wms_data-msg:WMSTasks instead.")))

(cl:ensure-generic-function 'tasks-val :lambda-list '(m))
(cl:defmethod tasks-val ((m <WMSTasks>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:tasks-val is deprecated.  Use wms_data-msg:tasks instead.")
  (tasks m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WMSTasks>) ostream)
  "Serializes a message object of type '<WMSTasks>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'tasks))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'tasks))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WMSTasks>) istream)
  "Deserializes a message object of type '<WMSTasks>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'tasks) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'tasks)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'wms_data-msg:WMSData))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WMSTasks>)))
  "Returns string type for a message object of type '<WMSTasks>"
  "wms_data/WMSTasks")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WMSTasks)))
  "Returns string type for a message object of type 'WMSTasks"
  "wms_data/WMSTasks")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WMSTasks>)))
  "Returns md5sum for a message object of type '<WMSTasks>"
  "e9c22e6c13dccc15f5397cda86a34fd5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WMSTasks)))
  "Returns md5sum for a message object of type 'WMSTasks"
  "e9c22e6c13dccc15f5397cda86a34fd5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WMSTasks>)))
  "Returns full string definition for message of type '<WMSTasks>"
  (cl:format cl:nil "wms_data/WMSData[] tasks~%~%================================================================================~%MSG: wms_data/WMSData~%string unique_id~%string date~%int16 priority~%int16 rack~%int16 shelf~%int16 bin~%bool action~%bool status~%string ean_code~%string putaway_code~%int16 acr_shelf~%string whole_bin_no~%string core~%string level~%string year~%string date_data~%string serial_no~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WMSTasks)))
  "Returns full string definition for message of type 'WMSTasks"
  (cl:format cl:nil "wms_data/WMSData[] tasks~%~%================================================================================~%MSG: wms_data/WMSData~%string unique_id~%string date~%int16 priority~%int16 rack~%int16 shelf~%int16 bin~%bool action~%bool status~%string ean_code~%string putaway_code~%int16 acr_shelf~%string whole_bin_no~%string core~%string level~%string year~%string date_data~%string serial_no~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WMSTasks>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'tasks) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WMSTasks>))
  "Converts a ROS message object to a list"
  (cl:list 'WMSTasks
    (cl:cons ':tasks (tasks msg))
))
