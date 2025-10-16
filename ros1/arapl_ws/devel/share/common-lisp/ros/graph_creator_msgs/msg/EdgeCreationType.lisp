; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude EdgeCreationType.msg.html

(cl:defclass <EdgeCreationType> (roslisp-msg-protocol:ros-message)
  ((type
    :reader type
    :initarg :type
    :type cl:fixnum
    :initform 0))
)

(cl:defclass EdgeCreationType (<EdgeCreationType>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EdgeCreationType>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EdgeCreationType)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<EdgeCreationType> is deprecated: use graph_creator_msgs-msg:EdgeCreationType instead.")))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <EdgeCreationType>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:type-val is deprecated.  Use graph_creator_msgs-msg:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<EdgeCreationType>)))
    "Constants for message type '<EdgeCreationType>"
  '((:EDGE_CREATION_TYPE_STRAIGHT_LINE . 0)
    (:EDGE_CREATION_TYPE_CUBIC_BEZIER . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'EdgeCreationType)))
    "Constants for message type 'EdgeCreationType"
  '((:EDGE_CREATION_TYPE_STRAIGHT_LINE . 0)
    (:EDGE_CREATION_TYPE_CUBIC_BEZIER . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EdgeCreationType>) ostream)
  "Serializes a message object of type '<EdgeCreationType>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EdgeCreationType>) istream)
  "Deserializes a message object of type '<EdgeCreationType>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EdgeCreationType>)))
  "Returns string type for a message object of type '<EdgeCreationType>"
  "graph_creator_msgs/EdgeCreationType")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EdgeCreationType)))
  "Returns string type for a message object of type 'EdgeCreationType"
  "graph_creator_msgs/EdgeCreationType")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EdgeCreationType>)))
  "Returns md5sum for a message object of type '<EdgeCreationType>"
  "ca84d608a8d470273fdf849e3d46708a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EdgeCreationType)))
  "Returns md5sum for a message object of type 'EdgeCreationType"
  "ca84d608a8d470273fdf849e3d46708a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EdgeCreationType>)))
  "Returns full string definition for message of type '<EdgeCreationType>"
  (cl:format cl:nil "uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EdgeCreationType)))
  "Returns full string definition for message of type 'EdgeCreationType"
  (cl:format cl:nil "uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0~%uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1~%~%uint8 type~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EdgeCreationType>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EdgeCreationType>))
  "Converts a ROS message object to a list"
  (cl:list 'EdgeCreationType
    (cl:cons ':type (type msg))
))
