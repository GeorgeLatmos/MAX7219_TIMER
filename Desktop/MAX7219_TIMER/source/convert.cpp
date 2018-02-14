#include "variables.h"

int hours_int1;            //1st digit of displayed hour in clock
int hours_int2;            //2nd digit of displayed hour in clock

int minutes_int1;          //1st digit of displayed minutes in clock
int minutes_int2;          //2nd digit of displayed minutes in clock

int seconds_int1;          //1st digit of displayed seconds in clock
int seconds_int2;          //2nd digit of displayed seconds in clock

int final_h[2];            //array in which "hours" digits are stored           
int final_m[2];            //array in which "minutes" digits are stored
int final_s[2];            //array in which "seconds" digits are stored

char hour_to_char[3];      //used in order to convert integers
char minutes_to_char[3];   //used in order to convert integers
char seconds_to_char[3];   //used in order to convert integers

/*This function is used to convert an integer(current hour) to a char array*/
void convert_hours(int h)
{
 String hours_str = String(h);
 hours_str.toCharArray(hour_to_char,3); 
 hours_int1 = hour_to_char[0] - '0';
 hours_int2 = hour_to_char[1] - '0';
 final_h[0] = hours_int1;
 final_h[1] = hours_int2;
}

/*This function is used to convert an integer(current minutes) to a char array*/
int convert_minutes(int m)
{
 String minutes_str = String(m);
 minutes_str.toCharArray(minutes_to_char,3);
 minutes_int1 = minutes_to_char[0] - '0';
 minutes_int2 = minutes_to_char[1] - '0'; 
 final_m[0] = minutes_int1;
 final_m[1] = minutes_int2;
}

/*This function is used to convert an integer(current seconds) to a char array*/
void convert_seconds(int sec)
{
 String seconds_str = String(sec);
 seconds_str.toCharArray(seconds_to_char,3);  
 seconds_int1 = seconds_to_char[0] - '0';
 seconds_int2 = seconds_to_char[1] - '0';
 final_s[0] = seconds_int1;
 final_s[1] = seconds_int2;
}
