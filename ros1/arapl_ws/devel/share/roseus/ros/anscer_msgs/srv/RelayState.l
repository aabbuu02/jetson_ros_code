;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::RelayState)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'RelayState (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::RELAYSTATE")
  (make-package "ANSCER_MSGS::RELAYSTATE"))
(unless (find-package "ANSCER_MSGS::RELAYSTATEREQUEST")
  (make-package "ANSCER_MSGS::RELAYSTATEREQUEST"))
(unless (find-package "ANSCER_MSGS::RELAYSTATERESPONSE")
  (make-package "ANSCER_MSGS::RELAYSTATERESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::RelayStateRequest
  :super ros::object
  :slots (_relay_state ))

(defmethod anscer_msgs::RelayStateRequest
  (:init
   (&key
    ((:relay_state __relay_state) nil)
    )
   (send-super :init)
   (setq _relay_state __relay_state)
   self)
  (:relay_state
   (&optional (__relay_state :null))
   (if (not (eq __relay_state :null)) (setq _relay_state __relay_state)) _relay_state)
  (:serialization-length
   ()
   (+
    ;; bool _relay_state
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _relay_state
       (if _relay_state (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _relay_state
     (setq _relay_state (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anscer_msgs::RelayStateResponse
  :super ros::object
  :slots (_result ))

(defmethod anscer_msgs::RelayStateResponse
  (:init
   (&key
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _result __result)
   self)
  (:result
   (&optional (__result :null))
   (if (not (eq __result :null)) (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anscer_msgs::RelayState
  :super ros::object
  :slots ())

(setf (get anscer_msgs::RelayState :md5sum-) "e8da6cec6258bbf74a57054e8129516f")
(setf (get anscer_msgs::RelayState :datatype-) "anscer_msgs/RelayState")
(setf (get anscer_msgs::RelayState :request) anscer_msgs::RelayStateRequest)
(setf (get anscer_msgs::RelayState :response) anscer_msgs::RelayStateResponse)

(defmethod anscer_msgs::RelayStateRequest
  (:response () (instance anscer_msgs::RelayStateResponse :init)))

(setf (get anscer_msgs::RelayStateRequest :md5sum-) "e8da6cec6258bbf74a57054e8129516f")
(setf (get anscer_msgs::RelayStateRequest :datatype-) "anscer_msgs/RelayStateRequest")
(setf (get anscer_msgs::RelayStateRequest :definition-)
      "bool relay_state
---
bool result



")

(setf (get anscer_msgs::RelayStateResponse :md5sum-) "e8da6cec6258bbf74a57054e8129516f")
(setf (get anscer_msgs::RelayStateResponse :datatype-) "anscer_msgs/RelayStateResponse")
(setf (get anscer_msgs::RelayStateResponse :definition-)
      "bool relay_state
---
bool result



")



(provide :anscer_msgs/RelayState "e8da6cec6258bbf74a57054e8129516f")


