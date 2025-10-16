;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::SelectedGraphElements)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'SelectedGraphElements (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::SELECTEDGRAPHELEMENTS")
  (make-package "GRAPH_CREATOR_MSGS::SELECTEDGRAPHELEMENTS"))

(in-package "ROS")
;;//! \htmlinclude SelectedGraphElements.msg.html


(defclass graph_creator_msgs::SelectedGraphElements
  :super ros::object
  :slots (_selected_elements ))

(defmethod graph_creator_msgs::SelectedGraphElements
  (:init
   (&key
    ((:selected_elements __selected_elements) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _selected_elements __selected_elements)
   self)
  (:selected_elements
   (&optional __selected_elements)
   (if __selected_elements (setq _selected_elements __selected_elements)) _selected_elements)
  (:serialization-length
   ()
   (+
    ;; string[] _selected_elements
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _selected_elements)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _selected_elements
     (write-long (length _selected_elements) s)
     (dolist (elem _selected_elements)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _selected_elements
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _selected_elements (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _selected_elements i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get graph_creator_msgs::SelectedGraphElements :md5sum-) "d12cf3a0df62575b5490d1e21b2d67c6")
(setf (get graph_creator_msgs::SelectedGraphElements :datatype-) "graph_creator_msgs/SelectedGraphElements")
(setf (get graph_creator_msgs::SelectedGraphElements :definition-)
      "string[] selected_elements
")



(provide :graph_creator_msgs/SelectedGraphElements "d12cf3a0df62575b5490d1e21b2d67c6")


