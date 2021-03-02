#include <stdio.h>
#include <wiringPi.h>

using namespace std;

class Point
{
	public:
	void Rotary(char direction){
		if(direction =='c'){
			for(int j=0; j<4; j++){
				for(int i=0;i<4;i++)
				{
					digitalWrite(MotorPin[i],0x99>>j & (0x08>>i));}
					delayMicroseconds(StepSpeed);
			}
		}
		else if(direction =='a'){
			for(int j=0; j<4; j++){
				for(int i=0; i<4; i++){
					digitalWrite(MotorPin[i],0x99<<j & (0x80>>i));}
					delayMicroseconds(StepSpeed);
				}
		}
	}
	void loop()
	{
		char direction ='0';
		while(1)
		{
			printf("Select motor direction a=anticlockwise, c=clockwise: ");
			direction=getchar();
			if (direction == 'c')  
			{
				printf("Motor running clockwise\n");
				break;
			}
			else if (direction == 'a')
			{
				printf("Motor running anti-clockwise\n");
				break;
			}
			else
			{
				printf("Input error. please try again!\n");
				
			}
		}
		while(1)
		{
			Point A;
			A.Rotary(direction);
		}
	}
};




int main(void)
{	
	Point M;
	const int MotorPin[] = {1,4,5,6};
	int RolePerMinute =15;
	int StepsPerRevolution =2048;
	int StepSpeed = 0;
	if(wiringPiSetup() == -1)
	{
		printf("Setup wiringPi failed !");
		return 0;
	}
	for (int i=0; i<4; i++)
	{
		pinMode(MotorPin[i], OUTPUT);
	}
	StepSpeed = (60000000 / RolePerMinute) / StepsPerRevolution;
	M.loop();
	return 0;
}
