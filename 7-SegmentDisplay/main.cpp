#include <Arduino.h>
#include <macros.h>
#include <displaydigit.h>
#include <digitconfig.h>
#include <counter.h>

DisplayDigit display;
Counter counter;

void setup() {
  display = DisplayDigit();
  counter = Counter();
}

void loop() {
  uint8_t digit = counter.get_digit();
  digit_config_t config = DigitConfig::get_config(digit);
  display.display(config);
  counter.increment_digit();
  display.wait();
}