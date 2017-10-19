Hello please adhere to the following rules when adding to the project:


1. Copyright/Legal Pasta

Make sure to comment the following at the top of any code you write and push for
the project:

//Module: A BRIEF DESCRIPTION OF WHAT THE PROGRAM DOES  
//Author:  FULL NAME  @YOURGITHUBUSERNAME
//Copyright (c) 2017 FULL NAME
//See LICENSE for information.

It is very important that this is done for all modules/code you write. Even for
simple things like writing a basic library.

2. How to properly write an Arduino Libray

Although at this current time it is not a 100% given that indexing our own
libraries will be necessary, there is still a chance that we will have to create them.

When you write your library it should have the following layout:

#ifndef LIBRARYNAME  //This is the header gaurd and must be included at the start of every library
#define LIBRARYNAME

(PLEASE NOTE IT IS GENERALLY GOOD FORM FOR YOUR LIBRARY NAME TO BE ALL CAPS)
(PLEASE DO NOT INCLUDE <Arduino.h> IN ANY OF YOUR CREATED LIBRARIES, THIS IS REDUNDANT AND WASTES MEMORY)

class LIBRARYNAME{

  public:

    void sample_loop();     (HERE YOU DECLARE THE NAMES OF ALL THE FUCNTION TO BE USED)
    int sample_function();  (YOU MUST ALSO SPECIFY THEIR TYPES AND INPUT ARGUMENTS)
    void sample_setup(int x);

};  (THIS SEMI COLON MUST BE INCLUDED OR IT WILL NOT COMPILE)
#endif (MUST END THE LIBRARY WITH A #endif)

3. Specific things to keep in mind when programming in Arduino

Please refarin from calling the functions malloc() or calloc() as the memory of the Arduino is very limited
~ 2 kbytes of SRAM and calling one of these functions can often cut that in half. These functions will most likely
not be needed for our project, but keep this in mind just in case.

In order to calcualte the frequency of the input signal we will be calling a function "FreqCounter". In order
to properly use this you must have the line: #include <Freqcounter.h> at the beginning of all Arduino modules you write.
Another important thing to keep in mind about this is that FreqCounter only supports 1 pin on the Arduino UNO; pin # 5.

4. Arduino Basics (skip this if you are familiar with programming an Arduino)

The Arduino programming langauge is laregly based around C/C++ programming langauges and share many similarities

The general framework of all Arduino programs is the following: 
