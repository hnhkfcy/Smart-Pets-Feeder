import cv2
import numpy as np

#引入库
cap = cv2.VideoCapture(0)
print(cap.isOpened())
while True:
    ret, frame = cap.read()
    cv2.imshow("Video", frame)
#读取内容
    if cv2.waitKey(10) == ord("q"):
        break