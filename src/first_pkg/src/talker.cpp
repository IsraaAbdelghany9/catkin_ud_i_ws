#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char** argv)
{
    // Initialize the ROS node
    ros::init(argc, argv, "talker_node");
    ros::NodeHandle nh;

    // Create a publisher object
    ros::Publisher pub = nh.advertise<std_msgs::String>("chatter", 10);

    // Set the publishing rate
    ros::Rate rate(10); // 10 Hz

    int count = 0; // Counter for the number of times "Hello, world!" is published

    while (ros::ok())
    {
        // Create a message object
        std_msgs::String msg;
        msg.data = "Hello, world! Count: " + std::to_string(count);

        // Publish the message
        pub.publish(msg);

        // Increment the count
        count++;

        // Sleep to maintain the publishing rate
        rate.sleep();
    }

    return 0;
}

