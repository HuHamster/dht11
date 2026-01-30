# 🌡️ Arduino DHT11 Temperature & Humidity Hub

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Status](https://img.shields.io/badge/Status-Operational-brightgreen?style=for-the-badge)
![Sensor](https://img.shields.io/badge/Sensor-DHT11-blue?style=for-the-badge)

This project provides a complete setup for measuring environmental data using the **DHT11** sensor. [cite_start]It tracks temperature in Celsius, Fahrenheit, and Kelvin, alongside humidity levels[cite: 7, 21, 22].

---

## ⚡ Quick Navigation
- [Hardware Setup](#-hardware-setup)
- [Wiring Guide](#-wiring-guide)
- [Software Installation](#-software-installation)
- [Troubleshooting](#-troubleshooting)

---

## 🛠 Hardware Setup

To get the most accurate environmental readings, I recommend using these components:

| Component | 🛒 Amazon | 📦 AliExpress |
| :--- | :--- | :--- |
| **DHT11 Sensor** | [View on Amazon](https://cutt.ly/Qr16YFni) | [View on AliExpress](https://fas.st/hyifTI) |
| **Arduino Nano/Uno** | [View on Amazon](https://cutt.ly/ttcXB5Rs) | [View on AliExpress](https://fas.st/rnAta) |
| **Breadboard Kit** | [View on Amazon](https://cutt.ly/htcFFjra) | [View on AliExpress](https://fas.st/s8JSX) |

---

## 🔌 Wiring Guide

Connecting the DHT11 is straightforward. [cite_start]Follow this pinout for the provided code[cite: 10]:


| DHT11 Pin | Arduino Pin | Description |
| :---: | :---: | :--- |
| **VCC** | **5V / 3.3V** | Power Supply |
| **DATA** | **D2** | Digital Data Out |
| **GND** | **GND** | Ground |

---

## 💻 Software Installation

### 1. Install Libraries
[cite_start]You must install the **DHT sensor library by Adafruit**[cite: 2, 11]:
1. Open Arduino IDE.
2. [cite_start]Go to `Sketch` → `Include Library` → `Manage Libraries`[cite: 12].
3. [cite_start]Search for **"DHT"** and install the Adafruit version[cite: 13].

### 2. Configure & Run
1. Open the [DHT11_code.ino](./DHT11/DHT11_code/DHT11_code.ino).
2. [cite_start]Connect your Arduino to the PC[cite: 14].
3. [cite_start]Select your **Board** and **Port** in the Tools menu[cite: 14].
4. [cite_start]Upload the code[cite: 15].
5. [cite_start]Open the **Serial Monitor** at **9600 baud**[cite: 5, 16].

---

## 📝 Features Included
* [cite_start]✅ **Multi-Unit Tracking** – View temperature in °C, °F, and K[cite: 21, 22].
* [cite_start]✅ **Humidity Monitoring** – Real-time relative humidity percentage[cite: 24].
* [cite_start]✅ **Error Handling** – Built-in checks for failed sensor readings[cite: 23].
* [cite_start]✅ **Stability** – Optimized 2-second delay between readings for accuracy[cite: 24].

---

## ⚠️ Troubleshooting

> **Problem:** Serial Monitor is empty or showing gibberish.
> [cite_start]**Solution:** Ensure the baud rate is set to **9600** in the monitor window[cite: 5].

> **Problem:** "Error reading data!" in the Serial Monitor.
> [cite_start]**Solution:** Check the **DATA** pin connection (D2) and ensure the DHT11 is within its 0-50°C operating range[cite: 1, 3, 23].

---

## 🤝 Contributing
Feel free to fork this project to add data logging or LCD integration!
