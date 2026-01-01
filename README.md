# 💡 Smart Energy-Efficient Lighting System (Arduino)

## 📌 Overview
This repository contains an **Arduino-based Smart Energy-Efficient Lighting System** developed using **Arduino UNO** and simulated on **TinkerCAD**.

The project automatically adjusts LED brightness based on **ambient light conditions**, with a **user-defined upper brightness limit** controlled via a potentiometer.  
A set of LEDs arranged as a **bar graph** visually represents the brightness level.

---

## 🛠️ Components Used
- Arduino UNO  
- Ambient Light Sensor (LDR – simulated in TinkerCAD)  
- Potentiometer  
- Main LED (PWM controlled)  
- 6 LEDs (Bar Graph Indicator)  
- Current-limiting resistors  
- Breadboard and jumper wires  

---

## ⚙️ Working Principle
- The **ambient light sensor** measures surrounding brightness.
- As ambient light increases, the **main LED brightness decreases** (energy-efficient behavior).
- A **potentiometer** sets an upper cap on LED brightness.
- The brightness value is mapped to:
  - PWM output for the main LED
  - A **6-LED bar graph**, lighting up progressively from low to high brightness
- The Arduino acts as both:
  - A **microcontroller**
  - A **power source**

---

## 🧠 Concepts Implemented
- Analog-to-Digital Conversion (ADC)
- Pulse Width Modulation (PWM)
- Sensor interfacing
- Potentiometer-based control
- Conditional logic
- LED bar graph visualization
- Energy-efficient system design

---

## 📂 Repository Contents
- `Smart_Energy_Efficient_Lighting_System.ino` — Arduino source code  
- `Circuit_Diagram.png` — TinkerCAD circuit image  

---

## ▶️ How to Run the Project

### Option 1: Arduino IDE
1. Download or clone this repository
2. Open the `.ino` file in **Arduino IDE**
3. Connect an Arduino UNO
4. Select the correct board and COM port
5. Upload the code

### Option 2: TinkerCAD (Recommended)
1. Open **TinkerCAD → Circuits**
2. Recreate the circuit using the provided image
3. Paste the Arduino code
4. Start the simulation

---

## 🔗 TinkerCAD Simulation Link
https://www.tinkercad.com/things/j5AE3AY4hVC-smart-energy-efficient-lightningsystem/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=zhOiF51PdsgsL4gw2Dat6S8HSBD3UvhwOA6HYwKWULM

---

## 🎯 Applications
- Smart lighting systems
- Energy-efficient automation
- Introductory IoT and embedded systems projects
- Sensor-based control systems

---

## 📌 Notes
- This project is designed for **learning and demonstration purposes**
- All values and thresholds can be modified easily in the code
- Suitable for beginners exploring Arduino and electronics

---

## 🚀 Future Improvements
- Automatic night/day mode
- Motion sensor integration
- Real-world hardware implementation
- IoT-based monitoring and control
