#include "ros/ros.h"
#include "ros_service_assignment/rectangle_area.h"


bool rectangle_area(ros_service_assignment::rectangle_area::Request  &req,ros_service_assignment::rectangle_area::Response &res)
{
  res.area = req.l * req.w;
  ROS_INFO("request: length=%ld, width=%ld", (long int)req.l, (long int)req.w);
  ROS_INFO("sending back response: [%ld]", (long int)res.area);
  return true;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "rectangle_area_server_node");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("rectangle_area", rectangle_area);
  ROS_INFO("Ready to calculate the area of a rectangle.");
  ros::spin();

  return 0;
}


