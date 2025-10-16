;; Auto-generated. Do not edit!


(when (boundp 'wms_data::Feedback)
  (if (not (find-package "WMS_DATA"))
    (make-package "WMS_DATA"))
  (shadow 'Feedback (find-package "WMS_DATA")))
(unless (find-package "WMS_DATA::FEEDBACK")
  (make-package "WMS_DATA::FEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude Feedback.msg.html


(defclass wms_data::Feedback
  :super ros::object
  :slots (_unique_id _acr_shelf _action _status _failStatus ))

(defmethod wms_data::Feedback
  (:init
   (&key
    ((:unique_id __unique_id) "")
    ((:acr_shelf __acr_shelf) 0)
    ((:action __action) 0)
    ((:status __status) nil)
    ((:failStatus __failStatus) nil)
    )
   (send-super :init)
   (setq _unique_id (string __unique_id))
   (setq _acr_shelf (round __acr_shelf))
   (setq _action (round __action))
   (setq _status __status)
   (setq _failStatus __failStatus)
   self)
  (:unique_id
   (&optional __unique_id)
   (if __unique_id (setq _unique_id __unique_id)) _unique_id)
  (:acr_shelf
   (&optional __acr_shelf)
   (if __acr_shelf (setq _acr_shelf __acr_shelf)) _acr_shelf)
  (:action
   (&optional __action)
   (if __action (setq _action __action)) _action)
  (:status
   (&optional (__status :null))
   (if (not (eq __status :null)) (setq _status __status)) _status)
  (:failStatus
   (&optional (__failStatus :null))
   (if (not (eq __failStatus :null)) (setq _failStatus __failStatus)) _failStatus)
  (:serialization-length
   ()
   (+
    ;; string _unique_id
    4 (length _unique_id)
    ;; int16 _acr_shelf
    2
    ;; int16 _action
    2
    ;; bool _status
    1
    ;; bool _failStatus
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _unique_id
       (write-long (length _unique_id) s) (princ _unique_id s)
     ;; int16 _acr_shelf
       (write-word _acr_shelf s)
     ;; int16 _action
       (write-word _action s)
     ;; bool _status
       (if _status (write-byte -1 s) (write-byte 0 s))
     ;; bool _failStatus
       (if _failStatus (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _unique_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _unique_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _acr_shelf
     (setq _acr_shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _action
     (setq _action (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; bool _status
     (setq _status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _failStatus
     (setq _failStatus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get wms_data::Feedback :md5sum-) "6588a9452ee8a183f42490d3b437bdbe")
(setf (get wms_data::Feedback :datatype-) "wms_data/Feedback")
(setf (get wms_data::Feedback :definition-)
      "string unique_id
int16 acr_shelf
int16 action
bool status
bool failStatus

")



(provide :wms_data/Feedback "6588a9452ee8a183f42490d3b437bdbe")


