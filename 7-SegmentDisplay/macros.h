/*
https://www.circuitbasics.com/arduino-7-segment-display-tutorial/

----A----
|       |
F       B
|       |
----G----
|       |
E       C
|       |  ----
----D----  |DP|
           ----


G F - A B
| | | | |
 DISPLAY
| | | | |
E D - C DP

G: YELLOW
F: ORANGE
A: BLUE
B: WHITE

E: YELLOW
D: ORANGE
C: BLUE
DP: WHITE

*/

#define PIN_A 2
#define PIN_B 3
#define PIN_C 4
#define PIN_D 5
#define PIN_E 6
#define PIN_F 7
#define PIN_G 8
#define PIN_DP 9

typedef uint8_t digit_config_t;
