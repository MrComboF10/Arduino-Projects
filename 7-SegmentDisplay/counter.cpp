#include <counter.h>

Counter::Counter() {
    this->digit = 0;
}

void Counter::increment_digit() {
    this->digit = (this->digit + 1) % 10;
}

void Counter::decrement_digit() {
    this->digit = (this->digit - 1) % 10;
}

uint8_t Counter::get_digit() {
    return this->digit;
}