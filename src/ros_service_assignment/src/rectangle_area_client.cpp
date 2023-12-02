#include "ros/ros.h"
#include "ros_service_assignment/rectangle_area.h"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "rectangle_area_client_node");
    ros::NodeHandle n;

    if (argc != 3)
    {
        ROS_INFO("usage: rectangle_area_client_node length width");
        return 1;
    }


    ros::ServiceClient client = n.serviceClient<ros_service_assignment::rectangle_area>("rectangle_area");
    ros_service_assignment::rectangle_area srv;
    srv.request.l = atoll(argv[1]);
    srv.request.w = atoll(argv[2]);
    if (client.call(srv))
    {
        ROS_INFO("Area: %ld", (long int)srv.response.area);
    }
    else
    {
        ROS_ERROR("Failed to call service rectangle_area");
        return 1;
    }

    return 0;
}