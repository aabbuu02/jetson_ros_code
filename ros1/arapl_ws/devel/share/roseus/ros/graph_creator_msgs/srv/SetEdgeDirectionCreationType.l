;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::SetEdgeDirectionCreationType)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'SetEdgeDirectionCreationType (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::SETEDGEDIRECTIONCREATIONTYPE")
  (make-package "GRAPH_CREATOR_MSGS::SETEDGEDIRECTIONCREATIONTYPE"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETEDGEDIRECTIONCREATIONTYPEREQUEST")
  (make-package "GRAPH_CREATOR_MSGS::SETEDGEDIRECTIONCREATIONTYPEREQUEST"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETEDGEDIRECTIONCREATIONTYPERESPONSE")
  (make-package "GRAPH_CREATOR_MSGS::SETEDGEDIRECTIONCREATIONTYPERESPONSE"))

(in-package "ROS")





(defclass graph_creator_msgs::SetEdgeDirectionCreationTypeRequest
  :super ros::object
  :slots (_type ))

(defmethod graph_creator_msgs::SetEdgeDirectionCreationTypeRequest
  (:init
   (&key
    ((:type __type) (instance graph_creator_msgs::EdgeDirectionCreationType :init))
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
    ;; graph_creator_msgs/EdgeDirectionCreationType _type
    (send _type :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/EdgeDirectionCreationType _type
       (send _type :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/EdgeDirectionCreationType _type
     (send _type :deserialize buf ptr-) (incf ptr- (send _type :serialization-length))
   ;;
   self)
  )

(defclass graph_creator_msgs::SetEdgeDirectionCreationTypeResponse
  :super ros::object
  :slots (_success _message ))

(defmethod graph_creator_msgs::SetEdgeDirectionCreationTypeResponse
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

(defclass graph_creator_msgs::SetEdgeDirectionCreationType
  :super ros::object
  :slots ())

(setf (get graph_creator_msgs::SetEdgeDirectionCreationType :md5sum-) "34f28652b2a44e6592bf32db0fa65269")
(setf (get graph_creator_msgs::SetEdgeDirectionCreationType :datatype-) "graph_creator_msgs/SetEdgeDirectionCreationType")
(setf (get graph_creator_msgs::SetEdgeDirectionCreationType :request) graph_creator_msgs::SetEdgeDirectionCreationTypeRequest)
(setf (get graph_creator_msgs::SetEdgeDirectionCreationType :response) graph_creator_msgs::SetEdgeDirectionCreationTypeResponse)

(defmethod graph_creator_msgs::SetEdgeDirectionCreationTypeRequest
  (:response () (instance graph_creator_msgs::SetEdgeDirectionCreationTypeResponse :init)))

(setf (get graph_creator_msgs::SetEdgeDirectionCreationTypeRequest :md5sum-) "34f28652b2a44e6592bf32db0fa65269")
(setf (get graph_creator_msgs::SetEdgeDirectionCreationTypeRequest :datatype-) "graph_creator_msgs/SetEdgeDirectionCreationTypeRequest")
(setf (get graph_creator_msgs::SetEdgeDirectionCreationTypeRequest :definition-)
      "graph_creator_msgs/EdgeDirectionCreationType type

================================================================================
MSG: graph_creator_msgs/EdgeDirectionCreationType
uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2

uint8 direction_type

---
bool success
string message
")

(setf (get graph_creator_msgs::SetEdgeDirectionCreationTypeResponse :md5sum-) "34f28652b2a44e6592bf32db0fa65269")
(setf (get graph_creator_msgs::SetEdgeDirectionCreationTypeResponse :datatype-) "graph_creator_msgs/SetEdgeDirectionCreationTypeResponse")
(setf (get graph_creator_msgs::SetEdgeDirectionCreationTypeResponse :definition-)
      "graph_creator_msgs/EdgeDirectionCreationType type

================================================================================
MSG: graph_creator_msgs/EdgeDirectionCreationType
uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2

uint8 direction_type

---
bool success
string message
")



(provide :graph_creator_msgs/SetEdgeDirectionCreationType "34f28652b2a44e6592bf32db0fa65269")


