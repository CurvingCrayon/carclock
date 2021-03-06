#include "logo.h"

SSD1306_Mini oled;
const unsigned char PROGMEM logo_bmp[] =
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

unsigned char getImg(unsigned char row, unsigned char col){
  unsigned char data= pgm_read_byte( &(logo_bmp[row*16+ col]) );
  
  return data;
}


void display_logo(void(*callback)()){
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
  callback();
}