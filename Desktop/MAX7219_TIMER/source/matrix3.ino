#include "variables.h"

int stopwatchPin = 5;      //The digital pin 5 of arduino is used to start/end the stopwatch
int hour_change_pin = 6;  //The digital pin 12 of arduino is used to adjust the displayed hour 
int min_change_pin = 7;   //The digital pin 12 of arduino is used to adjust the displayed minutes

byte data = 8;    // DIN pin of MAX7219 module
byte load = 9;    // CS pin of MAX7219 module
byte clock = 10;  // CLK pin of MAX7219 module
 
byte maxInUse = 5;  //how many MAX7219 are connected

byte buffer[10];

MaxMatrix m(data, load, clock, maxInUse); // define Library
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino

void setup(){
  
  Serial.begin(9600);
  dht.begin();
  pinMode(stopwatchPin, INPUT);
  pinMode(hour_change_pin, INPUT);
  pinMode(min_change_pin, INPUT); 
  // initialize timer1 
  noInterrupts();           // disable all interrupts
  TCCR1A = 0;
  TCCR1B = 0;
  TCCR1B |= (1<<CS12);      //prescaler = 256 for timer1

  TCNT1 = 3036;            // starting value  
  TIMSK1 |= (1 << TOIE1);   // enable timer overflow interrupt
  interrupts();             // enable all interrupts
  
  m.init(); // module MAX7219
  m.setIntensity(1); // LED Intensity 0-15

}

ISR(TIMER1_OVF_vect)        
{
  TCNT1 = 3036;            // preload timer
  sptw_secs ++;
  seconds++;
}

void loop(){

 temper = dht.readTemperature();
 set_time(hours,minutes,seconds); 
 write_on_screen(hours,minutes,seconds); //display current hour on screen 
  
 counter_check();
  
  if (counter == 1)
  {
       reset_stopwatch();
         
  }else if(counter == 2){
       
       start_stopwatch();
  
  }else if (counter == 3){
         
       pause_stopwatch();   
  }else{
         
       write_on_screen(hours,minutes,seconds); 
  }
     
  if (counter > 3)
  {
    counter = 0;
  }
  
  if (digitalRead(hour_change_pin) == LOW){
     hours++;  
     m.clear();
  }
  
  if (digitalRead(min_change_pin) == LOW){
     minutes++;  
     m.clear();
  }
}
