// adding all the library for p10 !
#include <SPI.h>
#include <DMD.h>
#include <TimerOne.h>
#include "SystemFont5x7.h" // displays text with 5 * 7
#include<String.h>
DMD dmd(1, 1);
// Single p10 led module
void Scan()
{ dmd.scanDisplayBySPI();
}

//-------------------------------------------------
volatile int x = 0;
volatile int y = 0;
volatile int z = 0;
String xc = "00";
String yc = "00";



// added extra
volatile int cc1 = 0;
volatile int cc2 = 0;
volatile int cc3 = 0;
volatile int cc4 = 0;
volatile int cc5 = 0;
volatile int cc6 = 0;

String c1 = "0";
String c2 = "0";
String c3 = "0";
String c4 = "0";
String c5 = "0";
String c6 = "0";
// ------------------------


void add()
{
  
  if(z==0)
      { 
        
        Serial.println(x);
        x = x + 1;
        Serial.println(x);
    if(x==5)
        {x=0;}
        if (x == 0)
        {
          xc = "00";
        }
        if (x == 1)
        {
          xc = "15";
        }
        if (x == 2)
        {
          xc = "30";
        }
        if (x == 3)
        {
          xc = "40";
        }
        if (x == 4)
        {
          xc = "ve";
        }
      }
  
     if(z==1)
     {Serial.println(y);
        y = y + 1;
        Serial.println(y);
     if(y==5)
        {y=0;}
        if (y == 0)
        {
          yc = "00";
        }
        if (y == 1)
        {
          yc = "15";
        }
        if (y == 2)
        {
          yc = "30";
        }
        if (y == 3)
        {
          yc = "40";
        }
        if (y == 4)
        {
          yc = "ve";
        }
     }
    
  // added extra 
  if(z==2)
     {Serial.println(cc1);
        cc1 = cc1 + 1;
        Serial.println(cc1);
     if(cc1==7)
        {cc1=0;}
      switch(cc1)
      {
       case 0:
      
        {
          c1 = "0";
          break;
        }
       case 1:
        {
          c1 = "1";
          break;
        }
       case 2:
        {
          c1 = "2";
          break;
        }
       case 3:
        {
          c1 = "3";
          break;
        }
      case 4:
        {
          c1 = "4";
          break;
        }
      case 5:
        {
          c1 = "5";
          break;
        }
      case 6:
        {
          c1 = "6";
          break;
        }
      }
     }
  if(z==3)
     {Serial.println(cc2);
        cc2 = cc2 + 1;
        Serial.println(cc2);
     if(cc2==7)
        {cc2=0;}
        switch(cc2)
      {
       case 0:
      
        {
          c2 = "0";
          break;
        }
       case 1:
        {
          c2 = "1";
          break;
        }
       case 2:
        {
          c2 = "2";
          break;
        }
       case 3:
        {
          c2 = "3";
          break;
        }
      case 4:
        {
          c2 = "4";
          break;
        }
      case 5:
        {
          c2 = "5";
          break;
        }
      case 6:
        {
          c2 = "6";
          break;
        }
      }
     }
  if(z==4)
     {Serial.println(cc3);
        cc3 = cc3 + 1;
        Serial.println(cc3);
     if(cc3==7)
        {cc3=0;}
         switch(cc3)
      {
       case 0:
      
        {
          c3 = "0";
          break;
        }
       case 1:
        {
          c3 = "1";
          break;
        }
       case 2:
        {
          c3 = "2";
          break;
        }
       case 3:
        {
          c3 = "3";
          break;
        }
      case 4:
        {
          c3 = "4";
          break;
        }
      case 5:
        {
          c3 = "5";
          break;
        }
      case 6:
        {
          c3 = "6";
          break;
        }
      }
     }
  if(z==5)
     {Serial.println(cc4);
        cc4 = cc4 + 1;
        Serial.println(cc2);
     if(cc4==7)
        {cc4=0;}
         switch(cc4)
      {
       case 0:
      
        {
          c4 = "0";
          break;
        }
       case 1:
        {
          c4 = "1";
          break;
        }
       case 2:
        {
          c4 = "2";
          break;
        }
       case 3:
        {
          c4 = "3";
          break;
        }
      case 4:
        {
          c4 = "4";
          break;
        }
      case 5:
        {
          c4 = "5";
          break;
        }
      case 6:
        {
          c4 = "6";
          break;
        }
      }
     }
  if(z==6)
     {Serial.println(cc5);
        cc5 = cc5 + 1;
        Serial.println(cc5);
     if(cc5==7)
        {cc5=0;}
        switch(cc5)
      {
       case 0:
      
        {
          c5 = "0";
          break;
        }
       case 1:
        {
          c5 = "1";
          break;
        }
       case 2:
        {
          c5 = "2";
          break;
        }
       case 3:
        {
          c5 = "3";
          break;
        }
      case 4:
        {
          c5 = "4";
          break;
        }
      case 5:
        {
          c5 = "5";
          break;
        }
      case 6:
        {
          c5 = "6";
          break;
        }
      }
     }
  if(z==7)
     {Serial.println(cc6);
        cc6 = cc6 + 1;
        Serial.println(cc6);
     if(cc6==7)
        {cc6=0;}
      switch(cc6)
      {
       case 0:
      
        {
          c6 = "0";
          break;
        }
       case 1:
        {
          c6 = "1";
          break;
        }
       case 2:
        {
          c6 = "2";
          break;
        }
       case 3:
        {
          c6 = "3";
          break;
        }
      case 4:
        {
          c6 = "4";
          break;
        }
      case 5:
        {
          c6 = "5";
          break;
        }
      case 6:
        {
          c6 = "6";
          break;
        }
      }
     }
  //--------------------------------------------------------------
  }
void sub()
{  z=z+1;
   if(z==8)
   {z=0;}
 
}



//----------------------------------------------
void setup()
{
  Timer1.initialize(2000);
  Timer1.attachInterrupt(Scan);
  dmd.clearScreen(true); // clears your LED screen
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), add, FALLING);
  attachInterrupt(digitalPinToInterrupt(3), sub, FALLING);
}
//-------------------------------------------------------
void loop()
{
  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  Serial.println(xc);
  Serial.println(yc);
  delay(10);
  String h = xc +c1+c2+c3;
  char charbuffer[6];
  h.toCharArray(charbuffer, 6);
  Serial.println("char");
  Serial.println(charbuffer);
  // added extra
  String p = yc + c4+c5+c6;
  //----------------------
  char charbuffer_one[7];
  p.toCharArray(charbuffer_one, 7);
  Serial.println("char");
  Serial.println(charbuffer_one);

  
  dmd.clearScreen( true );
  dmd.selectFont(SystemFont5x7);
  dmd.drawString( 1, 1, charbuffer, 6, GRAPHICS_NORMAL );
  dmd.drawString( 1, 9, charbuffer_one, 6, GRAPHICS_NORMAL );
  delay(100);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              // adding all the library for p10 !
