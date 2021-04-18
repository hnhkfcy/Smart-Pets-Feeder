#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

string writePath = "/home/pi/";

int main()

{
        int key;
	int i=0;
	char pName[100];
	string name;
	VideoCapture cap(0);//1：调用usb摄像头，0:调用树莓派自带摄像头
	if(!cap.isOpened())
	{
	   cout<<"can't open this camera"<<endl;
	   return -1;
         }	
         Mat frame,edges;
         while(1)
         {
         cap>>frame;
	 string pName = format("/home/pi/%d.jpg",i);
	 if(waitKey(20) == 32){
	 //name = writePath + to_string(i)+".jpg";
	 //sprintf(pName, "photo/%d.jpg", i);
	 imwrite(pName, frame);
	 cout<< "1111" << endl;
	 i++;
	 }
	 if (waitKey(10) == 97){
	    break;
	 }
         imshow("hello_Camera",frame);
         waitKey(10);
         }
	return 0;
}
