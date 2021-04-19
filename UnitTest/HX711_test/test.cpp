#include <iostream>
#include <wiringPi.h>
#include "hx711.h"
#include <fcntl.h>



using namespace std;
//Global variables  Measurement data and input numbers
int dnum = 0;
hx711    n_t;
 
void start(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t)
{
     dnum = n_t.hx711_two(value,value_t);
}
     

 int setup(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t)
 {
     if(wiringPiSetup()==-1)return 1;
      n_t.set_pin(value);
      n_t.init_pin(value);
      n_t.set_pin_t(value_t);
      n_t.init_pin_t(value_t);
     return 0;
 }

  void loop(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t)
{
     while(1)
     start(value,value_t);
     
 }
 
 int main(void)
 {
     struct hx711::hx711_pin value;
     struct hx711::hx711_pin value_t;
    
      if(0 == setup(&value,&value_t))
         loop(&value,&value_t);
     return 0;
}
