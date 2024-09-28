#include <ros/ros.h>
#include <pigpiod_if2.h>
#include <geometry_msgs/Twist.h>

// Pin numbers for motor control
const int motor1Pin1 = 17;
const int motor1Pin2 = 18;
const int motor2Pin1 = 27;
const int motor2Pin2 = 22;
const int motor3Pin1 = 23;
const int motor3Pin2 = 24;
const int motor4Pin1 = 25;
const int motor4Pin2 = 4;

// Initialize pigpio daemon
int pi;

// Function to control motors in the forward direction
void moveForward()
{
    gpio_write(pi, motor1Pin1, 1); // Set pin1 high
    gpio_write(pi, motor1Pin2, 0); // Set pin2 low

    gpio_write(pi, motor2Pin1, 1); // Set pin1 high
    gpio_write(pi, motor2Pin2, 0); // Set pin2 low

    gpio_write(pi, motor3Pin1, 1); // Set pin1 high
    gpio_write(pi, motor3Pin2, 0); // Set pin2 low

    gpio_write(pi, motor4Pin1, 1); // Set pin1 high
    gpio_write(pi, motor4Pin2, 0); // Set pin2 low
}

// Function to control motors in the backward direction
void moveBackward()
{
    gpio_write(pi, motor1Pin1, 0); // Set pin1 low
    gpio_write(pi, motor1Pin2, 1); // Set pin2 high

    gpio_write(pi, motor2Pin1, 0); // Set pin1 low
    gpio_write(pi, motor2Pin2, 1); // Set pin2 high

    gpio_write(pi, motor3Pin1, 0); // Set pin1 low
    gpio_write(pi, motor3Pin2, 1); // Set pin2 high

    gpio_write(pi, motor4Pin1, 0); // Set pin1 low
    gpio_write(pi, motor4Pin2, 1); // Set pin2 high
}

// Function to turn motors to the left
void turnLeft()
{
    gpio_write(pi, motor1Pin1, 0); // Set pin1 low
    gpio_write(pi, motor1Pin2, 1); // Set pin2 high

    gpio_write(pi, motor2Pin1, 1); // Set pin1 high
    gpio_write(pi, motor2Pin2, 0); // Set pin2 low

    gpio_write(pi, motor3Pin1, 0); // Set pin1 low
    gpio_write(pi, motor3Pin2, 1); // Set pin2 high

    gpio_write(pi, motor4Pin1, 1); // Set pin1 high
    gpio_write(pi, motor4Pin2, 0); // Set pin2 low
}

// Function to turn motors to the right
void turnRight()
{
    gpio_write(pi, motor1Pin1, 1); // Set pin1 high
    gpio_write(pi, motor1Pin2, 0); // Set pin2 low

    gpio_write(pi, motor2Pin1, 0); // Set pin1 low
    gpio_write(pi, motor2Pin2, 1); // Set pin2 high

    gpio_write(pi, motor3Pin1, 1); // Set pin1 high
    gpio_write(pi, motor3Pin2, 0); // Set pin2 low

    gpio_write(pi, motor4Pin1, 0); // Set pin1 low
    gpio_write(pi, motor4Pin2, 1); // Set pin2 high
}

// Function to stop the motors
void stopMotors()
{
    gpio_write(pi, motor1Pin1, 0); // Set pin1 low
    gpio_write(pi, motor1Pin2, 0); // Set pin2 low

    gpio_write(pi, motor2Pin1, 0); // Set pin1 low
    gpio_write(pi, motor2Pin2, 0); // Set pin2 low

    gpio_write(pi, motor3Pin1, 0); // Set pin1 low
    gpio_write(pi, motor3Pin2, 0); // Set pin2 low

    gpio_write(pi, motor4Pin1, 0); // Set pin1 low
    gpio_write(pi, motor4Pin2, 0); // Set pin2 low
}

// // Callback function for receiving Twist messages
// void twistCallback(const geometry_msgs::Twist::ConstPtr& msg)
// {
//     // Extract linear and angular velocities from Twist message
//     double linearXApologies for the incomplete response. It seems that the code got cut off. Here's the complete code for a subscriber that receives Twist messages and controls motors based on the received commands:


// Callback function for receiving Twist messages
// void twistCallback(const geometry_msgs::Twist::ConstPtr& msg)
// {
//     // Extract linear and angular velocities from Twist message
//     double linearX = msg->linear.x;
//     double angularZ = msg->angular.z;

//     // Perform motor control based on received commands
//     // Replace the placeholder code with your actual motor control logic
//     if (linearX > 0) {
//         // Move forward
//         // Your motor control code here
//     } else if (linearX < 0) {
//         // Move backward
//         // Your motor control code here
//     } else if (angularZ > 0) {
//         // Turn left
//         // Your motor control code here
//     } else if (angularZ < 0) {
//         // Turn right
//         // Your motor control code here
//     } else {
//         // Stop
//         // Your motor control code here
//     }
// }

int main(int argc, char** argv)
{
    // Initialize ROS node
    ros::init(argc, argv, "motor_control_subscriber");
    ros::NodeHandle nh;

    // Create a subscriber for Twist messages on the "cmd_vel" topic
    ros::Subscriber twistSub = nh.subscribe("cmd_vel", 10, twistCallback);

    // Spin and process callbacks
    ros::spin();

    return 0;
}