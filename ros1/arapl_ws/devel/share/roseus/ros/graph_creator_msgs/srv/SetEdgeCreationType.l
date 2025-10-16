;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::SetEdgeCreationType)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'SetEdgeCreationType (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::SETEDGECREATIONTYPE")
  (make-package "GRAPH_CREATOR_MSGS::SETEDGECREATIONTYPE"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETEDGECREATIONTYPEREQUEST")
  (make-package "GRAPH_CREATOR_MSGS::SETEDGECREATIONTYPEREQUEST"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETEDGECREATIONTYPERESPONSE")
  (make-package "GRAPH_CREATOR_MSGS::SETEDGECREATIONTYPERESPONSE"))

(in-package "ROS")





(defclass graph_creator_msgs::SetEdgeCreationTypeRequest
  :super ros::object
  :slots (_type ))

(defmethod graph_creator_msgs::SetEdgeCreationTypeRequest
  (:init
   (&key
    ((:type __type) (instance graph_creator_msgs::EdgeCreationType :init))
    )
   (send-super :init)
   (setq _type __type)
   self)
  (:type
   (&rest __type)
   (if (keywordp (car __type))
       (send* _type __type)
     (progn
       (if __type (setq _type (car __type)))
       _type)))
  (:serialization-length
   ()
   (+
    ;; graph_creator_msgs/EdgeCreationType _type
    (send _type :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/EdgeCreationType _type
       (send _type :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/EdgeCreationType _type
     (send _type :deserialize buf ptr-) (incf ptr- (send _type :serialization-length))
   ;;
   self)
  )

(defclass graph_creator_msgs::SetEdgeCreationTypeResponse
  :super ros::object
  :slots (_success _message ))

(defmethod graph_creator_msgs::SetEdgeCreationTypeResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass graph_creator_msgs::SetEdgeCreationType
  :super ros::object
  :slots ())

(setf (get graph_creator_msgs::SetEdgeCreationType :md5sum-) "e5f002eea2c5b918b9b4d3297d8315c2")
(setf (get graph_creator_msgs::SetEdgeCreationType :datatype-) "graph_creator_msgs/SetEdgeCreationType")
(setf (get graph_creator_msgs::SetEdgeCreationType :request) graph_creator_msgs::SetEdgeCreationTypeRequest)
(setf (get graph_creator_msgs::SetEdgeCreationType :response) graph_creator_msgs::SetEdgeCreationTypeResponse)

(defmethod graph_creator_msgs::SetEdgeCreationTypeRequest
  (:response () (instance graph_creator_msgs::SetEdgeCreationTypeResponse :init)))

(setf (get graph_creator_msgs::SetEdgeCreationTypeRequest :md5sum-) "e5f002eea2c5b918b9b4d3297d8315c2")
(setf (get graph_creator_msgs::SetEdgeCreationTypeRequest :datatype-) "graph_creator_msgs/SetEdgeCreationTypeRequest")
(setf (get graph_creator_msgs::SetEdgeCreationTypeRequest :definition-)
      "graph_creator_msgs/EdgeCreationType type

================================================================================
MSG: graph_creator_msgs/EdgeCreationType
uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1

---
bool success
string message
")

(setf (get graph_creator_msgs::SetEdgeCreationTypeResponse :md5sum-) "e5f002eea2c5b918b9b4d3297d8315c2")
(setf (get graph_creator_msgs::SetEdgeCreationTypeResponse :datatype-) "graph_creator_msgs/SetEdgeCreationTypeResponse")
(setf (get graph_creator_msgs::SetEdgeCreationTypeResponse :definition-)
      "graph_creator_msgs/EdgeCreationType type

================================================================================
MSG: graph_creator_msgs/EdgeCreationType
uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1

---
bool success
string message
")



(provide :graph_creator_msgs/SetEdgeCreationType "e5f002eea2c5b918b9b4d3297d8315c2")


