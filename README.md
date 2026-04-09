📢 ESP32 Text-to-Speech (TTS) using Wit.ai

This project demonstrates how to implement Text-to-Speech (TTS) on an ESP32 using Wit.ai API and output audio through a MAX98357A I2S amplifier.

🚀 Features
Convert text into speech using cloud API
Real-time audio playback on ESP32
Works with low-cost hardware
Clean and simple implementation

🧰 Hardware Requirements
ESP32 (ESP32-C6 / All ESP32 model supported)
MAX98357A I2S DAC Amplifier
3W Speaker
Stable WiFi connection

🔌 Circuit Connections
MAX98357A	ESP32
LRC	GPIO (e.g., 25)
BCLK	GPIO (e.g., 26)
DIN	GPIO (e.g., 22)
GND	GND
VIN	5V

⚠️ Pin numbers can vary based on your code—match them properly.

⚙️ Setup Instructions
Clone the repository
Open code in Arduino IDE / PlatformIO
Install required libraries

Add your WiFi credentials:

const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

Add your Wit.ai API token:

const char* witToken = "YOUR_WIT_AI_TOKEN";
Upload code to ESP32

▶️ How it Works
ESP32 sends text to Wit.ai
Wit.ai converts text into speech
Audio data is streamed back
ESP32 plays audio via I2S (MAX98357A)

⚠️ Known Issues
Audio distortion → Increase buffer size
Lag in speech → Depends on internet speed
No output → Check wiring + power supply
