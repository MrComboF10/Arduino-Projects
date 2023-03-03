#include <trafficlight.h>
#include <macros.h>

TrafficLight::TrafficLight() {
    this->current_pin = RED_LED_PIN;
}

int TrafficLight::get_delay() {
    switch (this->current_pin) {
        case RED_LED_PIN:
            return RED_LED_DELAY;
        case YELLOW_LED_PIN:
            return YELLOW_LED_DELAY;
        case GREEN_LED_PIN:
            return GREEN_LED_DELAY;
    }
    return -1;
}

bool TrafficLight::change_pin() {
    switch (this->current_pin) {
        case RED_LED_PIN:
            this->current_pin = GREEN_LED_PIN;
            return true;
        case YELLOW_LED_PIN:
            this->current_pin = RED_LED_PIN;
            return true;
        case GREEN_LED_PIN:
            this->current_pin = YELLOW_LED_PIN;
            return true;
    }
    return false;
}

int TrafficLight::get_current_pin() {
    return this->current_pin;
}