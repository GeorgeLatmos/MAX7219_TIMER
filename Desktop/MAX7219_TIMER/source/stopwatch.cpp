#include "variables.h"

int sptw_hours = 0;        //initialized hours for stopwatch
int sptw_mins = 0;         //initialized minutes for stopwatch
int sptw_secs = 0;         //initialized seconds for stopwatch

int pause_hour;            //hour displayed while the stopwatch is in pause mode  
int pause_mins;            //minutes displayed while the stopwatch is in pause mode
int pause_secs;            //seconds displayed while the stopwatch is in pause mode

int counter = 0;           //counter in order to execute several processes with one button

int done = 1;              //flag used for pause mode
int done2 = 1;             //flag used for screen clear

/*This function is used to start the stopwatch*/
void start_stopwatch()
{
    while(counter == 2){
       set_time(sptw_hours,sptw_mins,sptw_secs);
       write_on_screen(sptw_hours,sptw_mins,sptw_secs);
       counter_check();
       set_time(hours,minutes,seconds);
    }
}

/*This function is used to pause the stopwatch*/
void pause_stopwatch()
{
        while (counter == 3){
          if (done == 1) {
             pause_secs = sptw_secs;
             pause_mins = sptw_mins;
             pause_hour = sptw_hours;
           }
        done = 0;
        write_on_screen(pause_hour,pause_mins,pause_secs);
        sptw_secs = pause_secs;
        sptw_mins = pause_mins;
        sptw_hours = pause_hour;
        write_on_screen(sptw_hours,sptw_mins,sptw_secs);
        counter_check();
        set_time(hours,minutes,seconds);
       }
        done = 1;    
}

/*This function is used to reset the stopwatch */
void reset_stopwatch()
{
  while (counter == 1)
       {
          sptw_secs = 0;
          sptw_mins = 0;
          sptw_hours = 0;
          write_on_screen(sptw_hours,sptw_mins,sptw_secs);
          counter_check();
          set_time(hours,minutes,seconds);
       }
}

/*This function checks the value of counter variable*/
void counter_check()
{
  if (digitalRead(stopwatchPin) == LOW)
  {
     counter++;  
     done2 = 0;
     delay(100);
  }  
}
