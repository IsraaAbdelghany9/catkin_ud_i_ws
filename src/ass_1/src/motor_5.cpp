#include <ros/ros.h>
#include <std_msgs/Char.h>
#include <pigpiod_if2.h>

// GPIO Pins
const int MOTOR_PIN = 17;  // Adjust the pin number as per your setup

// Motor states
const int MOTOR_STATE_HIGH = 1;   // High state
const int MOTOR_STATE_LOW = 0;    // Low state

// Callback function to receive motor control commands
void motorControlCallback(const std_msgs::Char::ConstPtr& msg) {
    char command = msg->data;
    int pi = pigpio_start(NULL, NULL);  // Initialize pigpio library

    switch (command) {
        case 'F':   // Forward
            gpio_write(pi, MOTOR_PIN, MOTOR_STATE_HIGH);
            break;
        case 'B':   // Backward
            gpio_write(pi, MOTOR_PIN, MOTOR_STATE_LOW);
            break;
        case 'S':   // Stop
            gpio_write(pi, MOTOR_PIN, MOTOR_STATE_LOW);  // Stop by setting the pin low
            break;
        default:
            ROS_WARN("Invalid command received.");
            break;
    }

    pigpio_stop(pi);  // Cleanup and close pigpio
}

int main(int argc, char** argv) {
    // Initialize the ROS node
    ros::init(argc, argv, "motor_subscriber_node");
    ros::NodeHandle nh;

    // Create the subscriber
    ros::Subscriber sub = nh.subscribe<std_msgs::Char>("motor_control", 10, motorControlCallback);

    // Spin to receive messages
    ros::spin();

    return 0;
}