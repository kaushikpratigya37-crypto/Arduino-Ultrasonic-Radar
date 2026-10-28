
<div align="center">

# ◉ ULTRASONIC RADAR

### `SENSE • SCAN • DETECT`

**A Real-Time Object Detection & Visualization System**

Built with Arduino UNO | HC-SR04 | Servo Motor | Web Technologies

<br>

![Arduino](https://img.shields.io/badge/ARDUINO-UNO-00C98D?style=for-the-badge&logo=arduino&logoColor=white)
![Embedded](https://img.shields.io/badge/EMBEDDED-SYSTEMS-10251E?style=for-the-badge)
![JavaScript](https://img.shields.io/badge/WEB-INTERFACE-00C98D?style=for-the-badge&logo=javascript&logoColor=white)
![Status](https://img.shields.io/badge/PROJECT-HARDWARE%20BASED-10251E?style=for-the-badge)

---

### `01` — PROJECT OVERVIEW

</div>

An Arduino-powered ultrasonic radar system designed to
detect nearby objects, measure their distances, and
visualize their positions through a real-time radar-style
web dashboard.

By combining **embedded electronics, ultrasonic sensing,
servo-based scanning, and web visualization**, this project
demonstrates how physical sensor data can be transformed
into a clear and interactive digital interface.

---

<div align="center">

## ◉ SYSTEM CAPABILITIES

</div>

| FEATURE | DESCRIPTION |
|:---|:---|
| `01` Angular Scanning | Servo motor sweeps the sensor from 0° to 180°. |
| `02` Distance Sensing | HC-SR04 measures the distance to nearby objects. |
| `03` Live Visualization | Browser dashboard plots readings on a radar display. |
| `04` Object Indication | LED and buzzer provide alerts for nearby objects. |
| `05` Serial Data Transfer | Arduino transmits angle and distance over USB. |

---

## `02` — THE TECHNOLOGY STACK

**HARDWARE**

- Arduino UNO — Main processing and control unit
- HC-SR04 — Ultrasonic distance sensor
- SG90 Servo Motor — Angular scanning mechanism
- LED + Resistor — Visual alert
- Buzzer — Audible alert
- Breadboard, jumper wires and USB cable

**SOFTWARE**

- Arduino IDE — Firmware development
- C++ — Sensor reading and motor control
- HTML5 + CSS3 — Dashboard structure and styling
- JavaScript — Real-time data processing and radar rendering
- Web Serial API — Browser-to-Arduino communication

---

## `03` — HOW THE SYSTEM WORKS

<details>
<summary><b>STEP 01 — SCAN</b></summary>

The servo motor rotates the ultrasonic sensor through
a defined angular range.

</details>

<details>
<summary><b>STEP 02 — SENSE</b></summary>

The HC-SR04 sends ultrasonic pulses and estimates the
distance using the echo return time.

</details>

<details>
<summary><b>STEP 03 — PROCESS</b></summary>

Arduino associates each distance reading with the
current scanning angle.

</details>

<details>
<summary><b>STEP 04 — TRANSMIT</b></summary>

The angle and distance values are sent to the computer
using USB serial communication.

</details>

<details>
<summary><b>STEP 05 — VISUALIZE</b></summary>

JavaScript plots valid readings on the browser-based
radar dashboard, creating a visual representation of
detected objects.

</details>

---

## `04` — CIRCUIT CONFIGURATION

| COMPONENT | PIN |
|:---|:---:|
| HC-SR04 Trigger | D9 |
| HC-SR04 Echo | D10 |
| Servo Signal | D6 |
| LED | D4 |
| Buzzer | D5 |

> **Note:** Use a suitable power supply for the servo and
> connect the grounds together. Add a current-limiting
> resistor to the LED.

---

## `05` — PROJECT STRUCTURE

```text
Arduino-Ultrasonic-Radar/
│
├── Arduino-Ultrasonic-Radar.ino
├── radar.html
└── README.md
```

---

## `06` — GETTING STARTED

**1. Prepare the hardware**

Connect the Arduino, ultrasonic sensor, servo, LED and
buzzer according to the pin configuration.

**2. Upload the firmware**

Open `Arduino-Ultrasonic-Radar.ino` in Arduino IDE,
select the correct board and port, and upload the sketch.

**3. Launch the dashboard**

Serve `radar.html` using a local web server, such as
VS Code Live Server.

**4. Connect and visualize**

Close Arduino Serial Monitor, open the dashboard in a
compatible desktop browser, click **Connect Arduino**,
and select the correct serial port.

---

## `07` — ENGINEERING APPLICATIONS

- Robotics and obstacle-detection experiments
- Embedded systems and sensor interfacing
- Real-time sensor-data visualization
- Introductory automation projects
- Hardware-software integration learning

---

## `08` — FUTURE DEVELOPMENT

- Wireless sensor-data transmission
- Improved object tracking and data logging
- Adjustable detection thresholds
- Enhanced radar visualization and controls
- Integration with robotics platforms

---

<div align="center">

## ENGINEERED TO EXPLORE. BUILT TO DETECT.

**Pratigya Kaushik**

Electronics & Computer Science Engineering

*Embedded Systems · IoT · Sensor Technology*

<br>

`END OF TRANSMISSION`

</div>
