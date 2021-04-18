#include "hx711.h"
#include <iostream>
#include <wiringPi.h>

using namespace std;    //Namespace declaration

    
    void hx711::set_pin(struct hx711_pin *value){  //One weighing data definitions
     value->SCK             = 2;
     value->SDA             = 3;
     value->EN            = 1;
     value->coefficient    = 415;
 }
 
 void hx711::init_pin(struct hx711_pin *value){   //Initialize pins
     pinMode(value->SCK,OUTPUT);
     pinMode(value->SDA,INPUT);
     pullUpDnControl(value->SDA,PUD_UP);  //Setting the input mode
 }
 
  void hx711::set_pin_t(struct hx711_pin *value_t){ //One weighing data definitions
     value_t->SCK             = 5;
     value_t->SDA             = 4;
     value_t->EN            = 1;
     value_t->coefficient    = 415;
 }
 
 void hx711::init_pin_t(struct hx711_pin *value_t){   //Initialize pins
     pinMode(value_t->SCK,OUTPUT);
     pinMode(value_t->SDA,INPUT);
     pullUpDnControl(value_t->SDA,PUD_UP);
 }
 //Data measurement and display
int hx711::hx711_two(struct hx711_pin *value,struct hx711_pin *value_t)
{
     int i;int t;
     digitalWrite(value->SCK,LOW);        //Enable AD
     while(digitalRead(value->SCK));
     value->value = 0;                    //Numerical values
     while(digitalRead(value->SDA));       //Wait if AD conversion is not completed.
     delay(100);
     for(i=0;i<24;i++){
         digitalWrite(value->SCK,HIGH);
         while(0 == digitalRead(value->SCK))delay(1000);
         value->value = value->value*2;
         digitalWrite(value->SCK,LOW);
         while(digitalRead(value->SCK));
         if(digitalRead(value->SDA))
             value->value = value->value + 1;
     }
     digitalWrite(value->SCK,HIGH);
     digitalWrite(value->SCK,LOW);
     if((value->EN == 1)&&(value->value<25000)){
         value->EN = 0;
         value->calibration = value->value;
     }else {
         i = (value->value-value->calibration+50)/value->coefficient;
     }
     if(i<5000)value->weight = i;
     printf("Food barrels：%d g  ",value->weight);
     
     digitalWrite(value_t->SCK,LOW);        //Enable AD
     while(digitalRead(value_t->SCK));
     value_t->value_t = 0;                    //Numerical values
     while(digitalRead(value_t->SDA));     //Wait if AD conversion is not completed.
     delay(100);
     for(t=0;t<24;t++){
         digitalWrite(value_t->SCK,HIGH);
         while(0 == digitalRead(value_t->SCK))delay(1000);
         value_t->value_t = value_t->value_t*2;
         digitalWrite(value_t->SCK,LOW);
         while(digitalRead(value_t->SCK));
         if(digitalRead(value_t->SDA))
             value_t->value_t = value_t->value_t + 1;
     }
     digitalWrite(value_t->SCK,HIGH);
     digitalWrite(value_t->SCK,LOW);
     if((value_t->EN == 1)&&(value_t->value_t<25000)){
         value_t->EN = 0;
         value_t->calibration = value_t->value_t;
     }else {
         t = (value_t->value_t-value_t->calibration+50)/value_t->coefficient;
     }
     if(t<5000)value_t->weight = t;
     printf("Food bowls：%d g\n",value_t->weight);
     
     return value_t->weight;
     
}


