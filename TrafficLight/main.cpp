#include <Arduino.h>
#include <trafficlight.h>
#include <macros.h>

TrafficLight traffic_light;
int pins[3] = {RED_LED_PIN, YELLOW_LED_PIN, GREEN_LED_PIN};

void setup() {
  // Initialize pins
  for (int i = 0; i < 3; i++) {
    pinMode(pins[i], OUTPUT);
  }

  // Initialize semaforo
  traffic_light = TrafficLight();
}

void loop() {
  // Turn off all pins
  for (int i = 0; i < 3; i++) {
    digitalWrite(pins[i], LOW);
  }

  // Turn on current pin
  digitalWrite(traffic_light.get_current_pin(), HIGH);

  // Wait
  delay(traffic_light.get_delay());

  // Change pin
  traffic_light.change_pin(); 
}