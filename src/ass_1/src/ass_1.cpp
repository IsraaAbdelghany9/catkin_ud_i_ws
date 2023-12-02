
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"





int main(int argc, char * argv[])
{
    ros::init(argc, argv, "ass_1_node");
    ros::NodeHandle handle;
    ros::Publisher ass_1_pub = handle.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel" , 100);
    
    ros::spin();
    ros::shutdown();
    return 0;
}
