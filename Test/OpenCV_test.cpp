#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main()
{
    VideoCapture cap(1);//1：调用usb摄像头，0:调用树莓派自带摄像头
    if(!cap.isOpened())
    {
       cout<<"can't open this camera"<<endl;
       return -1;
         }
         Mat frame,edges;
         while(1)
         {
         cap>>frame;
         cvtColor(frame,frame,COLOR_BGR2GRAY);//转化为灰度图
         blur(frame,frame,Size(7,7));//图像模糊去燥
         Canny(frame,edges,3,9,3);//检测轮廓
         imshow("Camera Capture",edges);
         if(waitKey(20)>=0)break;
         }
    return 0;
}

