
<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:020806,50:063D29,100:00FF9C&height=180&section=header&text=ULTRASONIC%20RADAR&fontSize=42&fontColor=E0FFF1&fontAlignY=38&desc=REAL-TIME%20OBJECT%20DETECTION%20SYSTEM&descSize=13&descAlignY=60&animation=fadeIn" />

<img src="https://readme-typing-svg.demolab.com?font=Share+Tech+Mono&size=17&duration=2500&pause=700&color=39FF9C&center=true&vCenter=true&width=650&lines=INITIALIZING+SENSOR+ARRAY...;SCANNING+ENVIRONMENT+%5B0%C2%B0%E2%80%93180%C2%B0%5D;ULTRASONIC+SENSING+%7C+SERIAL+DATA;HARDWARE+MEETS+VISUALIZATION." alt="Radar system terminal" />

<br/>

<img src="https://img.shields.io/badge/SYSTEM-ARDUINO%20UNO-061B12?style=flat-square&labelColor=061B12&color=00FF9C" />
<img src="https://img.shields.io/badge/SENSOR-HC--SR04-061B12?style=flat-square&labelColor=061B12&color=00FF9C" />
<img src="https://img.shields.io/badge/INTERFACE-WEB%20RADAR-061B12?style=flat-square&labelColor=061B12&color=00FF9C" />
<img src="https://img.shields.io/badge/COMMUNICATION-USB%20SERIAL-061B12?style=flat-square&labelColor=061B12&color=00FF9C" />

<br/><br/>

**`SENSE`** &nbsp; ⟶ &nbsp; **`PROCESS`** &nbsp; ⟶ &nbsp; **`TRANSMIT`** &nbsp; ⟶ &nbsp; **`VISUALIZE`**

*An embedded sensing project that transforms ultrasonic measurements into a live radar-style visual experience.*

</div>

---

<div align="center">

## `//  SYSTEM BRIEFING`

</div>

**Ultrasonic Radar System** is an Arduino-based object detection and visualization project that combines embedded hardware, ultrasonic sensing, servo-controlled scanning, and browser-based graphics.

An HC-SR04 sensor measures the distance to nearby objects while a servo motor sweeps across a 180-degree range. Arduino transmits angle-distance readings to a web dashboard, where JavaScript renders a radar display and plots valid detections.

The system also uses an LED and buzzer to indicate objects within a configurable proximity threshold.

> `MISSION OBJECTIVE:` Bridge the physical environment and a real-time digital visualization interface.

---

## `01` / RADAR DISPLAY

<div align="center">

<img src="https://img.shields.io/badge/RADAR%20MODE-ANGULAR%20SCAN-07130E?style=for-the-badge&color=39FF9C" />
<img src="https://img.shields.io/badge/DATA%20SOURCE-ULTRASONIC-07130E?style=for-the-badge&color=39FF9C" />

<br/><br/>

**Live dashboard preview**

Open [`radar.html`](radar.html) to view the radar interface.

</div>

The dashboard is designed to display:

- Current scanning angle
- Latest measured distance
- Radar sweep line
- Object markers within the configured display range
- Connection and detection status

> **Visual behavior:** The dashboard displays incoming serial readings. Its object markers represent recorded measurements, not guaranteed persistent or independently tracked objects.

---

## `02` / SYSTEM ARCHITECTURE

```mermaid
flowchart TD
    A["HC-SR04 Ultrasonic Sensor"] --> B["Arduino UNO"]
    C["Servo Motor"] --> B
    B --> D["Distance + Angle Readings"]
    D --> E["USB Serial · 9600 baud"]
    E --> F["Browser Web Serial API"]
    F --> G["JavaScript Data Parser"]
    G --> H["Canvas Radar Visualization"]
    B --> I["LED + Buzzer Alert"]
    
    style A fill:#062719,stroke:#39FF9C,color:#E0FFF1
    style B fill:#063D29,stroke:#39FF9C,color:#FFFFFF
    style C fill:#062719,stroke:#39FF9C,color:#E0FFF1
    style D fill:#062719,stroke:#39FF9C,color:#E0FFF1
    style E fill:#062719,stroke:#39FF9C,color:#E0FFF1
    style F fill:#062719,stroke:#39FF9C,color:#E0FFF1
    style G fill:#062719,stroke:#39FF9C,color:#E0FFF1
    style H fill:#063D29,stroke:#39FF9C,color:#FFFFFF
    style I fill:#062719,stroke:#39FF9C,color:#E0FFF1
```

<div align="center">

`SENSING LAYER` → `CONTROL LAYER` → `COMMUNICATION LAYER` → `VISUALIZATION LAYER`

</div>

---

## `03` / HARDWARE SPECIFICATIONS

| MODULE | FUNCTION | INTERFACE |
|:---|:---|:---|
| Arduino UNO | Main controller | USB serial |
| HC-SR04 | Ultrasonic distance measurement | Trigger / Echo |
| Servo motor | Sensor angular positioning | PWM control |
| LED | Visual proximity indication | Digital output |
| Buzzer | Audible proximity indication | Digital output |
| Breadboard + jumper wires | Circuit assembly | Electrical connections |

### Pin assignment matrix

| SIGNAL | ARDUINO UNO PIN |
|:---|:---:|
| Ultrasonic TRIG | `D9` |
| Ultrasonic ECHO | `D10` |
| Servo signal | `D6` |
| LED | `D4` |
| Buzzer | `D5` |

<details>
<summary><b>⚠ ELECTRICAL & INTEGRATION NOTES</b></summary>

- Connect the sensor ground and Arduino ground correctly.
- Use a current-limiting resistor with the LED.
- Check the servo's voltage and current requirements; use a suitable external supply if necessary.
- Keep the external servo supply ground connected to Arduino ground.
- Verify the wiring before powering the circuit.
- The exact hardware performance depends on the sensor, supply, mechanical assembly and environment.

</details>

---

## `04` / DATA PROCESSING PIPELINE

<table>
<tr>
<td width="65">

**`STAGE 01` — ACQUISITION**

The ultrasonic sensor emits a pulse and receives its echo.

</td>
<td align="center" width="35">

`HC-SR04`

</td>
</tr>
<tr>
<td>

**`STAGE 02` — DISTANCE ESTIMATION**

Arduino calculates distance from the measured echo duration.

</td>
<td align="center">

`TIME → DISTANCE`

</td>
</tr>
<tr>
<td>

**`STAGE 03` — ANGULAR ASSOCIATION**

Each measurement is associated with the current servo angle.

</td>
<td align="center">

`ANGLE + CM`

</td>
</tr>
<tr>
<td>

**`STAGE 04` — SERIAL TRANSMISSION**

Readings are sent to the browser as comma-separated values.

</td>
<td align="center">

`USB / 9600 BAUD`

</td>
</tr>
<tr>
<td>

**`STAGE 05` — VISUAL RENDERING**

JavaScript parses valid readings and plots them on the radar canvas.

</td>
<td align="center">

`CANVAS API`

</td>
</tr>
</table>

### Serial data format

```text
angle,distance
0,42
2,40
4,38
6,0
```

These are illustrative examples, not recorded experimental results. In the current firmware, a distance of `0` indicates that no valid echo was received before the timeout.

---

## `05` / SOFTWARE STACK

<div align="center">

<img src="https://img.shields.io/badge/ARDUINO%20IDE-FIRMWARE-051B12?style=flat-square&logo=arduino&logoColor=39FF9C" />
<img src="https://img.shields.io/badge/C%2B%2B-CONTROL%20LOGIC-051B12?style=flat-square&logo=cplusplus&logoColor=39FF9C" />
<img src="https://img.shields.io/badge/HTML5-STRUCTURE-051B12?style=flat-square&logo=html5&logoColor=39FF9C" />
<img src="https://img.shields.io/badge/CSS3-INTERFACE-051B12?style=flat-square&logo=css3&logoColor=39FF9C" />
<img src="https://img.shields.io/badge/JAVASCRIPT-VISUALIZATION-051B12?style=flat-square&logo=javascript&logoColor=39FF9C" />

</div>

| SOFTWARE COMPONENT | RESPONSIBILITY |
|:---|:---|
| Arduino IDE | Compile and upload firmware |
| Servo library | Control servo positioning |
| HTML | Dashboard structure |
| CSS | Dark radar-themed styling |
| JavaScript Canvas | Radar drawing and object plotting |
| Web Serial API | Browser access to USB serial data |

---

## `06` / DEPLOYMENT SEQUENCE

<details>
<summary><b>01 — PREPARE THE CONTROLLER</b></summary>

1. Install Arduino IDE.
2. Open `Arduino-Ultrasonic-Radar.ino`.
3. Install the Servo library if needed.
4. Select Arduino UNO and the correct serial port.
5. Upload the firmware.

</details>

<details>
<summary><b>02 — INITIALIZE THE DASHBOARD</b></summary>

1. Open the repository in your local development environment.
2. Start a local web server, such as VS Code Live Server.
3. Open `radar.html` in a compatible desktop browser.
4. Ensure the page runs in a secure context, such as `localhost`.

</details>

<details>
<summary><b>03 — ESTABLISH SERIAL COMMUNICATION</b></summary>

1. Close Arduino Serial Monitor and any other program using the same port.
2. Click **Connect Arduino** on the dashboard.
3. Select the correct serial port and grant permission.
4. Confirm that the angle and distance readings update.

</details>

<details>
<summary><b>04 — TROUBLESHOOTING</b></summary>

| ISSUE | CHECK |
|:---|:---|
| Port unavailable | Close Serial Monitor and other serial applications |
| Browser API unavailable | Use a supported desktop browser and secure context |
| No distance reading | Check sensor wiring and target distance |
| Servo does not move | Check signal pin, power supply and ground |
| Dashboard remains blank | Confirm the serial format and baud rate match the firmware |

</details>

---

## `07` / REPOSITORY STRUCTURE

```text
Arduino-Ultrasonic-Radar/
│
├── Arduino-Ultrasonic-Radar.ino
│   └── Sensor acquisition, servo scan and alerts
│
├── radar.html
│   └── HTML + CSS + JavaScript dashboard
│
└── README.md
    └── Technical documentation
```

---

## `08` / APPLICATION DOMAINS

<div align="center">

| `ROBOTICS` | `EMBEDDED SYSTEMS` |
|:---:|:---:|
| Obstacle-detection experiments | Sensor interfacing |

| `AUTOMATION` | `DATA VISUALIZATION` |
|:---:|:---:|
| Proximity alerts | Live measurement display |

</div>

This project is intended as an educational prototype for learning ultrasonic sensing, servo control, serial communication and real-time browser visualization. It is not a certified safety or navigation system.

---

## `09` / ENGINEERING ROADMAP

- [ ] Add configurable detection thresholds
- [ ] Improve invalid-reading handling
- [ ] Add measurement logging and export
- [ ] Improve object persistence and tracking
- [ ] Add wireless telemetry
- [ ] Develop a mobile-friendly control interface
- [ ] Evaluate measurement repeatability under different conditions

---

<div align="center">

## `SYSTEM END // BUILD IN PROGRESS`

<img src="https://img.shields.io/badge/BUILT%20WITH-ARDUINO%20%2B%20WEB-061B12?style=for-the-badge&color=00FF9C" />

<br/><br/>

**PRATIGYA KAUSHIK**

Electronics & Computer Science Engineering

*Exploring the intersection of embedded systems, IoT and interactive engineering.*

<br/>

`SENSE THE WORLD. VISUALIZE THE SIGNAL.`

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:00FF9C,50:063D29,100:020806&height=100&section=footer" />

</div>
