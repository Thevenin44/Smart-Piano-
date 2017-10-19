//Module: calculates frequency of an input signal
//Author: Ryan Farrell  @Thevenin44
//Copyright (c) 2017 Ryan Farrell
//See LICENSE for information.

#include <Arduino.h>
// Make sure Alex will let you use this library****
#include <utils.h>
// This library is necessary for Frequency calculations
#include <Freqcounter.h>
//Needed for computations of Log base 2
#include <Math.h>

void setup(){
   Serial.begin(9600);
}

float frq;
float key;

void loop(){
  FreqCounter::f_comp= 8;             // Set compensation to 12
  FreqCounter::start(100);             // Start counting with gatetime of 100ms (also unsure of this time)


  while (FreqCounter::f_ready == 0)   // wait until counter ready
  frq=FreqCounter::f_freq;            // read result
  key= 12 * (log (frq/440) / log (2)) + 49    // Compiler/Arduino might not like this; will have to see
  Serial.println(frq:key);                // print result
  delay(100);                         // I am unsure of the best value to delay by for measuring a longer signal in time, will play around with later.
}
