#include <iostream>  //C++标准库
#include <wiringPi.h>	//树莓派GPIO库

using namespace std;	//命名空间声明2

class motor{
	

		

	
		public:
		int  m[4]={12,13,14,6};	//步进电机四个驱动脚的接线 具体位置你对照给你发的图就好
		void motor_init(){
		 for(auto i:m)pinMode(i, OUTPUT);  //初始化步进电机引脚
		}
		//步进电机的驱动函数 如果参数是zf  输入0 和 1 分别是不同方向 ,
		//可以外加角度参数 但是此函数没加 默认转动45度
		//jum 是512为一圈
		void motopa(int zf)
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
				  if(di==4){di=0;jnum++;}    //一组脉冲发完
				  if(jnum>=64){return;}		 //512/2/2/2 = 64 45度
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
					   if(jnum>=64){return;}
					   delay(2);
				  }
			 }
		}
		
};
