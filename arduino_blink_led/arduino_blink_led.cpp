#include <Arduino.h>

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    long rand_number = random(50, 200);
    Serial.println("Hello from Arduino");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(rand_number);
    digitalWrite(LED_BUILTIN, LOW);
    delay(rand_number);
}