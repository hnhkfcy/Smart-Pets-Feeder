#include <stdio.h>
#include <wiringPi.h>
#include <pcf8591.h>
#include <iostream>
#define PCF 120

using namespace std;

int main(void)
{
	int pcf_value;
	wiringPiSetup();
	pcf8591Setup (PCF, 0x48);
	
	while(1){
		pcf_value = analogRead (PCF + 0);
		cout << "PCF value: " <<pcf_value << endl;
		delay(10);
	}
	return 0;
}
