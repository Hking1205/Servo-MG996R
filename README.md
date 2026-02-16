🛠️ MG996R High-Torque Metal Gear Servo<br>
The MG996R is a high-torque digital servo motor widely used in robotics, RC systems, and embedded mechatronics projects. Known for its metal gear train and strong holding torque, it provides reliable performance for applications requiring precise angular positioning and mechanical load handling.


This project supports servo control using STM32 microcontrollers, specifically:<br>
STM32F303RE (tested target)<br>
STM32F333xx series (fully compatible)

Any STM32 with:
Hardware timers supporting PWM output<br>
50 Hz servo signal generation


🔧 Key Features<br>
High torque output (~9–13 kg·cm depending on voltage)<br>
Metal gear gearbox for durability under load<br>
PWM-controlled angular positioning (typically 0–180°)<br>
Compatible with microcontrollers (STM32, Arduino, ESP32, etc.)<br>
Fast response with good positional stability<br>
Operates at 4.8V–7.2V supply


⚙️ Typical Specifications<br>
Parameter	Value<br>
Operating Voltage	4.8V – 7.2V<br>
Stall Torque	~9.4 kg·cm @ 4.8V / ~11–13 kg·cm @ 6V<br>
Speed	~0.17s / 60° @ 6V<br>
Control Signal	PWM (50 Hz typical)<br>
Rotation Range	~0–180°<br>
Gear Type	Full metal gears<br>
Weight	~55 g


🧠 Control Principle<br>
The servo uses pulse-width modulation (PWM) to determine the shaft position:<br>
~1 ms pulse → 0°<br>
~1.5 ms pulse → 90°<br>
~2 ms pulse → 180°<br>
This makes it ideal for closed-loop positioning systems and real-time embedded control.


🤖 Common Applications<br>
Robotic arms and grippers<br>
Drone manipulators (e.g., STM32-based builds)<br>
Pan-tilt camera mounts<br>
RC cars, planes, and boats<br>
DIY automation and prosthetics<br>


📦 Why Use MG996R?<br>
Affordable and widely available<br>
Strong torque for its size<br>
Robust metal gearing compared to plastic servos<br>
Large community support and documentation
