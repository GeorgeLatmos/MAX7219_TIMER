#include "variables.h"

int hours = 17;             // initialize clock hour
int minutes = 3;          // initialize clock minutes
int seconds = 0;           // initialize clock seconds

/*This function is used for printing "Latmos Electonics" after 60 seconds and initialize the time when it is necessary*/
int set_time(int &hours,int &mins, int &sec)
{
   if (done2 == 0){
      m.clear();
      done2 = 1; 
   }
   
   if(sec > 59)      // NOW GETTING IN TO REAL TIME KEEPING
   {
     mins ++;          // increment minutes by 1
     sec = 0;         // reset the seconds variable
     printString();
     m.clear();
   }

  if(mins == 60)      // NOW GETTING IN TO REAL TIME KEEPING
  {
    hours ++;          // increment minutes by 1
    mins = 0;         // reset the seconds variable
  }

  if (hours == 24)
  {
     hours = 0;
     m.clear();  
  }      
  
}
