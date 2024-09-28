#include <ros/ros.h>
#include <std_msgs/String.h>
#include <pigpiod_if2.h> 
// Include pigpio library
///////////////////////////////
// GPIO Pins
const int in1 = 1;
const int in2 = 5;
const int en_a = 4;
const int in3 = 10;
const int in4 = 6;
const int en_b = 13;

const int in5 = 23;
const int in6 = 24;
const int en_aa = 25;
const int in7 = 17;
const int in8 = 27;
const int en_bb = 22;

// Callback function for controlling motors
void motorControlCallback(const std_msgs::String::ConstPtr& msg) {
    std::string command = msg->data;
    int pi = pigpio_start(NULL, NULL);  // Initialize pigpio library
    ROS_INFO("HI");
    set_mode(pi, in1, PI_OUTPUT);
    set_mode(pi, in2, PI_OUTPUT);
    set_mode(pi, in3, PI_OUTPUT);
    set_mode(pi, in4, PI_OUTPUT);
    set_mode(pi, en_a, PI_OUTPUT);
    set_mode(pi, en_b, PI_OUTPUT);
    gpio_write(pi, en_a, 0);
    gpio_write(pi, en_b, 0);

    set_mode(pi, in5, PI_OUTPUT);
    set_mode(pi, in6, PI_OUTPUT);
    set_mode(pi, in7, PI_OUTPUT);
    set_mode(pi, in8, PI_OUTPUT);
    set_mode(pi, en_aa, PI_OUTPUT);
    set_mode(pi, en_bb, PI_OUTPUT);
    gpio_write(pi, en_aa, 0);
    gpio_write(pi, en_bb, 0);

    if (command == "f") {
        gpio_write(pi, in1, 1);
        gpio_write(pi, in2, 0);
        gpio_write(pi, in3, 1);
        gpio_write(pi, in4, 0);
        ROS_INFO("Forward");

        gpio_write(pi, in5, 1);
        gpio_write(pi, in6, 0);
        gpio_write(pi, in7, 1);
        gpio_write(pi, in8, 0);
    }
    else if (command == "b") {

        gpio_write(pi, in1, 0);
        gpio_write(pi, in2, 1);
        gpio_write(pi, in3, 0);
        gpio_write(pi, in4, 1);

        gpio_write(pi, in5, 0);
        gpio_write(pi, in6, 1);
        gpio_write(pi, in7, 0);
        gpio_write(pi, in8, 1);

        ROS_INFO("Backward");
    } 
    else if (command == "l") {

        gpio_write(pi, in1, 1);
        gpio_write(pi, in2, 0);
        gpio_write(pi, in3, 0);
        gpio_write(pi, in4, 0);

        gpio_write(pi, in5, 1);
        gpio_write(pi, in6, 0);
        gpio_write(pi, in7, 0);
        gpio_write(pi, in8, 0);
        ROS_INFO("Left");
    } 
    else if (command == "r") {

        gpio_write(pi, in1, 0);
        gpio_write(pi, in2, 0);
        gpio_write(pi, in3, 0);
        gpio_write(pi, in4, 1);

        gpio_write(pi, in5, 0);
        gpio_write(pi, in6, 0);
        gpio_write(pi, in7, 0);
        gpio_write(pi, in8, 1);
        ROS_INFO("Right");
    }
     else if (command == "s") {
        gpio_write(pi, in1, 0);
        gpio_write(pi, in2, 0);
        gpio_write(pi, in3, 0);
        gpio_write(pi, in4, 0);

        gpio_write(pi, in5, 0);
        gpio_write(pi, in6, 0);
        gpio_write(pi, in7, 0);
        gpio_write(pi, in8, 0);
        ROS_INFO("Stop");
    }

    pigpio_stop(pi);  // Cleanup and close pigpio
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "motor_control_node");
    ros::NodeHandle nh;

    // Create subscriber for motor control topic
    ros::Subscriber sub = nh.subscribe<std_msgs::String>("motor_control", 10, motorControlCallback);

    ros::spin();

    return 0;
}