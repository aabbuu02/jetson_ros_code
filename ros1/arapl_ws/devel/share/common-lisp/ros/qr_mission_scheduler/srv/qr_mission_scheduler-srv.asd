
(cl:in-package :asdf)

(defsystem "qr_mission_scheduler-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "GetGoal" :depends-on ("_package_GetGoal"))
    (:file "_package_GetGoal" :depends-on ("_package"))
  ))