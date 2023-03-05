#include <stdint.h>

class Counter {
    uint8_t digit;

public:
    Counter();
    void increment_digit();
    void decrement_digit();
    uint8_t get_digit();
};