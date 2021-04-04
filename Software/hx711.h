#include <iostream>  //C++标准库
#include <wiringPi.h>	//树莓派GPIO库

using namespace std;	//命名空间声明2
class hx711{
	public:
	
	struct hx711_pin{
     int SCK;			//时钟线
      int SDA;			//数据线
     int EN;                        //校准使能
     int calibration;            //校准
     int coefficient;            //比例系数
     int weight;                    //重量
    unsigned long value;        //记录数值
	unsigned long value_t;        //记录数值
 };
	
	void set_pin(struct hx711_pin *value){  //其中一个称重的数据定义
     value->SCK             = 2;		//引脚
     value->SDA             = 3;		//引脚
     value->EN            = 1;
     value->coefficient    = 415;
 }
 
 void init_pin(struct hx711_pin *value){   //初始化引脚
     pinMode(value->SCK,OUTPUT);	//输出s
     pinMode(value->SDA,INPUT);		//输入
     pullUpDnControl(value->SDA,PUD_UP);  //设置输入模式
 }
 
  void set_pin_t(struct hx711_pin *value_t){ //其中一个称重的数据定义
     value_t->SCK             = 5;		//引脚
     value_t->SDA             = 4;		//引脚
     value_t->EN            = 1;
     value_t->coefficient    = 415;
 }  
 
 void init_pin_t(struct hx711_pin *value_t){   //同理
     pinMode(value_t->SCK,OUTPUT);
     pinMode(value_t->SDA,INPUT);
     pullUpDnControl(value_t->SDA,PUD_UP);
 }
 //数据测量和显示 具体细节你看芯片数据手册的一些协议
int hx711_two(struct hx711_pin *value,struct hx711_pin *value_t) 
{
     int i;int t;
     digitalWrite(value->SCK,LOW);        //使能AD
     while(digitalRead(value->SCK));
     value->value = 0;                    //数值
     while(digitalRead(value->SDA));        //AD转换未结束则等待。
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
     printf("1号重量：%d g  ",value->weight);
	 
	 digitalWrite(value_t->SCK,LOW);        //使能AD
     while(digitalRead(value_t->SCK));
     value_t->value_t = 0;                    //数值
     while(digitalRead(value_t->SDA));        //AD转换未结束则等待。
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
     printf("2号重量：%d g\n",value_t->weight);
     
     return value_t->weight;
     
}

	private:
	
};
