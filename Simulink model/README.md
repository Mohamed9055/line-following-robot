# Autonomous Path-Tracking Robot Simulink Models

![Simulink Version](https://img.shields.io/badge/Simulink-2023a-blue)

**Complete Simulink modeling and control system package for the Autonomous Path-Tracking Robot project. Includes both open-loop and PID-controlled configurations.**

---

## 🚀 Quick Start

1. **Download the `Simulink model` folder**
2. Open `Modeling.slx` in MATLAB Simulink
3. **Important**: Before running any simulation, open and execute `Modeling_constants.m`

---

## ⚠️ Important Notes

- **Requirements**: MATLAB & Simulink 2022b or compatible version
- **You MUST run `Modeling_constants.m` first** to initialize all model constants
- Edit the motor-specific constants inside `Modeling_constants.m` to match your hardware:
  - `Ra` — Armature resistance
  - `La` — Armature inductance
  - `Km`, `Kb` — Torque and back EMF constants
  - `Jm`, `Jw` — Moment of inertia (motor/wheel)
  - `m`, `r`, `M` — Friction coefficient, wheel radius, robot mass

---

## 🧩 Folder Contents

| File Name               | Description                                 |
|-------------------------|---------------------------------------------|
| `main_model.slx`        | Full Simulink system with PID integration   |
| `Modeling_constants.m`  | Initializes model constants & parameters    |


---

## 🛠️ Troubleshooting

If simulation fails or blocks show errors:
1. Ensure you've executed `Modeling_constants.m` in the MATLAB workspace
2. Check all paths are set correctly
3. Make sure all files are in the **same folder**

---

## 📄 License

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)  
Free for educational and academic use. Contact the authors for commercial licensing.

---

<div align="center">
  <i>Developed with ❤️ by Team كله تحت الكنترول | Alexandria University | Automatic Control - Spring 2025</i>
</div>
