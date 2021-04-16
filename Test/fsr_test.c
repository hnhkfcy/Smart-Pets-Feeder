#include <stdio.h>
#include <wiringPi.h>
#include <pcf8591.h>
#define PCF 120


int main(void)
{
	int pcf_value;
	wiringPiSetup();
	pcf8591Setup (PCF, 0x48);
	
	while(1){
		pcf_value = analogRead (PCF + 0);//this is a c document,pls update
		printf("%d\n", pcf_value);
		delay(10);
	}
	
	return 0;
}

