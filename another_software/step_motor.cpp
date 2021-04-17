#include <stdio.h>
#include <wiringPi.h>
#include <iostream>
#include <memory>
#include "step_motor.h"
#include <pcf8591.h>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "CamThread.h"
#define PCF 120

using namespace std;
using namespace cv;

Motor::Motor(){
    makerobo_rolePerMinute =15;
    makerobo_stepsPerRevolution =2048;
    makerobo_stepSpeed = 0;
}

Motor::~Motor(){
    
}

void Motor::makerobo_rotary(int pcf_value){
    if(pcf_value < 15){
        for(int j=0; j<4; j++){
            for(int i=0;i<4;i++)
            {
                digitalWrite(makerobo_motorPin[i],0x99>>j & (0x08>>i));}
            delayMicroseconds(makerobo_stepSpeed);
        }
    }
    else if(pcf_value > 100){
        for(int j=0; j<4; j++){
            for(int i=0; i<4; i++){
                digitalWrite(makerobo_motorPin[i],0x99<<j & (0x80>>i));}
            delayMicroseconds(makerobo_stepSpeed);
        }
    }
}

void Motor::makerobo_loop()
{
    int pcf_value;
    while(1)
    {

        pcf_value = analogRead (PCF + 0);
        cout << "PCF value: " << pcf_value << endl;
        makerobo_rotary(pcf_value);
    }
}

const int* Motor::get_makerobo_motorPin(){
        return makerobo_motorPin;
    }

int Motor::get_makerobo_rolePerMinute(){
    return makerobo_rolePerMinute; //这边四个都是私有的函数
}

int Motor::get_makerobo_stepsPerRevolution(){
    return makerobo_stepsPerRevolution;
}

int Motor::get_makerobo_stepSpeed(){
    return makerobo_stepSpeed;
}

void Motor::set_makerobo_stepSpeed(int value){
    makerobo_stepSpeed = value;
}
