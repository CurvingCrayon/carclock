#include <stdint.h>
#include <avr/pgmspace.h>
#include "SSD1306_minimal.h"
extern const unsigned char PROGMEM logo_bmp[];
extern SSD1306_Mini oled;

unsigned char getImg(unsigned char row, unsigned char col);
void display_logo(void(*callback)());