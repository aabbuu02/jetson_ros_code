
(cl:in-package :asdf)

(defsystem "lift_action-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ErrorStatus" :depends-on ("_package_ErrorStatus"))
    (:file "_package_ErrorStatus" :depends-on ("_package"))
    (:file "Home_sensor" :depends-on ("_package_Home_sensor"))
    (:file "_package_Home_sensor" :depends-on ("_package"))
    (:file "Homing_status" :depends-on ("_package_Homing_status"))
    (:file "_package_Homing_status" :depends-on ("_package"))
    (:file "LiftAction" :depends-on ("_package_LiftAction"))
    (:file "_package_LiftAction" :depends-on ("_package"))
    (:file "LiftFeedback" :depends-on ("_package_LiftFeedback"))
    (:file "_package_LiftFeedback" :depends-on ("_package"))
    (:file "UI_Interface" :depends-on ("_package_UI_Interface"))
    (:file "_package_UI_Interface" :depends-on ("_package"))
  ))