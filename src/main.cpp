#include <Arduino.h>

const int LED_BUILTIN_PIN = 2; // Most ESP32 boards use GPIO 2 for the onboard LED

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN_PIN, OUTPUT);
  Serial.println("✅ ESP32 LED Blink Test Starting...");
}

void loop() {
  digitalWrite(LED_BUILTIN_PIN, HIGH); // LED ON
  Serial.println("💡 LED ON");
  delay(1000);

  digitalWrite(LED_BUILTIN_PIN, LOW);  // LED OFF
  Serial.println("🌑 LED OFF");
  delay(1000);
}
