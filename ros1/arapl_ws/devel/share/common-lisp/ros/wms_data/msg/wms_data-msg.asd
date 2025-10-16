
(cl:in-package :asdf)

(defsystem "wms_data-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Feedback" :depends-on ("_package_Feedback"))
    (:file "_package_Feedback" :depends-on ("_package"))
    (:file "WMSData" :depends-on ("_package_WMSData"))
    (:file "_package_WMSData" :depends-on ("_package"))
    (:file "WMSTasks" :depends-on ("_package_WMSTasks"))
    (:file "_package_WMSTasks" :depends-on ("_package"))
  ))