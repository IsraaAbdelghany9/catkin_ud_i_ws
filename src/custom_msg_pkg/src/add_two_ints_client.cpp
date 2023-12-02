#include "ros/ros.h"
#include "custom_msg_pkg/AddTwoInts.h"


int main (int argc , char **argv)
{
    ros::init(argc, argv, "add_two_ints_client_node");
    ros::NodeHandle nh;

    // to make sure that the user provided 2 arguments to the node if no then print the usage message and return 1
    if (argc != 3)
    {
        ROS_INFO("usage: add_two_ints_client X Y");
        return 1;
    }
    
    ros::ServiceClient client = nh.serviceClient<custom_msg_pkg::AddTwoInts>("add_two_ints");
    
    custom_msg_pkg::AddTwoInts srv;
    srv.request.a = atoll(argv[1]); //convert a string to long int
    srv.request.b = atoll(argv[2]);
    
    if (client.call(srv))
    {
        ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }
    else
    {
        ROS_ERROR("Failed to call service add_two_ints");
        return 1;
    }
    
    return 0;
}