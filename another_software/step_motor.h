
#include <stdio.h>
#include <wiringPi.h>
#include <iostream>
#include <memory>


class Motor
{
public:
    Motor();
    ~Motor();

public:
    void makerobo_rotary(char direction);

    void makerobo_rotary(int pcf_value);

    void makerobo_loop();

public:
    const int* get_makerobo_motorPin();
    int get_makerobo_rolePerMinute();

    int get_makerobo_stepsPerRevolution();

    int get_makerobo_stepSpeed();
    
    void set_makerobo_stepSpeed(int value);

private:
    const int makerobo_motorPin[4] = {1,4,5,6};
    int makerobo_rolePerMinute;
    int makerobo_stepsPerRevolution;
    int makerobo_stepSpeed;
};
