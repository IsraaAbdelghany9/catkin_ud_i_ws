#include <ros/ros.h>
#include <std_msgs/Char.h>
#include <pigpio.h>

// GPIO Pins
const int in1 = 24;
const int in2 = 23;
const int en = 25;

// Callback function to handle motor control commands
void motorControlCallback(const std_msgs::Char::ConstPtr& msg) {
    ROS_INFO("Motor command received: %c", command);
    char command = msg->data;

    // Depending on the received command, control the motor
    switch (command) {
        case 'R':  // Move right
            gpioWrite(in1, PI_HIGH);
            gpioWrite(in2, PI_LOW);
            ROS_INFO("Motor command R");
            break;
            
        
        case 'L':  // Move left
            gpioWrite(in1, PI_LOW);
            gpioWrite(in2, PI_HIGH);
            ROS_INFO("Motor command L");

            break;
        case 'W':  // Move forward
            gpioWrite(in1, PI_HIGH);
            gpioWrite(in2, PI_LOW);
            ROS_INFO("Motor command W");
            break;
        case 'B':  // Move backward
            gpioWrite(in1, PI_LOW);
            gpioWrite(in2, PI_HIGH);
            ROS_INFO("Motor command B");
            break;
        case 'S':  // Stop
            gpioWrite(in1, PI_LOW);
            gpioWrite(in2, PI_LOW);
            ROS_INFO("Motor command S");
            break;
        default:
            ROS_WARN("Unknown motor command received: %c", command);
            break;
        }
}
    
int main(int argc, char** argv) {
    ros::init(argc, argv, "motor_subscriber_node");
    ros::NodeHandle nh;

    // Initialize pigpio library
    if (gpioInitialise() < 0) {
        ROS_ERROR("Failed to initialize pigpio library");
        return 1;
    }

    // Set motor pins as outputs
    gpioSetMode(in1, PI_OUTPUT);
    gpioSetMode(in2, PI_OUTPUT);
    gpioSetMode(en, PI_OUTPUT);
    gpioWrite(en, PI_HIGH);  // Enable motor

    // Create the subscriber
    ros::Subscriber motor_sub = nh.subscribe<std_msgs::Char>("motor_control", 10, motorControlCallback);

    ros::spin();

    // Cleanup GPIO and close pigpio
    gpioWrite(in1, PI_LOW);  // Stop motor
    gpioWrite(in2, PI_LOW);  // Stop motor
    gpioWrite(en, PI_LOW);   // Disable motor
    gpioTerminate();         // Cleanup pigpio

    return 0;
}