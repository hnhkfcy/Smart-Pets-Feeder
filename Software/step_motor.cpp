#include <stdio.h>
#include <wiringPi.h>
#include <iostream>
#include <memory>

using namespace std;

class Motor
{
public:
    Motor(){
        makerobo_rolePerMinute =15;
        makerobo_stepsPerRevolution =2048;
        makerobo_stepSpeed = 0;

    }
    ~Motor(){}

public:
    void makerobo_rotary(char direction){
        if(direction =='c'){
            for(int j=0; j<4
                    ; j++){
                for(int i=0;i<4;i++)
                {
                    digitalWrite(makerobo_motorPin[i],0x99>>j & (0x08>>i));}
                delayMicroseconds(makerobo_stepSpeed);
            }
        }
        else if(direction =='a'){
            for(int j=0; j<4; j++){
                for(int i=0; i<4; i++){
                    digitalWrite(makerobo_motorPin[i],0x99<<j & (0x80>>i));}
                delayMicroseconds(makerobo_stepSpeed);
            }
        }
    }

    void makerobo_loop()
    {
        char makerobo_direction ='0';
        while(1)
        {
            printf("Makerobo select motor direction a=anticlockwise, c=clockwise: ");
            makerobo_direction=getchar();
            if (makerobo_direction == 'c')
            {
                printf("Makerobo motor running clockwise\n");
                break;
            }
            else if (makerobo_direction == 'a')
            {
                printf("Makerobo motor running anti-clockwise\n");
                break;
            }
            else
            {
                printf("Makerobo input error. please try again!\n");

            }
        }
        while(1)
        {
            makerobo_rotary(makerobo_direction);
        }
    }

public:
    const int* get_makerobo_motorPin(){
        return makerobo_motorPin;
    }

    int get_makerobo_rolePerMinute(){
        return makerobo_rolePerMinute;
    }

    int get_makerobo_stepsPerRevolution(){
        return makerobo_stepsPerRevolution;
    }

    int get_makerobo_stepSpeed(){
        return makerobo_stepSpeed;
    }

private:
    const int makerobo_motorPin[4] = {1,4,5,6};
    int makerobo_rolePerMinute;
    int makerobo_stepsPerRevolution;
    int makerobo_stepSpeed;
};


int main(void)
{
    std::unique_ptr<Motor> motor_obj = std::make_unique<Motor>();

    if(wiringPiSetup() == -1)
    {
        printf("setup wiringPi failed !");
        return 0;
    }
    for (int i=0; i<4; i++)
    {
        pinMode(motor_obj->get_makerobo_motorPin()[i], OUTPUT);
    }

    makerobo_stepSpeed = (60000000 / motor_obj->get_makerobo_rolePerMinute()) / motor_obj->get_makerobo_stepsPerRevolution();

    motor_obj->makerobo_loop();
    return 0;
}
