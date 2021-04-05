#include <iostream>  //C++标准库
#include <wiringPi.h>	//树莓派GPIO库
#include <fcntl.h>
#include "../lib/motor.h"
#include "../lib/hx711.h"

using namespace std;
//全局变量 测量数据和输入数字
int dnum = 0;   
int  num = 0;
motor  m_ne;
hx711    n_t;
void start(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t){

     if(num>0&&num<=4999){
     /*显示数据*/
     dnum = n_t.hx711_two(value,value_t);
     /*电机转动*/
     if(dnum >= num){
        cout<<"达到设定值!!"<<endl;
        /*电机反转*/
        m_ne.motopa(0);
        num = 0;
     }
     }else{

          /*设置重量*/
          cout<<"输入你的设定值(0~4999g),输入完成后回车:";
          cin>>num;
          /*电机正转*/
          m_ne.motopa(1);
     }
 }
 

 //初始化
 /*-----------------主体-----------------*/
 int setup(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t){
     if(wiringPiSetup()==-1)return 1;
      n_t.set_pin(value);
      n_t.init_pin(value);
      n_t.set_pin_t(value_t);
      n_t.init_pin_t(value_t);
      m_ne.motor_init();  //初始化步进电机引脚
     return 0;
 }

 //循环体
 void loop(struct hx711::hx711_pin *value,struct hx711::hx711_pin *value_t){
     while(1)
     start(value,value_t);
     
 }
//主函数 该代码结构引用 #include <fcntl.h> 头文件进行线程编程
 int main(void){
     struct hx711::hx711_pin value;
	 struct hx711::hx711_pin value_t;
	 
     if(0 == setup(&value,&value_t))
         loop(&value,&value_t);
     return 0;
}
