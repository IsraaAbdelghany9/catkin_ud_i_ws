; Auto-generated. Do not edit!


(cl:in-package ros_service_assignment-srv)


;//! \htmlinclude rectangle_area-request.msg.html

(cl:defclass <rectangle_area-request> (roslisp-msg-protocol:ros-message)
  ((l
    :reader l
    :initarg :l
    :type cl:float
    :initform 0.0)
   (w
    :reader w
    :initarg :w
    :type cl:float
    :initform 0.0))
)

(cl:defclass rectangle_area-request (<rectangle_area-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <rectangle_area-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'rectangle_area-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_service_assignment-srv:<rectangle_area-request> is deprecated: use ros_service_assignment-srv:rectangle_area-request instead.")))

(cl:ensure-generic-function 'l-val :lambda-list '(m))
(cl:defmethod l-val ((m <rectangle_area-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_service_assignment-srv:l-val is deprecated.  Use ros_service_assignment-srv:l instead.")
  (l m))

(cl:ensure-generic-function 'w-val :lambda-list '(m))
(cl:defmethod w-val ((m <rectangle_area-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_service_assignment-srv:w-val is deprecated.  Use ros_service_assignment-srv:w instead.")
  (w m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <rectangle_area-request>) ostream)
  "Serializes a message object of type '<rectangle_area-request>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'l))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'w))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <rectangle_area-request>) istream)
  "Deserializes a message object of type '<rectangle_area-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'l) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'w) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<rectangle_area-request>)))
  "Returns string type for a service object of type '<rectangle_area-request>"
  "ros_service_assignment/rectangle_areaRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'rectangle_area-request)))
  "Returns string type for a service object of type 'rectangle_area-request"
  "ros_service_assignment/rectangle_areaRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<rectangle_area-request>)))
  "Returns md5sum for a message object of type '<rectangle_area-request>"
  "8c40727d6328d1ee6f8baf8490116346")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'rectangle_area-request)))
  "Returns md5sum for a message object of type 'rectangle_area-request"
  "8c40727d6328d1ee6f8baf8490116346")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<rectangle_area-request>)))
  "Returns full string definition for message of type '<rectangle_area-request>"
  (cl:format cl:nil "float32 l~%float32 w~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'rectangle_area-request)))
  "Returns full string definition for message of type 'rectangle_area-request"
  (cl:format cl:nil "float32 l~%float32 w~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <rectangle_area-request>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <rectangle_area-request>))
  "Converts a ROS message object to a list"
  (cl:list 'rectangle_area-request
    (cl:cons ':l (l msg))
    (cl:cons ':w (w msg))
))
;//! \htmlinclude rectangle_area-response.msg.html

(cl:defclass <rectangle_area-response> (roslisp-msg-protocol:ros-message)
  ((area
    :reader area
    :initarg :area
    :type cl:float
    :initform 0.0))
)

(cl:defclass rectangle_area-response (<rectangle_area-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <rectangle_area-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'rectangle_area-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_service_assignment-srv:<rectangle_area-response> is deprecated: use ros_service_assignment-srv:rectangle_area-response instead.")))

(cl:ensure-generic-function 'area-val :lambda-list '(m))
(cl:defmethod area-val ((m <rectangle_area-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_service_assignment-srv:area-val is deprecated.  Use ros_service_assignment-srv:area instead.")
  (area m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <rectangle_area-response>) ostream)
  "Serializes a message object of type '<rectangle_area-response>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'area))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <rectangle_area-response>) istream)
  "Deserializes a message object of type '<rectangle_area-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'area) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<rectangle_area-response>)))
  "Returns string type for a service object of type '<rectangle_area-response>"
  "ros_service_assignment/rectangle_areaResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'rectangle_area-response)))
  "Returns string type for a service object of type 'rectangle_area-response"
  "ros_service_assignment/rectangle_areaResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<rectangle_area-response>)))
  "Returns md5sum for a message object of type '<rectangle_area-response>"
  "8c40727d6328d1ee6f8baf8490116346")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'rectangle_area-response)))
  "Returns md5sum for a message object of type 'rectangle_area-response"
  "8c40727d6328d1ee6f8baf8490116346")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<rectangle_area-response>)))
  "Returns full string definition for message of type '<rectangle_area-response>"
  (cl:format cl:nil "float32 area~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'rectangle_area-response)))
  "Returns full string definition for message of type 'rectangle_area-response"
  (cl:format cl:nil "float32 area~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <rectangle_area-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <rectangle_area-response>))
  "Converts a ROS message object to a list"
  (cl:list 'rectangle_area-response
    (cl:cons ':area (area msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'rectangle_area)))
  'rectangle_area-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'rectangle_area)))
  'rectangle_area-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'rectangle_area)))
  "Returns string type for a service object of type '<rectangle_area>"
  "ros_service_assignment/rectangle_area")