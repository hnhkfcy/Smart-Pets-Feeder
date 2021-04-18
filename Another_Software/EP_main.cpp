//
// Created by jianzhao on 2021/3/25.
//
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

int main(void)
{
    std::unique_ptr<Motor> motor_obj = std::make_unique<Motor>(); //  zj_创建
    Motor* motor_obj1 = new Motor(); //指针   zj_赋值

    wiringPiSetup();
    pcf8591Setup (PCF, 0x48);

    CamThread cam1; //加个值
    cam1.start();
    //cam1.join();

    if(wiringPiSetup() == -1)
    {
        cout<<"setup wiringPi failed !"<<endl;
        return 0;
    }
    for (int i=0; i<4; i++)
    {
        pinMode(motor_obj->get_makerobo_motorPin()[i], OUTPUT);
    }

    int makerobo_stepSpeed = (60000000 / motor_obj->get_makerobo_rolePerMinute()) / motor_obj->get_makerobo_stepsPerRevolution();
    motor_obj->set_makerobo_stepSpeed(makerobo_stepSpeed);

    motor_obj->makerobo_loop();
    //cam1.join();
    return 0;
}

