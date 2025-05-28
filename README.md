# Autonomous Path-Tracking Robot

![Mechatronics](https://img.shields.io/badge/Mechatronics-Robotics-blue)
![Arduino](https://img.shields.io/badge/Arduino-Control_System-green)

**An integrated design and implementation of an autonomous line-following robotic vehicle built for the Design course at Alexandria University.**

---

## 📌 Project Overview

This project documents the design, modeling, and control of an autonomous robot that follows a predefined path using IR sensors and a PID control system. The robot features:

- A dual-layer laser-cut acrylic chassis
- 3 IR sensors for path detection
- Arduino-based closed-loop control
- Simulink modeling and PID tuning for optimal motion accuracy

---

## 🛠️ System Specifications

### ⚙️ Mechanical Design

- Two-tiered platform (160mm x 130mm)
- Acrylic material for lightweight rigidity
- SolidWorks used for design validation
- Compact layout to fit motors, wheels, sensors, and electronics

### 🔌 Electronics

| Component         | Role                                  |
|------------------|----------------------------------------|
| Arduino Uno       | Microcontroller                       |
| L298N Motor Driver| Controls two DC motors (H-Bridge)     |
| 2x DC Motors      | Drive system                          |
| 3x IR Sensors     | Line detection                        |
| Breadboard        | Circuit integration                   |
| Caster Wheel      | Stability and turning support         |
| Battery Pack      | Portable 9V power source              |

---

## 🧠 Software & Control

### 📐 Modeling & Simulation

- Derived motor voltage, torque, and dynamics equations
- Simulink models simulate both ideal and disturbed environments
- Two scenarios: with and without external disturbances (friction, load)

### 🧮 PID Control System

- PID added for precision tracking
- Tuning process improves:
  - Rise time
  - Overshoot
  - Settling time
  - Steady-state error
- Simulation comparison: uncontrolled vs. PID-controlled

### 💡 Code Logic (Arduino)

- Sensor-based decision-making
- Motion functions: `forward()`, `stop()`, `left()`, `right()`, `backward()`
- Behavior handles curves, forks, and dead ends

---

## 📂 Repository Structure

```
line-following-robot
├── CAD
│ └── Cad model.ZIP
├── Arduino Code
│ └── line_following.ino
├── Simulink model
│ ├── Modeling.slx
│ └── Modeling_constants.m
├── Documentation
│ └── Control Report.pdf
└── README.md
```

---

## 👥 Team Members

| Name                                        |
|---------------------------------------------|
| Ahmed Samy Elsaiid Mohamed Ahmed Elshimy    | 
| Ahmed Saiid Abdelnaby Abdelrahman           |
| Ahmed Mohamed Ahmed Saleh                   |
| Ahmed Mohamed Refaat Bassiouny              | 
| Ayman Muhammad Hussien El-sayed Muhammed    | 
| Ziad Ashraf Mohamed Ali                     |
| Mohamed Ashraf Ali Mohamed                  | 
| Mohamed Alaa Hassan Mabrouk                 |
| Mahmoud Mohamed Abdallah Elnahas            | 

---

## 🔍 Key Features

✅ Laser-cut acrylic chassis  
✅ Arduino-based control system  
✅ 3 IR sensors for optimal path detection  
✅ Full electromechanical modeling  
✅ Simulink-based PID tuning  
✅ Complete system integration and testing

---

## 📚 References

1. Arduino.cc Documentation  
2. L298N Motor Driver Datasheet  
3. PID Tuning – Simulink Toolbox  
4. SolidWorks CAD Modeling Guide  

---

## 📄 License

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)  
Free for educational and non-commercial use. Contact the authors for other purposes.

---

<div align="center">
  <i>Developed with ❤️ by Team كله تحت الكنترول | Alexandria University | Automatic control - Spring 2025</i>
</div>
