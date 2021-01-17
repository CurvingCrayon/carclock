

#include <avr/pgmspace.h>



#include "logo.h"
#include "display.h"
#include "fsm.h"

void show();

State time_disp = {show, 500};

State fsm[] = {time_disp};
int fsm_index = 0;
unsigned long state_start;


int num = 0;



int b1_state = 0;
int b1_prev_input = 0;
unsigned long b1_change_start = 0;
unsigned long b1_rise_time = 0;
unsigned long b1_fall_time = 0;
bool b1_long_pressed = false;
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
  display_time(hrs, num, secs);
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
void c(){}
#define B1_PIN 3
#define LONG_PRESS 200

void loop2();
void setup()
{
    pinMode(B1_PIN, INPUT); 
    oled.init(0x3c);
    oled.clear();
   
    display_logo(c);
   
    delay(1000);
    state_start = millis();

    b1_change_start = millis();
  while(true){
    loop2();
  }
}
#define DB_TIME 30 //debounce timer



void loop2()
{
  //TODO: check for input/s
  
  //Debounce button 1 click
  bool b1_press = false; //Bool indicating falling edge
  bool b1_long_press = false;
  int b1_input = 0;
  if(digitalRead(B1_PIN) == HIGH){
    b1_input = 1;
  }
  
  unsigned long m = millis();
  if(b1_input != b1_state){
    if(b1_input == b1_prev_input){
      if(m - b1_change_start > DB_TIME){
        b1_state = b1_input;
//        b1_change_start = m;
//        if(b1_input == 1){ //Button release
//          b1_rise_time = m;
//          if(!b1_long_pressed){ //If a long press was not done
//             b1_press = true;
//          }
//          b1_long_pressed = false;
//        }
//        else{ //Button press
//          b1_fall_time = m;
//        }
      }
    }
    else{
      b1_change_start = m;
    }
  }
//  else{
//    if(b1_input == 0){
//      if(m - b1_change_start > LONG_PRESS && !b1_long_pressed){
//        b1_long_press = true;
//        b1_long_pressed = true;
//      }
//    }
//  }
  b1_prev_input = b1_input;

  
  if(b1_press){ //If button 1 is pressed
    //fsm_index++;
  }
  if(b1_long_press){
    //fsm_index += 3;
  }
  //Refresh current state based on state's defined interval
  State curr_state = fsm[fsm_index];
  if(millis() - state_start > curr_state.period){
      state_start = millis();
      curr_state.run();
  }
  
} 

void loop(){}
