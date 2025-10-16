;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::NearestNode)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'NearestNode (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::NEARESTNODE")
  (make-package "ANSCER_MSGS::NEARESTNODE"))
(unless (find-package "ANSCER_MSGS::NEARESTNODEREQUEST")
  (make-package "ANSCER_MSGS::NEARESTNODEREQUEST"))
(unless (find-package "ANSCER_MSGS::NEARESTNODERESPONSE")
  (make-package "ANSCER_MSGS::NEARESTNODERESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::NearestNodeRequest
  :super ros::object
  :slots ())

(defmethod anscer_msgs::NearestNodeRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass anscer_msgs::NearestNodeResponse
  :super ros::object
  :slots (_id ))

(defmethod anscer_msgs::NearestNodeResponse
  (:init
   (&key
    ((:id __id) 0)
    )
   (send-super :init)
   (setq _id (round __id))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:serialization-length
   ()
   (+
    ;; int32 _id
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _id
       (write-long _id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass anscer_msgs::NearestNode
  :super ros::object
  :slots ())

(setf (get anscer_msgs::NearestNode :md5sum-) "c5e4a7d59c68f74eabcec876a00216aa")
(setf (get anscer_msgs::NearestNode :datatype-) "anscer_msgs/NearestNode")
(setf (get anscer_msgs::NearestNode :request) anscer_msgs::NearestNodeRequest)
(setf (get anscer_msgs::NearestNode :response) anscer_msgs::NearestNodeResponse)

(defmethod anscer_msgs::NearestNodeRequest
  (:response () (instance anscer_msgs::NearestNodeResponse :init)))

(setf (get anscer_msgs::NearestNodeRequest :md5sum-) "c5e4a7d59c68f74eabcec876a00216aa")
(setf (get anscer_msgs::NearestNodeRequest :datatype-) "anscer_msgs/NearestNodeRequest")
(setf (get anscer_msgs::NearestNodeRequest :definition-)
      "
---
int32 id


")

(setf (get anscer_msgs::NearestNodeResponse :md5sum-) "c5e4a7d59c68f74eabcec876a00216aa")
(setf (get anscer_msgs::NearestNodeResponse :datatype-) "anscer_msgs/NearestNodeResponse")
(setf (get anscer_msgs::NearestNodeResponse :definition-)
      "
---
int32 id


")



(provide :anscer_msgs/NearestNode "c5e4a7d59c68f74eabcec876a00216aa")


