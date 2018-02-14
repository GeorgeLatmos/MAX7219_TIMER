#include "Arduino.h"
#include <MaxMatrix.h>
#include <DHT.h>
#include <String.h>
#include "print_on_screen.h"
#include "stopwatch.h"
#include "time.h"
#include "convert.h"

#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)

extern MaxMatrix m; 
extern DHT dht;

extern int hours;             // initialize clock hour
extern int minutes;          // initialize clock minutes
extern int seconds;           // initialize clock seconds

extern int stopwatchPin;      //The digital pin 5 of arduino is used to start/end the stopwatch
extern int hour_change_pin;  //The digital pin 12 of arduino is used to adjust the displayed hour 
extern int min_change_pin;   //The digital pin 12 of arduino is used to adjust the displayed minutes

extern int sptw_hours;        //initialized hours for stopwatch
extern int sptw_mins;         //initialized minutes for stopwatch
extern int sptw_secs;         //initialized seconds for stopwatch

extern int pause_hour;            //hour displayed while the stopwatch is in pause mode  
extern int pause_mins;            //minutes displayed while the stopwatch is in pause mode
extern int pause_secs;            //seconds displayed while the stopwatch is in pause mode

extern int sptw_hours_int1;       //1st digit of displayed hour in stopwatch
extern int sptw_hours_int2;       //2nd digit of displayed hour in stopwatch

extern int sptw_minutes_int1;     //1st digit of displayed minutes in stopwatch
extern int sptw_minutes_int2;     //2nd digit of displayed minutes in stopwatch

extern int sptw_seconds_int1;     //1st digit of displayed seconds in stopwatch
extern int sptw_seconds_int2;     //2nd digit of displayed seconds in stopwatch

extern int hours_int1;            //1st digit of displayed hour in clock
extern int hours_int2;            //2nd digit of displayed hour in clock

extern int minutes_int1;          //1st digit of displayed minutes in clock
extern int minutes_int2;          //2nd digit of displayed minutes in clock

extern int seconds_int1;          //1st digit of displayed seconds in clock
extern int seconds_int2;          //2nd digit of displayed seconds in clock

extern int counter;           //counter in order to execute several processes with one button

extern int done;              //flag used for pause mode
extern int done2;             //flag used for screen clear

extern int final_h[2];            //array in which "hours" digits are stored           
extern int final_m[2];            //array in which "minutes" digits are stored
extern int final_s[2];            //array in which "seconds" digits are stored

extern float temper; //Stores temperature value

extern byte data;    // DIN pin of MAX7219 module
extern byte load;    // CS pin of MAX7219 module
extern byte clock ;  // CLK pin of MAX7219 module
 
extern byte maxInUse;  //how many MAX7219 are connected

extern char hour_to_char[3];      //used in order to convert integers
extern char minutes_to_char[3];   //used in order to convert integers
extern char seconds_to_char[3];   //used in order to convert integers

extern String seconds_str;
extern String minutes_str;
extern String hours_str;

extern byte buffer[10];
 
extern char str[];  // Scrolling Text 
extern char C[];

extern PROGMEM const unsigned char CH[];
extern const unsigned char temp[][7];
extern const unsigned char space[];
extern const unsigned char numberArray[][7];
