
#include "ros/ros.h"
#include "custom_msg_pkg/IOT_sensor.h" // custom message header file

void callback(const custom_msg_pkg::IOT_sensor::ConstPtr& msg)
{


    ROS_INFO(" \n I heard: \n%d \n%s \n%f \n%f", msg->id, msg->name.c_str(), msg->temperature, msg->humidity);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "application_on_message_1_node");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise< custom_msg_pkg::IOT_sensor>("application_on_message_1_topic", 10);

    ros::Subscriber sub = nh.subscribe("application_on_message_1_topic", 1000, callback);


    ros::Rate loop_rate(1);
    custom_msg_pkg::IOT_sensor var;
    while (ros::ok())
    {
        var.id = 91125 ;
        var.name = "IOT_Sensor";
        var.temperature = 23;
        var.humidity = 40;

        pub.publish(var);
    
        ros::spinOnce();                
        loop_rate.sleep();

    }
    
    return 0;
}

