import numpy as np
def rotary_matrix(n,m):
    array=np.zeros((n,m))
    #起始点
    x=y=0
    ret=array[x][y]=1
    #设置一个变量i用来在循环中判断是否需要旋转矩阵
    i = 0
    while ret < n*m:
        #从上边一行开始由左到右添加元素
        while y<m-1-i:
            y+=1
            ret+=1
            array[x][y]=ret
            
        #若ret等于最后一个元素的值，则表示所有元素添加完毕，这时候可以退出循环
        if ret == n * m:
            break
            
        # 从右边一列开始由上到下添加元素
        while x<n-1-i:
            x+=1
            ret+=1
            array[x][y] = ret
        # 从下边一行开始由右到左添加元素
        while y>0+i:
            y-=1
            ret+=1
            array[x][y]=ret
        # 从左边一列开始由下到上添加元素
        while x>0+1+i:
            x-=1
            ret+=1
            array[x][y] = ret
            
        i+=1
    print(array)