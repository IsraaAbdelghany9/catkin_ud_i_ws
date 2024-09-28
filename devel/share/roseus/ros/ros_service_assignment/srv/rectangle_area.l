;; Auto-generated. Do not edit!


(when (boundp 'ros_service_assignment::rectangle_area)
  (if (not (find-package "ROS_SERVICE_ASSIGNMENT"))
    (make-package "ROS_SERVICE_ASSIGNMENT"))
  (shadow 'rectangle_area (find-package "ROS_SERVICE_ASSIGNMENT")))
(unless (find-package "ROS_SERVICE_ASSIGNMENT::RECTANGLE_AREA")
  (make-package "ROS_SERVICE_ASSIGNMENT::RECTANGLE_AREA"))
(unless (find-package "ROS_SERVICE_ASSIGNMENT::RECTANGLE_AREAREQUEST")
  (make-package "ROS_SERVICE_ASSIGNMENT::RECTANGLE_AREAREQUEST"))
(unless (find-package "ROS_SERVICE_ASSIGNMENT::RECTANGLE_AREARESPONSE")
  (make-package "ROS_SERVICE_ASSIGNMENT::RECTANGLE_AREARESPONSE"))

(in-package "ROS")





(defclass ros_service_assignment::rectangle_areaRequest
  :super ros::object
  :slots (_l _w ))

(defmethod ros_service_assignment::rectangle_areaRequest
  (:init
   (&key
    ((:l __l) 0.0)
    ((:w __w) 0.0)
    )
   (send-super :init)
   (setq _l (float __l))
   (setq _w (float __w))
   self)
  (:l
   (&optional __l)
   (if __l (setq _l __l)) _l)
  (:w
   (&optional __w)
   (if __w (setq _w __w)) _w)
  (:serialization-length
   ()
   (+
    ;; float32 _l
    4
    ;; float32 _w
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _l
       (sys::poke _l (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _w
       (sys::poke _w (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _l
     (setq _l (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _w
     (setq _w (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ros_service_assignment::rectangle_areaResponse
  :super ros::object
  :slots (_area ))

(defmethod ros_service_assignment::rectangle_areaResponse
  (:init
   (&key
    ((:area __area) 0.0)
    )
   (send-super :init)
   (setq _area (float __area))
   self)
  (:area
   (&optional __area)
   (if __area (setq _area __area)) _area)
  (:serialization-length
   ()
   (+
    ;; float32 _area
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _area
       (sys::poke _area (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _area
     (setq _area (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ros_service_assignment::rectangle_area
  :super ros::object
  :slots ())

(setf (get ros_service_assignment::rectangle_area :md5sum-) "8c40727d6328d1ee6f8baf8490116346")
(setf (get ros_service_assignment::rectangle_area :datatype-) "ros_service_assignment/rectangle_area")
(setf (get ros_service_assignment::rectangle_area :request) ros_service_assignment::rectangle_areaRequest)
(setf (get ros_service_assignment::rectangle_area :response) ros_service_assignment::rectangle_areaResponse)

(defmethod ros_service_assignment::rectangle_areaRequest
  (:response () (instance ros_service_assignment::rectangle_areaResponse :init)))

(setf (get ros_service_assignment::rectangle_areaRequest :md5sum-) "8c40727d6328d1ee6f8baf8490116346")
(setf (get ros_service_assignment::rectangle_areaRequest :datatype-) "ros_service_assignment/rectangle_areaRequest")
(setf (get ros_service_assignment::rectangle_areaRequest :definition-)
      "float32 l
float32 w

---
float32 area
")

(setf (get ros_service_assignment::rectangle_areaResponse :md5sum-) "8c40727d6328d1ee6f8baf8490116346")
(setf (get ros_service_assignment::rectangle_areaResponse :datatype-) "ros_service_assignment/rectangle_areaResponse")
(setf (get ros_service_assignment::rectangle_areaResponse :definition-)
      "float32 l
float32 w

---
float32 area
")



(provide :ros_service_assignment/rectangle_area "8c40727d6328d1ee6f8baf8490116346")


