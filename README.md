# 🚗 Arduino Car Parking System

Embedded System Design Project

An automated parking management system using **Arduino**, **IR sensors**, and a **servo motor** to control vehicle entry based on available parking slots.

---

## 📌 Project Overview

Small parking lots often face problems such as:

- Drivers wasting time searching for parking
- Traffic congestion inside parking areas
- No information about slot availability
- Inefficient space usage

This project solves these issues by creating a **smart parking gate system** that:

- Tracks available parking slots
- Displays real-time slot availability
- Automatically opens/closes the gate
- Prevents entry when the lot is full

---

## ⚙️ System Features

- Real-time parking slot counter
- Automatic gate control using servo motor
- Entry and exit detection using IR sensors
- LCD display showing available slots
- Low-cost solution for small parking lots

---

## 🧠 Working Principle

The system works as a **closed loop control system**:

1. **IR Entry Sensor**
   - Detects incoming vehicle

2. **Arduino Uno**
   - Processes sensor input
   - Updates parking slot count
   - Controls servo motor and LCD

3. **Servo Motor**
   - Opens the gate if slots are available
   - Keeps gate closed when parking is full

4. **Exit IR Sensor**
   - Detects leaving vehicles
   - Increases available slot count

5. **LCD Display**
   - Shows parking status such as:
     ```
     Slots: 2/4
     ```
     or
     ```
     Parking Full
     ```

---

## 🔧 Hardware Components

| Component | Quantity | Description |
|----------|----------|-------------|
| Arduino Uno | 1 | Main microcontroller |
| IR Sensors | 2 | Entry and exit detection |
| Servo Motor | 1 | Controls gate barrier |
| 16x2 LCD Display | 1 | Shows slot availability |
| Resistors | Several | Current limiting |
| Breadboard | 1 | Circuit prototyping |
| Jumper Wires | Several | Connections |
| Power Supply | 5V | System power |

---
