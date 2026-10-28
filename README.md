
<div align="center">

# 🟢 ULTRASONIC RADAR

**Detect · Scan · Visualize**

*An Arduino-powered object detection and real-time radar visualization system.*

![Arduino](https://img.shields.io/badge/Arduino-UNO-00FF9C?style=for-the-badge&logo=arduino&logoColor=black)
![Sensor](https://img.shields.io/badge/HC--SR04-Ultrasonic-071B12?style=for-the-badge)
![Dashboard](https://img.shields.io/badge/Web-Radar%20Dashboard-071B12?style=for-the-badge&logo=html5)

<img src="https://capsule-render.vercel.app/api?type=rect&color=0:00140D,100:063D29&height=8" width="100%"/>

</div>

## 📡 PROJECT OVERVIEW

This project turns an Arduino UNO and an ultrasonic sensor into a **radar-style object detection system**.

A servo motor rotates the HC-SR04 sensor across a scanning range of approximately 180°. At each angle, the sensor measures the distance to a nearby object. Arduino sends the angle and distance readings to a web dashboard through USB serial communication.

The dashboard converts these readings into a visual radar display, helping users observe where objects are detected and how far away they are.

## 🟢 RADAR DASHBOARD

<div align="center">

<img src="https://placehold.co/900x400/020B08/39FF9C?text=ULTRASONIC+RADAR%0AReplace+with+your+dashboard+screenshot" width="100%" alt="Radar dashboard placeholder"/>

*Live radar visualization — replace this preview with a screenshot of your actual dashboard.*

</div>

## ⚙️ HOW IT WORKS

<div align="center">

`ULTRASONIC SENSOR` → `ARDUINO UNO` → `USB SERIAL` → `WEB DASHBOARD`

</div>

- **Scan:** The servo rotates the sensor through different angles.
- **Measure:** The HC-SR04 calculates distance using ultrasonic echo time.
- **Transmit:** Arduino sends angle-distance readings at 9600 baud.
- **Visualize:** JavaScript plots the incoming measurements on a radar display.
- **Alert:** An LED and buzzer activate when a measured distance falls within the configured 30 cm threshold.

## 🔩 HARDWARE SETUP

| Component | Connection |
|:--|:--:|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Servo motor signal | D6 |
| LED | D4 |
| Buzzer | D5 |
| Arduino UNO | USB to computer |

## 💻 TECH STACK

`Arduino C++` · `Servo Library` · `HTML` · `CSS` · `JavaScript` · `Canvas API` · `Web Serial API`

## 🚀 GET STARTED

1. Open `Arduino-Ultrasonic-Radar.ino` in Arduino IDE and upload it.
2. Open `radar.html` in a compatible desktop browser using a local server.
3. Click the dashboard's connect option and select the Arduino serial port.
4. Observe the scanning angle, measured distances and proximity alerts.

**Note:** Browser serial access requires a compatible browser and a secure context, such as `localhost`.


## 🌐 APPLICATIONS

- Robotics and obstacle-detection experiments
- Learning ultrasonic sensors and servo control
- Embedded systems and serial communication
- Real-time sensor-data visualization

---

<div align="center">

**SENSE THE WORLD. VISUALIZE THE SIGNAL.**

*Built by Pratigya Kaushik* 🟢

</div>
