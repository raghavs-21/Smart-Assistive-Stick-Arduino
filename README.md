# BlindMate – Smart Walking Stick for the Visually Impaired

BlindMate is an assistive smart walking stick designed to help visually impaired individuals navigate their surroundings safely and independently. The system uses ultrasonic sensors to detect obstacles and alerts the user through vibration motors and sound signals.

By providing real-time obstacle detection beyond physical contact, BlindMate improves mobility, safety, and confidence for users.
## Problem Statement
Blind and visually impaired individuals often rely on traditional white canes for navigation. While effective for detecting obstacles through physical contact, these canes cannot detect objects before impact.
This limitation increases the risk of accidents, especially in unfamiliar or crowded environments.
BlindMate addresses this issue by providing **real-time obstacle detection and feedback**, allowing users to detect obstacles before reaching them.
## Key Features

### Obstacle Detection
Ultrasonic sensors detect obstacles in front of the user and measure distance in real time.

### Audio Alerts
A buzzer produces sound alerts when an obstacle is detected within a predefined range.

### Haptic Feedback
Vibration motors provide tactile feedback so the user can sense obstacles even in noisy environments.

### Lightweight Design
The device is compact and ergonomic, making it comfortable to use.

### Affordable Solution
The system is built using low-cost components such as Arduino and HC-SR04 sensors to ensure accessibility.
## Intended Users

- Visually impaired individuals requiring assistance with navigation  
- Rehabilitation centers supporting visually impaired individuals  
- Elderly individuals with deteriorating eyesight  

## Hardware Components:
* Arduino Uno - Microcontroller
* HC-SR04 Ultrasonic Sensor - Detects obstacles and measures distance
* Vibration Motors - Provides Haptic Feedback
* Buzzer - Generates Sound Alerts
* Rechargeable Battery/Power Supply
* Stick Frame

## Working:
1. The ultrasonic sensor continuously measures the distance to obstacles.
2. The Arduino processes the sensor data.
3. If an obstacle is detected within a critical range:
   - The buzzer generates an alert sound.
   - The vibration motors activate to provide tactile feedback.
4. The user receives immediate alerts and can adjust direction accordingly.

## Circuit Diagram:

## Note
This was done collaboratively as a Group Project as part of the course - Engineering Design (B.Tech Year 1)

