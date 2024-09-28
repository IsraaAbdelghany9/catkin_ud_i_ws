
(cl:in-package :asdf)

(defsystem "ros_service_assignment-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "rectangle_area" :depends-on ("_package_rectangle_area"))
    (:file "_package_rectangle_area" :depends-on ("_package"))
  ))