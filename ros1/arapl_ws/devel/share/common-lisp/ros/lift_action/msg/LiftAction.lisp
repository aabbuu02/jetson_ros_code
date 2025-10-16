; Auto-generated. Do not edit!


(cl:in-package lift_action-msg)


;//! \htmlinclude LiftAction.msg.html

(cl:defclass <LiftAction> (roslisp-msg-protocol:ros-message)
  ((unique_id
    :reader unique_id
    :initarg :unique_id
    :type cl:string
    :initform "")
   (reached
    :reader reached
    :initarg :reached
    :type cl:boolean
    :initform cl:nil)
   (rack
    :reader rack
    :initarg :rack
    :type cl:fixnum
    :initform 0)
   (shelf
    :reader shelf
    :initarg :shelf
    :type cl:fixnum
    :initform 0)
   (acr_shelf
    :reader acr_shelf
    :initarg :acr_shelf
    :type cl:fixnum
    :initform 0)
   (action
    :reader action
    :initarg :action
    :type cl:fixnum
    :initform 0)
   (whole_bin_no
    :reader whole_bin_no
    :initarg :whole_bin_no
    :type cl:string
    :initform "")
   (putaway_barcode
    :reader putaway_barcode
    :initarg :putaway_barcode
    :type cl:string
    :initform ""))
)

(cl:defclass LiftAction (<LiftAction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LiftAction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LiftAction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lift_action-msg:<LiftAction> is deprecated: use lift_action-msg:LiftAction instead.")))

(cl:ensure-generic-function 'unique_id-val :lambda-list '(m))
(cl:defmethod unique_id-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:unique_id-val is deprecated.  Use lift_action-msg:unique_id instead.")
  (unique_id m))

(cl:ensure-generic-function 'reached-val :lambda-list '(m))
(cl:defmethod reached-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:reached-val is deprecated.  Use lift_action-msg:reached instead.")
  (reached m))

(cl:ensure-generic-function 'rack-val :lambda-list '(m))
(cl:defmethod rack-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:rack-val is deprecated.  Use lift_action-msg:rack instead.")
  (rack m))

(cl:ensure-generic-function 'shelf-val :lambda-list '(m))
(cl:defmethod shelf-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:shelf-val is deprecated.  Use lift_action-msg:shelf instead.")
  (shelf m))

(cl:ensure-generic-function 'acr_shelf-val :lambda-list '(m))
(cl:defmethod acr_shelf-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:acr_shelf-val is deprecated.  Use lift_action-msg:acr_shelf instead.")
  (acr_shelf m))

(cl:ensure-generic-function 'action-val :lambda-list '(m))
(cl:defmethod action-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:action-val is deprecated.  Use lift_action-msg:action instead.")
  (action m))

(cl:ensure-generic-function 'whole_bin_no-val :lambda-list '(m))
(cl:defmethod whole_bin_no-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:whole_bin_no-val is deprecated.  Use lift_action-msg:whole_bin_no instead.")
  (whole_bin_no m))

(cl:ensure-generic-function 'putaway_barcode-val :lambda-list '(m))
(cl:defmethod putaway_barcode-val ((m <LiftAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lift_action-msg:putaway_barcode-val is deprecated.  Use lift_action-msg:putaway_barcode instead.")
  (putaway_barcode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LiftAction>) ostream)
  "Serializes a message object of type '<LiftAction>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'unique_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'unique_id))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'reached) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'rack)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'acr_shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'action)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'whole_bin_no))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'whole_bin_no))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'putaway_barcode))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'putaway_barcode))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LiftAction>) istream)
  "Deserializes a message object of type '<LiftAction>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'unique_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'unique_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'reached) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'rack) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'shelf) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'acr_shelf) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'action) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'whole_bin_no) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'whole_bin_no) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'putaway_barcode) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'putaway_barcode) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LiftAction>)))
  "Returns string type for a message object of type '<LiftAction>"
  "lift_action/LiftAction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LiftAction)))
  "Returns string type for a message object of type 'LiftAction"
  "lift_action/LiftAction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LiftAction>)))
  "Returns md5sum for a message object of type '<LiftAction>"
  "74abac7a70a7dbf2314bec741f0342c4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LiftAction)))
  "Returns md5sum for a message object of type 'LiftAction"
  "74abac7a70a7dbf2314bec741f0342c4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LiftAction>)))
  "Returns full string definition for message of type '<LiftAction>"
  (cl:format cl:nil "string unique_id~%bool reached~%int16 rack~%int16 shelf~%int16 acr_shelf~%int16 action~%string whole_bin_no~%string putaway_barcode~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LiftAction)))
  "Returns full string definition for message of type 'LiftAction"
  (cl:format cl:nil "string unique_id~%bool reached~%int16 rack~%int16 shelf~%int16 acr_shelf~%int16 action~%string whole_bin_no~%string putaway_barcode~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LiftAction>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'unique_id))
     1
     2
     2
     2
     2
     4 (cl:length (cl:slot-value msg 'whole_bin_no))
     4 (cl:length (cl:slot-value msg 'putaway_barcode))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LiftAction>))
  "Converts a ROS message object to a list"
  (cl:list 'LiftAction
    (cl:cons ':unique_id (unique_id msg))
    (cl:cons ':reached (reached msg))
    (cl:cons ':rack (rack msg))
    (cl:cons ':shelf (shelf msg))
    (cl:cons ':acr_shelf (acr_shelf msg))
    (cl:cons ':action (action msg))
    (cl:cons ':whole_bin_no (whole_bin_no msg))
    (cl:cons ':putaway_barcode (putaway_barcode msg))
))
