;; Auto-generated. Do not edit!


(when (boundp 'lift_action::LiftAction)
  (if (not (find-package "LIFT_ACTION"))
    (make-package "LIFT_ACTION"))
  (shadow 'LiftAction (find-package "LIFT_ACTION")))
(unless (find-package "LIFT_ACTION::LIFTACTION")
  (make-package "LIFT_ACTION::LIFTACTION"))

(in-package "ROS")
;;//! \htmlinclude LiftAction.msg.html


(defclass lift_action::LiftAction
  :super ros::object
  :slots (_unique_id _reached _rack _shelf _acr_shelf _action _whole_bin_no _putaway_barcode ))

(defmethod lift_action::LiftAction
  (:init
   (&key
    ((:unique_id __unique_id) "")
    ((:reached __reached) nil)
    ((:rack __rack) 0)
    ((:shelf __shelf) 0)
    ((:acr_shelf __acr_shelf) 0)
    ((:action __action) 0)
    ((:whole_bin_no __whole_bin_no) "")
    ((:putaway_barcode __putaway_barcode) "")
    )
   (send-super :init)
   (setq _unique_id (string __unique_id))
   (setq _reached __reached)
   (setq _rack (round __rack))
   (setq _shelf (round __shelf))
   (setq _acr_shelf (round __acr_shelf))
   (setq _action (round __action))
   (setq _whole_bin_no (string __whole_bin_no))
   (setq _putaway_barcode (string __putaway_barcode))
   self)
  (:unique_id
   (&optional __unique_id)
   (if __unique_id (setq _unique_id __unique_id)) _unique_id)
  (:reached
   (&optional (__reached :null))
   (if (not (eq __reached :null)) (setq _reached __reached)) _reached)
  (:rack
   (&optional __rack)
   (if __rack (setq _rack __rack)) _rack)
  (:shelf
   (&optional __shelf)
   (if __shelf (setq _shelf __shelf)) _shelf)
  (:acr_shelf
   (&optional __acr_shelf)
   (if __acr_shelf (setq _acr_shelf __acr_shelf)) _acr_shelf)
  (:action
   (&optional __action)
   (if __action (setq _action __action)) _action)
  (:whole_bin_no
   (&optional __whole_bin_no)
   (if __whole_bin_no (setq _whole_bin_no __whole_bin_no)) _whole_bin_no)
  (:putaway_barcode
   (&optional __putaway_barcode)
   (if __putaway_barcode (setq _putaway_barcode __putaway_barcode)) _putaway_barcode)
  (:serialization-length
   ()
   (+
    ;; string _unique_id
    4 (length _unique_id)
    ;; bool _reached
    1
    ;; int16 _rack
    2
    ;; int16 _shelf
    2
    ;; int16 _acr_shelf
    2
    ;; int16 _action
    2
    ;; string _whole_bin_no
    4 (length _whole_bin_no)
    ;; string _putaway_barcode
    4 (length _putaway_barcode)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _unique_id
       (write-long (length _unique_id) s) (princ _unique_id s)
     ;; bool _reached
       (if _reached (write-byte -1 s) (write-byte 0 s))
     ;; int16 _rack
       (write-word _rack s)
     ;; int16 _shelf
       (write-word _shelf s)
     ;; int16 _acr_shelf
       (write-word _acr_shelf s)
     ;; int16 _action
       (write-word _action s)
     ;; string _whole_bin_no
       (write-long (length _whole_bin_no) s) (princ _whole_bin_no s)
     ;; string _putaway_barcode
       (write-long (length _putaway_barcode) s) (princ _putaway_barcode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _unique_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _unique_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _reached
     (setq _reached (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int16 _rack
     (setq _rack (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _shelf
     (setq _shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _acr_shelf
     (setq _acr_shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _action
     (setq _action (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _whole_bin_no
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _whole_bin_no (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _putaway_barcode
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _putaway_barcode (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get lift_action::LiftAction :md5sum-) "74abac7a70a7dbf2314bec741f0342c4")
(setf (get lift_action::LiftAction :datatype-) "lift_action/LiftAction")
(setf (get lift_action::LiftAction :definition-)
      "string unique_id
bool reached
int16 rack
int16 shelf
int16 acr_shelf
int16 action
string whole_bin_no
string putaway_barcode
")



(provide :lift_action/LiftAction "74abac7a70a7dbf2314bec741f0342c4")


