#include <ros/ros.h>
#include <std_msgs/String.h>

int count = 0;

void messageCallback(const std_msgs::String::ConstPtr& msg)
{
    if (msg->data == "hello world")
    {
        count++;
    }
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "listener_node");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("chatter", 1000, messageCallback);

    ros::spin();

    ROS_INFO("Received %d 'hello world' messages", count);

    return 0;
}
