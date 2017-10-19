//Module:
//Author: Ryan Farrell  @Thevenin44
//Copyright (c) 2017 Ryan Farrell
//See LICENSE for information.

#include <Arduino.h>
// Make sure Alex will let you use this library****
#include <utils.h>
// This library is necessary for Frequency calculations
#include <Freqcounter.h>

void setup(){
   Serial.begin(9600);
}

long int16_t frq;

void loop(){
  FreqCounter::f_comp= 8;             // Set compensation to 12
  FreqCounter::start(100);             // Start counting with gatetime of 100ms (also unsure of this time)


  while (FreqCounter::f_ready == 0)   // wait until counter ready
  frq=FreqCounter::f_freq;            // read result
  Serial.println(frq);                // print result
  delay(100);                         // I am unsure of the best value to delay by for measuring a longer signal in time, will play around with later.
}
