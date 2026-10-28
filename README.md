
<div align="center">

# 🟢 ULTRASONIC RADAR SYSTEM

### REAL-TIME OBJECT DETECTION & RADAR VISUALIZATION

An Arduino-powered radar system that scans its surroundings,
measures object distances, and visualizes detected objects
through a web-based radar interface.

![Platform](https://img.shields.io/badge/Platform-Arduino_UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![Language](https://img.shields.io/badge/Code-C%2B%2B-blue?style=for-the-badge)
![Web](https://img.shields.io/badge/Interface-HTML%20%7C%20CSS%20%7C%20JS-00C98D?style=for-the-badge)

</div>

---

## 🛰️ PROJECT OVERVIEW

This project combines embedded electronics, ultrasonic
sensing, servo-based scanning, and web technologies to
create a radar-style object detection system.

The ultrasonic sensor measures the distance of objects
while the servo motor sweeps the sensor across different
angles. Arduino transmits the readings to a browser-based
dashboard for live visualization.

## ⚡ KEY FEATURES

- **180° Scanning:** Servo-based angular scanning.
- **Distance Measurement:** HC-SR04 ultrasonic sensor.
- **Live Visualization:** Radar sweep and object markers.
- **Object Alerts:** LED and buzzer indication for nearby objects.
- **Serial Communication:** Transfers sensor readings to the dashboard.
- **Interactive Interface:** Live angle, distance, and detection status.

## 🧠 HOW IT WORKS

1. The servo motor rotates the ultrasonic sensor.
2. The HC-SR04 measures the distance to an object.
3. Arduino processes the sensor reading and scanning angle.
4. Data is sent to the computer over USB serial communication.
5. The web dashboard plots detected objects on the radar.

## 🔩 HARDWARE COMPONENTS

| Component | Purpose |
|---|---|
| Arduino UNO | Main controller |
| HC-SR04 | Distance measurement |
| Servo Motor | Sensor rotation |
| LED | Visual detection alert |
| Buzzer | Audible alert |
| Breadboard & Jumper Wires | Circuit connections |

## 💻 SOFTWARE & TECHNOLOGIES

- Arduino IDE
- Embedded C++ / Arduino
- HTML5
- CSS3
- JavaScript
- Web Serial API

## 🔌 PIN CONFIGURATION

| Component | Arduino Pin |
|---|---|
| Ultrasonic Trig | D9 |
| Ultrasonic Echo | D10 |
| Servo Signal | D6 |
| LED | D4 |
| Buzzer | D5 |

## 🚀 GETTING STARTED

1. Assemble the circuit using the pin configuration above.
2. Open `Arduino-Ultrasonic-Radar.ino` in Arduino IDE.
3. Select the correct board and port, then upload the sketch.
4. Close the Arduino Serial Monitor.
5. Open `radar.html` through a supported local web server.
6. Click **Connect Arduino** and select the serial port.

> The dashboard requires a supported desktop browser and
> a secure context such as localhost. Hardware testing and
> correct wiring are required for live readings.

## 🌍 REAL-WORLD APPLICATIONS

- Robotics and obstacle detection experiments
- Embedded systems education
- Distance monitoring demonstrations
- Sensor-data visualization
- Introductory radar simulation concepts

## 🔮 FUTURE ENHANCEMENTS

- Wireless data transmission
- Improved object tracking
- Adjustable detection thresholds
- Data logging and analysis
- Enhanced dashboard controls

## 👩‍💻 AUTHOR

**Pratigya Kaushik**

Electronics & Computer Science Engineering

---

<div align="center">

### BUILT WITH ELECTRONICS, CODE & CURIOSITY ⚡

*Exploring the intersection of embedded systems and web visualization.*

</div>
