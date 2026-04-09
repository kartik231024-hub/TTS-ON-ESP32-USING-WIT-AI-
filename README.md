# 📢 ESP32 Text-to-Speech (TTS) using Wit.ai

Convert text into real speech using ESP32, Wit.ai API, and MAX98357A amplifier.

---

## 🚀 Features
- Text-to-Speech using cloud API  
- Real-time audio output  
- Works on low-cost ESP32  
- Simple and beginner-friendly  

---

## 🧰 Hardware Required
- ESP32 (ESP32-C6 / ESP32-CAM)  
- MAX98357A I2S Amplifier  
- 3W Speaker  
- Jumper Wires  
- WiFi Connection  

---

## 🔌 Circuit Connections

| MAX98357A | ESP32 |
|----------|------|
| LRC      | GPIO 25 |
| BCLK     | GPIO 26 |
| DIN      | GPIO 22 |
| GND      | GND |
| VIN      | 5V |

> ⚠️ Pins may change based on your code.
> 
## ⚙️ Setup

Open Arduino ide and paste this code and change your wifi credentials and wit ai api 

>const char* ssid = "YOUR_WIFI";
>
>const char* password = "YOUR_PASSWORD";
>
>const char* witToken = "YOUR_WIT_AI_TOKEN";

and upload the code
