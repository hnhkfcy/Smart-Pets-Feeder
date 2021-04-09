#include <iostream>
#include <wiringPi.h>
#include <fcntl.h>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <thread>
#include "motor.h"
#include "hx711.h"
#include "CamThread.h"
#include "CppThread.h"



using namespace std;
//Global variables  Measurement data and input numbers
int dnum = 0;   
int  num = 0;
motor  m_ne;
hx711    n_t;
void start(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t){

     if(num>0&&num<=4999){
     /*Show data*/
     dnum = n_t.hx711_two(value,value_t);
     /*Motor rotation*/
     if(dnum >= num){
        cout<<"Setpoint reached!!"<<endl;
        /*Motor reversal*/
        m_ne.motopa(0);
        num = 0;
     }
     }else{

          /*Setting weight*/
          cout<<"Enter your feeding amount (0~4999g), enter when finished:";
          cin>>num;
          /*Motor forward*/
          m_ne.motopa(1);
     }
 }
 

 //Initialization
 /*-----------------Main Body-----------------*/
 int setup(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t){
     if(wiringPiSetup()==-1)return 1;
      n_t.set_pin(value);
      n_t.init_pin(value);
      n_t.set_pin_t(value_t);
      n_t.init_pin_t(value_t);
      m_ne.motor_init();  //Initialising motor pins
     return 0;
 }

 //Loop
 void loop(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t){
     while(1)
     start(value,value_t);
     
 }
//Main Functionn  References the #include <fcntl.h> header file for threaded programming
 int main(void){
     struct hx711::hx711_pin value;
	 struct hx711::hx711_pin value_t;
	 
    CamThread camThread1; 
    camThread1.start();
     
     if(0 == setup(&value,&value_t))
         loop(&value,&value_t);
     return 0;
     
     camThread1.join();
}
