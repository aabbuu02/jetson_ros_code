; Auto-generated. Do not edit!


(cl:in-package wms_data-msg)


;//! \htmlinclude WMSData.msg.html

(cl:defclass <WMSData> (roslisp-msg-protocol:ros-message)
  ((unique_id
    :reader unique_id
    :initarg :unique_id
    :type cl:string
    :initform "")
   (date
    :reader date
    :initarg :date
    :type cl:string
    :initform "")
   (priority
    :reader priority
    :initarg :priority
    :type cl:fixnum
    :initform 0)
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
   (bin
    :reader bin
    :initarg :bin
    :type cl:fixnum
    :initform 0)
   (action
    :reader action
    :initarg :action
    :type cl:boolean
    :initform cl:nil)
   (status
    :reader status
    :initarg :status
    :type cl:boolean
    :initform cl:nil)
   (ean_code
    :reader ean_code
    :initarg :ean_code
    :type cl:string
    :initform "")
   (putaway_code
    :reader putaway_code
    :initarg :putaway_code
    :type cl:string
    :initform "")
   (acr_shelf
    :reader acr_shelf
    :initarg :acr_shelf
    :type cl:fixnum
    :initform 0)
   (whole_bin_no
    :reader whole_bin_no
    :initarg :whole_bin_no
    :type cl:string
    :initform "")
   (core
    :reader core
    :initarg :core
    :type cl:string
    :initform "")
   (level
    :reader level
    :initarg :level
    :type cl:string
    :initform "")
   (year
    :reader year
    :initarg :year
    :type cl:string
    :initform "")
   (date_data
    :reader date_data
    :initarg :date_data
    :type cl:string
    :initform "")
   (serial_no
    :reader serial_no
    :initarg :serial_no
    :type cl:string
    :initform ""))
)

(cl:defclass WMSData (<WMSData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WMSData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WMSData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wms_data-msg:<WMSData> is deprecated: use wms_data-msg:WMSData instead.")))

(cl:ensure-generic-function 'unique_id-val :lambda-list '(m))
(cl:defmethod unique_id-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:unique_id-val is deprecated.  Use wms_data-msg:unique_id instead.")
  (unique_id m))

(cl:ensure-generic-function 'date-val :lambda-list '(m))
(cl:defmethod date-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:date-val is deprecated.  Use wms_data-msg:date instead.")
  (date m))

(cl:ensure-generic-function 'priority-val :lambda-list '(m))
(cl:defmethod priority-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:priority-val is deprecated.  Use wms_data-msg:priority instead.")
  (priority m))

(cl:ensure-generic-function 'rack-val :lambda-list '(m))
(cl:defmethod rack-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:rack-val is deprecated.  Use wms_data-msg:rack instead.")
  (rack m))

(cl:ensure-generic-function 'shelf-val :lambda-list '(m))
(cl:defmethod shelf-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:shelf-val is deprecated.  Use wms_data-msg:shelf instead.")
  (shelf m))

(cl:ensure-generic-function 'bin-val :lambda-list '(m))
(cl:defmethod bin-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:bin-val is deprecated.  Use wms_data-msg:bin instead.")
  (bin m))

(cl:ensure-generic-function 'action-val :lambda-list '(m))
(cl:defmethod action-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:action-val is deprecated.  Use wms_data-msg:action instead.")
  (action m))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:status-val is deprecated.  Use wms_data-msg:status instead.")
  (status m))

(cl:ensure-generic-function 'ean_code-val :lambda-list '(m))
(cl:defmethod ean_code-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:ean_code-val is deprecated.  Use wms_data-msg:ean_code instead.")
  (ean_code m))

(cl:ensure-generic-function 'putaway_code-val :lambda-list '(m))
(cl:defmethod putaway_code-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:putaway_code-val is deprecated.  Use wms_data-msg:putaway_code instead.")
  (putaway_code m))

(cl:ensure-generic-function 'acr_shelf-val :lambda-list '(m))
(cl:defmethod acr_shelf-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:acr_shelf-val is deprecated.  Use wms_data-msg:acr_shelf instead.")
  (acr_shelf m))

(cl:ensure-generic-function 'whole_bin_no-val :lambda-list '(m))
(cl:defmethod whole_bin_no-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:whole_bin_no-val is deprecated.  Use wms_data-msg:whole_bin_no instead.")
  (whole_bin_no m))

(cl:ensure-generic-function 'core-val :lambda-list '(m))
(cl:defmethod core-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:core-val is deprecated.  Use wms_data-msg:core instead.")
  (core m))

(cl:ensure-generic-function 'level-val :lambda-list '(m))
(cl:defmethod level-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:level-val is deprecated.  Use wms_data-msg:level instead.")
  (level m))

(cl:ensure-generic-function 'year-val :lambda-list '(m))
(cl:defmethod year-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:year-val is deprecated.  Use wms_data-msg:year instead.")
  (year m))

(cl:ensure-generic-function 'date_data-val :lambda-list '(m))
(cl:defmethod date_data-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:date_data-val is deprecated.  Use wms_data-msg:date_data instead.")
  (date_data m))

(cl:ensure-generic-function 'serial_no-val :lambda-list '(m))
(cl:defmethod serial_no-val ((m <WMSData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wms_data-msg:serial_no-val is deprecated.  Use wms_data-msg:serial_no instead.")
  (serial_no m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WMSData>) ostream)
  "Serializes a message object of type '<WMSData>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'unique_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'unique_id))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'date))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'date))
  (cl:let* ((signed (cl:slot-value msg 'priority)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'rack)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'bin)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'action) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'status) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'ean_code))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'ean_code))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'putaway_code))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'putaway_code))
  (cl:let* ((signed (cl:slot-value msg 'acr_shelf)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'whole_bin_no))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'whole_bin_no))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'core))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'core))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'level))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'level))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'year))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'year))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'date_data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'date_data))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'serial_no))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'serial_no))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WMSData>) istream)
  "Deserializes a message object of type '<WMSData>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'unique_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'unique_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'date) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'date) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'priority) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
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
      (cl:setf (cl:slot-value msg 'bin) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:slot-value msg 'action) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'status) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ean_code) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'ean_code) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'putaway_code) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'putaway_code) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'acr_shelf) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
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
      (cl:setf (cl:slot-value msg 'core) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'core) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'level) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'level) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'year) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'year) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'date_data) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'date_data) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'serial_no) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'serial_no) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WMSData>)))
  "Returns string type for a message object of type '<WMSData>"
  "wms_data/WMSData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WMSData)))
  "Returns string type for a message object of type 'WMSData"
  "wms_data/WMSData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WMSData>)))
  "Returns md5sum for a message object of type '<WMSData>"
  "338f7a7211a5e9f2655096004ac2e21e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WMSData)))
  "Returns md5sum for a message object of type 'WMSData"
  "338f7a7211a5e9f2655096004ac2e21e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WMSData>)))
  "Returns full string definition for message of type '<WMSData>"
  (cl:format cl:nil "string unique_id~%string date~%int16 priority~%int16 rack~%int16 shelf~%int16 bin~%bool action~%bool status~%string ean_code~%string putaway_code~%int16 acr_shelf~%string whole_bin_no~%string core~%string level~%string year~%string date_data~%string serial_no~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WMSData)))
  "Returns full string definition for message of type 'WMSData"
  (cl:format cl:nil "string unique_id~%string date~%int16 priority~%int16 rack~%int16 shelf~%int16 bin~%bool action~%bool status~%string ean_code~%string putaway_code~%int16 acr_shelf~%string whole_bin_no~%string core~%string level~%string year~%string date_data~%string serial_no~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WMSData>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'unique_id))
     4 (cl:length (cl:slot-value msg 'date))
     2
     2
     2
     2
     1
     1
     4 (cl:length (cl:slot-value msg 'ean_code))
     4 (cl:length (cl:slot-value msg 'putaway_code))
     2
     4 (cl:length (cl:slot-value msg 'whole_bin_no))
     4 (cl:length (cl:slot-value msg 'core))
     4 (cl:length (cl:slot-value msg 'level))
     4 (cl:length (cl:slot-value msg 'year))
     4 (cl:length (cl:slot-value msg 'date_data))
     4 (cl:length (cl:slot-value msg 'serial_no))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WMSData>))
  "Converts a ROS message object to a list"
  (cl:list 'WMSData
    (cl:cons ':unique_id (unique_id msg))
    (cl:cons ':date (date msg))
    (cl:cons ':priority (priority msg))
    (cl:cons ':rack (rack msg))
    (cl:cons ':shelf (shelf msg))
    (cl:cons ':bin (bin msg))
    (cl:cons ':action (action msg))
    (cl:cons ':status (status msg))
    (cl:cons ':ean_code (ean_code msg))
    (cl:cons ':putaway_code (putaway_code msg))
    (cl:cons ':acr_shelf (acr_shelf msg))
    (cl:cons ':whole_bin_no (whole_bin_no msg))
    (cl:cons ':core (core msg))
    (cl:cons ':level (level msg))
    (cl:cons ':year (year msg))
    (cl:cons ':date_data (date_data msg))
    (cl:cons ':serial_no (serial_no msg))
))
