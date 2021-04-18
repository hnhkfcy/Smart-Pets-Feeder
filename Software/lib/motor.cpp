#include "motor.h"
#include <iostream>  //C++ Standard library
#include <wiringPi.h>    //GPIO library

using namespace std;    //Namespace Declarations

void motor::motor_init()
{

		 for(auto i:m)pinMode(i, OUTPUT);  //Initialising stepper motor pins
		}

void motor::motopa(int zf)
{
     auto di=0;
     int  jnum = 0;
     if(zf == 1)
     {
     while(1){
     for(auto j=0;j<4;++j){
          if(di==j)
               digitalWrite(m[j], 1);
          else
               digitalWrite(m[j], 0);
     }
          di++;
          if(di==4){di=0;jnum++;}    //One set of pulses sent out
          if(jnum>=128){return;}         //512/2/2 = 128 90°
          delay(2);
     }
     }
     
     if(zf == 0)
     {
          di  = 3;
          while(1){
          for(auto j=0;j<4;++j){
               if(di==j)
                    digitalWrite(m[j], 1);
               else
                    digitalWrite(m[j], 0);
          }
               di--;
               if(di==-1){di=3;jnum++;}
               if(jnum>=128){return;}
               delay(2);
          }
     }

};
