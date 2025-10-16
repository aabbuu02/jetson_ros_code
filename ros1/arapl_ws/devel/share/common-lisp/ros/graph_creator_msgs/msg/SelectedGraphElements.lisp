; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude SelectedGraphElements.msg.html

(cl:defclass <SelectedGraphElements> (roslisp-msg-protocol:ros-message)
  ((selected_elements
    :reader selected_elements
    :initarg :selected_elements
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element "")))
)

(cl:defclass SelectedGraphElements (<SelectedGraphElements>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SelectedGraphElements>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SelectedGraphElements)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<SelectedGraphElements> is deprecated: use graph_creator_msgs-msg:SelectedGraphElements instead.")))

(cl:ensure-generic-function 'selected_elements-val :lambda-list '(m))
(cl:defmethod selected_elements-val ((m <SelectedGraphElements>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:selected_elements-val is deprecated.  Use graph_creator_msgs-msg:selected_elements instead.")
  (selected_elements m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SelectedGraphElements>) ostream)
  "Serializes a message object of type '<SelectedGraphElements>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'selected_elements))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'selected_elements))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SelectedGraphElements>) istream)
  "Deserializes a message object of type '<SelectedGraphElements>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'selected_elements) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'selected_elements)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SelectedGraphElements>)))
  "Returns string type for a message object of type '<SelectedGraphElements>"
  "graph_creator_msgs/SelectedGraphElements")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SelectedGraphElements)))
  "Returns string type for a message object of type 'SelectedGraphElements"
  "graph_creator_msgs/SelectedGraphElements")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SelectedGraphElements>)))
  "Returns md5sum for a message object of type '<SelectedGraphElements>"
  "d12cf3a0df62575b5490d1e21b2d67c6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SelectedGraphElements)))
  "Returns md5sum for a message object of type 'SelectedGraphElements"
  "d12cf3a0df62575b5490d1e21b2d67c6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SelectedGraphElements>)))
  "Returns full string definition for message of type '<SelectedGraphElements>"
  (cl:format cl:nil "string[] selected_elements~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SelectedGraphElements)))
  "Returns full string definition for message of type 'SelectedGraphElements"
  (cl:format cl:nil "string[] selected_elements~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SelectedGraphElements>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'selected_elements) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SelectedGraphElements>))
  "Converts a ROS message object to a list"
  (cl:list 'SelectedGraphElements
    (cl:cons ':selected_elements (selected_elements msg))
))
