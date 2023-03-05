#include <stdint.h>
#include <macros.h>

class DisplayDigit {
    uint8_t pins[8];

public:
    DisplayDigit();
    void display(digit_config_t config);
    void reset();
    void wait();
};