; Auto-generated. Do not edit!


(cl:in-package graph_creator_msgs-msg)


;//! \htmlinclude EdgeDirectionCreationType.msg.html

(cl:defclass <EdgeDirectionCreationType> (roslisp-msg-protocol:ros-message)
  ((direction_type
    :reader direction_type
    :initarg :direction_type
    :type cl:fixnum
    :initform 0))
)

(cl:defclass EdgeDirectionCreationType (<EdgeDirectionCreationType>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EdgeDirectionCreationType>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EdgeDirectionCreationType)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graph_creator_msgs-msg:<EdgeDirectionCreationType> is deprecated: use graph_creator_msgs-msg:EdgeDirectionCreationType instead.")))

(cl:ensure-generic-function 'direction_type-val :lambda-list '(m))
(cl:defmethod direction_type-val ((m <EdgeDirectionCreationType>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graph_creator_msgs-msg:direction_type-val is deprecated.  Use graph_creator_msgs-msg:direction_type instead.")
  (direction_type m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<EdgeDirectionCreationType>)))
    "Constants for message type '<EdgeDirectionCreationType>"
  '((:EDGE_DIRECTION_CREATION_TYPE_FORWARD . 0)
    (:EDGE_DIRECTION_CREATION_TYPE_REVERSE . 1)
    (:EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'EdgeDirectionCreationType)))
    "Constants for message type 'EdgeDirectionCreationType"
  '((:EDGE_DIRECTION_CREATION_TYPE_FORWARD . 0)
    (:EDGE_DIRECTION_CREATION_TYPE_REVERSE . 1)
    (:EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EdgeDirectionCreationType>) ostream)
  "Serializes a message object of type '<EdgeDirectionCreationType>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction_type)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EdgeDirectionCreationType>) istream)
  "Deserializes a message object of type '<EdgeDirectionCreationType>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'direction_type)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EdgeDirectionCreationType>)))
  "Returns string type for a message object of type '<EdgeDirectionCreationType>"
  "graph_creator_msgs/EdgeDirectionCreationType")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EdgeDirectionCreationType)))
  "Returns string type for a message object of type 'EdgeDirectionCreationType"
  "graph_creator_msgs/EdgeDirectionCreationType")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EdgeDirectionCreationType>)))
  "Returns md5sum for a message object of type '<EdgeDirectionCreationType>"
  "72ffc1009e4ad91bac1a2f601f8e57c1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EdgeDirectionCreationType)))
  "Returns md5sum for a message object of type 'EdgeDirectionCreationType"
  "72ffc1009e4ad91bac1a2f601f8e57c1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EdgeDirectionCreationType>)))
  "Returns full string definition for message of type '<EdgeDirectionCreationType>"
  (cl:format cl:nil "uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EdgeDirectionCreationType)))
  "Returns full string definition for message of type 'EdgeDirectionCreationType"
  (cl:format cl:nil "uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0~%uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1~%uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2~%~%uint8 direction_type~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EdgeDirectionCreationType>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EdgeDirectionCreationType>))
  "Converts a ROS message object to a list"
  (cl:list 'EdgeDirectionCreationType
    (cl:cons ':direction_type (direction_type msg))
))
