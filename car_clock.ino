

#include <avr/pgmspace.h>



#include "logo.h"
#include "display.h"


// ============
/// Clock
// ============

void show(){
  Wire.beginTransmission(0x68);
  Wire.send((byte)0x00);
  Wire.endTransmission();
   
  //richiedo 7 byte dal dispositivo con
  //indirizzo 0x68
  Wire.requestFrom(0x68, 7);
  //regupero i 7 byte relativi ai
  //corrispondenti registri
  byte secs = Wire.receive();
  byte mins = Wire.receive();
  byte hrs = Wire.receive();
  byte giorno_sett = Wire.receive();
  byte giorno_mese = Wire.receive();
  byte mese = Wire.receive();
  byte anno = Wire.receive();



  
  clear_arr();
  display_time(hrs, mins, secs);
  //display_time(13,12,11);
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
    pinMode(1, INPUT); 
    oled.init(0x3c);
    oled.clear();
   
    display_logo();
   
    delay(500);
}
 
void loop()
{
  show();
  delay(500);
} 
