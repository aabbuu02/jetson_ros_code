;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::Indication)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'Indication (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::INDICATION")
  (make-package "ANSCER_MSGS::INDICATION"))

(in-package "ROS")
;;//! \htmlinclude Indication.msg.html


(defclass anscer_msgs::Indication
  :super ros::object
  :slots (_color _color_mode _buzzer _buzzer_mode _priority ))

(defmethod anscer_msgs::Indication
  (:init
   (&key
    ((:color __color) "")
    ((:color_mode __color_mode) 0)
    ((:buzzer __buzzer) nil)
    ((:buzzer_mode __buzzer_mode) 0)
    ((:priority __priority) 0)
    )
   (send-super :init)
   (setq _color (string __color))
   (setq _color_mode (round __color_mode))
   (setq _buzzer __buzzer)
   (setq _buzzer_mode (round __buzzer_mode))
   (setq _priority (round __priority))
   self)
  (:color
   (&optional __color)
   (if __color (setq _color __color)) _color)
  (:color_mode
   (&optional __color_mode)
   (if __color_mode (setq _color_mode __color_mode)) _color_mode)
  (:buzzer
   (&optional (__buzzer :null))
   (if (not (eq __buzzer :null)) (setq _buzzer __buzzer)) _buzzer)
  (:buzzer_mode
   (&optional __buzzer_mode)
   (if __buzzer_mode (setq _buzzer_mode __buzzer_mode)) _buzzer_mode)
  (:priority
   (&optional __priority)
   (if __priority (setq _priority __priority)) _priority)
  (:serialization-length
   ()
   (+
    ;; string _color
    4 (length _color)
    ;; int8 _color_mode
    1
    ;; bool _buzzer
    1
    ;; int8 _buzzer_mode
    1
    ;; int16 _priority
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _color
       (write-long (length _color) s) (princ _color s)
     ;; int8 _color_mode
       (write-byte _color_mode s)
     ;; bool _buzzer
       (if _buzzer (write-byte -1 s) (write-byte 0 s))
     ;; int8 _buzzer_mode
       (write-byte _buzzer_mode s)
     ;; int16 _priority
       (write-word _priority s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _color
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _color (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int8 _color_mode
     (setq _color_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _color_mode 127) (setq _color_mode (- _color_mode 256)))
   ;; bool _buzzer
     (setq _buzzer (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int8 _buzzer_mode
     (setq _buzzer_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _buzzer_mode 127) (setq _buzzer_mode (- _buzzer_mode 256)))
   ;; int16 _priority
     (setq _priority (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get anscer_msgs::Indication :md5sum-) "121d26089d956929130db8efbb5ea4b2")
(setf (get anscer_msgs::Indication :datatype-) "anscer_msgs/Indication")
(setf (get anscer_msgs::Indication :definition-)
      "string color
int8 color_mode
bool buzzer
int8 buzzer_mode
int16 priority



")



(provide :anscer_msgs/Indication "121d26089d956929130db8efbb5ea4b2")


