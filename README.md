# 🟢 ULTRASONIC RADAR SYSTEM

<div align="center">

### `DETECT • SCAN • VISUALIZE`

**An Arduino-Based Real-Time Object Detection & Radar Visualization System**

An embedded hardware-software integration project that transforms ultrasonic sensor readings into an interactive, real-time radar display.

<br>

![Arduino](https://img.shields.io/badge/Arduino-UNO-00FF9C?style=for-the-badge&logo=arduino&logoColor=black)
![Language](https://img.shields.io/badge/Language-C%2B%2B-071B12?style=for-the-badge&logo=cplusplus)
![Frontend](https://img.shields.io/badge/Frontend-HTML%20%7C%20CSS-00FF9C?style=for-the-badge&logo=html5&logoColor=black)
![JavaScript](https://img.shields.io/badge/JavaScript-Interactive-071B12?style=for-the-badge&logo=javascript)

<img src="https://capsule-render.vercel.app/api?type=rect&color=0:00140D,100:00FF9C&height=4" width="100%"/>

</div>

## 📡 01. ABOUT THE PROJECT

The **Ultrasonic Radar System** is an Arduino-powered object detection project that uses an HC-SR04 ultrasonic sensor mounted on a servo motor to scan its surroundings.

The servo rotates the sensor across an approximately 180° range, collecting distance measurements at different angles.

These readings are transmitted to a web-based dashboard through USB serial communication, where JavaScript processes and displays them as a real-time radar visualization.

The system also includes an LED and buzzer for proximity alerts when an object is detected within the configured 30 cm threshold.

## 🟢 02. PROJECT DEMO

<div align="center">

### 🔬 Actual Hardware Setup

*Arduino hardware setup with ultrasonic sensor, circuit connections and live radar dashboard.*

<br>

### 📡 Radar Dashboard

<img src="https://github.com/user-attachments/assets/d48ae2fa-17bd-4184-bc4b-f8ae2bae09e7" width="85%" alt="Ultrasonic Radar Dashboard"/>

*Interactive radar interface displaying scanning angles and object detection.*

</div>

## ⚙️ 03. SYSTEM ARCHITECTURE

<div align="center">

`HC-SR04 ULTRASONIC SENSOR`

⬇

`SERVO MOTOR SCANNING`

⬇

`ARDUINO UNO PROCESSING`

⬇

`USB SERIAL COMMUNICATION`

⬇

`HTML + CSS + JAVASCRIPT`

⬇

`REAL-TIME RADAR VISUALIZATION`

</div>

## 🔍 04. HOW IT WORKS

**01 — Scanning**

The servo motor rotates the ultrasonic sensor across different angles to scan the surrounding area.

**02 — Distance Measurement**

The HC-SR04 sends ultrasonic waves and measures the time taken for the reflected echo to return.

**03 — Data Processing**

Arduino calculates the distance using echo time and associates it with the current scanning angle.

**04 — Serial Communication**

Angle and distance readings are transmitted to the computer through USB serial communication at 9600 baud.

**05 — Radar Visualization**

The web dashboard receives incoming data and uses JavaScript Canvas to represent detected objects on a radar-style interface.

**06 — Proximity Alert**

An LED and buzzer provide alerts when an object is detected within the configured 30 cm threshold.

## 🔩 05. HARDWARE COMPONENTS

| Component | Purpose |
|:---|:---|
| Arduino UNO | Main microcontroller |
| HC-SR04 Ultrasonic Sensor | Distance measurement |
| Servo Motor | Sensor rotation |
| LED | Visual proximity alert |
| Buzzer | Audio proximity alert |
| Jumper Wires | Circuit connections |
| Breadboard | Circuit prototyping |

### Pin Configuration

| Component | Arduino Pin |
|:---|:---:|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Servo Signal | D6 |
| LED | D4 |
| Buzzer | D5 |

## 💻 06. SOFTWARE & TECHNOLOGIES

| Technology | Application |
|:---|:---|
| Arduino C++ | Sensor control and processing |
| Arduino IDE | Code development |
| Servo Library | Motor control |
| HTML5 | Dashboard structure |
| CSS3 | Dashboard styling |
| JavaScript | Data processing |
| Canvas API | Radar visualization |
| Web Serial API | USB serial communication |

## 🚀 07. SETUP & EXECUTION

1. Connect the HC-SR04 sensor, servo motor, LED and buzzer to the Arduino UNO according to the pin configuration.
2. Open the Arduino sketch in Arduino IDE.
3. Select the Arduino UNO board and correct COM port.
4. Upload the program to the Arduino.
5. Run the radar dashboard through a local server in a compatible browser.
6. Click the Connect option and select the Arduino serial port.
7. Observe scanning angles, distance readings and proximity alerts.

**Requirement:** Web Serial API support and a secure browser context such as localhost are required for serial communication.

## 🌍 08. REAL-WORLD APPLICATIONS

- Robotics and obstacle-detection experiments
- Embedded systems learning
- Ultrasonic sensor applications
- Real-time hardware-to-software communication
- Sensor-data visualization
- Interactive robotics projects

## 📈 09. KEY LEARNINGS

Through this project, I explored:

- Interfacing ultrasonic sensors with Arduino UNO.
- Controlling servo motors through programming.
- Understanding ultrasonic distance measurement.
- Establishing serial communication between hardware and software.
- Visualizing live sensor data using JavaScript Canvas.
- Integrating embedded hardware with a web-based interface.

## 🔮 10. FUTURE IMPROVEMENTS

- Improve radar visualization and detection accuracy.
- Add object tracking and detection history.
- Explore wireless sensor-data transmission.
- Develop a more advanced monitoring dashboard.

---

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=rect&color=0:00FF9C,100:00140D&height=4" width="100%"/>

### 🟢 SENSE THE WORLD. VISUALIZE THE SIGNAL.

**Designed & Developed by Pratigya Kaushik**

*Turning hardware signals into meaningful visual experiences.*

</div>
