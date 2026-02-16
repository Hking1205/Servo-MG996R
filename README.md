Code was written for STM32F303RE / STM32F3xx, but is also compatible with other STM32 microcontrollers.
<br><br>

## 🛠️ MG996R High-Torque Servo Motor

The MG996R is a high-torque digital servo motor widely used in robotics, RC systems, and embedded mechatronics projects.  
It features a metal gear train for durability and provides reliable angular positioning under mechanical load.

This servo is ideal for robotic arms, drone manipulators, and precise motion control systems.
<br><br>

## 🔧 Key Features
- High torque output (~9–13 kg·cm)<br>
- Full metal gear train for durability<br>
- PWM-controlled angular positioning<br>
- Fast response and good holding torque<br>
- Compatible with STM32, Arduino, ESP32, etc.
<br><br>

## ⚙️ Electrical Characteristics
- Operating Voltage: 4.8V – 7.2V<br>
- Stall Torque: ~9.4 kg·cm @ 4.8V / ~11–13 kg·cm @ 6V<br>
- Speed: ~0.17 s / 60° @ 6V<br>
- Control Signal: PWM (50 Hz typical)<br>
- Rotation Range: ~0–180°<br>
- Weight: ~55 g
<br><br>

## 📡 STM32 Integration
Fully compatible with STM32 MCUs including:<br>
STM32F303RE, STM32F333xx<br>
Any STM32 with hardware PWM timers
<br><br>

Typical wiring:<br>
VCC → External 5–6V supply<br>
GND → Common GND (shared with MCU)<br>
Signal → TIMx_CHy PWM pin (e.g., PA8 / TIM1_CH1)
<br><br>

## 🧠 Control Principle
The servo position is controlled using pulse-width modulation (PWM):<br>
~1000 µs pulse → 0°<br>
~1500 µs pulse → 90° (center)<br>
~2000 µs pulse → 180°
<br><br>

Recommended configuration:<br>
PWM Frequency: 50 Hz (20 ms period)<br>
Timer Resolution: ≥ 16-bit for smooth motion
<br><br>

## 🧪 Typical Use Cases
- Robotic arms and grippers<br>
- Drone manipulators (STM32-based builds)<br>
- Pan-tilt camera mounts<br>
- RC vehicles and aircraft<br>
- DIY automation systems
<br><br>

## ⚠️ Notes
- Do NOT power servo from MCU 5V pin<br>
- Always use external power supply (≥2A recommended)<br>
- Common ground between MCU and servo is mandatory<br>
- Add bulk capacitor (≥470 µF) near servo supply to avoid brownouts<br>
