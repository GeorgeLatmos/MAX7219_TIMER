#include "variables.h"

PROGMEM const unsigned char CH[] = {
3, 8, B00000000, B00000000, B00000000, B00000000, B00000000, // space
1, 8, B01011111, B00000000, B00000000, B00000000, B00000000, // !
3, 8, B00000011, B00000000, B00000011, B00000000, B00000000, // "
5, 8, B00010100, B00111110, B00010100, B00111110, B00010100, // #
4, 8, B00100100, B01101010, B00101011, B00010010, B00000000, // $
5, 8, B01100011, B00010011, B00001000, B01100100, B01100011, // %
5, 8, B00110110, B01001001, B01010110, B00100000, B01010000, // &
1, 8, B00000011, B00000000, B00000000, B00000000, B00000000, // '
3, 8, B00011100, B00100010, B01000001, B00000000, B00000000, // (
3, 8, B01000001, B00100010, B00011100, B00000000, B00000000, // )
5, 8, B00101000, B00011000, B00001110, B00011000, B00101000, // *
5, 8, B00001000, B00001000, B00111110, B00001000, B00001000, // +
2, 8, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
4, 8, B00001000, B00001000, B00001000, B00001000, B00000000, // -
2, 8, B01100000, B01100000, B00000000, B00000000, B00000000, // .
4, 8, B01100000, B00011000, B00000110, B00000001, B00000000, // /
4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
3, 8, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
4, 8, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
4, 8, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
4, 8, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
4, 8, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
4, 8, B00111110, B01001001, B01001001, B00110000, B00000000, // 6
4, 8, B01100001, B00010001, B00001001, B00000111, B00000000, // 7
4, 8, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
4, 8, B00000110, B01001001, B01001001, B00111110, B00000000, // 9
2, 8, B01010000, B00000000, B00000000, B00000000, B00000000, // :
2, 8, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
3, 8, B00010000, B00101000, B01000100, B00000000, B00000000, // <
3, 8, B00010100, B00010100, B00010100, B00000000, B00000000, // =
3, 8, B01000100, B00101000, B00010000, B00000000, B00000000, // >
4, 8, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
5, 8, B00111110, B01001001, B01010101, B01011101, B00001110, // @
4, 8, B01111110, B00010001, B00010001, B01111110, B00000000, // A
4, 8, B01111111, B01001001, B01001001, B00110110, B00000000, // B
4, 8, B00111110, B01000001, B01000001, B00100010, B00000000, // C
4, 8, B01111111, B01000001, B01000001, B00111110, B00000000, // D
4, 8, B01111111, B01001001, B01001001, B01000001, B00000000, // E
4, 8, B01111111, B00001001, B00001001, B00000001, B00000000, // F
4, 8, B00111110, B01000001, B01001001, B01111010, B00000000, // G
4, 8, B01111111, B00001000, B00001000, B01111111, B00000000, // H
3, 8, B01000001, B01111111, B01000001, B00000000, B00000000, // I
4, 8, B00110000, B01000000, B01000001, B00111111, B00000000, // J
4, 8, B01111111, B00001000, B00010100, B01100011, B00000000, // K
4, 8, B01111111, B01000000, B01000000, B01000000, B00000000, // L
5, 8, B01111111, B00000010, B00001100, B00000010, B01111111, // M
5, 8, B01111111, B00000100, B00001000, B00010000, B01111111, // N
4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // O
4, 8, B01111111, B00001001, B00001001, B00000110, B00000000, // P
4, 8, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
4, 8, B01111111, B00001001, B00001001, B01110110, B00000000, // R
4, 8, B01000110, B01001001, B01001001, B00110010, B00000000, // S
5, 8, B00000001, B00000001, B01111111, B00000001, B00000001, // T
4, 8, B00111111, B01000000, B01000000, B00111111, B00000000, // U
5, 8, B00001111, B00110000, B01000000, B00110000, B00001111, // V
5, 8, B00111111, B01000000, B00111000, B01000000, B00111111, // W
5, 8, B01100011, B00010100, B00001000, B00010100, B01100011, // X
5, 8, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
4, 8, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
2, 8, B01111111, B01000001, B00000000, B00000000, B00000000, // [
4, 8, B00000001, B00000110, B00011000, B01100000, B00000000, // \ backslash
2, 8, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
3, 8, B00000010, B00000001, B00000010, B00000000, B00000000, // hat
4, 8, B01000000, B01000000, B01000000, B01000000, B00000000, // _
2, 8, B00000001, B00000010, B00000000, B00000000, B00000000, // `
4, 8, B00100000, B01010100, B01010100, B01111000, B00000000, // a
4, 8, B01111111, B01000100, B01000100, B00111000, B00000000, // b
4, 8, B00111000, B01000100, B01000100, B00101000, B00000000, // c
4, 8, B00111000, B01000100, B01000100, B01111111, B00000000, // d
4, 8, B00111000, B01010100, B01010100, B00011000, B00000000, // e
3, 8, B00000100, B01111110, B00000101, B00000000, B00000000, // f
4, 8, B10011000, B10100100, B10100100, B01111000, B00000000, // g
4, 8, B01111111, B00000100, B00000100, B01111000, B00000000, // h
3, 8, B01000100, B01111101, B01000000, B00000000, B00000000, // i
4, 8, B01000000, B10000000, B10000100, B01111101, B00000000, // j
4, 8, B01111111, B00010000, B00101000, B01000100, B00000000, // k
3, 8, B01000001, B01111111, B01000000, B00000000, B00000000, // l
5, 8, B01111100, B00000100, B01111100, B00000100, B01111000, // m
4, 8, B01111100, B00000100, B00000100, B01111000, B00000000, // n
4, 8, B00111000, B01000100, B01000100, B00111000, B00000000, // o
4, 8, B11111100, B00100100, B00100100, B00011000, B00000000, // p
4, 8, B00011000, B00100100, B00100100, B11111100, B00000000, // q
4, 8, B01111100, B00001000, B00000100, B00000100, B00000000, // r
4, 8, B01001000, B01010100, B01010100, B00100100, B00000000, // s
3, 8, B00000100, B00111111, B01000100, B00000000, B00000000, // t
4, 8, B00111100, B01000000, B01000000, B01111100, B00000000, // u
5, 8, B00011100, B00100000, B01000000, B00100000, B00011100, // v
5, 8, B00111100, B01000000, B00111100, B01000000, B00111100, // w
5, 8, B01000100, B00101000, B00010000, B00101000, B01000100, // x
4, 8, B10011100, B10100000, B10100000, B01111100, B00000000, // y
3, 8, B01100100, B01010100, B01001100, B00000000, B00000000, // z
3, 8, B00001000, B00110110, B01000001, B00000000, B00000000, // {
1, 8, B01111111, B00000000, B00000000, B00000000, B00000000, // |
3, 8, B01000001, B00110110, B00001000, B00000000, B00000000, // }
4, 8, B00001000, B00000100, B00001000, B00000100, B00000000, // ~
};

const unsigned char numberArray[11][7] = 
{
  {4, 8, B00111110, B01000001, B01000001, B00111110, B00000000}, // 0
  {3, 8, B01000010, B01111111, B01000000, B00000000, B00000000}, // 1
  {4, 8, B01100010, B01010001, B01001001, B01000110, B00000000}, // 2
  {4, 8, B00100010, B01000001, B01001001, B00110110, B00000000}, // 3
  {4, 8, B00011000, B00010100, B00010010, B01111111, B00000000}, // 4
  {4, 8, B00100111, B01000101, B01000101, B00111001, B00000000}, // 5
  {4, 8, B00111110, B01001001, B01001001, B00110000, B00000000}, // 6
  {4, 8, B01100001, B00010001, B00001001, B00000111, B00000000}, // 7
  {4, 8, B00110110, B01001001, B01001001, B00110110, B00000000}, // 8
  {4, 8, B00000110, B01001001, B01001001, B00111110, B00000000}, // 9
  {2, 8, B01010000, B00000000, B00000000, B00000000, B00000000} // :}
};

const unsigned char space[] = {3, 8, B00000000, B00000000, B00000000, B00000000, B00000000};

const unsigned char temp[10][7]
{
 {5, 8, B00000001, B00000001, B01111111, B00000001, B00000001}, //T
 {4, 8, B00111000, B01010100, B01010100, B00011000, B00000000}, //e
 {5, 8, B01111100, B00000100, B01111100, B00000100, B01111000}, //m
 {4, 8, B11111100, B00100100, B00100100, B00011000, B00000000}, //p
 {3, 8, B00010100, B00010100, B00010100, B00000000, B00000000}, //=
 {4, 8, B00111000, B01000100, B01000100, B00111000, B00000000}, //o
 {4, 8, B00111110, B01000001, B01000001, B00100010, B00000000}  //C
};

extern MaxMatrix m; // define Library
extern DHT dht; //// Initialize DHT sensor for normal 16mhz Arduino

float temper; //Stores temperature value
char str[] = "Latmos Electronics";  // Scrolling Text

/*This function is used for printing the current hour on the screen*/
void write_on_screen(int hours,int minutes,int seconds)
{
    convert_hours(hours);
    convert_minutes(minutes);
    convert_seconds(seconds);
    
    int j = 2;
    
    if (hours < 10 ){
      
       m.writeSprite(0+j, 0, numberArray[0] );//always displays 0 on the screen  
       m.writeSprite(5+j, 0, numberArray[final_h[0]] );//2nd digit of hour
    
    }else{
       
       m.writeSprite(0+j, 0, numberArray[final_h[0]] );//1st digit of hour
       m.writeSprite(5+j, 0, numberArray[final_h[1]] );//2nd digit of hour 
    
    }
    
    m.writeSprite(10+j,-2, numberArray[10] ); // dotts
    
    if (minutes < 10){
      
      m.writeSprite(12+j,0, numberArray[0] );//1st digit of minutes
      m.writeSprite(17+j, 0, numberArray[final_m[0]] );//2nd digit of minutes
    
    }else{
 
    m.writeSprite(12+j,0, numberArray[final_m[0]] );//1st digit of minutes
    m.writeSprite(17+j, 0, numberArray[final_m[1]] );//2nd digit of minutes
    
    }
    m.writeSprite(22+j,-2, numberArray[10] );// dotts
    
    if (seconds < 10)
    {
      m.writeSprite(24+j,0, numberArray[0] );//displays the 1st digit of seconds and it is always zero in the first 10 seconds
      
      if (final_s[0] == 1){
        
         m.writeSprite(34, 0, space );
      }
      
      m.writeSprite(29+j, 0, numberArray[final_s[0]] );//2nd digit of seconds     
    
    }else{
         
          m.writeSprite(24+j,0, numberArray[final_s[0]] );//1st digit of seconds after the first 10 seconds
         
         if (final_s[0] == 1)
         {
            m.writeSprite(27+j,0, space);//fix the problem with 1
         }
         
         m.writeSprite(29+j, 0, numberArray[final_s[1]] );//2nd digit of seconds after the first 10 seconds
         
         if (final_s[1] == 1)
         {
            m.writeSprite(32+j,0, space);//fix the problem with 1
         }
   }
}

/*This function is used for printing strings on the screen*/
void printString()
{
   if (counter == 0){
     m.clear();
     m.shiftLeft(false, true);
     printStringWithShift(str, 50);  // Send scrolling Text
     m.clear();
     convert_hours(temper);
        m.writeSprite(1,0,temp[0]);
        m.writeSprite(6,0,temp[4]);
        m.writeSprite(16,0,numberArray[(int)temper]); 
     if (temper < 10){
        m.writeSprite(11, 0, numberArray[0]);
        m.writeSprite(16,0,numberArray[(int)temper]);
     }else{
        m.writeSprite(11, 0, numberArray[final_h[0]]);
        m.writeSprite(16, 0, numberArray[final_h[1]]);
     }
     m.writeSprite(21,-2,temp[5]);
     m.writeSprite(26,0,temp[6]);
     delay(3000);
     m.clear();
     }
}

// Put extracted character on Display
void printCharWithShift(char c, int shift_speed){
  if (c < 32) return;
  c -= 32;
  memcpy_P(buffer, CH + 7*c, 7);
  m.writeSprite(maxInUse*8, 0, buffer);
  m.setColumn(maxInUse*8 + buffer[0], 0);
  
  for (int i=0; i<buffer[0]+1; i++) 
  {
    delay(shift_speed);
    m.shiftLeft(false, false);
  }
}
 
// Extract characters from Scrolling text
void printStringWithShift(char* s, int shift_speed){
  while (*s != 0){
    printCharWithShift(*s, shift_speed);
    s++;
  }
}
