#include <Arduino.h>

#define BUTTON_PIN 4

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  bool pinValue = digitalRead(BUTTON_PIN);
  Serial.println(pinValue);
  delay(100);
}
