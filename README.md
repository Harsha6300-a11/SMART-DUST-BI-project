# 🗑️ Automatic Smart Dustbin using Ultrasonic Sensor and Servo Motor

This Arduino project is a **Smart Dustbin** that opens its lid automatically when it detects a hand or object nearby using an ultrasonic sensor. The servo motor lifts the lid for a few seconds and then closes it again.  

---

## 📸 Project Overview

- **Ultrasonic Sensor (HC-SR04)** measures the distance of an approaching object (like a hand).  
- **Arduino** processes the sensor data.  
- **Servo Motor** acts as the lid and opens when an object is detected within range.  
- The system helps to make a **contactless trash bin** for hygiene.  

---

## 🛠️ Components Required

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno/Nano       | 1        |
| Ultrasonic Sensor HC-SR04 | 1     |
| Servo Motor (SG90/MG90S)| 1       |
| Jumper Wires           | -        |
| Breadboard             | 1        |
| Power Supply (5V USB)  | 1        |

---

## ⚡ Circuit Connections

Ultrasonic Sensor → Arduino
Trig Pin → Pin 9
Echo Pin → Pin 10
VCC → 5V
GND → GND

Servo Motor → Arduino
Signal (Orange) → Pin 6
VCC (Red) → 5V
GND (Brown) → GND

yaml
Copy
Edit

---

## 💻 Code

The Arduino sketch (`Smart_Dustbin.ino`) includes:

- Distance calculation using ultrasonic sensor.  
- Servo motor control to open/close the lid.  
- Serial monitor output for debugging.  

---

## 🔑 Features

- ✅ Hands-free smart dustbin  
- ✅ Lid opens automatically when hand/object is within **2–30 cm**  
- ✅ Lid closes automatically after 3 seconds  
- ✅ Prevents rapid toggling with a delay  
- ✅ Improves hygiene with contactless use  

---

## 📊 Workflow

1. Ultrasonic sensor measures distance.  
2. If distance is between **2 cm and 30 cm** → Servo opens lid (90°).  
3. Lid stays open for 3 seconds.  
4. Lid closes automatically (0°).  
5. System waits 1 second before checking again.  

---
## 🚀 How to Run

1. Install **Arduino IDE**.  
2. Connect the circuit as per the connections above.  
3. Copy the code into Arduino IDE.  
4. Upload the code to Arduino Uno.  
5. Power up the circuit → Place your hand near the sensor → Watch the lid open and close.  

---

## 📌 Future Improvements

- Add a **battery pack** for portability.  
- Use a **metal gear servo** for stronger lids.  
- Add an **LCD display** showing messages.  
- Add a **buzzer** for feedback.  
- Integrate IoT for smart monitoring.  
