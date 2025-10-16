;; Auto-generated. Do not edit!


(when (boundp 'lift_action::UI_Interface)
  (if (not (find-package "LIFT_ACTION"))
    (make-package "LIFT_ACTION"))
  (shadow 'UI_Interface (find-package "LIFT_ACTION")))
(unless (find-package "LIFT_ACTION::UI_INTERFACE")
  (make-package "LIFT_ACTION::UI_INTERFACE"))

(in-package "ROS")
;;//! \htmlinclude UI_Interface.msg.html


(defclass lift_action::UI_Interface
  :super ros::object
  :slots (_process _button _direction ))

(defmethod lift_action::UI_Interface
  (:init
   (&key
    ((:process __process) "")
    ((:button __button) nil)
    ((:direction __direction) 0)
    )
   (send-super :init)
   (setq _process (string __process))
   (setq _button __button)
   (setq _direction (round __direction))
   self)
  (:process
   (&optional __process)
   (if __process (setq _process __process)) _process)
  (:button
   (&optional (__button :null))
   (if (not (eq __button :null)) (setq _button __button)) _button)
  (:direction
   (&optional __direction)
   (if __direction (setq _direction __direction)) _direction)
  (:serialization-length
   ()
   (+
    ;; string _process
    4 (length _process)
    ;; bool _button
    1
    ;; int16 _direction
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _process
       (write-long (length _process) s) (princ _process s)
     ;; bool _button
       (if _button (write-byte -1 s) (write-byte 0 s))
     ;; int16 _direction
       (write-word _direction s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _process
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _process (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _button
     (setq _button (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int16 _direction
     (setq _direction (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get lift_action::UI_Interface :md5sum-) "4d42888895ca2661e28199a8a1f1bb9a")
(setf (get lift_action::UI_Interface :datatype-) "lift_action/UI_Interface")
(setf (get lift_action::UI_Interface :definition-)
      "string process
bool button
int16 direction
")



(provide :lift_action/UI_Interface "4d42888895ca2661e28199a8a1f1bb9a")


