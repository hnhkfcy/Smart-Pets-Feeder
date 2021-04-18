#include "CamThread.h"
#include <thread>
#include <iostream>
#include <chrono>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;
void CamThread::run()
{
    
    VideoCapture capture(0);
    if((fd=serialOpen("/dev/ttyAMA0",9600))<0)
    {
        printf("error");
    }
    while(1)
    {
        Mat frame;
        capture>>frame;
        imshow("dangqian shiping",frame);
        serialPuts(fd,"Hello World!\n");
        waitKey(30);
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}
