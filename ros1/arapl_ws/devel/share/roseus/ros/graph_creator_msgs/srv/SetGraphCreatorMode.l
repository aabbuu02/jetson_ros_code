;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::SetGraphCreatorMode)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'SetGraphCreatorMode (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::SETGRAPHCREATORMODE")
  (make-package "GRAPH_CREATOR_MSGS::SETGRAPHCREATORMODE"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETGRAPHCREATORMODEREQUEST")
  (make-package "GRAPH_CREATOR_MSGS::SETGRAPHCREATORMODEREQUEST"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETGRAPHCREATORMODERESPONSE")
  (make-package "GRAPH_CREATOR_MSGS::SETGRAPHCREATORMODERESPONSE"))

(in-package "ROS")





(defclass graph_creator_msgs::SetGraphCreatorModeRequest
  :super ros::object
  :slots (_mode ))

(defmethod graph_creator_msgs::SetGraphCreatorModeRequest
  (:init
   (&key
    ((:mode __mode) (instance graph_creator_msgs::GraphCreatorMode :init))
    )
   (send-super :init)
   (setq _mode __mode)
   self)
  (:mode
   (&rest __mode)
   (if (keywordp (car __mode))
       (send* _mode __mode)
     (progn
       (if __mode (setq _mode (car __mode)))
       _mode)))
  (:serialization-length
   ()
   (+
    ;; graph_creator_msgs/GraphCreatorMode _mode
    (send _mode :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/GraphCreatorMode _mode
       (send _mode :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/GraphCreatorMode _mode
     (send _mode :deserialize buf ptr-) (incf ptr- (send _mode :serialization-length))
   ;;
   self)
  )

(defclass graph_creator_msgs::SetGraphCreatorModeResponse
  :super ros::object
  :slots (_success _message ))

(defmethod graph_creator_msgs::SetGraphCreatorModeResponse
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

(defclass graph_creator_msgs::SetGraphCreatorMode
  :super ros::object
  :slots ())

(setf (get graph_creator_msgs::SetGraphCreatorMode :md5sum-) "63d68ca9906d91378a26fb79fbdcfad4")
(setf (get graph_creator_msgs::SetGraphCreatorMode :datatype-) "graph_creator_msgs/SetGraphCreatorMode")
(setf (get graph_creator_msgs::SetGraphCreatorMode :request) graph_creator_msgs::SetGraphCreatorModeRequest)
(setf (get graph_creator_msgs::SetGraphCreatorMode :response) graph_creator_msgs::SetGraphCreatorModeResponse)

(defmethod graph_creator_msgs::SetGraphCreatorModeRequest
  (:response () (instance graph_creator_msgs::SetGraphCreatorModeResponse :init)))

(setf (get graph_creator_msgs::SetGraphCreatorModeRequest :md5sum-) "63d68ca9906d91378a26fb79fbdcfad4")
(setf (get graph_creator_msgs::SetGraphCreatorModeRequest :datatype-) "graph_creator_msgs/SetGraphCreatorModeRequest")
(setf (get graph_creator_msgs::SetGraphCreatorModeRequest :definition-)
      "graph_creator_msgs/GraphCreatorMode mode

================================================================================
MSG: graph_creator_msgs/GraphCreatorMode
uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1

uint8 mode
---
bool success
string message
")

(setf (get graph_creator_msgs::SetGraphCreatorModeResponse :md5sum-) "63d68ca9906d91378a26fb79fbdcfad4")
(setf (get graph_creator_msgs::SetGraphCreatorModeResponse :datatype-) "graph_creator_msgs/SetGraphCreatorModeResponse")
(setf (get graph_creator_msgs::SetGraphCreatorModeResponse :definition-)
      "graph_creator_msgs/GraphCreatorMode mode

================================================================================
MSG: graph_creator_msgs/GraphCreatorMode
uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1

uint8 mode
---
bool success
string message
")



(provide :graph_creator_msgs/SetGraphCreatorMode "63d68ca9906d91378a26fb79fbdcfad4")


