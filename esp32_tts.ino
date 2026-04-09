#include <WitAITTS.h>

/*
   ============================
   WIFI + WIT.AI CONFIG
   ============================
*/
const char* ssid     = "Your_wifi_ssid";
const char* password = "Your_wifi_pass";
const char* witToken = "Your_wit_ai_app_api_key";

/*
   ============================
   SELECT YOUR ESP32 BOARD
   Uncomment ONLY ONE
   ============================
*/

// -------- ESP32 (Default DevKit) --------
//#define I2S_BCLK 26
 //#define I2S_LRC  25
// #define I2S_DOUT 22

// -------- ESP32-C3 --------
// #define I2S_BCLK 4
// #define I2S_LRC  5
// #define I2S_DOUT 6

// -------- ESP32-C6 --------
//#define I2S_BCLK 6
//#define I2S_LRC  4
//#define I2S_DOUT 5

// -------- ESP32-S3 --------
// #define I2S_BCLK 12
// #define I2S_LRC  11
// #define I2S_DOUT 10


/*
   ============================
   CREATE TTS OBJECT
   ============================
*/
WitAITTS tts(I2S_BCLK, I2S_LRC, I2S_DOUT);


void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("Connecting to WiFi...");

    tts.begin(ssid, password, witToken);

    Serial.println("Connected!");

    /*
       ============================
       VOICE SETTINGS
       ============================
    */
    tts.setVoice("wit$Rebecca");   // change if needed
    tts.setSpeed(100);             // 50–200
    tts.setPitch(100);             // 50–200
    tts.setGain(0.5);              // 0.0 – 1.0

    Serial.println("\nType text and press Enter:");
}


void loop() {
    tts.loop(); // REQUIRED

    if (Serial.available()) {
        String text = Serial.readStringUntil('\n');
        text.trim();

        if (text.length() > 0) {
            Serial.print("Speaking: ");
            Serial.println(text);

            tts.speak(text);
        }
    }
}