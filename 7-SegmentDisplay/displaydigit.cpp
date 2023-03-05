#include <displaydigit.h>
#include <digitconfig.h>
#include <Arduino.h>

DisplayDigit::DisplayDigit() : pins{PIN_A, PIN_B, PIN_C, PIN_D, PIN_E, PIN_F, PIN_G, PIN_DP} {
    for (uint8_t i = 0; i < 8; i++) {
        pinMode(pins[i], OUTPUT);
    }
}

void DisplayDigit::display(digit_config_t config) {
    for (uint8_t i = 0; i < 8; i++) {
        uint8_t pin_value = DigitConfig::get_pin_value(config, i);
        digitalWrite(this->pins[i], pin_value);
    }
}

void DisplayDigit::reset() {
    for (uint8_t i = 0; i < 8; i++) {
        digitalWrite(this->pins[i], LOW);
    }
}

void DisplayDigit::wait() {
    delay(1000);
}