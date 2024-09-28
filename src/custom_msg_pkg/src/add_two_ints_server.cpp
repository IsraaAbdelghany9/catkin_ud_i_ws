#include "ros/ros.h"
#include "custom_msg_pkg/AddTwoInts.h"

bool add(custom_msg_pkg::AddTwoInts::Request& req,custom_msg_pkg::AddTwoInts::Response& res)
{
    res.sum = req.a + req.b;
    ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
    ROS_INFO("sending back response: [%ld]", (long int)res.sum);
    return true;
}



int main(int argc, char * argv[])
{
 
    ros::init(argc, argv, "add_two_ints_server_node");
    ros::NodeHandle handle;
    
    ros::ServiceServer service= handle.advertiseService("add_two_ints", add);
    
    ROS_INFO("Ready to add two ints.");
    
    ros::spin();
    ros::shutdown();
    return 0;
}
