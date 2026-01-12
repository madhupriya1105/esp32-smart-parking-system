# 🚗 Smart Parking System using ESP32

## 📌 Project Overview
https://wokwi.com/projects/452692412398309377
This project demonstrates a Smart Parking System using an ESP32 microcontroller.
The system detects vehicle entry using a PIR motion sensor, controls a gate using a servo motor,
and displays the available parking slots on a 16x2 LCD.

The project was designed and simulated using the Wokwi online simulator.

---

## 🔧 Components Used
- ESP32 Dev Module
- PIR Motion Sensor
- Servo Motor
- LCD 16x2
- Potentiometer
- 220Ω Resistor
- Jumper Wires

---

## ⚙️ Working Principle
1. PIR sensor detects motion (vehicle entry).
2. ESP32 reads the PIR sensor output.
3. If parking slots are available, the servo motor opens the gate.
4. Available slot count is reduced.
5. LCD displays updated parking slot information.
6. Gate closes automatically after a delay.

---

## 💻 Software & Tools
- Programming Language: Embedded C
- Microcontroller: ESP32
- Simulator: Wokwi

---

## 🚀 Future Enhancements
- Add exit sensor for vehicle exit detection
- Implement IoT-based monitoring using Wi-Fi
- Replace delay() with non-blocking logic using millis()
- Mobile or web dashboard integration

---

## 👩‍💻 Author
Madhu Priya
