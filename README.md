
<div align="center">

# 🟢 ULTRASONIC RADAR

**Detect · Scan · Visualize**

*An Arduino-powered radar system with real-time web visualization.*

<img src="https://capsule-render.vercel.app/api?type=rect&color=0:00140D,100:063D29&height=8" width="100%"/>

![Arduino](https://img.shields.io/badge/Arduino-UNO-00FF9C?style=for-the-badge&logo=arduino&logoColor=black)
![Sensor](https://img.shields.io/badge/HC--SR04-Ultrasonic-071B12?style=for-the-badge)
![Web](https://img.shields.io/badge/Web-Live%20Dashboard-071B12?style=for-the-badge&logo=html5)

</div>

---

## 📡 RADAR SYSTEM

<div align="center">

<!-- Replace with your own dashboard screenshot after uploading it to the repository -->
<img src="https://placehold.co/900x400/020B08/39FF9C?text=ULTRASONIC+RADAR%0AAdd+Your+Dashboard+Screenshot" width="100%" alt="Ultrasonic radar dashboard preview"/>

</div>

Arduino scans the surroundings using an **HC-SR04 ultrasonic sensor mounted on a servo motor**. Distance and angle readings are sent over USB serial to a browser-based radar dashboard.

## ⚡ HOW IT WORKS

<div align="center">

`SENSOR` → `ARDUINO` → `SERIAL DATA` → `RADAR UI`

</div>

- 📍 **180° scan** — servo sweeps the sensor
- 📏 **Distance sensing** — ultrasonic echo measurement
- 🖥️ **Live visualization** — browser radar display
- 🚨 **Proximity alert** — LED and buzzer

## 🔩 HARDWARE

<div align="center">

| Component | Pin |
|:--|:--:|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Servo signal | D6 |
| LED | D4 |
| Buzzer | D5 |

</div>

## 💻 TECH STACK

`Arduino C++` · `HTML` · `CSS` · `JavaScript` · `Web Serial API`

## 🚀 RUN IT

1. Upload `Arduino-Ultrasonic-Radar.ino` using Arduino IDE.
2. Open `radar.html` in a compatible desktop browser through a local server.
3. Connect the Arduino from the dashboard and select its serial port.
4. Start scanning!

## 📁 PROJECT FILES

```text
Arduino-Ultrasonic-Radar/
├── Arduino-Ultrasonic-Radar.ino
├── radar.html
└── README.md
```

---

<div align="center">

**SENSE THE WORLD. VISUALIZE THE SIGNAL.**  
*Built by Pratigya Kaushik* 🟢

</div>
