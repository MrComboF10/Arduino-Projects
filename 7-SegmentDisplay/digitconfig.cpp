#include <digitconfig.h>

digit_config_t DigitConfig::get_config(uint8_t n) {
    switch (n) {
        case 0:
            return 0b11111100;
        case 1:
            return 0b01100000;
        case 2:
            return 0b11011010;
        case 3:
            return 0b11110010;
        case 4:
            return 0b01100110;
        case 5:
            return 0b10110110;
        case 6:
            return 0b10111110;
        case 7:
            return 0b11100100;
        case 8:
            return 0b11111110;
        case 9:
            return 0b11110110;
    }
    return -1;
}

uint8_t DigitConfig::get_pin_value(digit_config_t config, uint8_t index) {
    return (config >> (7-index)) & 1;
}
