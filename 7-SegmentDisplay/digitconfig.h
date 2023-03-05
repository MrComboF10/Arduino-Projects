#include <stdint.h>
#include <macros.h>

class DigitConfig {    
public:
    static digit_config_t get_config(uint8_t n);
    static uint8_t get_pin_value(digit_config_t config, uint8_t index);
};