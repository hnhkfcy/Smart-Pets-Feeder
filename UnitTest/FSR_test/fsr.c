#include <stdio.h>
#include <wiringPi.h>
#include <pcf8591.h>
#define PCF 120

enum Control_Loop{
	STEP1,
	STEP2
};

int main(void)
{
	int pcf_value;
	wiringPiSetup();
	pcf8591Setup (PCF, 0x48);
	
	while(1){
		pcf_value = analogRead (PCF + 0);
		printf("%d\n", pcf_value);
		delay(10);
	}
	
	Control_Loop state = STEP1;
	while(true){
		if(state == STEP1){
			// function
			state = STEP2;
		}
		else if (state == STEP2){
			// function
			state = STEP1;
		}
	}
	
	
	return 0;
}

