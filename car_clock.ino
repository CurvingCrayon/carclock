
#include "SSD1306_minimal.h"
#include <avr/pgmspace.h>

SSD1306_Mini oled;

void heartBeat(){

    digitalWrite(4, HIGH);   // set the LED on  
    delay(200);  
    digitalWrite(4, LOW);    // set the LED off
    delay(100);

    digitalWrite(4, HIGH);   // set the LED on  
    delay(500);  
    digitalWrite(4, LOW);    // set the LED off
    delay(100);
  
}

static const unsigned char PROGMEM logo_bmp[] =
{ 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF,
0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF,
0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF,
0xFF, 0xFF, 0xFC, 0x07, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x0C, 0x07, 0xFF,
0xFF, 0xFF, 0xF8, 0x0F, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0x01, 0xFF,
0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0x81, 0xFF,
0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xE0, 0xFF,
0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xE0, 0x7F,
0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xF8, 0x3F,
0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x3F,
0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x1F,
0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x1F,
0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x0F,
0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x0F,
0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x0F,
0xFF, 0xFE, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x0F,
0xFF, 0xFE, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x0F,
0xFF, 0xFE, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x0F,
0xFF, 0xFE, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x0F,
0xFF, 0xFE, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x0F,
0xFF, 0xFE, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x0F,
0xFF, 0xFE, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x0F,
0xFF, 0xFF, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFE, 0x1F,
0xFF, 0xFF, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFC, 0x1F,
0xFF, 0xFF, 0x83, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xF8, 0x1F,
0xFF, 0xFF, 0x83, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xF8, 0x3F,
0xFF, 0xFF, 0xC1, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x7F,
0xFF, 0xFF, 0xE0, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xE0, 0x7F,
0xFF, 0xFF, 0xE0, 0x3F, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xC0, 0xFF,
0xFF, 0xFF, 0xF0, 0x3F, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0x81, 0xFF,
0xFF, 0xFF, 0xF8, 0x0F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFE, 0x03, 0xFF,
0xFF, 0xFF, 0xFC, 0x03, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFC, 0x07, 0xFF,
0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xF0, 0x0F, 0xFF,
0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xC0, 0x1F, 0xFF,
0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0x00, 0x7F, 0xFF,
0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F, 0xFC, 0x01, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x7F, 0xE0, 0x03, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0x00, 0x0F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xF0, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,};
/*
    display 128x64
    snake size 4x4
   
    128 / 8 => 16cols
     64 / 8 => 8rows
    
*/


unsigned char getImg(unsigned char row, unsigned char col){
  unsigned char data= pgm_read_byte( &(logo_bmp[row*16+ col]) );
  
  return data;
}



void test(){
   oled.startScreen();
   int image_offset = 3;
   uint8_t data[4];
  for (char r=0;r<8; r++ ){
    for (char c=0;c<32; c++){
          // send a bunch of data in one xmission
          Wire.beginTransmission(SlaveAddress);
         Wire.send(GOFi2cOLED_Data_Mode);            // data mode
            //data= 0x0;
            
            int img_col = c/2;
            int img_base_row = r*8;
            
            uint8_t bit_offset =7;
            if(c%2==1){ //Every second column
              bit_offset = 3;
            }
            for(int col=0; col<4;col++){
              data[col]=0;
              uint8_t col_mask = 1<<(bit_offset-col);
              for(int row=0; row<8; row++){
                int img_row = img_base_row + row;
                //New bit of data, stored in least significant bit
                uint8_t new_bit = ((getImg(img_row, img_col) & col_mask) >> (bit_offset-col) ) & 0x01;
                //Place it in correct position based on row
                data[col] |= new_bit << row;
                
              }
              data[col] = ~data[col];
            }
            Wire.send( data[0] );
            Wire.send( data[1] );
            Wire.send( data[2] );
            Wire.send( data[3] );
          Wire.endTransmission();
    }
  }  

}
// ============
/// Clock
// ============
int font_y = 5;
int font_x = 3;
static uint8_t font[10][5][3] = {
  {//0
    {0xC0, 0xC0, 0xC0},
    {0xFF, 0x00, 0xFF},
    {0xFF, 0x00, 0xFF},
    {0xFF, 0x00, 0xFF},
    {0x03, 0x03, 0x03},
  },
  {//1
    {0xC0, 0xC0, 0x00},
    {0x00, 0xFF, 0x00},
    {0x00, 0xFF, 0x00},
    {0x00, 0xFF, 0x00},
    {0x03, 0x03, 0x03},
  },

  {//2
    {0x00, 0xC0, 0x00},
    {0x03, 0x00, 0xFF},
    {0x00, 0xFF, 0x00},
    {0xFF, 0x00, 0x00},
    {0x03, 0x03, 0x03},
  },
  {//3
    {0xC0, 0xC0, 0x00},
    {0x00, 0xC0, 0x3F},
    {0x00, 0x03, 0xFC},
    {0x00, 0x00, 0xFF},
    {0x03, 0x03, 0x00},
  },
  {//4
    {0xC0, 0x00, 0xC0},
    {0xFF, 0x00, 0xFF},
    {0x03, 0x03, 0xFF},
    {0x00, 0x00, 0xFF},
    {0x00, 0x00, 0x03},
  },
  {//5
    {0xC0, 0xC0, 0xC0},
    {0xFF, 0x00, 0x00},
    {0x03, 0x03, 0xFF},
    {0x00, 0x00, 0xFF},
    {0x03, 0x03, 0x03},
  },
  {//6
    {0xC0, 0xC0, 0x00},
    {0xFF, 0x00, 0x00},
    {0xFF, 0x03, 0xFF},
    {0xFF, 0x00, 0xFF},
    {0x03, 0x03, 0x03},
  },
  {//7
    {0xC0, 0xC0, 0xC0},
    {0x00, 0x00, 0xFF},
    {0x00, 0x00, 0xFF},
    {0x00, 0x00, 0xFF},
    {0x00, 0x00, 0x03},
  },
  {//8
    {0xC0, 0xC0, 0xC0},
    {0xFF, 0xC0, 0xFF},
    {0xFF, 0x03, 0xFF},
    {0xFF, 0x00, 0xFF},
    {0x03, 0x03, 0x03},
  },
  {//9
    {0xC0, 0xC0, 0xC0},
    {0xFF, 0x00, 0xFF},
    {0x03, 0x03, 0xFF},
    {0x00, 0x00, 0xFF},
    {0x00, 0x00, 0x03},
  },
  
};
static uint8_t layer[8][32];
void place_char(int x, int y, int ch){
  for(int a = 0; a < font_y; a++){
    for(int b = 0; b < font_x; b++){
      layer[y+a][x+b] = font[ch][a][b];
    }
  }
}
void place_char_small(int x, int y, int ch){
  int r = 3;
  for(int a = 0; a < font_y; a++){
    for(int b = 0; b < font_x; b++){
      if(a == r){
        a++;
        y--;
      }
      layer[y+a][x+b] = font[ch][a][b];
    }
  }
}
void colon(int x, int y){
  layer[y+1][x+1] = 0xf0;
  layer[y+3][x+1] = 0x0f;
}
void init_arr(){
  for(int x = 0; x<8;x++){
    for(int y = 0; y < 32; y++){
       layer[x][y] = 0;
    }
  }
}
void display_time(int h, int m, int s){
  int x = 1;
  place_char(x,0, 6);
  x+=4;
  place_char(x,0, 7);
  x+=4;
  colon(x,0);
  x+=4;

  place_char(x,0, 8);
  x+=4;
  place_char(x,0, 9);
  x+=4;
  colon(x,0);
  x+=4;
  
  place_char(x,0, 4);
  x+=4;
  place_char(x,0, 5);
}
void display_date(int d, int m, int yr){
  int x = 1;
  int y = 5;
  place_char_small(x, y, 6);
  x+=4;
  place_char_small(x, y, 7);
  x+=4;
  colon(x,0);
  x+=4;

  place_char_small(x, y, 8);
  x+=4;
  place_char_small(x, y, 9);
  x+=4;
  colon(x,0);
  x+=4;
  
  place_char_small(x, y, 4);
  x+=4;
  place_char_small(x, y, 5);
}
void show(){
  init_arr();
  display_time(0,0,0);
  oled.startScreen();
  for (char r=0;r<8; r++ ){
    for (char c=0;c<32; c++){
      Wire.beginTransmission(SlaveAddress);
      Wire.send(GOFi2cOLED_Data_Mode);            // data mode
      Wire.send( layer[r][c] );
      Wire.send( layer[r][c] );
      Wire.send( layer[r][c] );
      Wire.send( layer[r][c] );
    Wire.endTransmission();
    }
  }
}


void setup()
{
  pinMode(4, OUTPUT);   
  
    heartBeat();

    oled.init(0x3c);
    oled.clear();
   
    test();
   
    delay(500);

    show();
    
/*
    for (int i=0;i<10000;i++){
    for (int k=0;k<10000;k++){
      oled.displayX(k);
    }
    }
    
    */
}
 
void loop()
{
 
} 
