#include <stdint.h>

extern uint8_t font_y;
extern uint8_t font_x;
extern uint8_t font[10][5][3];
extern uint8_t layer[8][32];
void place_char(int x, int y, int ch);
void place_char_small(int x, int y, int ch);
void colon(int x, int y);
void clear_arr();
void display_time(int h, int m, int s);
void display_date(int d, int m, int yr);