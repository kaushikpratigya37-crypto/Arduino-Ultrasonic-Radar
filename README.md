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

<img src="./images/ultrasonic-radar-setup.jpeg" width="85%" alt="Actual Ultrasonic Radar Hardware Setup"/>

*Arduino hardware setup with ultrasonic sensor, circuit connections and live radar dashboard.*

<br>

### 📡 Radar Dashboard

<img src="https://github.com/user-attachments/assets/d48ae2fa-17bd-4184-bc4b-f8ae2bae09e7" width="85%" alt="Ultrasonic Radar Dashboard"/>

*Interactive radar interface displaying scanning angles and object detection.*

</div>

## ⚙️ 03. SYSTEM ARCHITECTURE

<div align="
