# 🌡️ Arduino Weather Station (DHT11)

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Status](https://img.shields.io/badge/Status-Operational-brightgreen?style=for-the-badge)
![Sensor](https://img.shields.io/badge/Sensor-DHT11-blue?style=for-the-badge)

Welcome! This project helps you build a simple **Temperature & Humidity Monitor** using the beginner-friendly **DHT11 sensor**. It reads environmental data and displays it on your computer in real-time.

> **Perfect for:** Beginners, Home Automation starters, and School projects.

---

## ⚡ Quick Navigation
- [🛒 Hardware Checklist](#-hardware-checklist)
- [🔌 Wiring Guide](#-wiring-guide)
- [💻 Software Installation](#-software-installation)
- [⚠️ Troubleshooting](#-troubleshooting)

---

## 🛒 Hardware Checklist

To build this project, you will need the following components.
*Links below refer to recommended stores for quick delivery.*

| Component | Description | 🛒 Buy on Amazon | 📦 Buy on AliExpress |
| :--- | :--- | :--- | :--- |
| **DHT11 Sensor** | Measures Temp & Humidity | [View on Amazon](https://cutt.ly/Qr16YFni) | [View on AliExpress](https://fas.st/hyifTI) |
| **Arduino Nano/Uno** | The "Brain" of the project | [View on Amazon](https://cutt.ly/ttcXB5Rs) | [View on AliExpress](https://fas.st/rnAta) |
| **Breadboard Kit** | For connecting wires easily | [View on Amazon](https://cutt.ly/htcFFjra) | [View on AliExpress](https://fas.st/s8JSX) |

> **Note:** If you buy the DHT11 **Module** (3 pins), you don't need extra resistors. If you buy the bare **Sensor** (4 pins), you might need a 10kΩ resistor. The links above usually point to the easier 3-pin modules.

---

## 🔌 Wiring Guide

Connect the DHT11 sensor to your Arduino using jumper wires. It's very simple!

**Pinout Table:**

| DHT11 Pin | Arduino Pin | Function |
| :---: | :---: | :--- |
| **- / GND** | **GND** | Ground connection |
| **+ / VCC** | **5V** | Power (can also use 3.3V) |
| **S / DATA** | **D2** | Sends data to Arduino |

****

---

## 💻 Software Installation

Follow these steps to get the code running.

### Step 1: Install Libraries
To talk to the sensor, we need to install drivers (libraries).
1. Open the **Arduino IDE**.
2. Go to `Sketch` → `Include Library` → `Manage Libraries...`
3. Search for **"DHT sensor library"** by *Adafruit* and install it.
4. ⚠️ **Important:** A popup will ask to install dependencies. Click **"Install All"** (specifically, we need the *Adafruit Unified Sensor* library).

### Step 2: Load the Code
1. Download/Open the sketch file: [DHT11_code.ino](./DHT11/DHT11_code/DHT11_code.ino).
2. Connect your Arduino board to your PC via USB.
3. Select your Board: `Tools` → `Board` → `Arduino Uno` (or Nano).
4. Select your Port: `Tools` → `Port` → `COM...`
5. Click the **Upload (➡️)** button.

### Step 3: View Data
1. Once uploaded, click the **Magnifying Glass icon** (top right) to open the **Serial Monitor**.
2. **Crucial:** Make sure the speed (bottom right corner) is set to **9600 baud**.

---

## 📝 Features
This code is optimized for beginners and includes:
* ✅ **Tri-Scale Temperature:** Automatically converts Celsius to Fahrenheit and Kelvin.
* ✅ **Humidity Tracker:** Shows relative humidity percentage.
* ✅ **Smart Delays:** Pauses for 2 seconds between readings (required for DHT11 stability).
* ✅ **Error Handling:** Tells you if the sensor is disconnected instead of showing random numbers.

---

## ⚠️ Troubleshooting Common Issues

**❓ Problem: The Serial Monitor is blank or shows weird symbols (`? % &`).**
> **Fix:** Check the bottom-right corner of the Serial Monitor. Change the number to **9600 baud**.

**❓ Problem: It says "Failed to read from DHT sensor!"**
> **Fix:**
> 1. Check your wires. Is the sensor plugged into pin **D2**?
> 2. Try unplugging the USB and plugging it back in.
> 3. Ensure you connected VCC to 5V, not 3.3V (sometimes 3.3V is too weak for older modules).

---

## 🤝 Contributing
Found a bug? Want to add an LCD screen feature? Feel free to **Fork** this repository and submit a Pull Request!
