//Name: Krishi 
//adm no: 2517759
//Class: DCEP/1A/04
//Name: Kai Rui
//adm no: 2516589
//Class: DCEP/1A/04
//Name: Grace
//Adm no:2540711
//Class: DCEP/1A/04
#define KNOB_PIN A0 //blue knob
#define LED_RED 4
#define LED_GREEN 5

//Following All related to 7 Segment display
#include <Wire.h>

#include "RichShieldTM1637.h"

#define CLK 10//CLK of the TM1637 IC connect to D10 of OPEN-SMART UNO R3
#define DIO 11//DIO of the TM1637 IC connect to D11 of OPEN-SMART UNO R3
TM1637 disp(CLK,DIO);

//up this this point
#define MS_DELAY 100
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_RED,OUTPUT);
  pinMode(LED_GREEN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_RED,HIGH);
delay(MS_DELAY);
digitalWrite(LED_RED,LOW);
delay(MS_DELAY);
digitalWrite(LED_GREEN,HIGH);
delay(MS_DELAY);
digitalWrite(LED_GREEN,LOW);
delay(MS_DELAY);
}
